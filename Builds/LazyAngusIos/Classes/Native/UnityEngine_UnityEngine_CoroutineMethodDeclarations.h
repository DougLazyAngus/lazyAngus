#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Coroutine
struct Coroutine_t894;
struct Coroutine_t894_marshaled;

// System.Void UnityEngine.Coroutine::.ctor()
extern "C" void Coroutine__ctor_m8451 (Coroutine_t894 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Coroutine::ReleaseCoroutine()
extern "C" void Coroutine_ReleaseCoroutine_m8452 (Coroutine_t894 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Coroutine::Finalize()
extern "C" void Coroutine_Finalize_m8453 (Coroutine_t894 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void Coroutine_t894_marshal(const Coroutine_t894& unmarshaled, Coroutine_t894_marshaled& marshaled);
void Coroutine_t894_marshal_back(const Coroutine_t894_marshaled& marshaled, Coroutine_t894& unmarshaled);
void Coroutine_t894_marshal_cleanup(Coroutine_t894_marshaled& marshaled);
