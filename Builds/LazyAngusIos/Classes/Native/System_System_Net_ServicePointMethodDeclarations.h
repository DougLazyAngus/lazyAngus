#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.ServicePoint
struct ServicePoint_t1519;
// System.Uri
struct Uri_t574;
// System.Version
struct Version_t1527;
// System.Collections.Hashtable
struct Hashtable_t1413;
// System.Net.IPHostEntry
struct IPHostEntry_t1522;
// System.Net.WebConnectionGroup
struct WebConnectionGroup_t1554;
// System.String
struct String_t;
// System.EventHandler
struct EventHandler_t1533;
// System.Net.HttpWebRequest
struct HttpWebRequest_t1535;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t1543;
// System.Net.Sockets.Socket
struct Socket_t1454;
// System.Net.IPEndPoint
struct IPEndPoint_t1523;
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.Net.ServicePoint::.ctor(System.Uri,System.Int32,System.Int32)
extern "C" void ServicePoint__ctor_m7520 (ServicePoint_t1519 * __this, Uri_t574 * ___uri, int32_t ___connectionLimit, int32_t ___maxIdleTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Net.ServicePoint::get_Address()
extern "C" Uri_t574 * ServicePoint_get_Address_m7521 (ServicePoint_t1519 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.ServicePoint::get_ConnectionLimit()
extern "C" int32_t ServicePoint_get_ConnectionLimit_m7522 (ServicePoint_t1519 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.ServicePoint::get_CurrentConnections()
extern "C" int32_t ServicePoint_get_CurrentConnections_m7523 (ServicePoint_t1519 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Net.ServicePoint::get_IdleSince()
extern "C" DateTime_t219  ServicePoint_get_IdleSince_m7524 (ServicePoint_t1519 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePoint::set_IdleSince(System.DateTime)
extern "C" void ServicePoint_set_IdleSince_m7525 (ServicePoint_t1519 * __this, DateTime_t219  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Version System.Net.ServicePoint::get_ProtocolVersion()
extern "C" Version_t1527 * ServicePoint_get_ProtocolVersion_m7526 (ServicePoint_t1519 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePoint::set_Expect100Continue(System.Boolean)
extern "C" void ServicePoint_set_Expect100Continue_m7527 (ServicePoint_t1519 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.ServicePoint::get_UseNagleAlgorithm()
extern "C" bool ServicePoint_get_UseNagleAlgorithm_m7528 (ServicePoint_t1519 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePoint::set_UseNagleAlgorithm(System.Boolean)
extern "C" void ServicePoint_set_UseNagleAlgorithm_m7529 (ServicePoint_t1519 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.ServicePoint::get_SendContinue()
extern "C" bool ServicePoint_get_SendContinue_m7530 (ServicePoint_t1519 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePoint::set_SendContinue(System.Boolean)
extern "C" void ServicePoint_set_SendContinue_m7531 (ServicePoint_t1519 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.ServicePoint::get_UsesProxy()
extern "C" bool ServicePoint_get_UsesProxy_m7532 (ServicePoint_t1519 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePoint::set_UsesProxy(System.Boolean)
extern "C" void ServicePoint_set_UsesProxy_m7533 (ServicePoint_t1519 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.ServicePoint::get_UseConnect()
extern "C" bool ServicePoint_get_UseConnect_m7534 (ServicePoint_t1519 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePoint::set_UseConnect(System.Boolean)
extern "C" void ServicePoint_set_UseConnect_m7535 (ServicePoint_t1519 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.ServicePoint::get_AvailableForRecycling()
extern "C" bool ServicePoint_get_AvailableForRecycling_m7536 (ServicePoint_t1519 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Hashtable System.Net.ServicePoint::get_Groups()
extern "C" Hashtable_t1413 * ServicePoint_get_Groups_m7537 (ServicePoint_t1519 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPHostEntry System.Net.ServicePoint::get_HostEntry()
extern "C" IPHostEntry_t1522 * ServicePoint_get_HostEntry_m7538 (ServicePoint_t1519 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePoint::SetVersion(System.Version)
extern "C" void ServicePoint_SetVersion_m7539 (ServicePoint_t1519 * __this, Version_t1527 * ___version, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebConnectionGroup System.Net.ServicePoint::GetConnectionGroup(System.String)
extern "C" WebConnectionGroup_t1554 * ServicePoint_GetConnectionGroup_m7540 (ServicePoint_t1519 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.EventHandler System.Net.ServicePoint::SendRequest(System.Net.HttpWebRequest,System.String)
extern "C" EventHandler_t1533 * ServicePoint_SendRequest_m7541 (ServicePoint_t1519 * __this, HttpWebRequest_t1535 * ___request, String_t* ___groupName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePoint::SetCertificates(System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509Certificate)
extern "C" void ServicePoint_SetCertificates_m7542 (ServicePoint_t1519 * __this, X509Certificate_t1543 * ___client, X509Certificate_t1543 * ___server, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.ServicePoint::CallEndPointDelegate(System.Net.Sockets.Socket,System.Net.IPEndPoint)
extern "C" bool ServicePoint_CallEndPointDelegate_m7543 (ServicePoint_t1519 * __this, Socket_t1454 * ___sock, IPEndPoint_t1523 * ___remote, const MethodInfo* method) IL2CPP_METHOD_ATTR;
