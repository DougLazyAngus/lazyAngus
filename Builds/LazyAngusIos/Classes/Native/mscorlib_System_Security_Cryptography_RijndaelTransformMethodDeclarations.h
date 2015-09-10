#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.RijndaelTransform
struct RijndaelTransform_t5278;
// System.Security.Cryptography.Rijndael
struct Rijndael_t3285;
// System.Byte[]
struct ByteU5BU5D_t66;
// System.UInt32[]
struct UInt32U5BU5D_t3127;

// System.Void System.Security.Cryptography.RijndaelTransform::.ctor(System.Security.Cryptography.Rijndael,System.Boolean,System.Byte[],System.Byte[])
extern "C" void RijndaelTransform__ctor_m23491 (RijndaelTransform_t5278 * __this, Rijndael_t3285 * ___algo, bool ___encryption, ByteU5BU5D_t66* ___key, ByteU5BU5D_t66* ___iv, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::.cctor()
extern "C" void RijndaelTransform__cctor_m23492 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Clear()
extern "C" void RijndaelTransform_Clear_m23493 (RijndaelTransform_t5278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::ECB(System.Byte[],System.Byte[])
extern "C" void RijndaelTransform_ECB_m23494 (RijndaelTransform_t5278 * __this, ByteU5BU5D_t66* ___input, ByteU5BU5D_t66* ___output, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Security.Cryptography.RijndaelTransform::SubByte(System.UInt32)
extern "C" uint32_t RijndaelTransform_SubByte_m23495 (RijndaelTransform_t5278 * __this, uint32_t ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Encrypt128(System.Byte[],System.Byte[],System.UInt32[])
extern "C" void RijndaelTransform_Encrypt128_m23496 (RijndaelTransform_t5278 * __this, ByteU5BU5D_t66* ___indata, ByteU5BU5D_t66* ___outdata, UInt32U5BU5D_t3127* ___ekey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Encrypt192(System.Byte[],System.Byte[],System.UInt32[])
extern "C" void RijndaelTransform_Encrypt192_m23497 (RijndaelTransform_t5278 * __this, ByteU5BU5D_t66* ___indata, ByteU5BU5D_t66* ___outdata, UInt32U5BU5D_t3127* ___ekey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Encrypt256(System.Byte[],System.Byte[],System.UInt32[])
extern "C" void RijndaelTransform_Encrypt256_m23498 (RijndaelTransform_t5278 * __this, ByteU5BU5D_t66* ___indata, ByteU5BU5D_t66* ___outdata, UInt32U5BU5D_t3127* ___ekey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Decrypt128(System.Byte[],System.Byte[],System.UInt32[])
extern "C" void RijndaelTransform_Decrypt128_m23499 (RijndaelTransform_t5278 * __this, ByteU5BU5D_t66* ___indata, ByteU5BU5D_t66* ___outdata, UInt32U5BU5D_t3127* ___ekey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Decrypt192(System.Byte[],System.Byte[],System.UInt32[])
extern "C" void RijndaelTransform_Decrypt192_m23500 (RijndaelTransform_t5278 * __this, ByteU5BU5D_t66* ___indata, ByteU5BU5D_t66* ___outdata, UInt32U5BU5D_t3127* ___ekey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Decrypt256(System.Byte[],System.Byte[],System.UInt32[])
extern "C" void RijndaelTransform_Decrypt256_m23501 (RijndaelTransform_t5278 * __this, ByteU5BU5D_t66* ___indata, ByteU5BU5D_t66* ___outdata, UInt32U5BU5D_t3127* ___ekey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
