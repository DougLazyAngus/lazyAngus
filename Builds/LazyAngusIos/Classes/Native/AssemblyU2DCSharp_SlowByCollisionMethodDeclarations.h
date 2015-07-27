#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// SlowByCollision
struct SlowByCollision_t548;
// UnityEngine.Collider2D
struct Collider2D_t525;

// System.Void SlowByCollision::.ctor()
extern "C" void SlowByCollision__ctor_m2892 (SlowByCollision_t548 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SlowByCollision::OnTriggerEnter2D(UnityEngine.Collider2D)
extern "C" void SlowByCollision_OnTriggerEnter2D_m2893 (SlowByCollision_t548 * __this, Collider2D_t525 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SlowByCollision::OnTriggerStay2D(UnityEngine.Collider2D)
extern "C" void SlowByCollision_OnTriggerStay2D_m2894 (SlowByCollision_t548 * __this, Collider2D_t525 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SlowByCollision::HandleCollision(UnityEngine.Collider2D)
extern "C" void SlowByCollision_HandleCollision_m2895 (SlowByCollision_t548 * __this, Collider2D_t525 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
