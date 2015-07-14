#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Gradient
struct Gradient_t1027;
struct Gradient_t1027_marshaled;

// System.Void UnityEngine.Gradient::.ctor()
extern "C" void Gradient__ctor_m5275 (Gradient_t1027 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gradient::Init()
extern "C" void Gradient_Init_m5276 (Gradient_t1027 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gradient::Cleanup()
extern "C" void Gradient_Cleanup_m5277 (Gradient_t1027 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gradient::Finalize()
extern "C" void Gradient_Finalize_m5278 (Gradient_t1027 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void Gradient_t1027_marshal(const Gradient_t1027& unmarshaled, Gradient_t1027_marshaled& marshaled);
void Gradient_t1027_marshal_back(const Gradient_t1027_marshaled& marshaled, Gradient_t1027& unmarshaled);
void Gradient_t1027_marshal_cleanup(Gradient_t1027_marshaled& marshaled);
