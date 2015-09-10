#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PhaseDelayedEventScheduler
struct PhaseDelayedEventScheduler_t560;
// PhaseDelayedEventScheduler/DelayedEventHandler
struct DelayedEventHandler_t559;
// System.Collections.IEnumerator
struct IEnumerator_t48;

// System.Void PhaseDelayedEventScheduler::.ctor()
extern "C" void PhaseDelayedEventScheduler__ctor_m3041 (PhaseDelayedEventScheduler_t560 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhaseDelayedEventScheduler::IsAcceptableGamePhase()
extern "C" bool PhaseDelayedEventScheduler_IsAcceptableGamePhase_m3042 (PhaseDelayedEventScheduler_t560 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhaseDelayedEventScheduler::OnPhaseChanged(PhaseDelayedEventScheduler/DelayedEventHandler)
extern "C" bool PhaseDelayedEventScheduler_OnPhaseChanged_m3043 (PhaseDelayedEventScheduler_t560 * __this, DelayedEventHandler_t559 * ___handler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator PhaseDelayedEventScheduler::WaitAndFireEvent()
extern "C" Object_t * PhaseDelayedEventScheduler_WaitAndFireEvent_m3044 (PhaseDelayedEventScheduler_t560 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
