#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Gradient
struct Gradient_t1029;
struct Gradient_t1029_marshaled;

// System.Void UnityEngine.Gradient::.ctor()
extern "C" void Gradient__ctor_m5300 (Gradient_t1029 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gradient::Init()
extern "C" void Gradient_Init_m5301 (Gradient_t1029 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gradient::Cleanup()
extern "C" void Gradient_Cleanup_m5302 (Gradient_t1029 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gradient::Finalize()
extern "C" void Gradient_Finalize_m5303 (Gradient_t1029 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void Gradient_t1029_marshal(const Gradient_t1029& unmarshaled, Gradient_t1029_marshaled& marshaled);
void Gradient_t1029_marshal_back(const Gradient_t1029_marshaled& marshaled, Gradient_t1029& unmarshaled);
void Gradient_t1029_marshal_cleanup(Gradient_t1029_marshaled& marshaled);
