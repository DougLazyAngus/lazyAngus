#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.WaitForSeconds
struct WaitForSeconds_t682;
struct WaitForSeconds_t682_marshaled;

// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
extern "C" void WaitForSeconds__ctor_m3547 (WaitForSeconds_t682 * __this, float ___seconds, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void WaitForSeconds_t682_marshal(const WaitForSeconds_t682& unmarshaled, WaitForSeconds_t682_marshaled& marshaled);
void WaitForSeconds_t682_marshal_back(const WaitForSeconds_t682_marshaled& marshaled, WaitForSeconds_t682& unmarshaled);
void WaitForSeconds_t682_marshal_cleanup(WaitForSeconds_t682_marshaled& marshaled);
