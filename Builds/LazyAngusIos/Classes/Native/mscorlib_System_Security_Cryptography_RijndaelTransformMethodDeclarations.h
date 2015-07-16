﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.RijndaelTransform
struct RijndaelTransform_t2628;
// System.Security.Cryptography.Rijndael
struct Rijndael_t2257;
// System.Byte[]
struct ByteU5BU5D_t36;
// System.UInt32[]
struct UInt32U5BU5D_t2050;

// System.Void System.Security.Cryptography.RijndaelTransform::.ctor(System.Security.Cryptography.Rijndael,System.Boolean,System.Byte[],System.Byte[])
extern "C" void RijndaelTransform__ctor_m14587 (RijndaelTransform_t2628 * __this, Rijndael_t2257 * ___algo, bool ___encryption, ByteU5BU5D_t36* ___key, ByteU5BU5D_t36* ___iv, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::.cctor()
extern "C" void RijndaelTransform__cctor_m14588 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Clear()
extern "C" void RijndaelTransform_Clear_m14589 (RijndaelTransform_t2628 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::ECB(System.Byte[],System.Byte[])
extern "C" void RijndaelTransform_ECB_m14590 (RijndaelTransform_t2628 * __this, ByteU5BU5D_t36* ___input, ByteU5BU5D_t36* ___output, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Security.Cryptography.RijndaelTransform::SubByte(System.UInt32)
extern "C" uint32_t RijndaelTransform_SubByte_m14591 (RijndaelTransform_t2628 * __this, uint32_t ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Encrypt128(System.Byte[],System.Byte[],System.UInt32[])
extern "C" void RijndaelTransform_Encrypt128_m14592 (RijndaelTransform_t2628 * __this, ByteU5BU5D_t36* ___indata, ByteU5BU5D_t36* ___outdata, UInt32U5BU5D_t2050* ___ekey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Encrypt192(System.Byte[],System.Byte[],System.UInt32[])
extern "C" void RijndaelTransform_Encrypt192_m14593 (RijndaelTransform_t2628 * __this, ByteU5BU5D_t36* ___indata, ByteU5BU5D_t36* ___outdata, UInt32U5BU5D_t2050* ___ekey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Encrypt256(System.Byte[],System.Byte[],System.UInt32[])
extern "C" void RijndaelTransform_Encrypt256_m14594 (RijndaelTransform_t2628 * __this, ByteU5BU5D_t36* ___indata, ByteU5BU5D_t36* ___outdata, UInt32U5BU5D_t2050* ___ekey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Decrypt128(System.Byte[],System.Byte[],System.UInt32[])
extern "C" void RijndaelTransform_Decrypt128_m14595 (RijndaelTransform_t2628 * __this, ByteU5BU5D_t36* ___indata, ByteU5BU5D_t36* ___outdata, UInt32U5BU5D_t2050* ___ekey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Decrypt192(System.Byte[],System.Byte[],System.UInt32[])
extern "C" void RijndaelTransform_Decrypt192_m14596 (RijndaelTransform_t2628 * __this, ByteU5BU5D_t36* ___indata, ByteU5BU5D_t36* ___outdata, UInt32U5BU5D_t2050* ___ekey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Decrypt256(System.Byte[],System.Byte[],System.UInt32[])
extern "C" void RijndaelTransform_Decrypt256_m14597 (RijndaelTransform_t2628 * __this, ByteU5BU5D_t36* ___indata, ByteU5BU5D_t36* ___outdata, UInt32U5BU5D_t2050* ___ekey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
