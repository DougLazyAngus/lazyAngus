#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.CryptoConfig
struct CryptoConfig_t3258;
// System.String
struct String_t;
// System.Collections.Hashtable
struct Hashtable_t714;
// System.Object
struct Object_t;
// System.Object[]
struct ObjectU5BU5D_t700;
// System.Byte[]
struct ByteU5BU5D_t66;

// System.Void System.Security.Cryptography.CryptoConfig::.cctor()
extern "C" void CryptoConfig__cctor_m23288 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.CryptoConfig::Initialize()
extern "C" void CryptoConfig_Initialize_m23289 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.CryptoConfig::LoadConfig(System.String,System.Collections.Hashtable,System.Collections.Hashtable)
extern "C" void CryptoConfig_LoadConfig_m23290 (Object_t * __this /* static, unused */, String_t* ___filename, Hashtable_t714 * ___algorithms, Hashtable_t714 * ___oid, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Security.Cryptography.CryptoConfig::CreateFromName(System.String)
extern "C" Object_t * CryptoConfig_CreateFromName_m11492 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Security.Cryptography.CryptoConfig::CreateFromName(System.String,System.Object[])
extern "C" Object_t * CryptoConfig_CreateFromName_m18164 (Object_t * __this /* static, unused */, String_t* ___name, ObjectU5BU5D_t700* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.CryptoConfig::MapNameToOID(System.String)
extern "C" String_t* CryptoConfig_MapNameToOID_m11494 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.CryptoConfig::EncodeOID(System.String)
extern "C" ByteU5BU5D_t66* CryptoConfig_EncodeOID_m11483 (Object_t * __this /* static, unused */, String_t* ___str, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.CryptoConfig::EncodeLongNumber(System.Int64)
extern "C" ByteU5BU5D_t66* CryptoConfig_EncodeLongNumber_m23291 (Object_t * __this /* static, unused */, int64_t ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
