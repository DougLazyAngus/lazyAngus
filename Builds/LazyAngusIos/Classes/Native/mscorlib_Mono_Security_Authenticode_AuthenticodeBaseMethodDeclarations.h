#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Authenticode.AuthenticodeBase
struct AuthenticodeBase_t4797;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t66;
// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t3137;

// System.Void Mono.Security.Authenticode.AuthenticodeBase::.ctor()
extern "C" void AuthenticodeBase__ctor_m19608 (AuthenticodeBase_t4797 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Authenticode.AuthenticodeBase::get_PEOffset()
extern "C" int32_t AuthenticodeBase_get_PEOffset_m19609 (AuthenticodeBase_t4797 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Authenticode.AuthenticodeBase::Open(System.String)
extern "C" void AuthenticodeBase_Open_m19610 (AuthenticodeBase_t4797 * __this, String_t* ___filename, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Authenticode.AuthenticodeBase::Close()
extern "C" void AuthenticodeBase_Close_m19611 (AuthenticodeBase_t4797 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Authenticode.AuthenticodeBase::ReadFirstBlock()
extern "C" bool AuthenticodeBase_ReadFirstBlock_m19612 (AuthenticodeBase_t4797 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Authenticode.AuthenticodeBase::GetSecurityEntry()
extern "C" ByteU5BU5D_t66* AuthenticodeBase_GetSecurityEntry_m19613 (AuthenticodeBase_t4797 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Authenticode.AuthenticodeBase::GetHash(System.Security.Cryptography.HashAlgorithm)
extern "C" ByteU5BU5D_t66* AuthenticodeBase_GetHash_m19614 (AuthenticodeBase_t4797 * __this, HashAlgorithm_t3137 * ___hash, const MethodInfo* method) IL2CPP_METHOD_ATTR;
