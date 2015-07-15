#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// MouseHole
struct MouseHole_t439;
// MouseHole/MousePopChangedEventHandler
struct MousePopChangedEventHandler_t468;
// MouseHole/CapacityChangedEventHandler
struct CapacityChangedEventHandler_t469;
// MouseMove
struct MouseMove_t473;

// System.Void MouseHole::.ctor()
extern "C" void MouseHole__ctor_m2138 (MouseHole_t439 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseHole::.cctor()
extern "C" void MouseHole__cctor_m2139 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseHole::add_MousePopChanged(MouseHole/MousePopChangedEventHandler)
extern "C" void MouseHole_add_MousePopChanged_m2140 (MouseHole_t439 * __this, MousePopChangedEventHandler_t468 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseHole::remove_MousePopChanged(MouseHole/MousePopChangedEventHandler)
extern "C" void MouseHole_remove_MousePopChanged_m2141 (MouseHole_t439 * __this, MousePopChangedEventHandler_t468 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseHole::add_CapacityChanged(MouseHole/CapacityChangedEventHandler)
extern "C" void MouseHole_add_CapacityChanged_m2142 (MouseHole_t439 * __this, CapacityChangedEventHandler_t469 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseHole::remove_CapacityChanged(MouseHole/CapacityChangedEventHandler)
extern "C" void MouseHole_remove_CapacityChanged_m2143 (MouseHole_t439 * __this, CapacityChangedEventHandler_t469 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseHole::Awake()
extern "C" void MouseHole_Awake_m2144 (MouseHole_t439 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseHole::Start()
extern "C" void MouseHole_Start_m2145 (MouseHole_t439 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseHole::OnDestroy()
extern "C" void MouseHole_OnDestroy_m2146 (MouseHole_t439 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseHole::RegisterForEvents()
extern "C" void MouseHole_RegisterForEvents_m2147 (MouseHole_t439 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseHole::UnregisterForEvents()
extern "C" void MouseHole_UnregisterForEvents_m2148 (MouseHole_t439 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseHole::OnInstanceChanged()
extern "C" void MouseHole_OnInstanceChanged_m2149 (MouseHole_t439 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseHole::Reset()
extern "C" void MouseHole_Reset_m2150 (MouseHole_t439 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseHole::MakeHoleMeter()
extern "C" void MouseHole_MakeHoleMeter_m2151 (MouseHole_t439 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseHole::DoDoomedBoxFX()
extern "C" void MouseHole_DoDoomedBoxFX_m2152 (MouseHole_t439 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MouseHole::CountSavedMouse(MouseMove)
extern "C" bool MouseHole_CountSavedMouse_m2153 (MouseHole_t439 * __this, MouseMove_t473 * ___mouse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseHole::ClearNMice(System.Int32)
extern "C" void MouseHole_ClearNMice_m2154 (MouseHole_t439 * __this, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseHole::ClearMice()
extern "C" void MouseHole_ClearMice_m2155 (MouseHole_t439 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseHole::SaveMouse(MouseMove)
extern "C" void MouseHole_SaveMouse_m2156 (MouseHole_t439 * __this, MouseMove_t473 * ___mouse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MouseHole::IsFull()
extern "C" bool MouseHole_IsFull_m2157 (MouseHole_t439 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 MouseHole::GetPopulation()
extern "C" int32_t MouseHole_GetPopulation_m2158 (MouseHole_t439 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 MouseHole::GetCapacity()
extern "C" int32_t MouseHole_GetCapacity_m2159 (MouseHole_t439 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseHole::SetCapacity(System.Int32)
extern "C" void MouseHole_SetCapacity_m2160 (MouseHole_t439 * __this, int32_t ___newCapacity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
