#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.WaitForSeconds
struct WaitForSeconds_t810;
struct WaitForSeconds_t810_marshaled;

// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
extern "C" void WaitForSeconds__ctor_m4355 (WaitForSeconds_t810 * __this, float ___seconds, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void WaitForSeconds_t810_marshal(const WaitForSeconds_t810& unmarshaled, WaitForSeconds_t810_marshaled& marshaled);
void WaitForSeconds_t810_marshal_back(const WaitForSeconds_t810_marshaled& marshaled, WaitForSeconds_t810& unmarshaled);
void WaitForSeconds_t810_marshal_cleanup(WaitForSeconds_t810_marshaled& marshaled);
