#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Coroutine
struct Coroutine_t893;
struct Coroutine_t893_marshaled;

// System.Void UnityEngine.Coroutine::.ctor()
extern "C" void Coroutine__ctor_m8446 (Coroutine_t893 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Coroutine::ReleaseCoroutine()
extern "C" void Coroutine_ReleaseCoroutine_m8447 (Coroutine_t893 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Coroutine::Finalize()
extern "C" void Coroutine_Finalize_m8448 (Coroutine_t893 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void Coroutine_t893_marshal(const Coroutine_t893& unmarshaled, Coroutine_t893_marshaled& marshaled);
void Coroutine_t893_marshal_back(const Coroutine_t893_marshaled& marshaled, Coroutine_t893& unmarshaled);
void Coroutine_t893_marshal_cleanup(Coroutine_t893_marshaled& marshaled);
