#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PawCollider
struct PawCollider_t620;
// UnityEngine.Collider2D
struct Collider2D_t713;

// System.Void PawCollider::.ctor()
extern "C" void PawCollider__ctor_m3316 (PawCollider_t620 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PawCollider::OnTriggerEnter2D(UnityEngine.Collider2D)
extern "C" void PawCollider_OnTriggerEnter2D_m3317 (PawCollider_t620 * __this, Collider2D_t713 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PawCollider::OnTriggerStay2D(UnityEngine.Collider2D)
extern "C" void PawCollider_OnTriggerStay2D_m3318 (PawCollider_t620 * __this, Collider2D_t713 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PawCollider::HandleCollision(UnityEngine.Collider2D)
extern "C" void PawCollider_HandleCollision_m3319 (PawCollider_t620 * __this, Collider2D_t713 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
