#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Collider
struct Collider_t558;
// UnityEngine.Rigidbody
struct Rigidbody_t1039;

// System.Void UnityEngine.Collider::set_enabled(System.Boolean)
extern "C" void Collider_set_enabled_m2586 (Collider_t558 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rigidbody UnityEngine.Collider::get_attachedRigidbody()
extern "C" Rigidbody_t1039 * Collider_get_attachedRigidbody_m5630 (Collider_t558 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
