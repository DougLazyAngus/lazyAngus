#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Gradient
struct Gradient_t1004;
struct Gradient_t1004_marshaled;

// System.Void UnityEngine.Gradient::.ctor()
extern "C" void Gradient__ctor_m5133 (Gradient_t1004 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gradient::Init()
extern "C" void Gradient_Init_m5134 (Gradient_t1004 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gradient::Cleanup()
extern "C" void Gradient_Cleanup_m5135 (Gradient_t1004 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gradient::Finalize()
extern "C" void Gradient_Finalize_m5136 (Gradient_t1004 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void Gradient_t1004_marshal(const Gradient_t1004& unmarshaled, Gradient_t1004_marshaled& marshaled);
void Gradient_t1004_marshal_back(const Gradient_t1004_marshaled& marshaled, Gradient_t1004& unmarshaled);
void Gradient_t1004_marshal_cleanup(Gradient_t1004_marshaled& marshaled);
