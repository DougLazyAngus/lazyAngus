#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// InOutTransitioner
struct InOutTransitioner_t570;

// System.Void InOutTransitioner::.ctor(System.Single)
extern "C" void InOutTransitioner__ctor_m3787 (InOutTransitioner_t570 * __this, float ___transitionDuration, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InOutTransitioner::get_movingIn()
extern "C" bool InOutTransitioner_get_movingIn_m3788 (InOutTransitioner_t570 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InOutTransitioner::set_movingIn(System.Boolean)
extern "C" void InOutTransitioner_set_movingIn_m3789 (InOutTransitioner_t570 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InOutTransitioner::Reset(System.Boolean)
extern "C" void InOutTransitioner_Reset_m3790 (InOutTransitioner_t570 * __this, bool ___inState, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InOutTransitioner::UpdateTransitionFraction()
extern "C" void InOutTransitioner_UpdateTransitionFraction_m3791 (InOutTransitioner_t570 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InOutTransitioner::Transition(System.Boolean)
extern "C" void InOutTransitioner_Transition_m3792 (InOutTransitioner_t570 * __this, bool ___moveIn, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InOutTransitioner::IsTransitioning()
extern "C" bool InOutTransitioner_IsTransitioning_m3793 (InOutTransitioner_t570 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single InOutTransitioner::GetFractionIn()
extern "C" float InOutTransitioner_GetFractionIn_m3794 (InOutTransitioner_t570 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
