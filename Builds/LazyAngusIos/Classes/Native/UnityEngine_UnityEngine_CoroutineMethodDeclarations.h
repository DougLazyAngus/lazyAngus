#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Coroutine
struct Coroutine_t895;
struct Coroutine_t895_marshaled;

// System.Void UnityEngine.Coroutine::.ctor()
extern "C" void Coroutine__ctor_m8454 (Coroutine_t895 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Coroutine::ReleaseCoroutine()
extern "C" void Coroutine_ReleaseCoroutine_m8455 (Coroutine_t895 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Coroutine::Finalize()
extern "C" void Coroutine_Finalize_m8456 (Coroutine_t895 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void Coroutine_t895_marshal(const Coroutine_t895& unmarshaled, Coroutine_t895_marshaled& marshaled);
void Coroutine_t895_marshal_back(const Coroutine_t895_marshaled& marshaled, Coroutine_t895& unmarshaled);
void Coroutine_t895_marshal_cleanup(Coroutine_t895_marshaled& marshaled);
