#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Coroutine
struct Coroutine_t788;
struct Coroutine_t788_marshaled;

// System.Void UnityEngine.Coroutine::.ctor()
extern "C" void Coroutine__ctor_m5185 (Coroutine_t788 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Coroutine::ReleaseCoroutine()
extern "C" void Coroutine_ReleaseCoroutine_m5186 (Coroutine_t788 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Coroutine::Finalize()
extern "C" void Coroutine_Finalize_m5187 (Coroutine_t788 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void Coroutine_t788_marshal(const Coroutine_t788& unmarshaled, Coroutine_t788_marshaled& marshaled);
void Coroutine_t788_marshal_back(const Coroutine_t788_marshaled& marshaled, Coroutine_t788& unmarshaled);
void Coroutine_t788_marshal_cleanup(Coroutine_t788_marshaled& marshaled);
