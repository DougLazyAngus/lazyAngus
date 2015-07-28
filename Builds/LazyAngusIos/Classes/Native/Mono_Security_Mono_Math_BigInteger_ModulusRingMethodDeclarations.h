#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Math.BigInteger/ModulusRing
struct ModulusRing_t3720;
// Mono.Math.BigInteger
struct BigInteger_t3719;

// System.Void Mono.Math.BigInteger/ModulusRing::.ctor(Mono.Math.BigInteger)
extern "C" void ModulusRing__ctor_m11934 (ModulusRing_t3720 * __this, BigInteger_t3719 * ___modulus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/ModulusRing::BarrettReduction(Mono.Math.BigInteger)
extern "C" void ModulusRing_BarrettReduction_m11935 (ModulusRing_t3720 * __this, BigInteger_t3719 * ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Multiply(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t3719 * ModulusRing_Multiply_m11936 (ModulusRing_t3720 * __this, BigInteger_t3719 * ___a, BigInteger_t3719 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Difference(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t3719 * ModulusRing_Difference_m11937 (ModulusRing_t3720 * __this, BigInteger_t3719 * ___a, BigInteger_t3719 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t3719 * ModulusRing_Pow_m11938 (ModulusRing_t3720 * __this, BigInteger_t3719 * ___a, BigInteger_t3719 * ___k, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(System.UInt32,Mono.Math.BigInteger)
extern "C" BigInteger_t3719 * ModulusRing_Pow_m11939 (ModulusRing_t3720 * __this, uint32_t ___b, BigInteger_t3719 * ___exp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
