﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.RSASslSignatureFormatter
struct RSASslSignatureFormatter_t1816;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t1848;
// System.Byte[]
struct ByteU5BU5D_t36;
// System.String
struct String_t;

// System.Void Mono.Security.Protocol.Tls.RSASslSignatureFormatter::.ctor(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C" void RSASslSignatureFormatter__ctor_m9270 (RSASslSignatureFormatter_t1816 * __this, AsymmetricAlgorithm_t1848 * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RSASslSignatureFormatter::CreateSignature(System.Byte[])
extern "C" ByteU5BU5D_t36* RSASslSignatureFormatter_CreateSignature_m9271 (RSASslSignatureFormatter_t1816 * __this, ByteU5BU5D_t36* ___rgbHash, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RSASslSignatureFormatter::SetHashAlgorithm(System.String)
extern "C" void RSASslSignatureFormatter_SetHashAlgorithm_m9272 (RSASslSignatureFormatter_t1816 * __this, String_t* ___strName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RSASslSignatureFormatter::SetKey(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C" void RSASslSignatureFormatter_SetKey_m9273 (RSASslSignatureFormatter_t1816 * __this, AsymmetricAlgorithm_t1848 * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
