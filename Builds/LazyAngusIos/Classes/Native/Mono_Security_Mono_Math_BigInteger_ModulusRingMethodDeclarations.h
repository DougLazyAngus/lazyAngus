#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Math.BigInteger/ModulusRing
struct ModulusRing_t3731;
// Mono.Math.BigInteger
struct BigInteger_t3730;

// System.Void Mono.Math.BigInteger/ModulusRing::.ctor(Mono.Math.BigInteger)
extern "C" void ModulusRing__ctor_m12012 (ModulusRing_t3731 * __this, BigInteger_t3730 * ___modulus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/ModulusRing::BarrettReduction(Mono.Math.BigInteger)
extern "C" void ModulusRing_BarrettReduction_m12013 (ModulusRing_t3731 * __this, BigInteger_t3730 * ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Multiply(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t3730 * ModulusRing_Multiply_m12014 (ModulusRing_t3731 * __this, BigInteger_t3730 * ___a, BigInteger_t3730 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Difference(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t3730 * ModulusRing_Difference_m12015 (ModulusRing_t3731 * __this, BigInteger_t3730 * ___a, BigInteger_t3730 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t3730 * ModulusRing_Pow_m12016 (ModulusRing_t3731 * __this, BigInteger_t3730 * ___a, BigInteger_t3730 * ___k, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(System.UInt32,Mono.Math.BigInteger)
extern "C" BigInteger_t3730 * ModulusRing_Pow_m12017 (ModulusRing_t3731 * __this, uint32_t ___b, BigInteger_t3730 * ___exp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
