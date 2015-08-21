#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.WaitForSeconds
struct WaitForSeconds_t783;
struct WaitForSeconds_t783_marshaled;

// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
extern "C" void WaitForSeconds__ctor_m4124 (WaitForSeconds_t783 * __this, float ___seconds, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void WaitForSeconds_t783_marshal(const WaitForSeconds_t783& unmarshaled, WaitForSeconds_t783_marshaled& marshaled);
void WaitForSeconds_t783_marshal_back(const WaitForSeconds_t783_marshaled& marshaled, WaitForSeconds_t783& unmarshaled);
void WaitForSeconds_t783_marshal_cleanup(WaitForSeconds_t783_marshaled& marshaled);
