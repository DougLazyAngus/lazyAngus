#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage
struct HandshakeMessage_t3214;
// Mono.Security.Protocol.Tls.Context
struct Context_t3189;
// System.Byte[]
struct ByteU5BU5D_t66;
// Mono.Security.Protocol.Tls.Handshake.HandshakeType
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Handshake.h"
// Mono.Security.Protocol.Tls.ContentType
#include "Mono_Security_Mono_Security_Protocol_Tls_ContentType.h"

// System.Void Mono.Security.Protocol.Tls.Handshake.HandshakeMessage::.ctor(Mono.Security.Protocol.Tls.Context,Mono.Security.Protocol.Tls.Handshake.HandshakeType)
extern "C" void HandshakeMessage__ctor_m11441 (HandshakeMessage_t3214 * __this, Context_t3189 * ___context, uint8_t ___handshakeType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.HandshakeMessage::.ctor(Mono.Security.Protocol.Tls.Context,Mono.Security.Protocol.Tls.Handshake.HandshakeType,Mono.Security.Protocol.Tls.ContentType)
extern "C" void HandshakeMessage__ctor_m11442 (HandshakeMessage_t3214 * __this, Context_t3189 * ___context, uint8_t ___handshakeType, uint8_t ___contentType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.HandshakeMessage::.ctor(Mono.Security.Protocol.Tls.Context,Mono.Security.Protocol.Tls.Handshake.HandshakeType,System.Byte[])
extern "C" void HandshakeMessage__ctor_m11443 (HandshakeMessage_t3214 * __this, Context_t3189 * ___context, uint8_t ___handshakeType, ByteU5BU5D_t66* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.Context Mono.Security.Protocol.Tls.Handshake.HandshakeMessage::get_Context()
extern "C" Context_t3189 * HandshakeMessage_get_Context_m11444 (HandshakeMessage_t3214 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.Handshake.HandshakeType Mono.Security.Protocol.Tls.Handshake.HandshakeMessage::get_HandshakeType()
extern "C" uint8_t HandshakeMessage_get_HandshakeType_m11445 (HandshakeMessage_t3214 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.ContentType Mono.Security.Protocol.Tls.Handshake.HandshakeMessage::get_ContentType()
extern "C" uint8_t HandshakeMessage_get_ContentType_m11446 (HandshakeMessage_t3214 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.HandshakeMessage::ProcessAsTls1()
// System.Void Mono.Security.Protocol.Tls.Handshake.HandshakeMessage::ProcessAsSsl3()
// System.Void Mono.Security.Protocol.Tls.Handshake.HandshakeMessage::Process()
extern "C" void HandshakeMessage_Process_m11447 (HandshakeMessage_t3214 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.HandshakeMessage::Update()
extern "C" void HandshakeMessage_Update_m11448 (HandshakeMessage_t3214 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.Handshake.HandshakeMessage::EncodeMessage()
extern "C" ByteU5BU5D_t66* HandshakeMessage_EncodeMessage_m11449 (HandshakeMessage_t3214 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.Handshake.HandshakeMessage::Compare(System.Byte[],System.Byte[])
extern "C" bool HandshakeMessage_Compare_m11450 (Object_t * __this /* static, unused */, ByteU5BU5D_t66* ___buffer1, ByteU5BU5D_t66* ___buffer2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
