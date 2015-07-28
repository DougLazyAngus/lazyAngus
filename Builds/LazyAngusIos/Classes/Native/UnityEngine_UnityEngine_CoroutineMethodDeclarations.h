#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Coroutine
struct Coroutine_t884;
struct Coroutine_t884_marshaled;

// System.Void UnityEngine.Coroutine::.ctor()
extern "C" void Coroutine__ctor_m8380 (Coroutine_t884 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Coroutine::ReleaseCoroutine()
extern "C" void Coroutine_ReleaseCoroutine_m8381 (Coroutine_t884 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Coroutine::Finalize()
extern "C" void Coroutine_Finalize_m8382 (Coroutine_t884 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void Coroutine_t884_marshal(const Coroutine_t884& unmarshaled, Coroutine_t884_marshaled& marshaled);
void Coroutine_t884_marshal_back(const Coroutine_t884_marshaled& marshaled, Coroutine_t884& unmarshaled);
void Coroutine_t884_marshal_cleanup(Coroutine_t884_marshaled& marshaled);
