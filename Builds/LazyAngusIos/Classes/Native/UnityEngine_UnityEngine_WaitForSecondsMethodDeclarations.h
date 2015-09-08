#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.WaitForSeconds
struct WaitForSeconds_t800;
struct WaitForSeconds_t800_marshaled;

// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
extern "C" void WaitForSeconds__ctor_m4299 (WaitForSeconds_t800 * __this, float ___seconds, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void WaitForSeconds_t800_marshal(const WaitForSeconds_t800& unmarshaled, WaitForSeconds_t800_marshaled& marshaled);
void WaitForSeconds_t800_marshal_back(const WaitForSeconds_t800_marshaled& marshaled, WaitForSeconds_t800& unmarshaled);
void WaitForSeconds_t800_marshal_cleanup(WaitForSeconds_t800_marshaled& marshaled);
