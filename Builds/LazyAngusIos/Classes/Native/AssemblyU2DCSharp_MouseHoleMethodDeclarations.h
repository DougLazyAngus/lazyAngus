#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// MouseHole
struct MouseHole_t434;
// MouseHole/MousePopChangedEventHandler
struct MousePopChangedEventHandler_t454;
// MouseHole/CapacityChangedEventHandler
struct CapacityChangedEventHandler_t455;
// MouseMove
struct MouseMove_t458;

// System.Void MouseHole::.ctor()
extern "C" void MouseHole__ctor_m2058 (MouseHole_t434 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseHole::.cctor()
extern "C" void MouseHole__cctor_m2059 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseHole::add_MousePopChanged(MouseHole/MousePopChangedEventHandler)
extern "C" void MouseHole_add_MousePopChanged_m2060 (MouseHole_t434 * __this, MousePopChangedEventHandler_t454 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseHole::remove_MousePopChanged(MouseHole/MousePopChangedEventHandler)
extern "C" void MouseHole_remove_MousePopChanged_m2061 (MouseHole_t434 * __this, MousePopChangedEventHandler_t454 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseHole::add_CapacityChanged(MouseHole/CapacityChangedEventHandler)
extern "C" void MouseHole_add_CapacityChanged_m2062 (MouseHole_t434 * __this, CapacityChangedEventHandler_t455 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseHole::remove_CapacityChanged(MouseHole/CapacityChangedEventHandler)
extern "C" void MouseHole_remove_CapacityChanged_m2063 (MouseHole_t434 * __this, CapacityChangedEventHandler_t455 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseHole::Awake()
extern "C" void MouseHole_Awake_m2064 (MouseHole_t434 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseHole::Start()
extern "C" void MouseHole_Start_m2065 (MouseHole_t434 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseHole::OnDestroy()
extern "C" void MouseHole_OnDestroy_m2066 (MouseHole_t434 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseHole::RegisterForEvents()
extern "C" void MouseHole_RegisterForEvents_m2067 (MouseHole_t434 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseHole::UnregisterForEvents()
extern "C" void MouseHole_UnregisterForEvents_m2068 (MouseHole_t434 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseHole::OnInstanceChanged()
extern "C" void MouseHole_OnInstanceChanged_m2069 (MouseHole_t434 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseHole::Reset()
extern "C" void MouseHole_Reset_m2070 (MouseHole_t434 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseHole::MakeHoleMeter()
extern "C" void MouseHole_MakeHoleMeter_m2071 (MouseHole_t434 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseHole::DoDoomedBoxFX()
extern "C" void MouseHole_DoDoomedBoxFX_m2072 (MouseHole_t434 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MouseHole::CountSavedMouse(MouseMove)
extern "C" bool MouseHole_CountSavedMouse_m2073 (MouseHole_t434 * __this, MouseMove_t458 * ___mouse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseHole::ClearMice()
extern "C" void MouseHole_ClearMice_m2074 (MouseHole_t434 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseHole::SaveMouse(MouseMove)
extern "C" void MouseHole_SaveMouse_m2075 (MouseHole_t434 * __this, MouseMove_t458 * ___mouse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MouseHole::IsFull()
extern "C" bool MouseHole_IsFull_m2076 (MouseHole_t434 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 MouseHole::GetPopulation()
extern "C" int32_t MouseHole_GetPopulation_m2077 (MouseHole_t434 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 MouseHole::GetCapacity()
extern "C" int32_t MouseHole_GetCapacity_m2078 (MouseHole_t434 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseHole::SetCapacity(System.Int32)
extern "C" void MouseHole_SetCapacity_m2079 (MouseHole_t434 * __this, int32_t ___newCapacity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
