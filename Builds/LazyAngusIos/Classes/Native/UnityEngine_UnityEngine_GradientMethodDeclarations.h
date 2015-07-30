#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Gradient
struct Gradient_t2656;
struct Gradient_t2656_marshaled;

// System.Void UnityEngine.Gradient::.ctor()
extern "C" void Gradient__ctor_m8541 (Gradient_t2656 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gradient::Init()
extern "C" void Gradient_Init_m8542 (Gradient_t2656 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gradient::Cleanup()
extern "C" void Gradient_Cleanup_m8543 (Gradient_t2656 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gradient::Finalize()
extern "C" void Gradient_Finalize_m8544 (Gradient_t2656 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void Gradient_t2656_marshal(const Gradient_t2656& unmarshaled, Gradient_t2656_marshaled& marshaled);
void Gradient_t2656_marshal_back(const Gradient_t2656_marshaled& marshaled, Gradient_t2656& unmarshaled);
void Gradient_t2656_marshal_cleanup(Gradient_t2656_marshaled& marshaled);
