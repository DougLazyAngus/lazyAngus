#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// DeadMouseRelay
struct DeadMouseRelay_t529;
// DeadMouseRelay/MultiKillEventHandler
struct MultiKillEventHandler_t526;
// DeadMouseRelay/MouseKillEventHandler
struct MouseKillEventHandler_t528;
// MouseMove
struct MouseMove_t527;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void DeadMouseRelay::.ctor()
extern "C" void DeadMouseRelay__ctor_m2851 (DeadMouseRelay_t529 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DeadMouseRelay::add_MultiKill(DeadMouseRelay/MultiKillEventHandler)
extern "C" void DeadMouseRelay_add_MultiKill_m2852 (DeadMouseRelay_t529 * __this, MultiKillEventHandler_t526 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DeadMouseRelay::remove_MultiKill(DeadMouseRelay/MultiKillEventHandler)
extern "C" void DeadMouseRelay_remove_MultiKill_m2853 (DeadMouseRelay_t529 * __this, MultiKillEventHandler_t526 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DeadMouseRelay::add_MouseKill(DeadMouseRelay/MouseKillEventHandler)
extern "C" void DeadMouseRelay_add_MouseKill_m2854 (DeadMouseRelay_t529 * __this, MouseKillEventHandler_t528 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DeadMouseRelay::remove_MouseKill(DeadMouseRelay/MouseKillEventHandler)
extern "C" void DeadMouseRelay_remove_MouseKill_m2855 (DeadMouseRelay_t529 * __this, MouseKillEventHandler_t528 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DeadMouseRelay::Awake()
extern "C" void DeadMouseRelay_Awake_m2856 (DeadMouseRelay_t529 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DeadMouseRelay::Start()
extern "C" void DeadMouseRelay_Start_m2857 (DeadMouseRelay_t529 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DeadMouseRelay::Update()
extern "C" void DeadMouseRelay_Update_m2858 (DeadMouseRelay_t529 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DeadMouseRelay::HandleMultiKill(System.Int32,UnityEngine.Vector3)
extern "C" void DeadMouseRelay_HandleMultiKill_m2859 (DeadMouseRelay_t529 * __this, int32_t ___numKilled, Vector3_t535  ___pawPosition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DeadMouseRelay::HandleMouseKill(MouseMove)
extern "C" void DeadMouseRelay_HandleMouseKill_m2860 (DeadMouseRelay_t529 * __this, MouseMove_t527 * ___mouseMove, const MethodInfo* method) IL2CPP_METHOD_ATTR;
