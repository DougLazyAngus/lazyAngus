#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Authenticode.AuthenticodeBase
struct AuthenticodeBase_t4793;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t66;
// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t3133;

// System.Void Mono.Security.Authenticode.AuthenticodeBase::.ctor()
extern "C" void AuthenticodeBase__ctor_m19595 (AuthenticodeBase_t4793 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Authenticode.AuthenticodeBase::get_PEOffset()
extern "C" int32_t AuthenticodeBase_get_PEOffset_m19596 (AuthenticodeBase_t4793 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Authenticode.AuthenticodeBase::Open(System.String)
extern "C" void AuthenticodeBase_Open_m19597 (AuthenticodeBase_t4793 * __this, String_t* ___filename, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Authenticode.AuthenticodeBase::Close()
extern "C" void AuthenticodeBase_Close_m19598 (AuthenticodeBase_t4793 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Authenticode.AuthenticodeBase::ReadFirstBlock()
extern "C" bool AuthenticodeBase_ReadFirstBlock_m19599 (AuthenticodeBase_t4793 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Authenticode.AuthenticodeBase::GetSecurityEntry()
extern "C" ByteU5BU5D_t66* AuthenticodeBase_GetSecurityEntry_m19600 (AuthenticodeBase_t4793 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Authenticode.AuthenticodeBase::GetHash(System.Security.Cryptography.HashAlgorithm)
extern "C" ByteU5BU5D_t66* AuthenticodeBase_GetHash_m19601 (AuthenticodeBase_t4793 * __this, HashAlgorithm_t3133 * ___hash, const MethodInfo* method) IL2CPP_METHOD_ATTR;
