#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.WaitForSeconds
struct WaitForSeconds_t602;
struct WaitForSeconds_t602_marshaled;

// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
extern "C" void WaitForSeconds__ctor_m2853 (WaitForSeconds_t602 * __this, float ___seconds, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void WaitForSeconds_t602_marshal(const WaitForSeconds_t602& unmarshaled, WaitForSeconds_t602_marshaled& marshaled);
void WaitForSeconds_t602_marshal_back(const WaitForSeconds_t602_marshaled& marshaled, WaitForSeconds_t602& unmarshaled);
void WaitForSeconds_t602_marshal_cleanup(WaitForSeconds_t602_marshaled& marshaled);
