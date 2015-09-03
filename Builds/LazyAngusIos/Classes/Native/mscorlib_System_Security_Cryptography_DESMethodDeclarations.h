#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.DES
struct DES_t3271;
// System.Byte[]
struct ByteU5BU5D_t66;
// System.String
struct String_t;

// System.Void System.Security.Cryptography.DES::.ctor()
extern "C" void DES__ctor_m23288 (DES_t3271 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DES::.cctor()
extern "C" void DES__cctor_m23289 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DES System.Security.Cryptography.DES::Create()
extern "C" DES_t3271 * DES_Create_m11527 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DES System.Security.Cryptography.DES::Create(System.String)
extern "C" DES_t3271 * DES_Create_m23290 (Object_t * __this /* static, unused */, String_t* ___algName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.DES::IsWeakKey(System.Byte[])
extern "C" bool DES_IsWeakKey_m23291 (Object_t * __this /* static, unused */, ByteU5BU5D_t66* ___rgbKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.DES::IsSemiWeakKey(System.Byte[])
extern "C" bool DES_IsSemiWeakKey_m23292 (Object_t * __this /* static, unused */, ByteU5BU5D_t66* ___rgbKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.DES::get_Key()
extern "C" ByteU5BU5D_t66* DES_get_Key_m23293 (DES_t3271 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DES::set_Key(System.Byte[])
extern "C" void DES_set_Key_m23294 (DES_t3271 * __this, ByteU5BU5D_t66* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
