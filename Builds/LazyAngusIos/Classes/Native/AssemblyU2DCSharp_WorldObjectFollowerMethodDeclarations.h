#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// WorldObjectFollower
struct WorldObjectFollower_t673;
// UnityEngine.GameObject
struct GameObject_t352;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void WorldObjectFollower::.ctor()
extern "C" void WorldObjectFollower__ctor_m3628 (WorldObjectFollower_t673 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WorldObjectFollower::Start()
extern "C" void WorldObjectFollower_Start_m3629 (WorldObjectFollower_t673 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WorldObjectFollower::Update()
extern "C" void WorldObjectFollower_Update_m3630 (WorldObjectFollower_t673 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WorldObjectFollower::SetObjectToFollow(UnityEngine.GameObject,UnityEngine.Vector3,System.Boolean)
extern "C" void WorldObjectFollower_SetObjectToFollow_m3631 (WorldObjectFollower_t673 * __this, GameObject_t352 * ___go, Vector3_t536  ___offset, bool ___followeeMoves, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WorldObjectFollower::ResetPosition()
extern "C" void WorldObjectFollower_ResetPosition_m3632 (WorldObjectFollower_t673 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
