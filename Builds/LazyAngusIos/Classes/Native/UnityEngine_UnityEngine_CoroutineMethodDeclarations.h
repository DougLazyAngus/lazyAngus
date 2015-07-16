#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Coroutine
struct Coroutine_t796;
struct Coroutine_t796_marshaled;

// System.Void UnityEngine.Coroutine::.ctor()
extern "C" void Coroutine__ctor_m5223 (Coroutine_t796 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Coroutine::ReleaseCoroutine()
extern "C" void Coroutine_ReleaseCoroutine_m5224 (Coroutine_t796 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Coroutine::Finalize()
extern "C" void Coroutine_Finalize_m5225 (Coroutine_t796 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void Coroutine_t796_marshal(const Coroutine_t796& unmarshaled, Coroutine_t796_marshaled& marshaled);
void Coroutine_t796_marshal_back(const Coroutine_t796_marshaled& marshaled, Coroutine_t796& unmarshaled);
void Coroutine_t796_marshal_cleanup(Coroutine_t796_marshaled& marshaled);
