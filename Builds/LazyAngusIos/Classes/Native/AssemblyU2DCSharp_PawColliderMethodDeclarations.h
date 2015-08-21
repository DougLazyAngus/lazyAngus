#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PawCollider
struct PawCollider_t614;
// UnityEngine.Collider2D
struct Collider2D_t697;

// System.Void PawCollider::.ctor()
extern "C" void PawCollider__ctor_m3267 (PawCollider_t614 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PawCollider::OnTriggerEnter2D(UnityEngine.Collider2D)
extern "C" void PawCollider_OnTriggerEnter2D_m3268 (PawCollider_t614 * __this, Collider2D_t697 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PawCollider::OnTriggerStay2D(UnityEngine.Collider2D)
extern "C" void PawCollider_OnTriggerStay2D_m3269 (PawCollider_t614 * __this, Collider2D_t697 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PawCollider::HandleCollision(UnityEngine.Collider2D)
extern "C" void PawCollider_HandleCollision_m3270 (PawCollider_t614 * __this, Collider2D_t697 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
