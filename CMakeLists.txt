#-------------------------------------------------------------------------------
# Copyright (c) 2017-2020, Arm Limited. All rights reserved.
#
# SPDX-License-Identifier: BSD-3-Clause
#
#-------------------------------------------------------------------------------

cmake_minimum_required(VERSION 3.7)

list(APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/cmake)
include("Common/BuildSys")

if(NOT DEFINED NS_APP)
    set(NS_APP True)
endif()
if(NOT DEFINED SECURE_FW)
    set(SECURE_FW True)
endif()

if (SECURE_FW)
    add_subdirectory(secure_fw)
endif()
if (NS_APP)
    add_subdirectory(app)
endif()
if (BL2)
    add_subdirectory(bl2/ext/mcuboot)
endif()

#Define a top-level generic tfm project
project(tfm LANGUAGES)
