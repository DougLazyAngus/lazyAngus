#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// SlowByCollision
struct SlowByCollision_t546;
// UnityEngine.Collider2D
struct Collider2D_t522;

// System.Void SlowByCollision::.ctor()
extern "C" void SlowByCollision__ctor_m2881 (SlowByCollision_t546 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SlowByCollision::OnTriggerEnter2D(UnityEngine.Collider2D)
extern "C" void SlowByCollision_OnTriggerEnter2D_m2882 (SlowByCollision_t546 * __this, Collider2D_t522 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SlowByCollision::OnTriggerStay2D(UnityEngine.Collider2D)
extern "C" void SlowByCollision_OnTriggerStay2D_m2883 (SlowByCollision_t546 * __this, Collider2D_t522 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SlowByCollision::HandleCollision(UnityEngine.Collider2D)
extern "C" void SlowByCollision_HandleCollision_m2884 (SlowByCollision_t546 * __this, Collider2D_t522 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
