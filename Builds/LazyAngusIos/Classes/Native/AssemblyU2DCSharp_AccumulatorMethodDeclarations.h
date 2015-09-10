#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Accumulator
struct Accumulator_t672;

// System.Void Accumulator::.ctor()
extern "C" void Accumulator__ctor_m3745 (Accumulator_t672 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Accumulator::get_newCount()
extern "C" int32_t Accumulator_get_newCount_m3746 (Accumulator_t672 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Accumulator::set_newCount(System.Int32)
extern "C" void Accumulator_set_newCount_m3747 (Accumulator_t672 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Accumulator::get_derivedCount()
extern "C" int32_t Accumulator_get_derivedCount_m3748 (Accumulator_t672 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Accumulator::set_derivedCount(System.Int32)
extern "C" void Accumulator_set_derivedCount_m3749 (Accumulator_t672 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Accumulator::AddNew(System.Int32)
extern "C" void Accumulator_AddNew_m3750 (Accumulator_t672 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Accumulator::AddNew()
extern "C" void Accumulator_AddNew_m3751 (Accumulator_t672 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Accumulator::AddDerived(System.Int32)
extern "C" void Accumulator_AddDerived_m3752 (Accumulator_t672 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Accumulator::AddDerived()
extern "C" void Accumulator_AddDerived_m3753 (Accumulator_t672 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Accumulator::DeriveFrom(Accumulator)
extern "C" void Accumulator_DeriveFrom_m3754 (Accumulator_t672 * __this, Accumulator_t672 * ___accumulator, const MethodInfo* method) IL2CPP_METHOD_ATTR;
