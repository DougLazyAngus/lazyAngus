#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.WebConnectionGroup
struct WebConnectionGroup_t2062;
// System.Collections.Queue
struct Queue_t1986;
// System.Net.ServicePoint
struct ServicePoint_t1883;
// System.String
struct String_t;
// System.Net.WebConnection
struct WebConnection_t2047;
// System.Net.HttpWebRequest
struct HttpWebRequest_t1806;

// System.Void System.Net.WebConnectionGroup::.ctor(System.Net.ServicePoint,System.String)
extern "C" void WebConnectionGroup__ctor_m10671 (WebConnectionGroup_t2062 * __this, ServicePoint_t1883 * ___sPoint, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebConnection System.Net.WebConnectionGroup::GetConnection(System.Net.HttpWebRequest)
extern "C" WebConnection_t2047 * WebConnectionGroup_GetConnection_m10672 (WebConnectionGroup_t2062 * __this, HttpWebRequest_t1806 * ___request, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionGroup::PrepareSharingNtlm(System.Net.WebConnection,System.Net.HttpWebRequest)
extern "C" void WebConnectionGroup_PrepareSharingNtlm_m10673 (Object_t * __this /* static, unused */, WebConnection_t2047 * ___cnc, HttpWebRequest_t1806 * ___request, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebConnection System.Net.WebConnectionGroup::CreateOrReuseConnection(System.Net.HttpWebRequest)
extern "C" WebConnection_t2047 * WebConnectionGroup_CreateOrReuseConnection_m10674 (WebConnectionGroup_t2062 * __this, HttpWebRequest_t1806 * ___request, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Queue System.Net.WebConnectionGroup::get_Queue()
extern "C" Queue_t1986 * WebConnectionGroup_get_Queue_m10675 (WebConnectionGroup_t2062 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
