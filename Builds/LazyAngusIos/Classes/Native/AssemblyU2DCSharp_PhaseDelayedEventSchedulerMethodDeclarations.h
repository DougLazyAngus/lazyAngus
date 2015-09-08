#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PhaseDelayedEventScheduler
struct PhaseDelayedEventScheduler_t571;
// PhaseDelayedEventScheduler/DelayedEventHandler
struct DelayedEventHandler_t627;
// System.Collections.IEnumerator
struct IEnumerator_t48;

// System.Void PhaseDelayedEventScheduler::.ctor()
extern "C" void PhaseDelayedEventScheduler__ctor_m3364 (PhaseDelayedEventScheduler_t571 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhaseDelayedEventScheduler::IsAcceptableGamePhase()
extern "C" bool PhaseDelayedEventScheduler_IsAcceptableGamePhase_m3365 (PhaseDelayedEventScheduler_t571 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhaseDelayedEventScheduler::OnPhaseChanged(PhaseDelayedEventScheduler/DelayedEventHandler)
extern "C" bool PhaseDelayedEventScheduler_OnPhaseChanged_m3366 (PhaseDelayedEventScheduler_t571 * __this, DelayedEventHandler_t627 * ___handler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator PhaseDelayedEventScheduler::WaitAndFireEvent()
extern "C" Object_t * PhaseDelayedEventScheduler_WaitAndFireEvent_m3367 (PhaseDelayedEventScheduler_t571 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
