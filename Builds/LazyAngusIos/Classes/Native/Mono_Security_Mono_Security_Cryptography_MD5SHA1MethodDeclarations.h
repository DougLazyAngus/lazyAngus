#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Cryptography.MD5SHA1
struct MD5SHA1_t1782;
// System.Byte[]
struct ByteU5BU5D_t36;
// System.Security.Cryptography.RSA
struct RSA_t1752;

// System.Void Mono.Security.Cryptography.MD5SHA1::.ctor()
extern "C" void MD5SHA1__ctor_m9048 (MD5SHA1_t1782 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.MD5SHA1::Initialize()
extern "C" void MD5SHA1_Initialize_m9049 (MD5SHA1_t1782 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.MD5SHA1::HashFinal()
extern "C" ByteU5BU5D_t36* MD5SHA1_HashFinal_m9050 (MD5SHA1_t1782 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.MD5SHA1::HashCore(System.Byte[],System.Int32,System.Int32)
extern "C" void MD5SHA1_HashCore_m9051 (MD5SHA1_t1782 * __this, ByteU5BU5D_t36* ___array, int32_t ___ibStart, int32_t ___cbSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.MD5SHA1::CreateSignature(System.Security.Cryptography.RSA)
extern "C" ByteU5BU5D_t36* MD5SHA1_CreateSignature_m9052 (MD5SHA1_t1782 * __this, RSA_t1752 * ___rsa, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.MD5SHA1::VerifySignature(System.Security.Cryptography.RSA,System.Byte[])
extern "C" bool MD5SHA1_VerifySignature_m9053 (MD5SHA1_t1782 * __this, RSA_t1752 * ___rsa, ByteU5BU5D_t36* ___rgbSignature, const MethodInfo* method) IL2CPP_METHOD_ATTR;
