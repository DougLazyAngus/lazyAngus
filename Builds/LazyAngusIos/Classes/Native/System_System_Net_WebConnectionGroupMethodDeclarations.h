#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.WebConnectionGroup
struct WebConnectionGroup_t4070;
// System.Collections.Queue
struct Queue_t3999;
// System.Net.ServicePoint
struct ServicePoint_t3932;
// System.String
struct String_t;
// System.Net.WebConnection
struct WebConnection_t4056;
// System.Net.HttpWebRequest
struct HttpWebRequest_t3857;

// System.Void System.Net.WebConnectionGroup::.ctor(System.Net.ServicePoint,System.String)
extern "C" void WebConnectionGroup__ctor_m14200 (WebConnectionGroup_t4070 * __this, ServicePoint_t3932 * ___sPoint, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebConnection System.Net.WebConnectionGroup::GetConnection(System.Net.HttpWebRequest)
extern "C" WebConnection_t4056 * WebConnectionGroup_GetConnection_m14201 (WebConnectionGroup_t4070 * __this, HttpWebRequest_t3857 * ___request, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionGroup::PrepareSharingNtlm(System.Net.WebConnection,System.Net.HttpWebRequest)
extern "C" void WebConnectionGroup_PrepareSharingNtlm_m14202 (Object_t * __this /* static, unused */, WebConnection_t4056 * ___cnc, HttpWebRequest_t3857 * ___request, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebConnection System.Net.WebConnectionGroup::CreateOrReuseConnection(System.Net.HttpWebRequest)
extern "C" WebConnection_t4056 * WebConnectionGroup_CreateOrReuseConnection_m14203 (WebConnectionGroup_t4070 * __this, HttpWebRequest_t3857 * ___request, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Queue System.Net.WebConnectionGroup::get_Queue()
extern "C" Queue_t3999 * WebConnectionGroup_get_Queue_m14204 (WebConnectionGroup_t4070 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
