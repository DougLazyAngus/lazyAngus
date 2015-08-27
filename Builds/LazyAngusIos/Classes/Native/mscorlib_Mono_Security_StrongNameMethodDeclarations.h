#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.StrongName
struct StrongName_t4423;
// System.Byte[]
struct ByteU5BU5D_t66;
// System.String
struct String_t;

// System.Void Mono.Security.StrongName::.cctor()
extern "C" void StrongName__cctor_m16770 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.StrongName::get_PublicKey()
extern "C" ByteU5BU5D_t66* StrongName_get_PublicKey_m16771 (StrongName_t4423 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.StrongName::get_PublicKeyToken()
extern "C" ByteU5BU5D_t66* StrongName_get_PublicKeyToken_m16772 (StrongName_t4423 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.StrongName::get_TokenAlgorithm()
extern "C" String_t* StrongName_get_TokenAlgorithm_m16773 (StrongName_t4423 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
