﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.WaitForSeconds
struct WaitForSeconds_t623;
struct WaitForSeconds_t623_marshaled;

// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
extern "C" void WaitForSeconds__ctor_m2981 (WaitForSeconds_t623 * __this, float ___seconds, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void WaitForSeconds_t623_marshal(const WaitForSeconds_t623& unmarshaled, WaitForSeconds_t623_marshaled& marshaled);
void WaitForSeconds_t623_marshal_back(const WaitForSeconds_t623_marshaled& marshaled, WaitForSeconds_t623& unmarshaled);
void WaitForSeconds_t623_marshal_cleanup(WaitForSeconds_t623_marshaled& marshaled);