#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Math.BigInteger/ModulusRing
struct ModulusRing_t3794;
// Mono.Math.BigInteger
struct BigInteger_t3793;

// System.Void Mono.Math.BigInteger/ModulusRing::.ctor(Mono.Math.BigInteger)
extern "C" void ModulusRing__ctor_m12406 (ModulusRing_t3794 * __this, BigInteger_t3793 * ___modulus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/ModulusRing::BarrettReduction(Mono.Math.BigInteger)
extern "C" void ModulusRing_BarrettReduction_m12407 (ModulusRing_t3794 * __this, BigInteger_t3793 * ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Multiply(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t3793 * ModulusRing_Multiply_m12408 (ModulusRing_t3794 * __this, BigInteger_t3793 * ___a, BigInteger_t3793 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Difference(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t3793 * ModulusRing_Difference_m12409 (ModulusRing_t3794 * __this, BigInteger_t3793 * ___a, BigInteger_t3793 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t3793 * ModulusRing_Pow_m12410 (ModulusRing_t3794 * __this, BigInteger_t3793 * ___a, BigInteger_t3793 * ___k, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(System.UInt32,Mono.Math.BigInteger)
extern "C" BigInteger_t3793 * ModulusRing_Pow_m12411 (ModulusRing_t3794 * __this, uint32_t ___b, BigInteger_t3793 * ___exp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
