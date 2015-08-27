#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Coroutine
struct Coroutine_t953;
struct Coroutine_t953_marshaled;

// System.Void UnityEngine.Coroutine::.ctor()
extern "C" void Coroutine__ctor_m8719 (Coroutine_t953 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Coroutine::ReleaseCoroutine()
extern "C" void Coroutine_ReleaseCoroutine_m8720 (Coroutine_t953 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Coroutine::Finalize()
extern "C" void Coroutine_Finalize_m8721 (Coroutine_t953 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void Coroutine_t953_marshal(const Coroutine_t953& unmarshaled, Coroutine_t953_marshaled& marshaled);
void Coroutine_t953_marshal_back(const Coroutine_t953_marshaled& marshaled, Coroutine_t953& unmarshaled);
void Coroutine_t953_marshal_cleanup(Coroutine_t953_marshaled& marshaled);
