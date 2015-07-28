#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.RijndaelTransform
struct RijndaelTransform_t4648;
// System.Security.Cryptography.Rijndael
struct Rijndael_t3876;
// System.Byte[]
struct ByteU5BU5D_t66;
// System.UInt32[]
struct UInt32U5BU5D_t3160;

// System.Void System.Security.Cryptography.RijndaelTransform::.ctor(System.Security.Cryptography.Rijndael,System.Boolean,System.Byte[],System.Byte[])
extern "C" void RijndaelTransform__ctor_m18458 (RijndaelTransform_t4648 * __this, Rijndael_t3876 * ___algo, bool ___encryption, ByteU5BU5D_t66* ___key, ByteU5BU5D_t66* ___iv, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::.cctor()
extern "C" void RijndaelTransform__cctor_m18459 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Clear()
extern "C" void RijndaelTransform_Clear_m18460 (RijndaelTransform_t4648 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::ECB(System.Byte[],System.Byte[])
extern "C" void RijndaelTransform_ECB_m18461 (RijndaelTransform_t4648 * __this, ByteU5BU5D_t66* ___input, ByteU5BU5D_t66* ___output, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Security.Cryptography.RijndaelTransform::SubByte(System.UInt32)
extern "C" uint32_t RijndaelTransform_SubByte_m18462 (RijndaelTransform_t4648 * __this, uint32_t ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Encrypt128(System.Byte[],System.Byte[],System.UInt32[])
extern "C" void RijndaelTransform_Encrypt128_m18463 (RijndaelTransform_t4648 * __this, ByteU5BU5D_t66* ___indata, ByteU5BU5D_t66* ___outdata, UInt32U5BU5D_t3160* ___ekey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Encrypt192(System.Byte[],System.Byte[],System.UInt32[])
extern "C" void RijndaelTransform_Encrypt192_m18464 (RijndaelTransform_t4648 * __this, ByteU5BU5D_t66* ___indata, ByteU5BU5D_t66* ___outdata, UInt32U5BU5D_t3160* ___ekey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Encrypt256(System.Byte[],System.Byte[],System.UInt32[])
extern "C" void RijndaelTransform_Encrypt256_m18465 (RijndaelTransform_t4648 * __this, ByteU5BU5D_t66* ___indata, ByteU5BU5D_t66* ___outdata, UInt32U5BU5D_t3160* ___ekey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Decrypt128(System.Byte[],System.Byte[],System.UInt32[])
extern "C" void RijndaelTransform_Decrypt128_m18466 (RijndaelTransform_t4648 * __this, ByteU5BU5D_t66* ___indata, ByteU5BU5D_t66* ___outdata, UInt32U5BU5D_t3160* ___ekey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Decrypt192(System.Byte[],System.Byte[],System.UInt32[])
extern "C" void RijndaelTransform_Decrypt192_m18467 (RijndaelTransform_t4648 * __this, ByteU5BU5D_t66* ___indata, ByteU5BU5D_t66* ___outdata, UInt32U5BU5D_t3160* ___ekey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Decrypt256(System.Byte[],System.Byte[],System.UInt32[])
extern "C" void RijndaelTransform_Decrypt256_m18468 (RijndaelTransform_t4648 * __this, ByteU5BU5D_t66* ___indata, ByteU5BU5D_t66* ___outdata, UInt32U5BU5D_t3160* ___ekey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
