#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// FlyingAnimation
struct FlyingAnimation_t549;
// UnityEngine.GameObject
struct GameObject_t352;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void FlyingAnimation::.ctor()
extern "C" void FlyingAnimation__ctor_m2947 (FlyingAnimation_t549 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FlyingAnimation::Awake()
extern "C" void FlyingAnimation_Awake_m2948 (FlyingAnimation_t549 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FlyingAnimation::Start()
extern "C" void FlyingAnimation_Start_m2949 (FlyingAnimation_t549 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FlyingAnimation::Update()
extern "C" void FlyingAnimation_Update_m2950 (FlyingAnimation_t549 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FlyingAnimation::Configure(UnityEngine.Vector3,UnityEngine.GameObject)
extern "C" void FlyingAnimation_Configure_m2951 (FlyingAnimation_t549 * __this, Vector3_t538  ___worldStartPosition, GameObject_t352 * ___canvasTarget, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FlyingAnimation::ConfigureWithViewportPos(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" void FlyingAnimation_ConfigureWithViewportPos_m2952 (FlyingAnimation_t549 * __this, Vector3_t538  ___worldStartPosition, Vector3_t538  ___viewportPos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FlyingAnimation::Run()
extern "C" void FlyingAnimation_Run_m2953 (FlyingAnimation_t549 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FlyingAnimation::CreatePoints(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" void FlyingAnimation_CreatePoints_m2954 (FlyingAnimation_t549 * __this, Vector3_t538  ___worldStartPosition, Vector3_t538  ___otherCanvasPosition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
