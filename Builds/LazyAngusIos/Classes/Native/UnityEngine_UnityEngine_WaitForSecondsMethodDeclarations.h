#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.WaitForSeconds
struct WaitForSeconds_t785;
struct WaitForSeconds_t785_marshaled;

// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
extern "C" void WaitForSeconds__ctor_m4139 (WaitForSeconds_t785 * __this, float ___seconds, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void WaitForSeconds_t785_marshal(const WaitForSeconds_t785& unmarshaled, WaitForSeconds_t785_marshaled& marshaled);
void WaitForSeconds_t785_marshal_back(const WaitForSeconds_t785_marshaled& marshaled, WaitForSeconds_t785& unmarshaled);
void WaitForSeconds_t785_marshal_cleanup(WaitForSeconds_t785_marshaled& marshaled);
