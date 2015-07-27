#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Math.BigInteger/ModulusRing
struct ModulusRing_t1723;
// Mono.Math.BigInteger
struct BigInteger_t1722;

// System.Void Mono.Math.BigInteger/ModulusRing::.ctor(Mono.Math.BigInteger)
extern "C" void ModulusRing__ctor_m8673 (ModulusRing_t1723 * __this, BigInteger_t1722 * ___modulus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/ModulusRing::BarrettReduction(Mono.Math.BigInteger)
extern "C" void ModulusRing_BarrettReduction_m8674 (ModulusRing_t1723 * __this, BigInteger_t1722 * ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Multiply(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t1722 * ModulusRing_Multiply_m8675 (ModulusRing_t1723 * __this, BigInteger_t1722 * ___a, BigInteger_t1722 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Difference(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t1722 * ModulusRing_Difference_m8676 (ModulusRing_t1723 * __this, BigInteger_t1722 * ___a, BigInteger_t1722 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t1722 * ModulusRing_Pow_m8677 (ModulusRing_t1723 * __this, BigInteger_t1722 * ___a, BigInteger_t1722 * ___k, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(System.UInt32,Mono.Math.BigInteger)
extern "C" BigInteger_t1722 * ModulusRing_Pow_m8678 (ModulusRing_t1723 * __this, uint32_t ___b, BigInteger_t1722 * ___exp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
