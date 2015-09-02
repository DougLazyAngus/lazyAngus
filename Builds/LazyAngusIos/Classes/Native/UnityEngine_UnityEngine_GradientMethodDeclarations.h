#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Gradient
struct Gradient_t2725;
struct Gradient_t2725_marshaled;

// System.Void UnityEngine.Gradient::.ctor()
extern "C" void Gradient__ctor_m8966 (Gradient_t2725 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gradient::Init()
extern "C" void Gradient_Init_m8967 (Gradient_t2725 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gradient::Cleanup()
extern "C" void Gradient_Cleanup_m8968 (Gradient_t2725 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gradient::Finalize()
extern "C" void Gradient_Finalize_m8969 (Gradient_t2725 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void Gradient_t2725_marshal(const Gradient_t2725& unmarshaled, Gradient_t2725_marshaled& marshaled);
void Gradient_t2725_marshal_back(const Gradient_t2725_marshaled& marshaled, Gradient_t2725& unmarshaled);
void Gradient_t2725_marshal_cleanup(Gradient_t2725_marshaled& marshaled);
