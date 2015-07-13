﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.RaycastHit2D
struct RaycastHit2D_t869;
// UnityEngine.Collider2D
struct Collider2D_t468;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t1063;
// UnityEngine.Transform
struct Transform_t323;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// UnityEngine.Vector2 UnityEngine.RaycastHit2D::get_point()
extern "C" Vector2_t68  RaycastHit2D_get_point_m4481 (RaycastHit2D_t869 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.RaycastHit2D::get_normal()
extern "C" Vector2_t68  RaycastHit2D_get_normal_m4482 (RaycastHit2D_t869 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.RaycastHit2D::get_fraction()
extern "C" float RaycastHit2D_get_fraction_m4555 (RaycastHit2D_t869 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Collider2D UnityEngine.RaycastHit2D::get_collider()
extern "C" Collider2D_t468 * RaycastHit2D_get_collider_m4478 (RaycastHit2D_t869 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rigidbody2D UnityEngine.RaycastHit2D::get_rigidbody()
extern "C" Rigidbody2D_t1063 * RaycastHit2D_get_rigidbody_m5784 (RaycastHit2D_t869 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.RaycastHit2D::get_transform()
extern "C" Transform_t323 * RaycastHit2D_get_transform_m4479 (RaycastHit2D_t869 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;