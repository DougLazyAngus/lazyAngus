#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Coroutine
struct Coroutine_t843;
struct Coroutine_t843_marshaled;

// System.Void UnityEngine.Coroutine::.ctor()
extern "C" void Coroutine__ctor_m5773 (Coroutine_t843 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Coroutine::ReleaseCoroutine()
extern "C" void Coroutine_ReleaseCoroutine_m5774 (Coroutine_t843 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Coroutine::Finalize()
extern "C" void Coroutine_Finalize_m5775 (Coroutine_t843 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void Coroutine_t843_marshal(const Coroutine_t843& unmarshaled, Coroutine_t843_marshaled& marshaled);
void Coroutine_t843_marshal_back(const Coroutine_t843_marshaled& marshaled, Coroutine_t843& unmarshaled);
void Coroutine_t843_marshal_cleanup(Coroutine_t843_marshaled& marshaled);
