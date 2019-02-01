/*
 * Copyright (c) 2018-2019, Arm Limited. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 *
 */

/*********** WARNING: This is an auto-generated file. Do not edit! ***********/

#ifndef __TFM_VENEERS_H__
#define __TFM_VENEERS_H__

#include "tfm_api.h"

#ifdef __cplusplus
extern "C" {
#endif

/******** TFM_SP_STORAGE ********/
psa_status_t tfm_sst_am_create_veneer(struct psa_invec *in_vec, size_t in_len, struct psa_outvec *out_vec, size_t out_len);
psa_status_t tfm_sst_am_get_info_veneer(struct psa_invec *in_vec, size_t in_len, struct psa_outvec *out_vec, size_t out_len);
psa_status_t tfm_sst_am_get_attributes_veneer(struct psa_invec *in_vec, size_t in_len, struct psa_outvec *out_vec, size_t out_len);
psa_status_t tfm_sst_am_set_attributes_veneer(struct psa_invec *in_vec, size_t in_len, struct psa_outvec *out_vec, size_t out_len);
psa_status_t tfm_sst_am_read_veneer(struct psa_invec *in_vec, size_t in_len, struct psa_outvec *out_vec, size_t out_len);
psa_status_t tfm_sst_am_write_veneer(struct psa_invec *in_vec, size_t in_len, struct psa_outvec *out_vec, size_t out_len);
psa_status_t tfm_sst_am_delete_veneer(struct psa_invec *in_vec, size_t in_len, struct psa_outvec *out_vec, size_t out_len);

/******** TFM_SP_AUDIT_LOG ********/
psa_status_t tfm_audit_core_retrieve_record_veneer(struct psa_invec *in_vec, size_t in_len, struct psa_outvec *out_vec, size_t out_len);
psa_status_t tfm_audit_core_add_record_veneer(struct psa_invec *in_vec, size_t in_len, struct psa_outvec *out_vec, size_t out_len);
psa_status_t tfm_audit_core_get_info_veneer(struct psa_invec *in_vec, size_t in_len, struct psa_outvec *out_vec, size_t out_len);
psa_status_t tfm_audit_core_get_record_info_veneer(struct psa_invec *in_vec, size_t in_len, struct psa_outvec *out_vec, size_t out_len);
psa_status_t tfm_audit_core_delete_record_veneer(struct psa_invec *in_vec, size_t in_len, struct psa_outvec *out_vec, size_t out_len);

/******** TFM_SP_CRYPTO ********/
psa_status_t tfm_tfm_crypto_import_key_veneer(struct psa_invec *in_vec, size_t in_len, struct psa_outvec *out_vec, size_t out_len);
psa_status_t tfm_tfm_crypto_destroy_key_veneer(struct psa_invec *in_vec, size_t in_len, struct psa_outvec *out_vec, size_t out_len);
psa_status_t tfm_tfm_crypto_get_key_information_veneer(struct psa_invec *in_vec, size_t in_len, struct psa_outvec *out_vec, size_t out_len);
psa_status_t tfm_tfm_crypto_export_key_veneer(struct psa_invec *in_vec, size_t in_len, struct psa_outvec *out_vec, size_t out_len);
psa_status_t tfm_tfm_crypto_encrypt_set_iv_veneer(struct psa_invec *in_vec, size_t in_len, struct psa_outvec *out_vec, size_t out_len);
psa_status_t tfm_tfm_crypto_encrypt_setup_veneer(struct psa_invec *in_vec, size_t in_len, struct psa_outvec *out_vec, size_t out_len);
psa_status_t tfm_tfm_crypto_decrypt_setup_veneer(struct psa_invec *in_vec, size_t in_len, struct psa_outvec *out_vec, size_t out_len);
psa_status_t tfm_tfm_crypto_cipher_update_wrapper_veneer(struct psa_invec *in_vec, size_t in_len, struct psa_outvec *out_vec, size_t out_len);
psa_status_t tfm_tfm_crypto_cipher_abort_veneer(struct psa_invec *in_vec, size_t in_len, struct psa_outvec *out_vec, size_t out_len);
psa_status_t tfm_tfm_crypto_cipher_finish_veneer(struct psa_invec *in_vec, size_t in_len, struct psa_outvec *out_vec, size_t out_len);
psa_status_t tfm_tfm_crypto_hash_start_veneer(struct psa_invec *in_vec, size_t in_len, struct psa_outvec *out_vec, size_t out_len);
psa_status_t tfm_tfm_crypto_hash_update_veneer(struct psa_invec *in_vec, size_t in_len, struct psa_outvec *out_vec, size_t out_len);
psa_status_t tfm_tfm_crypto_hash_finish_veneer(struct psa_invec *in_vec, size_t in_len, struct psa_outvec *out_vec, size_t out_len);
psa_status_t tfm_tfm_crypto_hash_verify_veneer(struct psa_invec *in_vec, size_t in_len, struct psa_outvec *out_vec, size_t out_len);
psa_status_t tfm_tfm_crypto_hash_abort_veneer(struct psa_invec *in_vec, size_t in_len, struct psa_outvec *out_vec, size_t out_len);

/******** TFM_SP_PLATFORM ********/
psa_status_t tfm_platform_sp_system_reset_veneer(struct psa_invec *in_vec, size_t in_len, struct psa_outvec *out_vec, size_t out_len);

/******** TFM_SP_INITIAL_ATTESTATION ********/
psa_status_t tfm_initial_attest_get_token_veneer(struct psa_invec *in_vec, size_t in_len, struct psa_outvec *out_vec, size_t out_len);

#ifdef TFM_PARTITION_TEST_CORE
/******** TFM_SP_CORE_TEST ********/
psa_status_t tfm_spm_core_test_sfn_veneer(struct psa_invec *in_vec, size_t in_len, struct psa_outvec *out_vec, size_t out_len);
psa_status_t tfm_spm_core_test_sfn_init_success_veneer(struct psa_invec *in_vec, size_t in_len, struct psa_outvec *out_vec, size_t out_len);
psa_status_t tfm_spm_core_test_sfn_direct_recursion_veneer(struct psa_invec *in_vec, size_t in_len, struct psa_outvec *out_vec, size_t out_len);
#endif /* TFM_PARTITION_TEST_CORE */

#ifdef TFM_PARTITION_TEST_CORE
/******** TFM_SP_CORE_TEST_2 ********/
psa_status_t tfm_spm_core_test_2_slave_service_veneer(struct psa_invec *in_vec, size_t in_len, struct psa_outvec *out_vec, size_t out_len);
psa_status_t tfm_spm_core_test_2_sfn_invert_veneer(struct psa_invec *in_vec, size_t in_len, struct psa_outvec *out_vec, size_t out_len);
psa_status_t tfm_spm_core_test_2_check_caller_client_id_veneer(struct psa_invec *in_vec, size_t in_len, struct psa_outvec *out_vec, size_t out_len);
psa_status_t tfm_spm_core_test_2_get_every_second_byte_veneer(struct psa_invec *in_vec, size_t in_len, struct psa_outvec *out_vec, size_t out_len);
#endif /* TFM_PARTITION_TEST_CORE */

#ifdef TFM_PARTITION_TEST_SST
/******** TFM_SP_SST_TEST_PARTITION ********/
psa_status_t tfm_sst_test_service_sfn_setup_veneer(struct psa_invec *in_vec, size_t in_len, struct psa_outvec *out_vec, size_t out_len);
psa_status_t tfm_sst_test_service_sfn_dummy_encrypt_veneer(struct psa_invec *in_vec, size_t in_len, struct psa_outvec *out_vec, size_t out_len);
psa_status_t tfm_sst_test_service_sfn_dummy_decrypt_veneer(struct psa_invec *in_vec, size_t in_len, struct psa_outvec *out_vec, size_t out_len);
psa_status_t tfm_sst_test_service_sfn_clean_veneer(struct psa_invec *in_vec, size_t in_len, struct psa_outvec *out_vec, size_t out_len);
#endif /* TFM_PARTITION_TEST_SST */

#ifdef TFM_PARTITION_TEST_SECURE_SERVICES
/******** TFM_SP_SECURE_TEST_PARTITION ********/
psa_status_t tfm_tfm_secure_client_service_sfn_run_tests_veneer(struct psa_invec *in_vec, size_t in_len, struct psa_outvec *out_vec, size_t out_len);
#endif /* TFM_PARTITION_TEST_SECURE_SERVICES */

#ifdef __cplusplus
}
#endif

#endif /* __TFM_VENEERS_H__ */