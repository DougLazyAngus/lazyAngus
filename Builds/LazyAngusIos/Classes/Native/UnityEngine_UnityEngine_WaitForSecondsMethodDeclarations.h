#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.WaitForSeconds
struct WaitForSeconds_t786;
struct WaitForSeconds_t786_marshaled;

// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
extern "C" void WaitForSeconds__ctor_m4154 (WaitForSeconds_t786 * __this, float ___seconds, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void WaitForSeconds_t786_marshal(const WaitForSeconds_t786& unmarshaled, WaitForSeconds_t786_marshaled& marshaled);
void WaitForSeconds_t786_marshal_back(const WaitForSeconds_t786_marshaled& marshaled, WaitForSeconds_t786& unmarshaled);
void WaitForSeconds_t786_marshal_cleanup(WaitForSeconds_t786_marshaled& marshaled);
