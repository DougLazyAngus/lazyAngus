#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.WaitForSeconds
struct WaitForSeconds_t803;
struct WaitForSeconds_t803_marshaled;

// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
extern "C" void WaitForSeconds__ctor_m4299 (WaitForSeconds_t803 * __this, float ___seconds, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void WaitForSeconds_t803_marshal(const WaitForSeconds_t803& unmarshaled, WaitForSeconds_t803_marshaled& marshaled);
void WaitForSeconds_t803_marshal_back(const WaitForSeconds_t803_marshaled& marshaled, WaitForSeconds_t803& unmarshaled);
void WaitForSeconds_t803_marshal_cleanup(WaitForSeconds_t803_marshaled& marshaled);
