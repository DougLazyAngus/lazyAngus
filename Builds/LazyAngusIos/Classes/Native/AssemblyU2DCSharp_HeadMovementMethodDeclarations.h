#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// HeadMovement
struct HeadMovement_t519;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void HeadMovement::.ctor()
extern "C" void HeadMovement__ctor_m2816 (HeadMovement_t519 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HeadMovement::Start()
extern "C" void HeadMovement_Start_m2817 (HeadMovement_t519 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HeadMovement::Update()
extern "C" void HeadMovement_Update_m2818 (HeadMovement_t519 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean HeadMovement::MoveTowards(System.Single,System.Single)
extern "C" bool HeadMovement_MoveTowards_m2819 (HeadMovement_t519 * __this, float ___targetDeg, float ___speedDeg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HeadMovement::LookTowards(UnityEngine.Vector3)
extern "C" void HeadMovement_LookTowards_m2820 (HeadMovement_t519 * __this, Vector3_t494  ___location, const MethodInfo* method) IL2CPP_METHOD_ATTR;
