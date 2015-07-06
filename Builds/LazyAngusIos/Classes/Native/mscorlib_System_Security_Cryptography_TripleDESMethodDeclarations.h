#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.TripleDES
struct TripleDES_t2223;
// System.Byte[]
struct ByteU5BU5D_t36;
// System.String
struct String_t;

// System.Void System.Security.Cryptography.TripleDES::.ctor()
extern "C" void TripleDES__ctor_m14467 (TripleDES_t2223 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.TripleDES::get_Key()
extern "C" ByteU5BU5D_t36* TripleDES_get_Key_m14468 (TripleDES_t2223 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.TripleDES::set_Key(System.Byte[])
extern "C" void TripleDES_set_Key_m14469 (TripleDES_t2223 * __this, ByteU5BU5D_t36* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.TripleDES::IsWeakKey(System.Byte[])
extern "C" bool TripleDES_IsWeakKey_m14470 (Object_t * __this /* static, unused */, ByteU5BU5D_t36* ___rgbKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.TripleDES System.Security.Cryptography.TripleDES::Create()
extern "C" TripleDES_t2223 * TripleDES_Create_m11079 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.TripleDES System.Security.Cryptography.TripleDES::Create(System.String)
extern "C" TripleDES_t2223 * TripleDES_Create_m14471 (Object_t * __this /* static, unused */, String_t* ___str, const MethodInfo* method) IL2CPP_METHOD_ATTR;
