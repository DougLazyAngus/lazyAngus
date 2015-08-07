#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// MouseHole
struct MouseHole_t530;
// MouseHole/MousePopChangedEventHandler
struct MousePopChangedEventHandler_t561;
// MouseHole/CapacityChangedEventHandler
struct CapacityChangedEventHandler_t562;
// MouseMove
struct MouseMove_t488;

// System.Void MouseHole::.ctor()
extern "C" void MouseHole__ctor_m2951 (MouseHole_t530 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseHole::.cctor()
extern "C" void MouseHole__cctor_m2952 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseHole::add_MousePopChanged(MouseHole/MousePopChangedEventHandler)
extern "C" void MouseHole_add_MousePopChanged_m2953 (MouseHole_t530 * __this, MousePopChangedEventHandler_t561 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseHole::remove_MousePopChanged(MouseHole/MousePopChangedEventHandler)
extern "C" void MouseHole_remove_MousePopChanged_m2954 (MouseHole_t530 * __this, MousePopChangedEventHandler_t561 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseHole::add_CapacityChanged(MouseHole/CapacityChangedEventHandler)
extern "C" void MouseHole_add_CapacityChanged_m2955 (MouseHole_t530 * __this, CapacityChangedEventHandler_t562 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseHole::remove_CapacityChanged(MouseHole/CapacityChangedEventHandler)
extern "C" void MouseHole_remove_CapacityChanged_m2956 (MouseHole_t530 * __this, CapacityChangedEventHandler_t562 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseHole::Awake()
extern "C" void MouseHole_Awake_m2957 (MouseHole_t530 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseHole::Start()
extern "C" void MouseHole_Start_m2958 (MouseHole_t530 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseHole::OnDestroy()
extern "C" void MouseHole_OnDestroy_m2959 (MouseHole_t530 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseHole::RegisterForEvents()
extern "C" void MouseHole_RegisterForEvents_m2960 (MouseHole_t530 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseHole::UnregisterForEvents()
extern "C" void MouseHole_UnregisterForEvents_m2961 (MouseHole_t530 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseHole::OnInstanceChanged()
extern "C" void MouseHole_OnInstanceChanged_m2962 (MouseHole_t530 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseHole::Reset()
extern "C" void MouseHole_Reset_m2963 (MouseHole_t530 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseHole::MakeHoleMeter()
extern "C" void MouseHole_MakeHoleMeter_m2964 (MouseHole_t530 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseHole::DoDoomedBoxFX()
extern "C" void MouseHole_DoDoomedBoxFX_m2965 (MouseHole_t530 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MouseHole::CountSavedMouse(MouseMove)
extern "C" bool MouseHole_CountSavedMouse_m2966 (MouseHole_t530 * __this, MouseMove_t488 * ___mouse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseHole::ClearNMice(System.Int32)
extern "C" void MouseHole_ClearNMice_m2967 (MouseHole_t530 * __this, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseHole::ClearMice()
extern "C" void MouseHole_ClearMice_m2968 (MouseHole_t530 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseHole::SaveMouse(MouseMove)
extern "C" void MouseHole_SaveMouse_m2969 (MouseHole_t530 * __this, MouseMove_t488 * ___mouse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MouseHole::IsFull()
extern "C" bool MouseHole_IsFull_m2970 (MouseHole_t530 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 MouseHole::GetPopulation()
extern "C" int32_t MouseHole_GetPopulation_m2971 (MouseHole_t530 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 MouseHole::GetCapacity()
extern "C" int32_t MouseHole_GetCapacity_m2972 (MouseHole_t530 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseHole::SetCapacity(System.Int32)
extern "C" void MouseHole_SetCapacity_m2973 (MouseHole_t530 * __this, int32_t ___newCapacity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
