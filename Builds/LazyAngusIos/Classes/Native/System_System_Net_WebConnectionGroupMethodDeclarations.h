#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.WebConnectionGroup
struct WebConnectionGroup_t1532;
// System.Collections.Queue
struct Queue_t1444;
// System.Net.ServicePoint
struct ServicePoint_t1497;
// System.String
struct String_t;
// System.Net.WebConnection
struct WebConnection_t1512;
// System.Net.HttpWebRequest
struct HttpWebRequest_t1513;

// System.Void System.Net.WebConnectionGroup::.ctor(System.Net.ServicePoint,System.String)
extern "C" void WebConnectionGroup__ctor_m7492 (WebConnectionGroup_t1532 * __this, ServicePoint_t1497 * ___sPoint, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebConnection System.Net.WebConnectionGroup::GetConnection(System.Net.HttpWebRequest)
extern "C" WebConnection_t1512 * WebConnectionGroup_GetConnection_m7493 (WebConnectionGroup_t1532 * __this, HttpWebRequest_t1513 * ___request, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionGroup::PrepareSharingNtlm(System.Net.WebConnection,System.Net.HttpWebRequest)
extern "C" void WebConnectionGroup_PrepareSharingNtlm_m7494 (Object_t * __this /* static, unused */, WebConnection_t1512 * ___cnc, HttpWebRequest_t1513 * ___request, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebConnection System.Net.WebConnectionGroup::CreateOrReuseConnection(System.Net.HttpWebRequest)
extern "C" WebConnection_t1512 * WebConnectionGroup_CreateOrReuseConnection_m7495 (WebConnectionGroup_t1532 * __this, HttpWebRequest_t1513 * ___request, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Queue System.Net.WebConnectionGroup::get_Queue()
extern "C" Queue_t1444 * WebConnectionGroup_get_Queue_m7496 (WebConnectionGroup_t1532 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
