#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Collider
struct Collider_t782;
// UnityEngine.Rigidbody
struct Rigidbody_t2788;

// System.Void UnityEngine.Collider::set_enabled(System.Boolean)
extern "C" void Collider_set_enabled_m4183 (Collider_t782 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rigidbody UnityEngine.Collider::get_attachedRigidbody()
extern "C" Rigidbody_t2788 * Collider_get_attachedRigidbody_m9654 (Collider_t782 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
