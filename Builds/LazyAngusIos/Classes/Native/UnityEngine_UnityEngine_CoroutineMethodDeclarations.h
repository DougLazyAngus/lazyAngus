#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Coroutine
struct Coroutine_t891;
struct Coroutine_t891_marshaled;

// System.Void UnityEngine.Coroutine::.ctor()
extern "C" void Coroutine__ctor_m8426 (Coroutine_t891 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Coroutine::ReleaseCoroutine()
extern "C" void Coroutine_ReleaseCoroutine_m8427 (Coroutine_t891 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Coroutine::Finalize()
extern "C" void Coroutine_Finalize_m8428 (Coroutine_t891 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void Coroutine_t891_marshal(const Coroutine_t891& unmarshaled, Coroutine_t891_marshaled& marshaled);
void Coroutine_t891_marshal_back(const Coroutine_t891_marshaled& marshaled, Coroutine_t891& unmarshaled);
void Coroutine_t891_marshal_cleanup(Coroutine_t891_marshaled& marshaled);
