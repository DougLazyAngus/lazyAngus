#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// HeadMovement
struct HeadMovement_t570;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void HeadMovement::.ctor()
extern "C" void HeadMovement__ctor_m3065 (HeadMovement_t570 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HeadMovement::Start()
extern "C" void HeadMovement_Start_m3066 (HeadMovement_t570 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HeadMovement::Update()
extern "C" void HeadMovement_Update_m3067 (HeadMovement_t570 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean HeadMovement::MoveTowards(System.Single,System.Single)
extern "C" bool HeadMovement_MoveTowards_m3068 (HeadMovement_t570 * __this, float ___targetDeg, float ___speedDeg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HeadMovement::LookTowards(UnityEngine.Vector3)
extern "C" void HeadMovement_LookTowards_m3069 (HeadMovement_t570 * __this, Vector3_t535  ___location, const MethodInfo* method) IL2CPP_METHOD_ATTR;
