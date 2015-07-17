#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// MouseHole
struct MouseHole_t475;
// MouseHole/MousePopChangedEventHandler
struct MousePopChangedEventHandler_t505;
// MouseHole/CapacityChangedEventHandler
struct CapacityChangedEventHandler_t506;
// MouseMove
struct MouseMove_t510;

// System.Void MouseHole::.ctor()
extern "C" void MouseHole__ctor_m2604 (MouseHole_t475 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseHole::.cctor()
extern "C" void MouseHole__cctor_m2605 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseHole::add_MousePopChanged(MouseHole/MousePopChangedEventHandler)
extern "C" void MouseHole_add_MousePopChanged_m2606 (MouseHole_t475 * __this, MousePopChangedEventHandler_t505 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseHole::remove_MousePopChanged(MouseHole/MousePopChangedEventHandler)
extern "C" void MouseHole_remove_MousePopChanged_m2607 (MouseHole_t475 * __this, MousePopChangedEventHandler_t505 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseHole::add_CapacityChanged(MouseHole/CapacityChangedEventHandler)
extern "C" void MouseHole_add_CapacityChanged_m2608 (MouseHole_t475 * __this, CapacityChangedEventHandler_t506 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseHole::remove_CapacityChanged(MouseHole/CapacityChangedEventHandler)
extern "C" void MouseHole_remove_CapacityChanged_m2609 (MouseHole_t475 * __this, CapacityChangedEventHandler_t506 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseHole::Awake()
extern "C" void MouseHole_Awake_m2610 (MouseHole_t475 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseHole::Start()
extern "C" void MouseHole_Start_m2611 (MouseHole_t475 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseHole::OnDestroy()
extern "C" void MouseHole_OnDestroy_m2612 (MouseHole_t475 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseHole::RegisterForEvents()
extern "C" void MouseHole_RegisterForEvents_m2613 (MouseHole_t475 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseHole::UnregisterForEvents()
extern "C" void MouseHole_UnregisterForEvents_m2614 (MouseHole_t475 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseHole::OnInstanceChanged()
extern "C" void MouseHole_OnInstanceChanged_m2615 (MouseHole_t475 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseHole::Reset()
extern "C" void MouseHole_Reset_m2616 (MouseHole_t475 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseHole::MakeHoleMeter()
extern "C" void MouseHole_MakeHoleMeter_m2617 (MouseHole_t475 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseHole::DoDoomedBoxFX()
extern "C" void MouseHole_DoDoomedBoxFX_m2618 (MouseHole_t475 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MouseHole::CountSavedMouse(MouseMove)
extern "C" bool MouseHole_CountSavedMouse_m2619 (MouseHole_t475 * __this, MouseMove_t510 * ___mouse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseHole::ClearNMice(System.Int32)
extern "C" void MouseHole_ClearNMice_m2620 (MouseHole_t475 * __this, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseHole::ClearMice()
extern "C" void MouseHole_ClearMice_m2621 (MouseHole_t475 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseHole::SaveMouse(MouseMove)
extern "C" void MouseHole_SaveMouse_m2622 (MouseHole_t475 * __this, MouseMove_t510 * ___mouse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MouseHole::IsFull()
extern "C" bool MouseHole_IsFull_m2623 (MouseHole_t475 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 MouseHole::GetPopulation()
extern "C" int32_t MouseHole_GetPopulation_m2624 (MouseHole_t475 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 MouseHole::GetCapacity()
extern "C" int32_t MouseHole_GetCapacity_m2625 (MouseHole_t475 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseHole::SetCapacity(System.Int32)
extern "C" void MouseHole_SetCapacity_m2626 (MouseHole_t475 * __this, int32_t ___newCapacity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
