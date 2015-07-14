#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.WebConnectionGroup
struct WebConnectionGroup_t1577;
// System.Collections.Queue
struct Queue_t1489;
// System.Net.ServicePoint
struct ServicePoint_t1542;
// System.String
struct String_t;
// System.Net.WebConnection
struct WebConnection_t1557;
// System.Net.HttpWebRequest
struct HttpWebRequest_t1558;

// System.Void System.Net.WebConnectionGroup::.ctor(System.Net.ServicePoint,System.String)
extern "C" void WebConnectionGroup__ctor_m7795 (WebConnectionGroup_t1577 * __this, ServicePoint_t1542 * ___sPoint, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebConnection System.Net.WebConnectionGroup::GetConnection(System.Net.HttpWebRequest)
extern "C" WebConnection_t1557 * WebConnectionGroup_GetConnection_m7796 (WebConnectionGroup_t1577 * __this, HttpWebRequest_t1558 * ___request, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionGroup::PrepareSharingNtlm(System.Net.WebConnection,System.Net.HttpWebRequest)
extern "C" void WebConnectionGroup_PrepareSharingNtlm_m7797 (Object_t * __this /* static, unused */, WebConnection_t1557 * ___cnc, HttpWebRequest_t1558 * ___request, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebConnection System.Net.WebConnectionGroup::CreateOrReuseConnection(System.Net.HttpWebRequest)
extern "C" WebConnection_t1557 * WebConnectionGroup_CreateOrReuseConnection_m7798 (WebConnectionGroup_t1577 * __this, HttpWebRequest_t1558 * ___request, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Queue System.Net.WebConnectionGroup::get_Queue()
extern "C" Queue_t1489 * WebConnectionGroup_get_Queue_m7799 (WebConnectionGroup_t1577 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
