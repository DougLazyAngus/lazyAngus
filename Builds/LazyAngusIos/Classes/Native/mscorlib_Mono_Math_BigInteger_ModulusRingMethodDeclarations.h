﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Math.BigInteger/ModulusRing
struct ModulusRing_t2362;
// Mono.Math.BigInteger
struct BigInteger_t2361;

// System.Void Mono.Math.BigInteger/ModulusRing::.ctor(Mono.Math.BigInteger)
extern "C" void ModulusRing__ctor_m12809 (ModulusRing_t2362 * __this, BigInteger_t2361 * ___modulus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/ModulusRing::BarrettReduction(Mono.Math.BigInteger)
extern "C" void ModulusRing_BarrettReduction_m12810 (ModulusRing_t2362 * __this, BigInteger_t2361 * ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Multiply(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t2361 * ModulusRing_Multiply_m12811 (ModulusRing_t2362 * __this, BigInteger_t2361 * ___a, BigInteger_t2361 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Difference(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t2361 * ModulusRing_Difference_m12812 (ModulusRing_t2362 * __this, BigInteger_t2361 * ___a, BigInteger_t2361 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t2361 * ModulusRing_Pow_m12813 (ModulusRing_t2362 * __this, BigInteger_t2361 * ___a, BigInteger_t2361 * ___k, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(System.UInt32,Mono.Math.BigInteger)
extern "C" BigInteger_t2361 * ModulusRing_Pow_m12814 (ModulusRing_t2362 * __this, uint32_t ___b, BigInteger_t2361 * ___exp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
