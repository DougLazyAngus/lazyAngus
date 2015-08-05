#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// MouseHole
struct MouseHole_t530;
// MouseHole/MousePopChangedEventHandler
struct MousePopChangedEventHandler_t562;
// MouseHole/CapacityChangedEventHandler
struct CapacityChangedEventHandler_t563;
// MouseMove
struct MouseMove_t487;

// System.Void MouseHole::.ctor()
extern "C" void MouseHole__ctor_m2959 (MouseHole_t530 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseHole::.cctor()
extern "C" void MouseHole__cctor_m2960 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseHole::add_MousePopChanged(MouseHole/MousePopChangedEventHandler)
extern "C" void MouseHole_add_MousePopChanged_m2961 (MouseHole_t530 * __this, MousePopChangedEventHandler_t562 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseHole::remove_MousePopChanged(MouseHole/MousePopChangedEventHandler)
extern "C" void MouseHole_remove_MousePopChanged_m2962 (MouseHole_t530 * __this, MousePopChangedEventHandler_t562 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseHole::add_CapacityChanged(MouseHole/CapacityChangedEventHandler)
extern "C" void MouseHole_add_CapacityChanged_m2963 (MouseHole_t530 * __this, CapacityChangedEventHandler_t563 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseHole::remove_CapacityChanged(MouseHole/CapacityChangedEventHandler)
extern "C" void MouseHole_remove_CapacityChanged_m2964 (MouseHole_t530 * __this, CapacityChangedEventHandler_t563 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseHole::Awake()
extern "C" void MouseHole_Awake_m2965 (MouseHole_t530 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseHole::Start()
extern "C" void MouseHole_Start_m2966 (MouseHole_t530 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseHole::OnDestroy()
extern "C" void MouseHole_OnDestroy_m2967 (MouseHole_t530 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseHole::RegisterForEvents()
extern "C" void MouseHole_RegisterForEvents_m2968 (MouseHole_t530 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseHole::UnregisterForEvents()
extern "C" void MouseHole_UnregisterForEvents_m2969 (MouseHole_t530 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseHole::OnInstanceChanged()
extern "C" void MouseHole_OnInstanceChanged_m2970 (MouseHole_t530 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseHole::Reset()
extern "C" void MouseHole_Reset_m2971 (MouseHole_t530 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseHole::MakeHoleMeter()
extern "C" void MouseHole_MakeHoleMeter_m2972 (MouseHole_t530 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseHole::DoDoomedBoxFX()
extern "C" void MouseHole_DoDoomedBoxFX_m2973 (MouseHole_t530 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MouseHole::CountSavedMouse(MouseMove)
extern "C" bool MouseHole_CountSavedMouse_m2974 (MouseHole_t530 * __this, MouseMove_t487 * ___mouse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseHole::ClearNMice(System.Int32)
extern "C" void MouseHole_ClearNMice_m2975 (MouseHole_t530 * __this, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseHole::ClearMice()
extern "C" void MouseHole_ClearMice_m2976 (MouseHole_t530 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseHole::SaveMouse(MouseMove)
extern "C" void MouseHole_SaveMouse_m2977 (MouseHole_t530 * __this, MouseMove_t487 * ___mouse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MouseHole::IsFull()
extern "C" bool MouseHole_IsFull_m2978 (MouseHole_t530 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 MouseHole::GetPopulation()
extern "C" int32_t MouseHole_GetPopulation_m2979 (MouseHole_t530 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 MouseHole::GetCapacity()
extern "C" int32_t MouseHole_GetCapacity_m2980 (MouseHole_t530 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseHole::SetCapacity(System.Int32)
extern "C" void MouseHole_SetCapacity_m2981 (MouseHole_t530 * __this, int32_t ___newCapacity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
