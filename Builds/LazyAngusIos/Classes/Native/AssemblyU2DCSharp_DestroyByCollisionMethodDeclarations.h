#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// DestroyByCollision
struct DestroyByCollision_t533;
// UnityEngine.Collider2D
struct Collider2D_t699;

// System.Void DestroyByCollision::.ctor()
extern "C" void DestroyByCollision__ctor_m2872 (DestroyByCollision_t533 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DestroyByCollision::OnTriggerEnter2D(UnityEngine.Collider2D)
extern "C" void DestroyByCollision_OnTriggerEnter2D_m2873 (DestroyByCollision_t533 * __this, Collider2D_t699 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DestroyByCollision::OnTriggerStay2D(UnityEngine.Collider2D)
extern "C" void DestroyByCollision_OnTriggerStay2D_m2874 (DestroyByCollision_t533 * __this, Collider2D_t699 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DestroyByCollision::HandleCollision(UnityEngine.Collider2D)
extern "C" void DestroyByCollision_HandleCollision_m2875 (DestroyByCollision_t533 * __this, Collider2D_t699 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
