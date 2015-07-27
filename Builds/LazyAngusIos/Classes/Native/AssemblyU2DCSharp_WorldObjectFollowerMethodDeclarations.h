#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// WorldObjectFollower
struct WorldObjectFollower_t574;
// UnityEngine.GameObject
struct GameObject_t312;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void WorldObjectFollower::.ctor()
extern "C" void WorldObjectFollower__ctor_m3042 (WorldObjectFollower_t574 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WorldObjectFollower::Start()
extern "C" void WorldObjectFollower_Start_m3043 (WorldObjectFollower_t574 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WorldObjectFollower::Update()
extern "C" void WorldObjectFollower_Update_m3044 (WorldObjectFollower_t574 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WorldObjectFollower::SetObjectToFollow(UnityEngine.GameObject,UnityEngine.Vector3,System.Boolean)
extern "C" void WorldObjectFollower_SetObjectToFollow_m3045 (WorldObjectFollower_t574 * __this, GameObject_t312 * ___go, Vector3_t451  ___offset, bool ___followeeMoves, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WorldObjectFollower::ResetPosition()
extern "C" void WorldObjectFollower_ResetPosition_m3046 (WorldObjectFollower_t574 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
