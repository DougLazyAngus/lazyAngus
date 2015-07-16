#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Collider
struct Collider_t610;
// UnityEngine.Rigidbody
struct Rigidbody_t1094;

// System.Void UnityEngine.Collider::set_enabled(System.Boolean)
extern "C" void Collider_set_enabled_m2888 (Collider_t610 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rigidbody UnityEngine.Collider::get_attachedRigidbody()
extern "C" Rigidbody_t1094 * Collider_get_attachedRigidbody_m5981 (Collider_t610 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
