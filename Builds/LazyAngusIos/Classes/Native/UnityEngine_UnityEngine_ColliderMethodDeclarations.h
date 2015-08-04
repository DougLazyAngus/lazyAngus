#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Collider
struct Collider_t715;
// UnityEngine.Rigidbody
struct Rigidbody_t2717;

// System.Void UnityEngine.Collider::set_enabled(System.Boolean)
extern "C" void Collider_set_enabled_m3781 (Collider_t715 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rigidbody UnityEngine.Collider::get_attachedRigidbody()
extern "C" Rigidbody_t2717 * Collider_get_attachedRigidbody_m9225 (Collider_t715 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
