#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.ServicePoint
struct ServicePoint_t3877;
// System.Uri
struct Uri_t700;
// System.Version
struct Version_t1325;
// System.Collections.Hashtable
struct Hashtable_t1268;
// System.Net.IPHostEntry
struct IPHostEntry_t3991;
// System.Net.WebConnectionGroup
struct WebConnectionGroup_t4016;
// System.String
struct String_t;
// System.EventHandler
struct EventHandler_t4001;
// System.Net.HttpWebRequest
struct HttpWebRequest_t3802;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t3825;
// System.Net.Sockets.Socket
struct Socket_t3934;
// System.Net.IPEndPoint
struct IPEndPoint_t3992;
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.Net.ServicePoint::.ctor(System.Uri,System.Int32,System.Int32)
extern "C" void ServicePoint__ctor_m13773 (ServicePoint_t3877 * __this, Uri_t700 * ___uri, int32_t ___connectionLimit, int32_t ___maxIdleTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Net.ServicePoint::get_Address()
extern "C" Uri_t700 * ServicePoint_get_Address_m13774 (ServicePoint_t3877 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.ServicePoint::get_ConnectionLimit()
extern "C" int32_t ServicePoint_get_ConnectionLimit_m13775 (ServicePoint_t3877 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.ServicePoint::get_CurrentConnections()
extern "C" int32_t ServicePoint_get_CurrentConnections_m13776 (ServicePoint_t3877 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Net.ServicePoint::get_IdleSince()
extern "C" DateTime_t287  ServicePoint_get_IdleSince_m13777 (ServicePoint_t3877 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePoint::set_IdleSince(System.DateTime)
extern "C" void ServicePoint_set_IdleSince_m13778 (ServicePoint_t3877 * __this, DateTime_t287  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Version System.Net.ServicePoint::get_ProtocolVersion()
extern "C" Version_t1325 * ServicePoint_get_ProtocolVersion_m13779 (ServicePoint_t3877 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePoint::set_Expect100Continue(System.Boolean)
extern "C" void ServicePoint_set_Expect100Continue_m13780 (ServicePoint_t3877 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.ServicePoint::get_UseNagleAlgorithm()
extern "C" bool ServicePoint_get_UseNagleAlgorithm_m13781 (ServicePoint_t3877 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePoint::set_UseNagleAlgorithm(System.Boolean)
extern "C" void ServicePoint_set_UseNagleAlgorithm_m13782 (ServicePoint_t3877 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.ServicePoint::get_SendContinue()
extern "C" bool ServicePoint_get_SendContinue_m13783 (ServicePoint_t3877 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePoint::set_SendContinue(System.Boolean)
extern "C" void ServicePoint_set_SendContinue_m13784 (ServicePoint_t3877 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.ServicePoint::get_UsesProxy()
extern "C" bool ServicePoint_get_UsesProxy_m13785 (ServicePoint_t3877 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePoint::set_UsesProxy(System.Boolean)
extern "C" void ServicePoint_set_UsesProxy_m13786 (ServicePoint_t3877 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.ServicePoint::get_UseConnect()
extern "C" bool ServicePoint_get_UseConnect_m13787 (ServicePoint_t3877 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePoint::set_UseConnect(System.Boolean)
extern "C" void ServicePoint_set_UseConnect_m13788 (ServicePoint_t3877 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.ServicePoint::get_AvailableForRecycling()
extern "C" bool ServicePoint_get_AvailableForRecycling_m13789 (ServicePoint_t3877 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Hashtable System.Net.ServicePoint::get_Groups()
extern "C" Hashtable_t1268 * ServicePoint_get_Groups_m13790 (ServicePoint_t3877 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPHostEntry System.Net.ServicePoint::get_HostEntry()
extern "C" IPHostEntry_t3991 * ServicePoint_get_HostEntry_m13791 (ServicePoint_t3877 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePoint::SetVersion(System.Version)
extern "C" void ServicePoint_SetVersion_m13792 (ServicePoint_t3877 * __this, Version_t1325 * ___version, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebConnectionGroup System.Net.ServicePoint::GetConnectionGroup(System.String)
extern "C" WebConnectionGroup_t4016 * ServicePoint_GetConnectionGroup_m13793 (ServicePoint_t3877 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.EventHandler System.Net.ServicePoint::SendRequest(System.Net.HttpWebRequest,System.String)
extern "C" EventHandler_t4001 * ServicePoint_SendRequest_m13794 (ServicePoint_t3877 * __this, HttpWebRequest_t3802 * ___request, String_t* ___groupName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePoint::SetCertificates(System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509Certificate)
extern "C" void ServicePoint_SetCertificates_m13795 (ServicePoint_t3877 * __this, X509Certificate_t3825 * ___client, X509Certificate_t3825 * ___server, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.ServicePoint::CallEndPointDelegate(System.Net.Sockets.Socket,System.Net.IPEndPoint)
extern "C" bool ServicePoint_CallEndPointDelegate_m13796 (ServicePoint_t3877 * __this, Socket_t3934 * ___sock, IPEndPoint_t3992 * ___remote, const MethodInfo* method) IL2CPP_METHOD_ATTR;
