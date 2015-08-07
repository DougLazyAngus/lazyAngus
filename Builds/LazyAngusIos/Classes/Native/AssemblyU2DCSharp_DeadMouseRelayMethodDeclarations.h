#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// DeadMouseRelay
struct DeadMouseRelay_t490;
// DeadMouseRelay/MultiKillEventHandler
struct MultiKillEventHandler_t487;
// DeadMouseRelay/MouseKillEventHandler
struct MouseKillEventHandler_t489;
// MouseMove
struct MouseMove_t488;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void DeadMouseRelay::.ctor()
extern "C" void DeadMouseRelay__ctor_m2647 (DeadMouseRelay_t490 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DeadMouseRelay::add_MultiKill(DeadMouseRelay/MultiKillEventHandler)
extern "C" void DeadMouseRelay_add_MultiKill_m2648 (DeadMouseRelay_t490 * __this, MultiKillEventHandler_t487 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DeadMouseRelay::remove_MultiKill(DeadMouseRelay/MultiKillEventHandler)
extern "C" void DeadMouseRelay_remove_MultiKill_m2649 (DeadMouseRelay_t490 * __this, MultiKillEventHandler_t487 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DeadMouseRelay::add_MouseKill(DeadMouseRelay/MouseKillEventHandler)
extern "C" void DeadMouseRelay_add_MouseKill_m2650 (DeadMouseRelay_t490 * __this, MouseKillEventHandler_t489 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DeadMouseRelay::remove_MouseKill(DeadMouseRelay/MouseKillEventHandler)
extern "C" void DeadMouseRelay_remove_MouseKill_m2651 (DeadMouseRelay_t490 * __this, MouseKillEventHandler_t489 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DeadMouseRelay::Awake()
extern "C" void DeadMouseRelay_Awake_m2652 (DeadMouseRelay_t490 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DeadMouseRelay::Start()
extern "C" void DeadMouseRelay_Start_m2653 (DeadMouseRelay_t490 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DeadMouseRelay::Update()
extern "C" void DeadMouseRelay_Update_m2654 (DeadMouseRelay_t490 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DeadMouseRelay::HandleMultiKill(System.Int32,UnityEngine.Vector3)
extern "C" void DeadMouseRelay_HandleMultiKill_m2655 (DeadMouseRelay_t490 * __this, int32_t ___numKilled, Vector3_t497  ___pawPosition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DeadMouseRelay::HandleMouseKill(MouseMove)
extern "C" void DeadMouseRelay_HandleMouseKill_m2656 (DeadMouseRelay_t490 * __this, MouseMove_t488 * ___mouseMove, const MethodInfo* method) IL2CPP_METHOD_ATTR;
