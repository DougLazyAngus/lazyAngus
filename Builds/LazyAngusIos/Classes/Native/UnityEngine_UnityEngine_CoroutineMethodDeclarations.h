#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Coroutine
struct Coroutine_t842;
struct Coroutine_t842_marshaled;

// System.Void UnityEngine.Coroutine::.ctor()
extern "C" void Coroutine__ctor_m5765 (Coroutine_t842 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Coroutine::ReleaseCoroutine()
extern "C" void Coroutine_ReleaseCoroutine_m5766 (Coroutine_t842 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Coroutine::Finalize()
extern "C" void Coroutine_Finalize_m5767 (Coroutine_t842 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void Coroutine_t842_marshal(const Coroutine_t842& unmarshaled, Coroutine_t842_marshaled& marshaled);
void Coroutine_t842_marshal_back(const Coroutine_t842_marshaled& marshaled, Coroutine_t842& unmarshaled);
void Coroutine_t842_marshal_cleanup(Coroutine_t842_marshaled& marshaled);
