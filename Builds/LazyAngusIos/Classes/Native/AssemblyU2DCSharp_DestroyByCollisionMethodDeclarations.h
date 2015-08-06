#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// DestroyByCollision
struct DestroyByCollision_t493;
// UnityEngine.Collider2D
struct Collider2D_t577;

// System.Void DestroyByCollision::.ctor()
extern "C" void DestroyByCollision__ctor_m2670 (DestroyByCollision_t493 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DestroyByCollision::OnTriggerEnter2D(UnityEngine.Collider2D)
extern "C" void DestroyByCollision_OnTriggerEnter2D_m2671 (DestroyByCollision_t493 * __this, Collider2D_t577 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DestroyByCollision::OnTriggerStay2D(UnityEngine.Collider2D)
extern "C" void DestroyByCollision_OnTriggerStay2D_m2672 (DestroyByCollision_t493 * __this, Collider2D_t577 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DestroyByCollision::HandleCollision(UnityEngine.Collider2D)
extern "C" void DestroyByCollision_HandleCollision_m2673 (DestroyByCollision_t493 * __this, Collider2D_t577 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
