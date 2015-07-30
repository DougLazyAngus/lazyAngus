#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.WaitForSeconds
struct WaitForSeconds_t735;
struct WaitForSeconds_t735_marshaled;

// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
extern "C" void WaitForSeconds__ctor_m3899 (WaitForSeconds_t735 * __this, float ___seconds, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void WaitForSeconds_t735_marshal(const WaitForSeconds_t735& unmarshaled, WaitForSeconds_t735_marshaled& marshaled);
void WaitForSeconds_t735_marshal_back(const WaitForSeconds_t735_marshaled& marshaled, WaitForSeconds_t735& unmarshaled);
void WaitForSeconds_t735_marshal_cleanup(WaitForSeconds_t735_marshaled& marshaled);
