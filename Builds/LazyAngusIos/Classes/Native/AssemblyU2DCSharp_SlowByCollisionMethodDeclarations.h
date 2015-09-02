#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// SlowByCollision
struct SlowByCollision_t661;
// UnityEngine.Collider2D
struct Collider2D_t713;

// System.Void SlowByCollision::.ctor()
extern "C" void SlowByCollision__ctor_m3608 (SlowByCollision_t661 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SlowByCollision::OnTriggerEnter2D(UnityEngine.Collider2D)
extern "C" void SlowByCollision_OnTriggerEnter2D_m3609 (SlowByCollision_t661 * __this, Collider2D_t713 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SlowByCollision::OnTriggerStay2D(UnityEngine.Collider2D)
extern "C" void SlowByCollision_OnTriggerStay2D_m3610 (SlowByCollision_t661 * __this, Collider2D_t713 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SlowByCollision::HandleCollision(UnityEngine.Collider2D)
extern "C" void SlowByCollision_HandleCollision_m3611 (SlowByCollision_t661 * __this, Collider2D_t713 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
