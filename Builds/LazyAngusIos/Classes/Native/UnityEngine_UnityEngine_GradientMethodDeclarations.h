#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Gradient
struct Gradient_t1085;
struct Gradient_t1085_marshaled;

// System.Void UnityEngine.Gradient::.ctor()
extern "C" void Gradient__ctor_m5895 (Gradient_t1085 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gradient::Init()
extern "C" void Gradient_Init_m5896 (Gradient_t1085 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gradient::Cleanup()
extern "C" void Gradient_Cleanup_m5897 (Gradient_t1085 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gradient::Finalize()
extern "C" void Gradient_Finalize_m5898 (Gradient_t1085 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void Gradient_t1085_marshal(const Gradient_t1085& unmarshaled, Gradient_t1085_marshaled& marshaled);
void Gradient_t1085_marshal_back(const Gradient_t1085_marshaled& marshaled, Gradient_t1085& unmarshaled);
void Gradient_t1085_marshal_cleanup(Gradient_t1085_marshaled& marshaled);
