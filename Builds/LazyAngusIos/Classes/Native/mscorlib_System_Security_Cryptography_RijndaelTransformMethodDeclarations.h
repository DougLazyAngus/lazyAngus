#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.RijndaelTransform
struct RijndaelTransform_t4701;
// System.Security.Cryptography.Rijndael
struct Rijndael_t3931;
// System.Byte[]
struct ByteU5BU5D_t66;
// System.UInt32[]
struct UInt32U5BU5D_t3215;

// System.Void System.Security.Cryptography.RijndaelTransform::.ctor(System.Security.Cryptography.Rijndael,System.Boolean,System.Byte[],System.Byte[])
extern "C" void RijndaelTransform__ctor_m18767 (RijndaelTransform_t4701 * __this, Rijndael_t3931 * ___algo, bool ___encryption, ByteU5BU5D_t66* ___key, ByteU5BU5D_t66* ___iv, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::.cctor()
extern "C" void RijndaelTransform__cctor_m18768 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Clear()
extern "C" void RijndaelTransform_Clear_m18769 (RijndaelTransform_t4701 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::ECB(System.Byte[],System.Byte[])
extern "C" void RijndaelTransform_ECB_m18770 (RijndaelTransform_t4701 * __this, ByteU5BU5D_t66* ___input, ByteU5BU5D_t66* ___output, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Security.Cryptography.RijndaelTransform::SubByte(System.UInt32)
extern "C" uint32_t RijndaelTransform_SubByte_m18771 (RijndaelTransform_t4701 * __this, uint32_t ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Encrypt128(System.Byte[],System.Byte[],System.UInt32[])
extern "C" void RijndaelTransform_Encrypt128_m18772 (RijndaelTransform_t4701 * __this, ByteU5BU5D_t66* ___indata, ByteU5BU5D_t66* ___outdata, UInt32U5BU5D_t3215* ___ekey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Encrypt192(System.Byte[],System.Byte[],System.UInt32[])
extern "C" void RijndaelTransform_Encrypt192_m18773 (RijndaelTransform_t4701 * __this, ByteU5BU5D_t66* ___indata, ByteU5BU5D_t66* ___outdata, UInt32U5BU5D_t3215* ___ekey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Encrypt256(System.Byte[],System.Byte[],System.UInt32[])
extern "C" void RijndaelTransform_Encrypt256_m18774 (RijndaelTransform_t4701 * __this, ByteU5BU5D_t66* ___indata, ByteU5BU5D_t66* ___outdata, UInt32U5BU5D_t3215* ___ekey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Decrypt128(System.Byte[],System.Byte[],System.UInt32[])
extern "C" void RijndaelTransform_Decrypt128_m18775 (RijndaelTransform_t4701 * __this, ByteU5BU5D_t66* ___indata, ByteU5BU5D_t66* ___outdata, UInt32U5BU5D_t3215* ___ekey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Decrypt192(System.Byte[],System.Byte[],System.UInt32[])
extern "C" void RijndaelTransform_Decrypt192_m18776 (RijndaelTransform_t4701 * __this, ByteU5BU5D_t66* ___indata, ByteU5BU5D_t66* ___outdata, UInt32U5BU5D_t3215* ___ekey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Decrypt256(System.Byte[],System.Byte[],System.UInt32[])
extern "C" void RijndaelTransform_Decrypt256_m18777 (RijndaelTransform_t4701 * __this, ByteU5BU5D_t66* ___indata, ByteU5BU5D_t66* ___outdata, UInt32U5BU5D_t3215* ___ekey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
