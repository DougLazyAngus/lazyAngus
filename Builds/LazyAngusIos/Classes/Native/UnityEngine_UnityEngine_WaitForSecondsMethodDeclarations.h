#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.WaitForSeconds
struct WaitForSeconds_t684;
struct WaitForSeconds_t684_marshaled;

// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
extern "C" void WaitForSeconds__ctor_m3562 (WaitForSeconds_t684 * __this, float ___seconds, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void WaitForSeconds_t684_marshal(const WaitForSeconds_t684& unmarshaled, WaitForSeconds_t684_marshaled& marshaled);
void WaitForSeconds_t684_marshal_back(const WaitForSeconds_t684_marshaled& marshaled, WaitForSeconds_t684& unmarshaled);
void WaitForSeconds_t684_marshal_cleanup(WaitForSeconds_t684_marshaled& marshaled);
