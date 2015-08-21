#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Gradient
struct Gradient_t2706;
struct Gradient_t2706_marshaled;

// System.Void UnityEngine.Gradient::.ctor()
extern "C" void Gradient__ctor_m8801 (Gradient_t2706 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gradient::Init()
extern "C" void Gradient_Init_m8802 (Gradient_t2706 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gradient::Cleanup()
extern "C" void Gradient_Cleanup_m8803 (Gradient_t2706 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gradient::Finalize()
extern "C" void Gradient_Finalize_m8804 (Gradient_t2706 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void Gradient_t2706_marshal(const Gradient_t2706& unmarshaled, Gradient_t2706_marshaled& marshaled);
void Gradient_t2706_marshal_back(const Gradient_t2706_marshaled& marshaled, Gradient_t2706& unmarshaled);
void Gradient_t2706_marshal_cleanup(Gradient_t2706_marshaled& marshaled);
