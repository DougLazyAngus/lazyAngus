#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// SlowByCollision
struct SlowByCollision_t588;
// UnityEngine.Collider2D
struct Collider2D_t724;

// System.Void SlowByCollision::.ctor()
extern "C" void SlowByCollision__ctor_m3170 (SlowByCollision_t588 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SlowByCollision::OnTriggerEnter2D(UnityEngine.Collider2D)
extern "C" void SlowByCollision_OnTriggerEnter2D_m3171 (SlowByCollision_t588 * __this, Collider2D_t724 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SlowByCollision::OnTriggerStay2D(UnityEngine.Collider2D)
extern "C" void SlowByCollision_OnTriggerStay2D_m3172 (SlowByCollision_t588 * __this, Collider2D_t724 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SlowByCollision::HandleCollision(UnityEngine.Collider2D)
extern "C" void SlowByCollision_HandleCollision_m3173 (SlowByCollision_t588 * __this, Collider2D_t724 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
