#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.ClientRecordProtocol
struct ClientRecordProtocol_t3801;
// System.IO.Stream
struct Stream_t51;
// Mono.Security.Protocol.Tls.ClientContext
struct ClientContext_t3800;
// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage
struct HandshakeMessage_t3818;
// Mono.Security.Protocol.Tls.TlsStream
struct TlsStream_t3809;
// System.Byte[]
struct ByteU5BU5D_t66;
// Mono.Security.Protocol.Tls.Handshake.HandshakeType
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Handshake.h"

// System.Void Mono.Security.Protocol.Tls.ClientRecordProtocol::.ctor(System.IO.Stream,Mono.Security.Protocol.Tls.ClientContext)
extern "C" void ClientRecordProtocol__ctor_m12463 (ClientRecordProtocol_t3801 * __this, Stream_t51 * ___innerStream, ClientContext_t3800 * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage Mono.Security.Protocol.Tls.ClientRecordProtocol::GetMessage(Mono.Security.Protocol.Tls.Handshake.HandshakeType)
extern "C" HandshakeMessage_t3818 * ClientRecordProtocol_GetMessage_m12464 (ClientRecordProtocol_t3801 * __this, uint8_t ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.ClientRecordProtocol::ProcessHandshakeMessage(Mono.Security.Protocol.Tls.TlsStream)
extern "C" void ClientRecordProtocol_ProcessHandshakeMessage_m12465 (ClientRecordProtocol_t3801 * __this, TlsStream_t3809 * ___handMsg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage Mono.Security.Protocol.Tls.ClientRecordProtocol::createClientHandshakeMessage(Mono.Security.Protocol.Tls.Handshake.HandshakeType)
extern "C" HandshakeMessage_t3818 * ClientRecordProtocol_createClientHandshakeMessage_m12466 (ClientRecordProtocol_t3801 * __this, uint8_t ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage Mono.Security.Protocol.Tls.ClientRecordProtocol::createServerHandshakeMessage(Mono.Security.Protocol.Tls.Handshake.HandshakeType,System.Byte[])
extern "C" HandshakeMessage_t3818 * ClientRecordProtocol_createServerHandshakeMessage_m12467 (ClientRecordProtocol_t3801 * __this, uint8_t ___type, ByteU5BU5D_t66* ___buffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
