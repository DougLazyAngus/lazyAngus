#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// SlowByCollision
struct SlowByCollision_t601;
// UnityEngine.Collider2D
struct Collider2D_t578;

// System.Void SlowByCollision::.ctor()
extern "C" void SlowByCollision__ctor_m3247 (SlowByCollision_t601 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SlowByCollision::OnTriggerEnter2D(UnityEngine.Collider2D)
extern "C" void SlowByCollision_OnTriggerEnter2D_m3248 (SlowByCollision_t601 * __this, Collider2D_t578 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SlowByCollision::OnTriggerStay2D(UnityEngine.Collider2D)
extern "C" void SlowByCollision_OnTriggerStay2D_m3249 (SlowByCollision_t601 * __this, Collider2D_t578 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SlowByCollision::HandleCollision(UnityEngine.Collider2D)
extern "C" void SlowByCollision_HandleCollision_m3250 (SlowByCollision_t601 * __this, Collider2D_t578 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
