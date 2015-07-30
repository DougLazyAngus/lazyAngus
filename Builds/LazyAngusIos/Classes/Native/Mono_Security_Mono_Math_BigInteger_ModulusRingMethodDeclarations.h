#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Math.BigInteger/ModulusRing
struct ModulusRing_t3727;
// Mono.Math.BigInteger
struct BigInteger_t3726;

// System.Void Mono.Math.BigInteger/ModulusRing::.ctor(Mono.Math.BigInteger)
extern "C" void ModulusRing__ctor_m11981 (ModulusRing_t3727 * __this, BigInteger_t3726 * ___modulus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/ModulusRing::BarrettReduction(Mono.Math.BigInteger)
extern "C" void ModulusRing_BarrettReduction_m11982 (ModulusRing_t3727 * __this, BigInteger_t3726 * ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Multiply(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t3726 * ModulusRing_Multiply_m11983 (ModulusRing_t3727 * __this, BigInteger_t3726 * ___a, BigInteger_t3726 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Difference(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t3726 * ModulusRing_Difference_m11984 (ModulusRing_t3727 * __this, BigInteger_t3726 * ___a, BigInteger_t3726 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t3726 * ModulusRing_Pow_m11985 (ModulusRing_t3727 * __this, BigInteger_t3726 * ___a, BigInteger_t3726 * ___k, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(System.UInt32,Mono.Math.BigInteger)
extern "C" BigInteger_t3726 * ModulusRing_Pow_m11986 (ModulusRing_t3727 * __this, uint32_t ___b, BigInteger_t3726 * ___exp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
