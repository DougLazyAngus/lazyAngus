#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Coroutine
struct Coroutine_t969;
struct Coroutine_t969_marshaled;

// System.Void UnityEngine.Coroutine::.ctor()
extern "C" void Coroutine__ctor_m8867 (Coroutine_t969 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Coroutine::ReleaseCoroutine()
extern "C" void Coroutine_ReleaseCoroutine_m8868 (Coroutine_t969 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Coroutine::Finalize()
extern "C" void Coroutine_Finalize_m8869 (Coroutine_t969 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void Coroutine_t969_marshal(const Coroutine_t969& unmarshaled, Coroutine_t969_marshaled& marshaled);
void Coroutine_t969_marshal_back(const Coroutine_t969_marshaled& marshaled, Coroutine_t969& unmarshaled);
void Coroutine_t969_marshal_cleanup(Coroutine_t969_marshaled& marshaled);
