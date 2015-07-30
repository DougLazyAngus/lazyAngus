#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Cryptography.MACAlgorithm
struct MACAlgorithm_t4351;
// System.Security.Cryptography.SymmetricAlgorithm
struct SymmetricAlgorithm_t3752;
// System.Byte[]
struct ByteU5BU5D_t66;

// System.Void Mono.Security.Cryptography.MACAlgorithm::.ctor(System.Security.Cryptography.SymmetricAlgorithm)
extern "C" void MACAlgorithm__ctor_m16284 (MACAlgorithm_t4351 * __this, SymmetricAlgorithm_t3752 * ___algorithm, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.MACAlgorithm::Initialize(System.Byte[])
extern "C" void MACAlgorithm_Initialize_m16285 (MACAlgorithm_t4351 * __this, ByteU5BU5D_t66* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.MACAlgorithm::Core(System.Byte[],System.Int32,System.Int32)
extern "C" void MACAlgorithm_Core_m16286 (MACAlgorithm_t4351 * __this, ByteU5BU5D_t66* ___rgb, int32_t ___ib, int32_t ___cb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.MACAlgorithm::Final()
extern "C" ByteU5BU5D_t66* MACAlgorithm_Final_m16287 (MACAlgorithm_t4351 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
