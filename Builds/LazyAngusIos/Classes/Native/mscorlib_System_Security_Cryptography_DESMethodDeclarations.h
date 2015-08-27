#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.DES
struct DES_t3931;
// System.Byte[]
struct ByteU5BU5D_t66;
// System.String
struct String_t;

// System.Void System.Security.Cryptography.DES::.ctor()
extern "C" void DES__ctor_m18617 (DES_t3931 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DES::.cctor()
extern "C" void DES__cctor_m18618 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DES System.Security.Cryptography.DES::Create()
extern "C" DES_t3931 * DES_Create_m13205 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DES System.Security.Cryptography.DES::Create(System.String)
extern "C" DES_t3931 * DES_Create_m18619 (Object_t * __this /* static, unused */, String_t* ___algName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.DES::IsWeakKey(System.Byte[])
extern "C" bool DES_IsWeakKey_m18620 (Object_t * __this /* static, unused */, ByteU5BU5D_t66* ___rgbKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.DES::IsSemiWeakKey(System.Byte[])
extern "C" bool DES_IsSemiWeakKey_m18621 (Object_t * __this /* static, unused */, ByteU5BU5D_t66* ___rgbKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.DES::get_Key()
extern "C" ByteU5BU5D_t66* DES_get_Key_m18622 (DES_t3931 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DES::set_Key(System.Byte[])
extern "C" void DES_set_Key_m18623 (DES_t3931 * __this, ByteU5BU5D_t66* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
