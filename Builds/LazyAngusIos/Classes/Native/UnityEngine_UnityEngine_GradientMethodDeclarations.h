#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Gradient
struct Gradient_t1084;
struct Gradient_t1084_marshaled;

// System.Void UnityEngine.Gradient::.ctor()
extern "C" void Gradient__ctor_m5888 (Gradient_t1084 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gradient::Init()
extern "C" void Gradient_Init_m5889 (Gradient_t1084 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gradient::Cleanup()
extern "C" void Gradient_Cleanup_m5890 (Gradient_t1084 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gradient::Finalize()
extern "C" void Gradient_Finalize_m5891 (Gradient_t1084 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void Gradient_t1084_marshal(const Gradient_t1084& unmarshaled, Gradient_t1084_marshaled& marshaled);
void Gradient_t1084_marshal_back(const Gradient_t1084_marshaled& marshaled, Gradient_t1084& unmarshaled);
void Gradient_t1084_marshal_cleanup(Gradient_t1084_marshaled& marshaled);
