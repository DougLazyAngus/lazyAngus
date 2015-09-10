#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Gradient
struct Gradient_t2736;
struct Gradient_t2736_marshaled;

// System.Void UnityEngine.Gradient::.ctor()
extern "C" void Gradient__ctor_m9040 (Gradient_t2736 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gradient::Init()
extern "C" void Gradient_Init_m9041 (Gradient_t2736 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gradient::Cleanup()
extern "C" void Gradient_Cleanup_m9042 (Gradient_t2736 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gradient::Finalize()
extern "C" void Gradient_Finalize_m9043 (Gradient_t2736 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void Gradient_t2736_marshal(const Gradient_t2736& unmarshaled, Gradient_t2736_marshaled& marshaled);
void Gradient_t2736_marshal_back(const Gradient_t2736_marshaled& marshaled, Gradient_t2736& unmarshaled);
void Gradient_t2736_marshal_cleanup(Gradient_t2736_marshaled& marshaled);
