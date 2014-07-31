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
#ifndef _MOCKLIST_H
#define _MOCKLIST_H

#include "unity.h"
#include "list.h"

void Mocklist_Init(void);
void Mocklist_Destroy(void);
void Mocklist_Verify(void);




#define list_new_IgnoreAndReturn(cmock_retval) list_new_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void list_new_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, list_t* cmock_to_return);
#define list_new_ExpectAndReturn(cmock_retval) list_new_CMockExpectAndReturn(__LINE__, cmock_retval)
void list_new_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, list_t* cmock_to_return);
typedef list_t* (* CMOCK_list_new_CALLBACK)(int cmock_num_calls);
void list_new_StubWithCallback(CMOCK_list_new_CALLBACK Callback);
#define list_free_Ignore() list_free_CMockIgnore(__LINE__)
void list_free_CMockIgnore(UNITY_LINE_TYPE cmock_line);
#define list_free_Expect(list) list_free_CMockExpect(__LINE__, list)
void list_free_CMockExpect(UNITY_LINE_TYPE cmock_line, list_t* list);
typedef void (* CMOCK_list_free_CALLBACK)(list_t* list, int cmock_num_calls);
void list_free_StubWithCallback(CMOCK_list_free_CALLBACK Callback);
#define list_length_IgnoreAndReturn(cmock_retval) list_length_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void list_length_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, int cmock_to_return);
#define list_length_ExpectAndReturn(list, cmock_retval) list_length_CMockExpectAndReturn(__LINE__, list, cmock_retval)
void list_length_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, const list_t* list, int cmock_to_return);
typedef int (* CMOCK_list_length_CALLBACK)(const list_t* list, int cmock_num_calls);
void list_length_StubWithCallback(CMOCK_list_length_CALLBACK Callback);
#define list_add_IgnoreAndReturn(cmock_retval) list_add_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void list_add_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, qeo_retcode_t cmock_to_return);
#define list_add_ExpectAndReturn(list, data, cmock_retval) list_add_CMockExpectAndReturn(__LINE__, list, data, cmock_retval)
void list_add_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, list_t* list, void* data, qeo_retcode_t cmock_to_return);
typedef qeo_retcode_t (* CMOCK_list_add_CALLBACK)(list_t* list, void* data, int cmock_num_calls);
void list_add_StubWithCallback(CMOCK_list_add_CALLBACK Callback);
#define list_remove_IgnoreAndReturn(cmock_retval) list_remove_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void list_remove_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, qeo_retcode_t cmock_to_return);
#define list_remove_ExpectAndReturn(list, data, cmock_retval) list_remove_CMockExpectAndReturn(__LINE__, list, data, cmock_retval)
void list_remove_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, list_t* list, const void* data, qeo_retcode_t cmock_to_return);
typedef qeo_retcode_t (* CMOCK_list_remove_CALLBACK)(list_t* list, const void* data, int cmock_num_calls);
void list_remove_StubWithCallback(CMOCK_list_remove_CALLBACK Callback);
#define list_foreach_IgnoreAndReturn(cmock_retval) list_foreach_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void list_foreach_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, qeo_retcode_t cmock_to_return);
#define list_foreach_ExpectAndReturn(list, cb, userdata, cmock_retval) list_foreach_CMockExpectAndReturn(__LINE__, list, cb, userdata, cmock_retval)
void list_foreach_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, list_t* list, list_iterate_callback cb, uintptr_t userdata, qeo_retcode_t cmock_to_return);
typedef qeo_retcode_t (* CMOCK_list_foreach_CALLBACK)(list_t* list, list_iterate_callback cb, uintptr_t userdata, int cmock_num_calls);
void list_foreach_StubWithCallback(CMOCK_list_foreach_CALLBACK Callback);

#endif
