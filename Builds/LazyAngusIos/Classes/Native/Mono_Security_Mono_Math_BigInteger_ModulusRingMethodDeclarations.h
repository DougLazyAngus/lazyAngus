#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Math.BigInteger/ModulusRing
struct ModulusRing_t3729;
// Mono.Math.BigInteger
struct BigInteger_t3728;

// System.Void Mono.Math.BigInteger/ModulusRing::.ctor(Mono.Math.BigInteger)
extern "C" void ModulusRing__ctor_m11997 (ModulusRing_t3729 * __this, BigInteger_t3728 * ___modulus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/ModulusRing::BarrettReduction(Mono.Math.BigInteger)
extern "C" void ModulusRing_BarrettReduction_m11998 (ModulusRing_t3729 * __this, BigInteger_t3728 * ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Multiply(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t3728 * ModulusRing_Multiply_m11999 (ModulusRing_t3729 * __this, BigInteger_t3728 * ___a, BigInteger_t3728 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Difference(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t3728 * ModulusRing_Difference_m12000 (ModulusRing_t3729 * __this, BigInteger_t3728 * ___a, BigInteger_t3728 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t3728 * ModulusRing_Pow_m12001 (ModulusRing_t3729 * __this, BigInteger_t3728 * ___a, BigInteger_t3728 * ___k, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(System.UInt32,Mono.Math.BigInteger)
extern "C" BigInteger_t3728 * ModulusRing_Pow_m12002 (ModulusRing_t3729 * __this, uint32_t ___b, BigInteger_t3728 * ___exp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
