﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Math.BigInteger
struct BigInteger_t4391;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t3780;
// System.Byte[]
struct ByteU5BU5D_t66;
// System.String
struct String_t;
// System.Object
struct Object_t;
// Mono.Math.BigInteger/Sign
#include "mscorlib_Mono_Math_BigInteger_Sign.h"

// System.Void Mono.Math.BigInteger::.ctor(Mono.Math.BigInteger/Sign,System.UInt32)
extern "C" void BigInteger__ctor_m16468 (BigInteger_t4391 * __this, int32_t ___sign, uint32_t ___len, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger::.ctor(Mono.Math.BigInteger)
extern "C" void BigInteger__ctor_m16469 (BigInteger_t4391 * __this, BigInteger_t4391 * ___bi, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger::.ctor(Mono.Math.BigInteger,System.UInt32)
extern "C" void BigInteger__ctor_m16470 (BigInteger_t4391 * __this, BigInteger_t4391 * ___bi, uint32_t ___len, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger::.ctor(System.Byte[])
extern "C" void BigInteger__ctor_m16471 (BigInteger_t4391 * __this, ByteU5BU5D_t66* ___inData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger::.ctor(System.UInt32)
extern "C" void BigInteger__ctor_m16472 (BigInteger_t4391 * __this, uint32_t ___ui, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger::.cctor()
extern "C" void BigInteger__cctor_m16473 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RandomNumberGenerator Mono.Math.BigInteger::get_Rng()
extern "C" RandomNumberGenerator_t3780 * BigInteger_get_Rng_m16474 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::GenerateRandom(System.Int32,System.Security.Cryptography.RandomNumberGenerator)
extern "C" BigInteger_t4391 * BigInteger_GenerateRandom_m16475 (Object_t * __this /* static, unused */, int32_t ___bits, RandomNumberGenerator_t3780 * ___rng, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::GenerateRandom(System.Int32)
extern "C" BigInteger_t4391 * BigInteger_GenerateRandom_m16476 (Object_t * __this /* static, unused */, int32_t ___bits, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger::Randomize(System.Security.Cryptography.RandomNumberGenerator)
extern "C" void BigInteger_Randomize_m16477 (BigInteger_t4391 * __this, RandomNumberGenerator_t3780 * ___rng, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger::Randomize()
extern "C" void BigInteger_Randomize_m16478 (BigInteger_t4391 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Math.BigInteger::BitCount()
extern "C" int32_t BigInteger_BitCount_m16479 (BigInteger_t4391 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.BigInteger::TestBit(System.UInt32)
extern "C" bool BigInteger_TestBit_m16480 (BigInteger_t4391 * __this, uint32_t ___bitNum, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.BigInteger::TestBit(System.Int32)
extern "C" bool BigInteger_TestBit_m16481 (BigInteger_t4391 * __this, int32_t ___bitNum, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger::SetBit(System.UInt32)
extern "C" void BigInteger_SetBit_m16482 (BigInteger_t4391 * __this, uint32_t ___bitNum, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger::SetBit(System.UInt32,System.Boolean)
extern "C" void BigInteger_SetBit_m16483 (BigInteger_t4391 * __this, uint32_t ___bitNum, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Math.BigInteger::LowestSetBit()
extern "C" int32_t BigInteger_LowestSetBit_m16484 (BigInteger_t4391 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Math.BigInteger::GetBytes()
extern "C" ByteU5BU5D_t66* BigInteger_GetBytes_m16485 (BigInteger_t4391 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Math.BigInteger::ToString(System.UInt32)
extern "C" String_t* BigInteger_ToString_m16486 (BigInteger_t4391 * __this, uint32_t ___radix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Math.BigInteger::ToString(System.UInt32,System.String)
extern "C" String_t* BigInteger_ToString_m16487 (BigInteger_t4391 * __this, uint32_t ___radix, String_t* ___characterSet, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger::Normalize()
extern "C" void BigInteger_Normalize_m16488 (BigInteger_t4391 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger::Clear()
extern "C" void BigInteger_Clear_m16489 (BigInteger_t4391 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Math.BigInteger::GetHashCode()
extern "C" int32_t BigInteger_GetHashCode_m16490 (BigInteger_t4391 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Math.BigInteger::ToString()
extern "C" String_t* BigInteger_ToString_m16491 (BigInteger_t4391 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.BigInteger::Equals(System.Object)
extern "C" bool BigInteger_Equals_m16492 (BigInteger_t4391 * __this, Object_t * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::ModInverse(Mono.Math.BigInteger)
extern "C" BigInteger_t4391 * BigInteger_ModInverse_m16493 (BigInteger_t4391 * __this, BigInteger_t4391 * ___modulus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::ModPow(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t4391 * BigInteger_ModPow_m16494 (BigInteger_t4391 * __this, BigInteger_t4391 * ___exp, BigInteger_t4391 * ___n, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.BigInteger::IsProbablePrime()
extern "C" bool BigInteger_IsProbablePrime_m16495 (BigInteger_t4391 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::GeneratePseudoPrime(System.Int32)
extern "C" BigInteger_t4391 * BigInteger_GeneratePseudoPrime_m16496 (Object_t * __this /* static, unused */, int32_t ___bits, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger::Incr2()
extern "C" void BigInteger_Incr2_m16497 (BigInteger_t4391 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::op_Implicit(System.UInt32)
extern "C" BigInteger_t4391 * BigInteger_op_Implicit_m16498 (Object_t * __this /* static, unused */, uint32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::op_Implicit(System.Int32)
extern "C" BigInteger_t4391 * BigInteger_op_Implicit_m16499 (Object_t * __this /* static, unused */, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::op_Addition(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t4391 * BigInteger_op_Addition_m16500 (Object_t * __this /* static, unused */, BigInteger_t4391 * ___bi1, BigInteger_t4391 * ___bi2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::op_Subtraction(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t4391 * BigInteger_op_Subtraction_m16501 (Object_t * __this /* static, unused */, BigInteger_t4391 * ___bi1, BigInteger_t4391 * ___bi2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Mono.Math.BigInteger::op_Modulus(Mono.Math.BigInteger,System.UInt32)
extern "C" uint32_t BigInteger_op_Modulus_m16502 (Object_t * __this /* static, unused */, BigInteger_t4391 * ___bi, uint32_t ___ui, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::op_Modulus(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t4391 * BigInteger_op_Modulus_m16503 (Object_t * __this /* static, unused */, BigInteger_t4391 * ___bi1, BigInteger_t4391 * ___bi2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::op_Division(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t4391 * BigInteger_op_Division_m16504 (Object_t * __this /* static, unused */, BigInteger_t4391 * ___bi1, BigInteger_t4391 * ___bi2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::op_Multiply(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t4391 * BigInteger_op_Multiply_m16505 (Object_t * __this /* static, unused */, BigInteger_t4391 * ___bi1, BigInteger_t4391 * ___bi2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::op_Multiply(Mono.Math.BigInteger,System.Int32)
extern "C" BigInteger_t4391 * BigInteger_op_Multiply_m16506 (Object_t * __this /* static, unused */, BigInteger_t4391 * ___bi, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::op_LeftShift(Mono.Math.BigInteger,System.Int32)
extern "C" BigInteger_t4391 * BigInteger_op_LeftShift_m16507 (Object_t * __this /* static, unused */, BigInteger_t4391 * ___bi1, int32_t ___shiftVal, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::op_RightShift(Mono.Math.BigInteger,System.Int32)
extern "C" BigInteger_t4391 * BigInteger_op_RightShift_m16508 (Object_t * __this /* static, unused */, BigInteger_t4391 * ___bi1, int32_t ___shiftVal, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.BigInteger::op_Equality(Mono.Math.BigInteger,System.UInt32)
extern "C" bool BigInteger_op_Equality_m16509 (Object_t * __this /* static, unused */, BigInteger_t4391 * ___bi1, uint32_t ___ui, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.BigInteger::op_Inequality(Mono.Math.BigInteger,System.UInt32)
extern "C" bool BigInteger_op_Inequality_m16510 (Object_t * __this /* static, unused */, BigInteger_t4391 * ___bi1, uint32_t ___ui, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.BigInteger::op_Equality(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" bool BigInteger_op_Equality_m16511 (Object_t * __this /* static, unused */, BigInteger_t4391 * ___bi1, BigInteger_t4391 * ___bi2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.BigInteger::op_Inequality(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" bool BigInteger_op_Inequality_m16512 (Object_t * __this /* static, unused */, BigInteger_t4391 * ___bi1, BigInteger_t4391 * ___bi2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.BigInteger::op_GreaterThan(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" bool BigInteger_op_GreaterThan_m16513 (Object_t * __this /* static, unused */, BigInteger_t4391 * ___bi1, BigInteger_t4391 * ___bi2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.BigInteger::op_LessThan(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" bool BigInteger_op_LessThan_m16514 (Object_t * __this /* static, unused */, BigInteger_t4391 * ___bi1, BigInteger_t4391 * ___bi2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.BigInteger::op_GreaterThanOrEqual(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" bool BigInteger_op_GreaterThanOrEqual_m16515 (Object_t * __this /* static, unused */, BigInteger_t4391 * ___bi1, BigInteger_t4391 * ___bi2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.BigInteger::op_LessThanOrEqual(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" bool BigInteger_op_LessThanOrEqual_m16516 (Object_t * __this /* static, unused */, BigInteger_t4391 * ___bi1, BigInteger_t4391 * ___bi2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
