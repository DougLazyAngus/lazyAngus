#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Gradient
struct Gradient_t2659;
struct Gradient_t2659_marshaled;

// System.Void UnityEngine.Gradient::.ctor()
extern "C" void Gradient__ctor_m8561 (Gradient_t2659 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gradient::Init()
extern "C" void Gradient_Init_m8562 (Gradient_t2659 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gradient::Cleanup()
extern "C" void Gradient_Cleanup_m8563 (Gradient_t2659 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gradient::Finalize()
extern "C" void Gradient_Finalize_m8564 (Gradient_t2659 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void Gradient_t2659_marshal(const Gradient_t2659& unmarshaled, Gradient_t2659_marshaled& marshaled);
void Gradient_t2659_marshal_back(const Gradient_t2659_marshaled& marshaled, Gradient_t2659& unmarshaled);
void Gradient_t2659_marshal_cleanup(Gradient_t2659_marshaled& marshaled);
