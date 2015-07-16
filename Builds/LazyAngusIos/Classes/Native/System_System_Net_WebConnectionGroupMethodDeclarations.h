﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.WebConnectionGroup
struct WebConnectionGroup_t1587;
// System.Collections.Queue
struct Queue_t1499;
// System.Net.ServicePoint
struct ServicePoint_t1552;
// System.String
struct String_t;
// System.Net.WebConnection
struct WebConnection_t1567;
// System.Net.HttpWebRequest
struct HttpWebRequest_t1568;

// System.Void System.Net.WebConnectionGroup::.ctor(System.Net.ServicePoint,System.String)
extern "C" void WebConnectionGroup__ctor_m7858 (WebConnectionGroup_t1587 * __this, ServicePoint_t1552 * ___sPoint, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebConnection System.Net.WebConnectionGroup::GetConnection(System.Net.HttpWebRequest)
extern "C" WebConnection_t1567 * WebConnectionGroup_GetConnection_m7859 (WebConnectionGroup_t1587 * __this, HttpWebRequest_t1568 * ___request, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionGroup::PrepareSharingNtlm(System.Net.WebConnection,System.Net.HttpWebRequest)
extern "C" void WebConnectionGroup_PrepareSharingNtlm_m7860 (Object_t * __this /* static, unused */, WebConnection_t1567 * ___cnc, HttpWebRequest_t1568 * ___request, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebConnection System.Net.WebConnectionGroup::CreateOrReuseConnection(System.Net.HttpWebRequest)
extern "C" WebConnection_t1567 * WebConnectionGroup_CreateOrReuseConnection_m7861 (WebConnectionGroup_t1587 * __this, HttpWebRequest_t1568 * ___request, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Queue System.Net.WebConnectionGroup::get_Queue()
extern "C" Queue_t1499 * WebConnectionGroup_get_Queue_m7862 (WebConnectionGroup_t1587 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
