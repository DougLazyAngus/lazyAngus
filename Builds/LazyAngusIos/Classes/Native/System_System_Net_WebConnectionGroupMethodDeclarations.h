#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.WebConnectionGroup
struct WebConnectionGroup_t4089;
// System.Collections.Queue
struct Queue_t4018;
// System.Net.ServicePoint
struct ServicePoint_t3951;
// System.String
struct String_t;
// System.Net.WebConnection
struct WebConnection_t4075;
// System.Net.HttpWebRequest
struct HttpWebRequest_t3876;

// System.Void System.Net.WebConnectionGroup::.ctor(System.Net.ServicePoint,System.String)
extern "C" void WebConnectionGroup__ctor_m14361 (WebConnectionGroup_t4089 * __this, ServicePoint_t3951 * ___sPoint, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebConnection System.Net.WebConnectionGroup::GetConnection(System.Net.HttpWebRequest)
extern "C" WebConnection_t4075 * WebConnectionGroup_GetConnection_m14362 (WebConnectionGroup_t4089 * __this, HttpWebRequest_t3876 * ___request, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionGroup::PrepareSharingNtlm(System.Net.WebConnection,System.Net.HttpWebRequest)
extern "C" void WebConnectionGroup_PrepareSharingNtlm_m14363 (Object_t * __this /* static, unused */, WebConnection_t4075 * ___cnc, HttpWebRequest_t3876 * ___request, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebConnection System.Net.WebConnectionGroup::CreateOrReuseConnection(System.Net.HttpWebRequest)
extern "C" WebConnection_t4075 * WebConnectionGroup_CreateOrReuseConnection_m14364 (WebConnectionGroup_t4089 * __this, HttpWebRequest_t3876 * ___request, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Queue System.Net.WebConnectionGroup::get_Queue()
extern "C" Queue_t4018 * WebConnectionGroup_get_Queue_m14365 (WebConnectionGroup_t4089 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
