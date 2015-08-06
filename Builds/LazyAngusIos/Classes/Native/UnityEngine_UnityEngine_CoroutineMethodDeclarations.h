#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Coroutine
struct Coroutine_t892;
struct Coroutine_t892_marshaled;

// System.Void UnityEngine.Coroutine::.ctor()
extern "C" void Coroutine__ctor_m8439 (Coroutine_t892 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Coroutine::ReleaseCoroutine()
extern "C" void Coroutine_ReleaseCoroutine_m8440 (Coroutine_t892 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Coroutine::Finalize()
extern "C" void Coroutine_Finalize_m8441 (Coroutine_t892 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void Coroutine_t892_marshal(const Coroutine_t892& unmarshaled, Coroutine_t892_marshaled& marshaled);
void Coroutine_t892_marshal_back(const Coroutine_t892_marshaled& marshaled, Coroutine_t892& unmarshaled);
void Coroutine_t892_marshal_cleanup(Coroutine_t892_marshaled& marshaled);
