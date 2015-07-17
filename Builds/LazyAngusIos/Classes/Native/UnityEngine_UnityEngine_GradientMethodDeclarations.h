#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Gradient
struct Gradient_t1083;
struct Gradient_t1083_marshaled;

// System.Void UnityEngine.Gradient::.ctor()
extern "C" void Gradient__ctor_m5880 (Gradient_t1083 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gradient::Init()
extern "C" void Gradient_Init_m5881 (Gradient_t1083 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gradient::Cleanup()
extern "C" void Gradient_Cleanup_m5882 (Gradient_t1083 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gradient::Finalize()
extern "C" void Gradient_Finalize_m5883 (Gradient_t1083 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void Gradient_t1083_marshal(const Gradient_t1083& unmarshaled, Gradient_t1083_marshaled& marshaled);
void Gradient_t1083_marshal_back(const Gradient_t1083_marshaled& marshaled, Gradient_t1083& unmarshaled);
void Gradient_t1083_marshal_cleanup(Gradient_t1083_marshaled& marshaled);
