#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Gradient
struct Gradient_t982;
struct Gradient_t982_marshaled;

// System.Void UnityEngine.Gradient::.ctor()
extern "C" void Gradient__ctor_m4987 (Gradient_t982 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gradient::Init()
extern "C" void Gradient_Init_m4988 (Gradient_t982 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gradient::Cleanup()
extern "C" void Gradient_Cleanup_m4989 (Gradient_t982 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gradient::Finalize()
extern "C" void Gradient_Finalize_m4990 (Gradient_t982 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void Gradient_t982_marshal(const Gradient_t982& unmarshaled, Gradient_t982_marshaled& marshaled);
void Gradient_t982_marshal_back(const Gradient_t982_marshaled& marshaled, Gradient_t982& unmarshaled);
void Gradient_t982_marshal_cleanup(Gradient_t982_marshaled& marshaled);
