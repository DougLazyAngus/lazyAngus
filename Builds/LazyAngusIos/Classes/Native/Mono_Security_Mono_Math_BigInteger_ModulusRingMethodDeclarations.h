#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Math.BigInteger/ModulusRing
struct ModulusRing_t3730;
// Mono.Math.BigInteger
struct BigInteger_t3729;

// System.Void Mono.Math.BigInteger/ModulusRing::.ctor(Mono.Math.BigInteger)
extern "C" void ModulusRing__ctor_m12004 (ModulusRing_t3730 * __this, BigInteger_t3729 * ___modulus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/ModulusRing::BarrettReduction(Mono.Math.BigInteger)
extern "C" void ModulusRing_BarrettReduction_m12005 (ModulusRing_t3730 * __this, BigInteger_t3729 * ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Multiply(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t3729 * ModulusRing_Multiply_m12006 (ModulusRing_t3730 * __this, BigInteger_t3729 * ___a, BigInteger_t3729 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Difference(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t3729 * ModulusRing_Difference_m12007 (ModulusRing_t3730 * __this, BigInteger_t3729 * ___a, BigInteger_t3729 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t3729 * ModulusRing_Pow_m12008 (ModulusRing_t3730 * __this, BigInteger_t3729 * ___a, BigInteger_t3729 * ___k, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(System.UInt32,Mono.Math.BigInteger)
extern "C" BigInteger_t3729 * ModulusRing_Pow_m12009 (ModulusRing_t3730 * __this, uint32_t ___b, BigInteger_t3729 * ___exp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
