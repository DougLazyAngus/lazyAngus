#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// SlowByCollision
struct SlowByCollision_t600;
// UnityEngine.Collider2D
struct Collider2D_t577;

// System.Void SlowByCollision::.ctor()
extern "C" void SlowByCollision__ctor_m3240 (SlowByCollision_t600 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SlowByCollision::OnTriggerEnter2D(UnityEngine.Collider2D)
extern "C" void SlowByCollision_OnTriggerEnter2D_m3241 (SlowByCollision_t600 * __this, Collider2D_t577 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SlowByCollision::OnTriggerStay2D(UnityEngine.Collider2D)
extern "C" void SlowByCollision_OnTriggerStay2D_m3242 (SlowByCollision_t600 * __this, Collider2D_t577 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SlowByCollision::HandleCollision(UnityEngine.Collider2D)
extern "C" void SlowByCollision_HandleCollision_m3243 (SlowByCollision_t600 * __this, Collider2D_t577 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
