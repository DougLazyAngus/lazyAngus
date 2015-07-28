#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.ClientRecordProtocol
struct ClientRecordProtocol_t3790;
// System.IO.Stream
struct Stream_t51;
// Mono.Security.Protocol.Tls.ClientContext
struct ClientContext_t3789;
// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage
struct HandshakeMessage_t3807;
// Mono.Security.Protocol.Tls.TlsStream
struct TlsStream_t3798;
// System.Byte[]
struct ByteU5BU5D_t66;
// Mono.Security.Protocol.Tls.Handshake.HandshakeType
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Handshake.h"

// System.Void Mono.Security.Protocol.Tls.ClientRecordProtocol::.ctor(System.IO.Stream,Mono.Security.Protocol.Tls.ClientContext)
extern "C" void ClientRecordProtocol__ctor_m12385 (ClientRecordProtocol_t3790 * __this, Stream_t51 * ___innerStream, ClientContext_t3789 * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage Mono.Security.Protocol.Tls.ClientRecordProtocol::GetMessage(Mono.Security.Protocol.Tls.Handshake.HandshakeType)
extern "C" HandshakeMessage_t3807 * ClientRecordProtocol_GetMessage_m12386 (ClientRecordProtocol_t3790 * __this, uint8_t ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.ClientRecordProtocol::ProcessHandshakeMessage(Mono.Security.Protocol.Tls.TlsStream)
extern "C" void ClientRecordProtocol_ProcessHandshakeMessage_m12387 (ClientRecordProtocol_t3790 * __this, TlsStream_t3798 * ___handMsg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage Mono.Security.Protocol.Tls.ClientRecordProtocol::createClientHandshakeMessage(Mono.Security.Protocol.Tls.Handshake.HandshakeType)
extern "C" HandshakeMessage_t3807 * ClientRecordProtocol_createClientHandshakeMessage_m12388 (ClientRecordProtocol_t3790 * __this, uint8_t ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage Mono.Security.Protocol.Tls.ClientRecordProtocol::createServerHandshakeMessage(Mono.Security.Protocol.Tls.Handshake.HandshakeType,System.Byte[])
extern "C" HandshakeMessage_t3807 * ClientRecordProtocol_createServerHandshakeMessage_m12389 (ClientRecordProtocol_t3790 * __this, uint8_t ___type, ByteU5BU5D_t66* ___buffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
