#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.WaitForSeconds
struct WaitForSeconds_t728;
struct WaitForSeconds_t728_marshaled;

// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
extern "C" void WaitForSeconds__ctor_m3855 (WaitForSeconds_t728 * __this, float ___seconds, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void WaitForSeconds_t728_marshal(const WaitForSeconds_t728& unmarshaled, WaitForSeconds_t728_marshaled& marshaled);
void WaitForSeconds_t728_marshal_back(const WaitForSeconds_t728_marshaled& marshaled, WaitForSeconds_t728& unmarshaled);
void WaitForSeconds_t728_marshal_cleanup(WaitForSeconds_t728_marshaled& marshaled);
