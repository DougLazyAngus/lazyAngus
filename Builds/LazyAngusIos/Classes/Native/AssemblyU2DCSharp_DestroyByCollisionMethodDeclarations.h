#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// DestroyByCollision
struct DestroyByCollision_t411;
// UnityEngine.Collider2D
struct Collider2D_t468;

// System.Void DestroyByCollision::.ctor()
extern "C" void DestroyByCollision__ctor_m1894 (DestroyByCollision_t411 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DestroyByCollision::OnTriggerEnter2D(UnityEngine.Collider2D)
extern "C" void DestroyByCollision_OnTriggerEnter2D_m1895 (DestroyByCollision_t411 * __this, Collider2D_t468 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DestroyByCollision::OnTriggerStay2D(UnityEngine.Collider2D)
extern "C" void DestroyByCollision_OnTriggerStay2D_m1896 (DestroyByCollision_t411 * __this, Collider2D_t468 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DestroyByCollision::HandleCollision(UnityEngine.Collider2D)
extern "C" void DestroyByCollision_HandleCollision_m1897 (DestroyByCollision_t411 * __this, Collider2D_t468 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
