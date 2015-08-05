#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.ClientSessionInfo
struct ClientSessionInfo_t3803;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t66;
// Mono.Security.Protocol.Tls.Context
struct Context_t3794;

// System.Void Mono.Security.Protocol.Tls.ClientSessionInfo::.ctor(System.String,System.Byte[])
extern "C" void ClientSessionInfo__ctor_m12468 (ClientSessionInfo_t3803 * __this, String_t* ___hostname, ByteU5BU5D_t66* ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.ClientSessionInfo::.cctor()
extern "C" void ClientSessionInfo__cctor_m12469 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.ClientSessionInfo::Finalize()
extern "C" void ClientSessionInfo_Finalize_m12470 (ClientSessionInfo_t3803 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Protocol.Tls.ClientSessionInfo::get_HostName()
extern "C" String_t* ClientSessionInfo_get_HostName_m12471 (ClientSessionInfo_t3803 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.ClientSessionInfo::get_Id()
extern "C" ByteU5BU5D_t66* ClientSessionInfo_get_Id_m12472 (ClientSessionInfo_t3803 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.ClientSessionInfo::get_Valid()
extern "C" bool ClientSessionInfo_get_Valid_m12473 (ClientSessionInfo_t3803 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.ClientSessionInfo::GetContext(Mono.Security.Protocol.Tls.Context)
extern "C" void ClientSessionInfo_GetContext_m12474 (ClientSessionInfo_t3803 * __this, Context_t3794 * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.ClientSessionInfo::SetContext(Mono.Security.Protocol.Tls.Context)
extern "C" void ClientSessionInfo_SetContext_m12475 (ClientSessionInfo_t3803 * __this, Context_t3794 * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.ClientSessionInfo::KeepAlive()
extern "C" void ClientSessionInfo_KeepAlive_m12476 (ClientSessionInfo_t3803 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.ClientSessionInfo::Dispose()
extern "C" void ClientSessionInfo_Dispose_m12477 (ClientSessionInfo_t3803 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.ClientSessionInfo::Dispose(System.Boolean)
extern "C" void ClientSessionInfo_Dispose_m12478 (ClientSessionInfo_t3803 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.ClientSessionInfo::CheckDisposed()
extern "C" void ClientSessionInfo_CheckDisposed_m12479 (ClientSessionInfo_t3803 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
