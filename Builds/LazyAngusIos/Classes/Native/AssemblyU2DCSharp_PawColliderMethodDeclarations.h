#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PawCollider
struct PawCollider_t615;
// UnityEngine.Collider2D
struct Collider2D_t700;

// System.Void PawCollider::.ctor()
extern "C" void PawCollider__ctor_m3276 (PawCollider_t615 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PawCollider::OnTriggerEnter2D(UnityEngine.Collider2D)
extern "C" void PawCollider_OnTriggerEnter2D_m3277 (PawCollider_t615 * __this, Collider2D_t700 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PawCollider::OnTriggerStay2D(UnityEngine.Collider2D)
extern "C" void PawCollider_OnTriggerStay2D_m3278 (PawCollider_t615 * __this, Collider2D_t700 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PawCollider::HandleCollision(UnityEngine.Collider2D)
extern "C" void PawCollider_HandleCollision_m3279 (PawCollider_t615 * __this, Collider2D_t700 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
