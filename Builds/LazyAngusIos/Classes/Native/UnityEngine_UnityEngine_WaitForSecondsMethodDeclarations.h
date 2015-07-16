#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.WaitForSeconds
struct WaitForSeconds_t631;
struct WaitForSeconds_t631_marshaled;

// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
extern "C" void WaitForSeconds__ctor_m3015 (WaitForSeconds_t631 * __this, float ___seconds, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void WaitForSeconds_t631_marshal(const WaitForSeconds_t631& unmarshaled, WaitForSeconds_t631_marshaled& marshaled);
void WaitForSeconds_t631_marshal_back(const WaitForSeconds_t631_marshaled& marshaled, WaitForSeconds_t631& unmarshaled);
void WaitForSeconds_t631_marshal_cleanup(WaitForSeconds_t631_marshaled& marshaled);
