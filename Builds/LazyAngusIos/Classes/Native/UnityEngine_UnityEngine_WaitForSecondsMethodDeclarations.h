#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.WaitForSeconds
struct WaitForSeconds_t683;
struct WaitForSeconds_t683_marshaled;

// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
extern "C" void WaitForSeconds__ctor_m3555 (WaitForSeconds_t683 * __this, float ___seconds, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void WaitForSeconds_t683_marshal(const WaitForSeconds_t683& unmarshaled, WaitForSeconds_t683_marshaled& marshaled);
void WaitForSeconds_t683_marshal_back(const WaitForSeconds_t683_marshaled& marshaled, WaitForSeconds_t683& unmarshaled);
void WaitForSeconds_t683_marshal_cleanup(WaitForSeconds_t683_marshaled& marshaled);
