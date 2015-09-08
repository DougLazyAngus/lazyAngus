#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PawCollider
struct PawCollider_t621;
// UnityEngine.Collider2D
struct Collider2D_t714;

// System.Void PawCollider::.ctor()
extern "C" void PawCollider__ctor_m3327 (PawCollider_t621 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PawCollider::OnTriggerEnter2D(UnityEngine.Collider2D)
extern "C" void PawCollider_OnTriggerEnter2D_m3328 (PawCollider_t621 * __this, Collider2D_t714 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PawCollider::OnTriggerStay2D(UnityEngine.Collider2D)
extern "C" void PawCollider_OnTriggerStay2D_m3329 (PawCollider_t621 * __this, Collider2D_t714 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PawCollider::HandleCollision(UnityEngine.Collider2D)
extern "C" void PawCollider_HandleCollision_m3330 (PawCollider_t621 * __this, Collider2D_t714 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
