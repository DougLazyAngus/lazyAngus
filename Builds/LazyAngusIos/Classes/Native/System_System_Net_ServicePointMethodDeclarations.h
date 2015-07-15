#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.ServicePoint
struct ServicePoint_t1544;
// System.Uri
struct Uri_t595;
// System.Version
struct Version_t1552;
// System.Collections.Hashtable
struct Hashtable_t1438;
// System.Net.IPHostEntry
struct IPHostEntry_t1547;
// System.Net.WebConnectionGroup
struct WebConnectionGroup_t1579;
// System.String
struct String_t;
// System.EventHandler
struct EventHandler_t1558;
// System.Net.HttpWebRequest
struct HttpWebRequest_t1560;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t1568;
// System.Net.Sockets.Socket
struct Socket_t1479;
// System.Net.IPEndPoint
struct IPEndPoint_t1548;
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.Net.ServicePoint::.ctor(System.Uri,System.Int32,System.Int32)
extern "C" void ServicePoint__ctor_m7700 (ServicePoint_t1544 * __this, Uri_t595 * ___uri, int32_t ___connectionLimit, int32_t ___maxIdleTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Net.ServicePoint::get_Address()
extern "C" Uri_t595 * ServicePoint_get_Address_m7701 (ServicePoint_t1544 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.ServicePoint::get_ConnectionLimit()
extern "C" int32_t ServicePoint_get_ConnectionLimit_m7702 (ServicePoint_t1544 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.ServicePoint::get_CurrentConnections()
extern "C" int32_t ServicePoint_get_CurrentConnections_m7703 (ServicePoint_t1544 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Net.ServicePoint::get_IdleSince()
extern "C" DateTime_t219  ServicePoint_get_IdleSince_m7704 (ServicePoint_t1544 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePoint::set_IdleSince(System.DateTime)
extern "C" void ServicePoint_set_IdleSince_m7705 (ServicePoint_t1544 * __this, DateTime_t219  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Version System.Net.ServicePoint::get_ProtocolVersion()
extern "C" Version_t1552 * ServicePoint_get_ProtocolVersion_m7706 (ServicePoint_t1544 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePoint::set_Expect100Continue(System.Boolean)
extern "C" void ServicePoint_set_Expect100Continue_m7707 (ServicePoint_t1544 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.ServicePoint::get_UseNagleAlgorithm()
extern "C" bool ServicePoint_get_UseNagleAlgorithm_m7708 (ServicePoint_t1544 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePoint::set_UseNagleAlgorithm(System.Boolean)
extern "C" void ServicePoint_set_UseNagleAlgorithm_m7709 (ServicePoint_t1544 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.ServicePoint::get_SendContinue()
extern "C" bool ServicePoint_get_SendContinue_m7710 (ServicePoint_t1544 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePoint::set_SendContinue(System.Boolean)
extern "C" void ServicePoint_set_SendContinue_m7711 (ServicePoint_t1544 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.ServicePoint::get_UsesProxy()
extern "C" bool ServicePoint_get_UsesProxy_m7712 (ServicePoint_t1544 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePoint::set_UsesProxy(System.Boolean)
extern "C" void ServicePoint_set_UsesProxy_m7713 (ServicePoint_t1544 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.ServicePoint::get_UseConnect()
extern "C" bool ServicePoint_get_UseConnect_m7714 (ServicePoint_t1544 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePoint::set_UseConnect(System.Boolean)
extern "C" void ServicePoint_set_UseConnect_m7715 (ServicePoint_t1544 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.ServicePoint::get_AvailableForRecycling()
extern "C" bool ServicePoint_get_AvailableForRecycling_m7716 (ServicePoint_t1544 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Hashtable System.Net.ServicePoint::get_Groups()
extern "C" Hashtable_t1438 * ServicePoint_get_Groups_m7717 (ServicePoint_t1544 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPHostEntry System.Net.ServicePoint::get_HostEntry()
extern "C" IPHostEntry_t1547 * ServicePoint_get_HostEntry_m7718 (ServicePoint_t1544 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePoint::SetVersion(System.Version)
extern "C" void ServicePoint_SetVersion_m7719 (ServicePoint_t1544 * __this, Version_t1552 * ___version, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebConnectionGroup System.Net.ServicePoint::GetConnectionGroup(System.String)
extern "C" WebConnectionGroup_t1579 * ServicePoint_GetConnectionGroup_m7720 (ServicePoint_t1544 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.EventHandler System.Net.ServicePoint::SendRequest(System.Net.HttpWebRequest,System.String)
extern "C" EventHandler_t1558 * ServicePoint_SendRequest_m7721 (ServicePoint_t1544 * __this, HttpWebRequest_t1560 * ___request, String_t* ___groupName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePoint::SetCertificates(System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509Certificate)
extern "C" void ServicePoint_SetCertificates_m7722 (ServicePoint_t1544 * __this, X509Certificate_t1568 * ___client, X509Certificate_t1568 * ___server, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.ServicePoint::CallEndPointDelegate(System.Net.Sockets.Socket,System.Net.IPEndPoint)
extern "C" bool ServicePoint_CallEndPointDelegate_m7723 (ServicePoint_t1544 * __this, Socket_t1479 * ___sock, IPEndPoint_t1548 * ___remote, const MethodInfo* method) IL2CPP_METHOD_ATTR;
