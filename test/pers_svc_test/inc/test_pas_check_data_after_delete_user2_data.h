/*********************************************************************************************************************
*
* Copyright (C) 2012 Continental Automotive Systems, Inc.
*
* Author: Petrica.Manoila@continental-corporation.com
*
* Implementation of backup process
*
* This Source Code Form is subject to the terms of the Mozilla Public
* License, v. 2.0. If a copy of the MPL was not distributed with this
* file, You can obtain one at http://mozilla.org/MPL/2.0/.
*
* Date       Author             Reason
* 2012.11.27 uidu0250           CSP_WZ#1280:  Initial version
*
**********************************************************************************************************************/

#ifndef SSW_TEST_PAS_CHECK_DATA_AFTER_DELETE_USER2_DATA_H
#define SSW_TEST_PAS_CHECK_DATA_AFTER_DELETE_USER2_DATA_H


#ifdef __cplusplus
extern "C"
{
#endif  /* #ifdef __cplusplus */

#include "persComTypes.h"
#include "test_PAS.h"

extern expected_key_data_localDB_s expectedKeyData_shared_public_localDB_AfterDeleteUser2Data[80] ;
extern expected_file_data_s expectedFileData_shared_public_AfterDeleteUser2Data[50] ;

bool_t Test_DataAfterDeleteUser2Data(int ceva, void* pAltceva) ;

#ifdef __cplusplus
}
#endif /* extern "C" { */

#endif /*SSW_TEST_PAS_CHECK_DATA_AFTER_DELETE_USER2_DATA_H */