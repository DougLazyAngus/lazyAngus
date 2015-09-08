#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.StrongName
struct StrongName_t4792;
// System.Security.Cryptography.RSA
struct RSA_t3147;
// System.Byte[]
struct ByteU5BU5D_t66;
// System.String
struct String_t;

// System.Void Mono.Security.StrongName::.ctor(System.Byte[])
extern "C" void StrongName__ctor_m19565 (StrongName_t4792 * __this, ByteU5BU5D_t66* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.StrongName::.ctor(System.Security.Cryptography.RSA)
extern "C" void StrongName__ctor_m19566 (StrongName_t4792 * __this, RSA_t3147 * ___rsa, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.StrongName::.cctor()
extern "C" void StrongName__cctor_m19567 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.StrongName::InvalidateCache()
extern "C" void StrongName_InvalidateCache_m19568 (StrongName_t4792 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.StrongName::set_RSA(System.Security.Cryptography.RSA)
extern "C" void StrongName_set_RSA_m19569 (StrongName_t4792 * __this, RSA_t3147 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.StrongName::get_PublicKey()
extern "C" ByteU5BU5D_t66* StrongName_get_PublicKey_m19570 (StrongName_t4792 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.StrongName::get_PublicKeyToken()
extern "C" ByteU5BU5D_t66* StrongName_get_PublicKeyToken_m19571 (StrongName_t4792 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.StrongName::get_TokenAlgorithm()
extern "C" String_t* StrongName_get_TokenAlgorithm_m19572 (StrongName_t4792 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
