#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Coroutine
struct Coroutine_t844;
struct Coroutine_t844_marshaled;

// System.Void UnityEngine.Coroutine::.ctor()
extern "C" void Coroutine__ctor_m5780 (Coroutine_t844 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Coroutine::ReleaseCoroutine()
extern "C" void Coroutine_ReleaseCoroutine_m5781 (Coroutine_t844 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Coroutine::Finalize()
extern "C" void Coroutine_Finalize_m5782 (Coroutine_t844 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void Coroutine_t844_marshal(const Coroutine_t844& unmarshaled, Coroutine_t844_marshaled& marshaled);
void Coroutine_t844_marshal_back(const Coroutine_t844_marshaled& marshaled, Coroutine_t844& unmarshaled);
void Coroutine_t844_marshal_cleanup(Coroutine_t844_marshaled& marshaled);
