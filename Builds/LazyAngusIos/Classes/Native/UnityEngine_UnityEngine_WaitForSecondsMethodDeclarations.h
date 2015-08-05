#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.WaitForSeconds
struct WaitForSeconds_t736;
struct WaitForSeconds_t736_marshaled;

// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
extern "C" void WaitForSeconds__ctor_m3917 (WaitForSeconds_t736 * __this, float ___seconds, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void WaitForSeconds_t736_marshal(const WaitForSeconds_t736& unmarshaled, WaitForSeconds_t736_marshaled& marshaled);
void WaitForSeconds_t736_marshal_back(const WaitForSeconds_t736_marshaled& marshaled, WaitForSeconds_t736& unmarshaled);
void WaitForSeconds_t736_marshal_cleanup(WaitForSeconds_t736_marshaled& marshaled);
