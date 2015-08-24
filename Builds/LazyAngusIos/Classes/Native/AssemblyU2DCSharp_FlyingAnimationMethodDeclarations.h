#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// FlyingAnimation
struct FlyingAnimation_t546;
// UnityEngine.GameObject
struct GameObject_t352;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void FlyingAnimation::.ctor()
extern "C" void FlyingAnimation__ctor_m2928 (FlyingAnimation_t546 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FlyingAnimation::Awake()
extern "C" void FlyingAnimation_Awake_m2929 (FlyingAnimation_t546 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FlyingAnimation::Start()
extern "C" void FlyingAnimation_Start_m2930 (FlyingAnimation_t546 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FlyingAnimation::Update()
extern "C" void FlyingAnimation_Update_m2931 (FlyingAnimation_t546 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FlyingAnimation::Configure(UnityEngine.Vector3,UnityEngine.GameObject)
extern "C" void FlyingAnimation_Configure_m2932 (FlyingAnimation_t546 * __this, Vector3_t535  ___worldStartPosition, GameObject_t352 * ___canvasTarget, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FlyingAnimation::ConfigureWithViewportPos(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" void FlyingAnimation_ConfigureWithViewportPos_m2933 (FlyingAnimation_t546 * __this, Vector3_t535  ___worldStartPosition, Vector3_t535  ___viewportPos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FlyingAnimation::Run()
extern "C" void FlyingAnimation_Run_m2934 (FlyingAnimation_t546 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FlyingAnimation::CreatePoints(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" void FlyingAnimation_CreatePoints_m2935 (FlyingAnimation_t546 * __this, Vector3_t535  ___worldStartPosition, Vector3_t535  ___otherCanvasPosition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
