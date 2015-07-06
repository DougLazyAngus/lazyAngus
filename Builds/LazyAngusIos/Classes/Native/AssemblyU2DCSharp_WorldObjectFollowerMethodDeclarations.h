#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// WorldObjectFollower
struct WorldObjectFollower_t502;
// UnityEngine.GameObject
struct GameObject_t284;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void WorldObjectFollower::.ctor()
extern "C" void WorldObjectFollower__ctor_m2400 (WorldObjectFollower_t502 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WorldObjectFollower::Start()
extern "C" void WorldObjectFollower_Start_m2401 (WorldObjectFollower_t502 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WorldObjectFollower::Update()
extern "C" void WorldObjectFollower_Update_m2402 (WorldObjectFollower_t502 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WorldObjectFollower::SetObjectToFollow(UnityEngine.GameObject,UnityEngine.Vector3,System.Boolean)
extern "C" void WorldObjectFollower_SetObjectToFollow_m2403 (WorldObjectFollower_t502 * __this, GameObject_t284 * ___go, Vector3_t414  ___offset, bool ___followeeMoves, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WorldObjectFollower::ResetPosition()
extern "C" void WorldObjectFollower_ResetPosition_m2404 (WorldObjectFollower_t502 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
