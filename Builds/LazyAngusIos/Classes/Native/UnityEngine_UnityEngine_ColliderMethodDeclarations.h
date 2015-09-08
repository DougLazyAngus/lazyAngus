#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Collider
struct Collider_t779;
// UnityEngine.Rigidbody
struct Rigidbody_t2785;

// System.Void UnityEngine.Collider::set_enabled(System.Boolean)
extern "C" void Collider_set_enabled_m4183 (Collider_t779 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rigidbody UnityEngine.Collider::get_attachedRigidbody()
extern "C" Rigidbody_t2785 * Collider_get_attachedRigidbody_m9654 (Collider_t779 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
