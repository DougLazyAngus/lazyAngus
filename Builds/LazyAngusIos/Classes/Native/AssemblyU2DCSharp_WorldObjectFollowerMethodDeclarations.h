#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// WorldObjectFollower
struct WorldObjectFollower_t627;
// UnityEngine.GameObject
struct GameObject_t352;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void WorldObjectFollower::.ctor()
extern "C" void WorldObjectFollower__ctor_m3387 (WorldObjectFollower_t627 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WorldObjectFollower::Start()
extern "C" void WorldObjectFollower_Start_m3388 (WorldObjectFollower_t627 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WorldObjectFollower::Update()
extern "C" void WorldObjectFollower_Update_m3389 (WorldObjectFollower_t627 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WorldObjectFollower::SetObjectToFollow(UnityEngine.GameObject,UnityEngine.Vector3,System.Boolean)
extern "C" void WorldObjectFollower_SetObjectToFollow_m3390 (WorldObjectFollower_t627 * __this, GameObject_t352 * ___go, Vector3_t495  ___offset, bool ___followeeMoves, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WorldObjectFollower::ResetPosition()
extern "C" void WorldObjectFollower_ResetPosition_m3391 (WorldObjectFollower_t627 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
