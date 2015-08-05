#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.WaitForSeconds
struct WaitForSeconds_t738;
struct WaitForSeconds_t738_marshaled;

// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
extern "C" void WaitForSeconds__ctor_m3922 (WaitForSeconds_t738 * __this, float ___seconds, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void WaitForSeconds_t738_marshal(const WaitForSeconds_t738& unmarshaled, WaitForSeconds_t738_marshaled& marshaled);
void WaitForSeconds_t738_marshal_back(const WaitForSeconds_t738_marshaled& marshaled, WaitForSeconds_t738& unmarshaled);
void WaitForSeconds_t738_marshal_cleanup(WaitForSeconds_t738_marshaled& marshaled);
