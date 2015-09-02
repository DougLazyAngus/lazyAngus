#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Coroutine
struct Coroutine_t968;
struct Coroutine_t968_marshaled;

// System.Void UnityEngine.Coroutine::.ctor()
extern "C" void Coroutine__ctor_m8851 (Coroutine_t968 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Coroutine::ReleaseCoroutine()
extern "C" void Coroutine_ReleaseCoroutine_m8852 (Coroutine_t968 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Coroutine::Finalize()
extern "C" void Coroutine_Finalize_m8853 (Coroutine_t968 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void Coroutine_t968_marshal(const Coroutine_t968& unmarshaled, Coroutine_t968_marshaled& marshaled);
void Coroutine_t968_marshal_back(const Coroutine_t968_marshaled& marshaled, Coroutine_t968& unmarshaled);
void Coroutine_t968_marshal_cleanup(Coroutine_t968_marshaled& marshaled);
