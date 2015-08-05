#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// FlyingAnimation
struct FlyingAnimation_t505;
// UnityEngine.GameObject
struct GameObject_t352;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void FlyingAnimation::.ctor()
extern "C" void FlyingAnimation__ctor_m2721 (FlyingAnimation_t505 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FlyingAnimation::Start()
extern "C" void FlyingAnimation_Start_m2722 (FlyingAnimation_t505 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FlyingAnimation::Update()
extern "C" void FlyingAnimation_Update_m2723 (FlyingAnimation_t505 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FlyingAnimation::Configure(UnityEngine.Vector3,UnityEngine.GameObject)
extern "C" void FlyingAnimation_Configure_m2724 (FlyingAnimation_t505 * __this, Vector3_t496  ___worldStartPosition, GameObject_t352 * ___canvasTarget, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FlyingAnimation::Run()
extern "C" void FlyingAnimation_Run_m2725 (FlyingAnimation_t505 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FlyingAnimation::CreatePoints(UnityEngine.Vector3,UnityEngine.GameObject)
extern "C" void FlyingAnimation_CreatePoints_m2726 (FlyingAnimation_t505 * __this, Vector3_t496  ___worldStartPosition, GameObject_t352 * ___canvasTarget, const MethodInfo* method) IL2CPP_METHOD_ATTR;
