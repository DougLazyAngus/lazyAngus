#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Gradient
struct Gradient_t2709;
struct Gradient_t2709_marshaled;

// System.Void UnityEngine.Gradient::.ctor()
extern "C" void Gradient__ctor_m8834 (Gradient_t2709 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gradient::Init()
extern "C" void Gradient_Init_m8835 (Gradient_t2709 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gradient::Cleanup()
extern "C" void Gradient_Cleanup_m8836 (Gradient_t2709 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gradient::Finalize()
extern "C" void Gradient_Finalize_m8837 (Gradient_t2709 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void Gradient_t2709_marshal(const Gradient_t2709& unmarshaled, Gradient_t2709_marshaled& marshaled);
void Gradient_t2709_marshal_back(const Gradient_t2709_marshaled& marshaled, Gradient_t2709& unmarshaled);
void Gradient_t2709_marshal_cleanup(Gradient_t2709_marshaled& marshaled);
