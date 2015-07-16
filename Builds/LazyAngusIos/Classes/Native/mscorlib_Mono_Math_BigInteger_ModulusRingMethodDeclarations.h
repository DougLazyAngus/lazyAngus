﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Math.BigInteger/ModulusRing
struct ModulusRing_t2316;
// Mono.Math.BigInteger
struct BigInteger_t2315;

// System.Void Mono.Math.BigInteger/ModulusRing::.ctor(Mono.Math.BigInteger)
extern "C" void ModulusRing__ctor_m12256 (ModulusRing_t2316 * __this, BigInteger_t2315 * ___modulus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/ModulusRing::BarrettReduction(Mono.Math.BigInteger)
extern "C" void ModulusRing_BarrettReduction_m12257 (ModulusRing_t2316 * __this, BigInteger_t2315 * ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Multiply(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t2315 * ModulusRing_Multiply_m12258 (ModulusRing_t2316 * __this, BigInteger_t2315 * ___a, BigInteger_t2315 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Difference(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t2315 * ModulusRing_Difference_m12259 (ModulusRing_t2316 * __this, BigInteger_t2315 * ___a, BigInteger_t2315 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t2315 * ModulusRing_Pow_m12260 (ModulusRing_t2316 * __this, BigInteger_t2315 * ___a, BigInteger_t2315 * ___k, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(System.UInt32,Mono.Math.BigInteger)
extern "C" BigInteger_t2315 * ModulusRing_Pow_m12261 (ModulusRing_t2316 * __this, uint32_t ___b, BigInteger_t2315 * ___exp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
