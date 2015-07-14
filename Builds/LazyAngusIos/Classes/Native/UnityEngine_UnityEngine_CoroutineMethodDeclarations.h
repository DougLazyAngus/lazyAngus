#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Coroutine
struct Coroutine_t787;
struct Coroutine_t787_marshaled;

// System.Void UnityEngine.Coroutine::.ctor()
extern "C" void Coroutine__ctor_m5160 (Coroutine_t787 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Coroutine::ReleaseCoroutine()
extern "C" void Coroutine_ReleaseCoroutine_m5161 (Coroutine_t787 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Coroutine::Finalize()
extern "C" void Coroutine_Finalize_m5162 (Coroutine_t787 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void Coroutine_t787_marshal(const Coroutine_t787& unmarshaled, Coroutine_t787_marshaled& marshaled);
void Coroutine_t787_marshal_back(const Coroutine_t787_marshaled& marshaled, Coroutine_t787& unmarshaled);
void Coroutine_t787_marshal_cleanup(Coroutine_t787_marshaled& marshaled);
