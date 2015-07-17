#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Math.BigInteger/ModulusRing
struct ModulusRing_t1722;
// Mono.Math.BigInteger
struct BigInteger_t1721;

// System.Void Mono.Math.BigInteger/ModulusRing::.ctor(Mono.Math.BigInteger)
extern "C" void ModulusRing__ctor_m8665 (ModulusRing_t1722 * __this, BigInteger_t1721 * ___modulus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/ModulusRing::BarrettReduction(Mono.Math.BigInteger)
extern "C" void ModulusRing_BarrettReduction_m8666 (ModulusRing_t1722 * __this, BigInteger_t1721 * ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Multiply(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t1721 * ModulusRing_Multiply_m8667 (ModulusRing_t1722 * __this, BigInteger_t1721 * ___a, BigInteger_t1721 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Difference(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t1721 * ModulusRing_Difference_m8668 (ModulusRing_t1722 * __this, BigInteger_t1721 * ___a, BigInteger_t1721 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t1721 * ModulusRing_Pow_m8669 (ModulusRing_t1722 * __this, BigInteger_t1721 * ___a, BigInteger_t1721 * ___k, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(System.UInt32,Mono.Math.BigInteger)
extern "C" BigInteger_t1721 * ModulusRing_Pow_m8670 (ModulusRing_t1722 * __this, uint32_t ___b, BigInteger_t1721 * ___exp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
