#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PawCollider
struct PawCollider_t622;
// UnityEngine.Collider2D
struct Collider2D_t717;

// System.Void PawCollider::.ctor()
extern "C" void PawCollider__ctor_m3320 (PawCollider_t622 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PawCollider::OnTriggerEnter2D(UnityEngine.Collider2D)
extern "C" void PawCollider_OnTriggerEnter2D_m3321 (PawCollider_t622 * __this, Collider2D_t717 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PawCollider::OnTriggerStay2D(UnityEngine.Collider2D)
extern "C" void PawCollider_OnTriggerStay2D_m3322 (PawCollider_t622 * __this, Collider2D_t717 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PawCollider::HandleCollision(UnityEngine.Collider2D)
extern "C" void PawCollider_HandleCollision_m3323 (PawCollider_t622 * __this, Collider2D_t717 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
