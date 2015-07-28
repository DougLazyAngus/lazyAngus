#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.WaitForSeconds
struct WaitForSeconds_t727;
struct WaitForSeconds_t727_marshaled;

// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
extern "C" void WaitForSeconds__ctor_m3855 (WaitForSeconds_t727 * __this, float ___seconds, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void WaitForSeconds_t727_marshal(const WaitForSeconds_t727& unmarshaled, WaitForSeconds_t727_marshaled& marshaled);
void WaitForSeconds_t727_marshal_back(const WaitForSeconds_t727_marshaled& marshaled, WaitForSeconds_t727& unmarshaled);
void WaitForSeconds_t727_marshal_cleanup(WaitForSeconds_t727_marshaled& marshaled);
