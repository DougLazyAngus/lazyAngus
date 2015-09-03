#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Accumulator
struct Accumulator_t492;

// System.Void Accumulator::.ctor()
extern "C" void Accumulator__ctor_m2714 (Accumulator_t492 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Accumulator::get_newCount()
extern "C" int32_t Accumulator_get_newCount_m2715 (Accumulator_t492 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Accumulator::set_newCount(System.Int32)
extern "C" void Accumulator_set_newCount_m2716 (Accumulator_t492 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Accumulator::get_derivedCount()
extern "C" int32_t Accumulator_get_derivedCount_m2717 (Accumulator_t492 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Accumulator::set_derivedCount(System.Int32)
extern "C" void Accumulator_set_derivedCount_m2718 (Accumulator_t492 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Accumulator::AddNew(System.Int32)
extern "C" void Accumulator_AddNew_m2719 (Accumulator_t492 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Accumulator::AddNew()
extern "C" void Accumulator_AddNew_m2720 (Accumulator_t492 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Accumulator::AddDerived(System.Int32)
extern "C" void Accumulator_AddDerived_m2721 (Accumulator_t492 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Accumulator::AddDerived()
extern "C" void Accumulator_AddDerived_m2722 (Accumulator_t492 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Accumulator::DeriveFrom(Accumulator)
extern "C" void Accumulator_DeriveFrom_m2723 (Accumulator_t492 * __this, Accumulator_t492 * ___accumulator, const MethodInfo* method) IL2CPP_METHOD_ATTR;
