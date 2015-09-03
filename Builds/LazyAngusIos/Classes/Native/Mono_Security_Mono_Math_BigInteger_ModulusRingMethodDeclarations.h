#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Math.BigInteger/ModulusRing
struct ModulusRing_t3114;
// Mono.Math.BigInteger
struct BigInteger_t3113;

// System.Void Mono.Math.BigInteger/ModulusRing::.ctor(Mono.Math.BigInteger)
extern "C" void ModulusRing__ctor_m10573 (ModulusRing_t3114 * __this, BigInteger_t3113 * ___modulus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/ModulusRing::BarrettReduction(Mono.Math.BigInteger)
extern "C" void ModulusRing_BarrettReduction_m10574 (ModulusRing_t3114 * __this, BigInteger_t3113 * ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Multiply(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t3113 * ModulusRing_Multiply_m10575 (ModulusRing_t3114 * __this, BigInteger_t3113 * ___a, BigInteger_t3113 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Difference(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t3113 * ModulusRing_Difference_m10576 (ModulusRing_t3114 * __this, BigInteger_t3113 * ___a, BigInteger_t3113 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t3113 * ModulusRing_Pow_m10577 (ModulusRing_t3114 * __this, BigInteger_t3113 * ___a, BigInteger_t3113 * ___k, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(System.UInt32,Mono.Math.BigInteger)
extern "C" BigInteger_t3113 * ModulusRing_Pow_m10578 (ModulusRing_t3114 * __this, uint32_t ___b, BigInteger_t3113 * ___exp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
