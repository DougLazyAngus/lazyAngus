#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.RC2Transform
struct RC2Transform_t4695;
// System.Security.Cryptography.RC2
struct RC2_t3929;
// System.Byte[]
struct ByteU5BU5D_t66;

// System.Void System.Security.Cryptography.RC2Transform::.ctor(System.Security.Cryptography.RC2,System.Boolean,System.Byte[],System.Byte[])
extern "C" void RC2Transform__ctor_m18695 (RC2Transform_t4695 * __this, RC2_t3929 * ___rc2Algo, bool ___encryption, ByteU5BU5D_t66* ___key, ByteU5BU5D_t66* ___iv, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RC2Transform::.cctor()
extern "C" void RC2Transform__cctor_m18696 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RC2Transform::ECB(System.Byte[],System.Byte[])
extern "C" void RC2Transform_ECB_m18697 (RC2Transform_t4695 * __this, ByteU5BU5D_t66* ___input, ByteU5BU5D_t66* ___output, const MethodInfo* method) IL2CPP_METHOD_ATTR;
