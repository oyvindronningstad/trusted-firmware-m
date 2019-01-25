/*
 * Copyright (c) 2018-2019, Arm Limited. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 *
 */

#include "psa_protected_storage.h"
#include "tfm_sst_defs.h"
#include "tfm_veneers.h"

#define IOVEC_LEN(x) (sizeof(x)/sizeof(x[0]))

__attribute__((section("SFN")))
psa_ps_status_t psa_ps_set(psa_ps_uid_t uid,
                           uint32_t data_length,
                           const void *p_data,
                           psa_ps_create_flags_t create_flags)
{
    psa_status_t status;
    enum tfm_sst_err_t err;

    psa_invec in_vec[] = {
        { .base = &uid,   .len = sizeof(uid) },
        { .base = p_data, .len = data_length },
        { .base = &create_flags, .len = sizeof(create_flags) }
    };

    psa_outvec out_vec[] = {
        { .base = &err , .len = sizeof(err) }
    };

    status = tfm_tfm_sst_set_req_veneer(in_vec, IOVEC_LEN(in_vec),
                                        out_vec, IOVEC_LEN(out_vec));
    if (status != PSA_SUCCESS) {
        return PSA_PS_ERROR_OPERATION_FAILED;
    }

    return TFM_SST_PSA_RETURN(err);
}

__attribute__((section("SFN")))
psa_ps_status_t psa_ps_get(psa_ps_uid_t uid,
                           uint32_t data_offset,
                           uint32_t data_length,
                           void *p_data)
{
    psa_status_t status;
    enum tfm_sst_err_t err;

    psa_invec in_vec[] = {
        { .base = &uid, .len = sizeof(uid) },
        { .base = &data_offset, .len = sizeof(data_offset) }
    };

    psa_outvec out_vec[] = {
        { .base = &err,   .len = sizeof(err) },
        { .base = p_data, .len = data_length }
    };

    status = tfm_tfm_sst_get_req_veneer(in_vec, IOVEC_LEN(in_vec),
                                        out_vec, IOVEC_LEN(out_vec));
    if (status != PSA_SUCCESS) {
        return PSA_PS_ERROR_OPERATION_FAILED;
    }

    return TFM_SST_PSA_RETURN(err);
}

__attribute__((section("SFN")))
psa_ps_status_t psa_ps_get_info(psa_ps_uid_t uid, struct psa_ps_info_t *p_info)
{
    psa_status_t status;
    enum tfm_sst_err_t err;

    psa_invec in_vec[] = {
        { .base = &uid, .len = sizeof(uid) }
    };

    psa_outvec out_vec[] = {
        { .base = &err,   .len = sizeof(err) },
        { .base = p_info, .len = sizeof(*p_info) }
    };

    status = tfm_tfm_sst_get_info_req_veneer(in_vec, IOVEC_LEN(in_vec),
                                             out_vec, IOVEC_LEN(out_vec));

    if (status != PSA_SUCCESS) {
        return PSA_PS_ERROR_OPERATION_FAILED;
    }

    return TFM_SST_PSA_RETURN(err);
}

__attribute__((section("SFN")))
psa_ps_status_t psa_ps_remove(psa_ps_uid_t uid)
{
    psa_status_t status;
    enum tfm_sst_err_t err;

    psa_invec in_vec[] = {
        { .base = &uid, .len = sizeof(uid) }
    };

    psa_outvec out_vec[] = {
        { .base = &err, .len = sizeof(err) }
    };

    status = tfm_tfm_sst_remove_req_veneer(in_vec, IOVEC_LEN(in_vec),
                                           out_vec, IOVEC_LEN(out_vec));

    if (status != PSA_SUCCESS) {
        return PSA_PS_ERROR_OPERATION_FAILED;
    }

    return TFM_SST_PSA_RETURN(err);
}

__attribute__((section("SFN")))
psa_ps_status_t psa_ps_create(psa_ps_uid_t uid, uint32_t size,
                              psa_ps_create_flags_t create_flags)
{
    (void)uid, (void)size, (void)create_flags;
    return PSA_PS_ERROR_NOT_SUPPORTED;
}

__attribute__((section("SFN")))
psa_ps_status_t psa_ps_set_extended(psa_ps_uid_t uid, uint32_t data_offset,
                                    uint32_t data_length, const void *p_data)
{
    (void)uid, (void)data_offset, (void)data_length, (void)p_data;
    return PSA_PS_ERROR_NOT_SUPPORTED;
}

__attribute__((section("SFN")))
uint32_t psa_ps_get_support(void)
{
    /* Initialise support_flags to a sensible default, to avoid returning an
     * uninitialised value in case the secure function fails.
     */
    uint32_t support_flags = 0;

    psa_outvec out_vec[] = {
        { .base = &support_flags, .len = sizeof(support_flags) }
    };

    /* The PSA API does not return an error, so any error from TF-M is
     * ignored.
     */
    (void)tfm_tfm_sst_get_support_req_veneer(NULL, 0,
                                             out_vec, IOVEC_LEN(out_vec));

    return support_flags;
}
