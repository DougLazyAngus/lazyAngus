#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.StateMachineBehaviour
struct StateMachineBehaviour_t2876;
// UnityEngine.Animator
struct Animator_t666;
// UnityEngine.AnimatorStateInfo
#include "UnityEngine_UnityEngine_AnimatorStateInfo.h"

// System.Void UnityEngine.StateMachineBehaviour::.ctor()
extern "C" void StateMachineBehaviour__ctor_m9994 (StateMachineBehaviour_t2876 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.StateMachineBehaviour::OnStateEnter(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
extern "C" void StateMachineBehaviour_OnStateEnter_m9995 (StateMachineBehaviour_t2876 * __this, Animator_t666 * ___animator, AnimatorStateInfo_t2778  ___stateInfo, int32_t ___layerIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.StateMachineBehaviour::OnStateUpdate(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
extern "C" void StateMachineBehaviour_OnStateUpdate_m9996 (StateMachineBehaviour_t2876 * __this, Animator_t666 * ___animator, AnimatorStateInfo_t2778  ___stateInfo, int32_t ___layerIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.StateMachineBehaviour::OnStateExit(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
extern "C" void StateMachineBehaviour_OnStateExit_m9997 (StateMachineBehaviour_t2876 * __this, Animator_t666 * ___animator, AnimatorStateInfo_t2778  ___stateInfo, int32_t ___layerIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.StateMachineBehaviour::OnStateMove(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
extern "C" void StateMachineBehaviour_OnStateMove_m9998 (StateMachineBehaviour_t2876 * __this, Animator_t666 * ___animator, AnimatorStateInfo_t2778  ___stateInfo, int32_t ___layerIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.StateMachineBehaviour::OnStateIK(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
extern "C" void StateMachineBehaviour_OnStateIK_m9999 (StateMachineBehaviour_t2876 * __this, Animator_t666 * ___animator, AnimatorStateInfo_t2778  ___stateInfo, int32_t ___layerIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.StateMachineBehaviour::OnStateMachineEnter(UnityEngine.Animator,System.Int32)
extern "C" void StateMachineBehaviour_OnStateMachineEnter_m10000 (StateMachineBehaviour_t2876 * __this, Animator_t666 * ___animator, int32_t ___stateMachinePathHash, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.StateMachineBehaviour::OnStateMachineExit(UnityEngine.Animator,System.Int32)
extern "C" void StateMachineBehaviour_OnStateMachineExit_m10001 (StateMachineBehaviour_t2876 * __this, Animator_t666 * ___animator, int32_t ___stateMachinePathHash, const MethodInfo* method) IL2CPP_METHOD_ATTR;
