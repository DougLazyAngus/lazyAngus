#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.WebConnectionGroup
struct WebConnectionGroup_t2060;
// System.Collections.Queue
struct Queue_t1984;
// System.Net.ServicePoint
struct ServicePoint_t1881;
// System.String
struct String_t;
// System.Net.WebConnection
struct WebConnection_t2045;
// System.Net.HttpWebRequest
struct HttpWebRequest_t1804;

// System.Void System.Net.WebConnectionGroup::.ctor(System.Net.ServicePoint,System.String)
extern "C" void WebConnectionGroup__ctor_m10660 (WebConnectionGroup_t2060 * __this, ServicePoint_t1881 * ___sPoint, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebConnection System.Net.WebConnectionGroup::GetConnection(System.Net.HttpWebRequest)
extern "C" WebConnection_t2045 * WebConnectionGroup_GetConnection_m10661 (WebConnectionGroup_t2060 * __this, HttpWebRequest_t1804 * ___request, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionGroup::PrepareSharingNtlm(System.Net.WebConnection,System.Net.HttpWebRequest)
extern "C" void WebConnectionGroup_PrepareSharingNtlm_m10662 (Object_t * __this /* static, unused */, WebConnection_t2045 * ___cnc, HttpWebRequest_t1804 * ___request, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebConnection System.Net.WebConnectionGroup::CreateOrReuseConnection(System.Net.HttpWebRequest)
extern "C" WebConnection_t2045 * WebConnectionGroup_CreateOrReuseConnection_m10663 (WebConnectionGroup_t2060 * __this, HttpWebRequest_t1804 * ___request, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Queue System.Net.WebConnectionGroup::get_Queue()
extern "C" Queue_t1984 * WebConnectionGroup_get_Queue_m10664 (WebConnectionGroup_t2060 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
