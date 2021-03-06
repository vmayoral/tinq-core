/*
 * Copyright (c) 2014 - Qeo LLC
 *
 * The source code form of this Qeo Open Source Project component is subject
 * to the terms of the Clear BSD license.
 *
 * You can redistribute it and/or modify it under the terms of the Clear BSD
 * License (http://directory.fsf.org/wiki/License:ClearBSD). See LICENSE file
 * for more details.
 *
 * The Qeo Open Source Project also includes third party Open Source Software.
 * See LICENSE file for more details.
 */

/* AUTOGENERATED FILE. DO NOT EDIT. */
#ifndef _MOCKPOLICY_H
#define _MOCKPOLICY_H

#include "unity.h"
#include "policy.h"

void Mockpolicy_Init(void);
void Mockpolicy_Destroy(void);
void Mockpolicy_Verify(void);




#define qeo_security_policy_init_IgnoreAndReturn(cmock_retval) qeo_security_policy_init_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void qeo_security_policy_init_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, qeo_retcode_t cmock_to_return);
#define qeo_security_policy_init_ExpectAndReturn(cmock_retval) qeo_security_policy_init_CMockExpectAndReturn(__LINE__, cmock_retval)
void qeo_security_policy_init_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, qeo_retcode_t cmock_to_return);
typedef qeo_retcode_t (* CMOCK_qeo_security_policy_init_CALLBACK)(int cmock_num_calls);
void qeo_security_policy_init_StubWithCallback(CMOCK_qeo_security_policy_init_CALLBACK Callback);
#define qeo_security_policy_destroy_IgnoreAndReturn(cmock_retval) qeo_security_policy_destroy_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void qeo_security_policy_destroy_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, qeo_retcode_t cmock_to_return);
#define qeo_security_policy_destroy_ExpectAndReturn(cmock_retval) qeo_security_policy_destroy_CMockExpectAndReturn(__LINE__, cmock_retval)
void qeo_security_policy_destroy_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, qeo_retcode_t cmock_to_return);
typedef qeo_retcode_t (* CMOCK_qeo_security_policy_destroy_CALLBACK)(int cmock_num_calls);
void qeo_security_policy_destroy_StubWithCallback(CMOCK_qeo_security_policy_destroy_CALLBACK Callback);
#define qeo_security_policy_construct_IgnoreAndReturn(cmock_retval) qeo_security_policy_construct_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void qeo_security_policy_construct_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, qeo_retcode_t cmock_to_return);
#define qeo_security_policy_construct_ExpectAndReturn(cfg, qeoSecPol, cmock_retval) qeo_security_policy_construct_CMockExpectAndReturn(__LINE__, cfg, qeoSecPol, cmock_retval)
void qeo_security_policy_construct_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, const qeo_security_policy_config* cfg, qeo_security_policy_hndl* qeoSecPol, qeo_retcode_t cmock_to_return);
typedef qeo_retcode_t (* CMOCK_qeo_security_policy_construct_CALLBACK)(const qeo_security_policy_config* cfg, qeo_security_policy_hndl* qeoSecPol, int cmock_num_calls);
void qeo_security_policy_construct_StubWithCallback(CMOCK_qeo_security_policy_construct_CALLBACK Callback);
#define qeo_security_policy_get_config_IgnoreAndReturn(cmock_retval) qeo_security_policy_get_config_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void qeo_security_policy_get_config_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, qeo_retcode_t cmock_to_return);
#define qeo_security_policy_get_config_ExpectAndReturn(qeoSecPol, cfg, cmock_retval) qeo_security_policy_get_config_CMockExpectAndReturn(__LINE__, qeoSecPol, cfg, cmock_retval)
void qeo_security_policy_get_config_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, qeo_security_policy_hndl qeoSecPol, qeo_security_policy_config* cfg, qeo_retcode_t cmock_to_return);
typedef qeo_retcode_t (* CMOCK_qeo_security_policy_get_config_CALLBACK)(qeo_security_policy_hndl qeoSecPol, qeo_security_policy_config* cfg, int cmock_num_calls);
void qeo_security_policy_get_config_StubWithCallback(CMOCK_qeo_security_policy_get_config_CALLBACK Callback);
#define qeo_security_policy_get_sequence_number_IgnoreAndReturn(cmock_retval) qeo_security_policy_get_sequence_number_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void qeo_security_policy_get_sequence_number_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, qeo_retcode_t cmock_to_return);
#define qeo_security_policy_get_sequence_number_ExpectAndReturn(qeoSecPol, sequence_number, cmock_retval) qeo_security_policy_get_sequence_number_CMockExpectAndReturn(__LINE__, qeoSecPol, sequence_number, cmock_retval)
void qeo_security_policy_get_sequence_number_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, qeo_security_policy_hndl qeoSecPol, uint64_t* sequence_number, qeo_retcode_t cmock_to_return);
typedef qeo_retcode_t (* CMOCK_qeo_security_policy_get_sequence_number_CALLBACK)(qeo_security_policy_hndl qeoSecPol, uint64_t* sequence_number, int cmock_num_calls);
void qeo_security_policy_get_sequence_number_StubWithCallback(CMOCK_qeo_security_policy_get_sequence_number_CALLBACK Callback);
#define qeo_security_policy_destruct_IgnoreAndReturn(cmock_retval) qeo_security_policy_destruct_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void qeo_security_policy_destruct_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, qeo_retcode_t cmock_to_return);
#define qeo_security_policy_destruct_ExpectAndReturn(qeoSecPol, cmock_retval) qeo_security_policy_destruct_CMockExpectAndReturn(__LINE__, qeoSecPol, cmock_retval)
void qeo_security_policy_destruct_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, qeo_security_policy_hndl* qeoSecPol, qeo_retcode_t cmock_to_return);
typedef qeo_retcode_t (* CMOCK_qeo_security_policy_destruct_CALLBACK)(qeo_security_policy_hndl* qeoSecPol, int cmock_num_calls);
void qeo_security_policy_destruct_StubWithCallback(CMOCK_qeo_security_policy_destruct_CALLBACK Callback);
#define qeo_security_policy_start_redistribution_IgnoreAndReturn(cmock_retval) qeo_security_policy_start_redistribution_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void qeo_security_policy_start_redistribution_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, qeo_retcode_t cmock_to_return);
#define qeo_security_policy_start_redistribution_ExpectAndReturn(qeoSecPol, cmock_retval) qeo_security_policy_start_redistribution_CMockExpectAndReturn(__LINE__, qeoSecPol, cmock_retval)
void qeo_security_policy_start_redistribution_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, qeo_security_policy_hndl qeoSecPol, qeo_retcode_t cmock_to_return);
typedef qeo_retcode_t (* CMOCK_qeo_security_policy_start_redistribution_CALLBACK)(qeo_security_policy_hndl qeoSecPol, int cmock_num_calls);
void qeo_security_policy_start_redistribution_StubWithCallback(CMOCK_qeo_security_policy_start_redistribution_CALLBACK Callback);
#define qeo_security_policy_refresh_IgnoreAndReturn(cmock_retval) qeo_security_policy_refresh_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void qeo_security_policy_refresh_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, qeo_retcode_t cmock_to_return);
#define qeo_security_policy_refresh_ExpectAndReturn(qeoSecPol, cmock_retval) qeo_security_policy_refresh_CMockExpectAndReturn(__LINE__, qeoSecPol, cmock_retval)
void qeo_security_policy_refresh_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, qeo_security_policy_hndl qeoSecPol, qeo_retcode_t cmock_to_return);
typedef qeo_retcode_t (* CMOCK_qeo_security_policy_refresh_CALLBACK)(qeo_security_policy_hndl qeoSecPol, int cmock_num_calls);
void qeo_security_policy_refresh_StubWithCallback(CMOCK_qeo_security_policy_refresh_CALLBACK Callback);
#define qeo_security_policy_get_fine_grained_rules_IgnoreAndReturn(cmock_retval) qeo_security_policy_get_fine_grained_rules_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void qeo_security_policy_get_fine_grained_rules_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, qeo_retcode_t cmock_to_return);
#define qeo_security_policy_get_fine_grained_rules_ExpectAndReturn(qeoSecPol, cookie, topic_name, selector_mask, update_cb, cmock_retval) qeo_security_policy_get_fine_grained_rules_CMockExpectAndReturn(__LINE__, qeoSecPol, cookie, topic_name, selector_mask, update_cb, cmock_retval)
void qeo_security_policy_get_fine_grained_rules_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, qeo_security_policy_hndl qeoSecPol, uintptr_t cookie, const char* topic_name, unsigned int selector_mask, qeo_security_policy_update_fine_grained_rules_cb update_cb, qeo_retcode_t cmock_to_return);
typedef qeo_retcode_t (* CMOCK_qeo_security_policy_get_fine_grained_rules_CALLBACK)(qeo_security_policy_hndl qeoSecPol, uintptr_t cookie, const char* topic_name, unsigned int selector_mask, qeo_security_policy_update_fine_grained_rules_cb update_cb, int cmock_num_calls);
void qeo_security_policy_get_fine_grained_rules_StubWithCallback(CMOCK_qeo_security_policy_get_fine_grained_rules_CALLBACK Callback);

#endif
