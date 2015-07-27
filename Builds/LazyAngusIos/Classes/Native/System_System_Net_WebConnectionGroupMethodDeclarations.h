#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.WebConnectionGroup
struct WebConnectionGroup_t2061;
// System.Collections.Queue
struct Queue_t1985;
// System.Net.ServicePoint
struct ServicePoint_t1882;
// System.String
struct String_t;
// System.Net.WebConnection
struct WebConnection_t2046;
// System.Net.HttpWebRequest
struct HttpWebRequest_t1805;

// System.Void System.Net.WebConnectionGroup::.ctor(System.Net.ServicePoint,System.String)
extern "C" void WebConnectionGroup__ctor_m10668 (WebConnectionGroup_t2061 * __this, ServicePoint_t1882 * ___sPoint, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebConnection System.Net.WebConnectionGroup::GetConnection(System.Net.HttpWebRequest)
extern "C" WebConnection_t2046 * WebConnectionGroup_GetConnection_m10669 (WebConnectionGroup_t2061 * __this, HttpWebRequest_t1805 * ___request, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionGroup::PrepareSharingNtlm(System.Net.WebConnection,System.Net.HttpWebRequest)
extern "C" void WebConnectionGroup_PrepareSharingNtlm_m10670 (Object_t * __this /* static, unused */, WebConnection_t2046 * ___cnc, HttpWebRequest_t1805 * ___request, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebConnection System.Net.WebConnectionGroup::CreateOrReuseConnection(System.Net.HttpWebRequest)
extern "C" WebConnection_t2046 * WebConnectionGroup_CreateOrReuseConnection_m10671 (WebConnectionGroup_t2061 * __this, HttpWebRequest_t1805 * ___request, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Queue System.Net.WebConnectionGroup::get_Queue()
extern "C" Queue_t1985 * WebConnectionGroup_get_Queue_m10672 (WebConnectionGroup_t2061 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
