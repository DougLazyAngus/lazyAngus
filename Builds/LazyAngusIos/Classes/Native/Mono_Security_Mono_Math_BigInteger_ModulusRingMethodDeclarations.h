#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Math.BigInteger/ModulusRing
struct ModulusRing_t1724;
// Mono.Math.BigInteger
struct BigInteger_t1723;

// System.Void Mono.Math.BigInteger/ModulusRing::.ctor(Mono.Math.BigInteger)
extern "C" void ModulusRing__ctor_m8680 (ModulusRing_t1724 * __this, BigInteger_t1723 * ___modulus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/ModulusRing::BarrettReduction(Mono.Math.BigInteger)
extern "C" void ModulusRing_BarrettReduction_m8681 (ModulusRing_t1724 * __this, BigInteger_t1723 * ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Multiply(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t1723 * ModulusRing_Multiply_m8682 (ModulusRing_t1724 * __this, BigInteger_t1723 * ___a, BigInteger_t1723 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Difference(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t1723 * ModulusRing_Difference_m8683 (ModulusRing_t1724 * __this, BigInteger_t1723 * ___a, BigInteger_t1723 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t1723 * ModulusRing_Pow_m8684 (ModulusRing_t1724 * __this, BigInteger_t1723 * ___a, BigInteger_t1723 * ___k, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(System.UInt32,Mono.Math.BigInteger)
extern "C" BigInteger_t1723 * ModulusRing_Pow_m8685 (ModulusRing_t1724 * __this, uint32_t ___b, BigInteger_t1723 * ___exp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
