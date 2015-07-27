#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.ServicePoint
struct ServicePoint_t1883;
// System.Uri
struct Uri_t656;
// System.Version
struct Version_t2040;
// System.Collections.Hashtable
struct Hashtable_t1571;
// System.Net.IPHostEntry
struct IPHostEntry_t2035;
// System.Net.WebConnectionGroup
struct WebConnectionGroup_t2062;
// System.String
struct String_t;
// System.EventHandler
struct EventHandler_t2046;
// System.Net.HttpWebRequest
struct HttpWebRequest_t1806;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t1830;
// System.Net.Sockets.Socket
struct Socket_t1975;
// System.Net.IPEndPoint
struct IPEndPoint_t2036;
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.Net.ServicePoint::.ctor(System.Uri,System.Int32,System.Int32)
extern "C" void ServicePoint__ctor_m10559 (ServicePoint_t1883 * __this, Uri_t656 * ___uri, int32_t ___connectionLimit, int32_t ___maxIdleTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Net.ServicePoint::get_Address()
extern "C" Uri_t656 * ServicePoint_get_Address_m10560 (ServicePoint_t1883 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.ServicePoint::get_ConnectionLimit()
extern "C" int32_t ServicePoint_get_ConnectionLimit_m10561 (ServicePoint_t1883 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.ServicePoint::get_CurrentConnections()
extern "C" int32_t ServicePoint_get_CurrentConnections_m10562 (ServicePoint_t1883 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Net.ServicePoint::get_IdleSince()
extern "C" DateTime_t247  ServicePoint_get_IdleSince_m10563 (ServicePoint_t1883 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePoint::set_IdleSince(System.DateTime)
extern "C" void ServicePoint_set_IdleSince_m10564 (ServicePoint_t1883 * __this, DateTime_t247  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Version System.Net.ServicePoint::get_ProtocolVersion()
extern "C" Version_t2040 * ServicePoint_get_ProtocolVersion_m10565 (ServicePoint_t1883 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePoint::set_Expect100Continue(System.Boolean)
extern "C" void ServicePoint_set_Expect100Continue_m10566 (ServicePoint_t1883 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.ServicePoint::get_UseNagleAlgorithm()
extern "C" bool ServicePoint_get_UseNagleAlgorithm_m10567 (ServicePoint_t1883 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePoint::set_UseNagleAlgorithm(System.Boolean)
extern "C" void ServicePoint_set_UseNagleAlgorithm_m10568 (ServicePoint_t1883 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.ServicePoint::get_SendContinue()
extern "C" bool ServicePoint_get_SendContinue_m10569 (ServicePoint_t1883 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePoint::set_SendContinue(System.Boolean)
extern "C" void ServicePoint_set_SendContinue_m10570 (ServicePoint_t1883 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.ServicePoint::get_UsesProxy()
extern "C" bool ServicePoint_get_UsesProxy_m10571 (ServicePoint_t1883 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePoint::set_UsesProxy(System.Boolean)
extern "C" void ServicePoint_set_UsesProxy_m10572 (ServicePoint_t1883 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.ServicePoint::get_UseConnect()
extern "C" bool ServicePoint_get_UseConnect_m10573 (ServicePoint_t1883 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePoint::set_UseConnect(System.Boolean)
extern "C" void ServicePoint_set_UseConnect_m10574 (ServicePoint_t1883 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.ServicePoint::get_AvailableForRecycling()
extern "C" bool ServicePoint_get_AvailableForRecycling_m10575 (ServicePoint_t1883 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Hashtable System.Net.ServicePoint::get_Groups()
extern "C" Hashtable_t1571 * ServicePoint_get_Groups_m10576 (ServicePoint_t1883 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPHostEntry System.Net.ServicePoint::get_HostEntry()
extern "C" IPHostEntry_t2035 * ServicePoint_get_HostEntry_m10577 (ServicePoint_t1883 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePoint::SetVersion(System.Version)
extern "C" void ServicePoint_SetVersion_m10578 (ServicePoint_t1883 * __this, Version_t2040 * ___version, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebConnectionGroup System.Net.ServicePoint::GetConnectionGroup(System.String)
extern "C" WebConnectionGroup_t2062 * ServicePoint_GetConnectionGroup_m10579 (ServicePoint_t1883 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.EventHandler System.Net.ServicePoint::SendRequest(System.Net.HttpWebRequest,System.String)
extern "C" EventHandler_t2046 * ServicePoint_SendRequest_m10580 (ServicePoint_t1883 * __this, HttpWebRequest_t1806 * ___request, String_t* ___groupName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePoint::SetCertificates(System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509Certificate)
extern "C" void ServicePoint_SetCertificates_m10581 (ServicePoint_t1883 * __this, X509Certificate_t1830 * ___client, X509Certificate_t1830 * ___server, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.ServicePoint::CallEndPointDelegate(System.Net.Sockets.Socket,System.Net.IPEndPoint)
extern "C" bool ServicePoint_CallEndPointDelegate_m10582 (ServicePoint_t1883 * __this, Socket_t1975 * ___sock, IPEndPoint_t2036 * ___remote, const MethodInfo* method) IL2CPP_METHOD_ATTR;
