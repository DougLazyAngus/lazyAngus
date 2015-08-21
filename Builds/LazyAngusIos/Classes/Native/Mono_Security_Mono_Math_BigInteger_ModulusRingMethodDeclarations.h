#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Math.BigInteger/ModulusRing
struct ModulusRing_t3775;
// Mono.Math.BigInteger
struct BigInteger_t3774;

// System.Void Mono.Math.BigInteger/ModulusRing::.ctor(Mono.Math.BigInteger)
extern "C" void ModulusRing__ctor_m12245 (ModulusRing_t3775 * __this, BigInteger_t3774 * ___modulus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/ModulusRing::BarrettReduction(Mono.Math.BigInteger)
extern "C" void ModulusRing_BarrettReduction_m12246 (ModulusRing_t3775 * __this, BigInteger_t3774 * ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Multiply(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t3774 * ModulusRing_Multiply_m12247 (ModulusRing_t3775 * __this, BigInteger_t3774 * ___a, BigInteger_t3774 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Difference(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t3774 * ModulusRing_Difference_m12248 (ModulusRing_t3775 * __this, BigInteger_t3774 * ___a, BigInteger_t3774 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t3774 * ModulusRing_Pow_m12249 (ModulusRing_t3775 * __this, BigInteger_t3774 * ___a, BigInteger_t3774 * ___k, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(System.UInt32,Mono.Math.BigInteger)
extern "C" BigInteger_t3774 * ModulusRing_Pow_m12250 (ModulusRing_t3775 * __this, uint32_t ___b, BigInteger_t3774 * ___exp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
