#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.WebConnectionGroup
struct WebConnectionGroup_t4072;
// System.Collections.Queue
struct Queue_t4001;
// System.Net.ServicePoint
struct ServicePoint_t3934;
// System.String
struct String_t;
// System.Net.WebConnection
struct WebConnection_t4058;
// System.Net.HttpWebRequest
struct HttpWebRequest_t3859;

// System.Void System.Net.WebConnectionGroup::.ctor(System.Net.ServicePoint,System.String)
extern "C" void WebConnectionGroup__ctor_m14208 (WebConnectionGroup_t4072 * __this, ServicePoint_t3934 * ___sPoint, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebConnection System.Net.WebConnectionGroup::GetConnection(System.Net.HttpWebRequest)
extern "C" WebConnection_t4058 * WebConnectionGroup_GetConnection_m14209 (WebConnectionGroup_t4072 * __this, HttpWebRequest_t3859 * ___request, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionGroup::PrepareSharingNtlm(System.Net.WebConnection,System.Net.HttpWebRequest)
extern "C" void WebConnectionGroup_PrepareSharingNtlm_m14210 (Object_t * __this /* static, unused */, WebConnection_t4058 * ___cnc, HttpWebRequest_t3859 * ___request, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebConnection System.Net.WebConnectionGroup::CreateOrReuseConnection(System.Net.HttpWebRequest)
extern "C" WebConnection_t4058 * WebConnectionGroup_CreateOrReuseConnection_m14211 (WebConnectionGroup_t4072 * __this, HttpWebRequest_t3859 * ___request, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Queue System.Net.WebConnectionGroup::get_Queue()
extern "C" Queue_t4001 * WebConnectionGroup_get_Queue_m14212 (WebConnectionGroup_t4072 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
