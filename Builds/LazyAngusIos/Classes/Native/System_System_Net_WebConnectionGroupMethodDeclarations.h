﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.WebConnectionGroup
struct WebConnectionGroup_t4016;
// System.Collections.Queue
struct Queue_t3945;
// System.Net.ServicePoint
struct ServicePoint_t3877;
// System.String
struct String_t;
// System.Net.WebConnection
struct WebConnection_t4002;
// System.Net.HttpWebRequest
struct HttpWebRequest_t3802;

// System.Void System.Net.WebConnectionGroup::.ctor(System.Net.ServicePoint,System.String)
extern "C" void WebConnectionGroup__ctor_m13889 (WebConnectionGroup_t4016 * __this, ServicePoint_t3877 * ___sPoint, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebConnection System.Net.WebConnectionGroup::GetConnection(System.Net.HttpWebRequest)
extern "C" WebConnection_t4002 * WebConnectionGroup_GetConnection_m13890 (WebConnectionGroup_t4016 * __this, HttpWebRequest_t3802 * ___request, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionGroup::PrepareSharingNtlm(System.Net.WebConnection,System.Net.HttpWebRequest)
extern "C" void WebConnectionGroup_PrepareSharingNtlm_m13891 (Object_t * __this /* static, unused */, WebConnection_t4002 * ___cnc, HttpWebRequest_t3802 * ___request, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebConnection System.Net.WebConnectionGroup::CreateOrReuseConnection(System.Net.HttpWebRequest)
extern "C" WebConnection_t4002 * WebConnectionGroup_CreateOrReuseConnection_m13892 (WebConnectionGroup_t4016 * __this, HttpWebRequest_t3802 * ___request, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Queue System.Net.WebConnectionGroup::get_Queue()
extern "C" Queue_t3945 * WebConnectionGroup_get_Queue_m13893 (WebConnectionGroup_t4016 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
