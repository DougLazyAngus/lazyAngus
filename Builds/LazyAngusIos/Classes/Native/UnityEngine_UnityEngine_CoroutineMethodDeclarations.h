#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Coroutine
struct Coroutine_t740;
struct Coroutine_t740_marshaled;

// System.Void UnityEngine.Coroutine::.ctor()
extern "C" void Coroutine__ctor_m4870 (Coroutine_t740 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Coroutine::ReleaseCoroutine()
extern "C" void Coroutine_ReleaseCoroutine_m4871 (Coroutine_t740 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Coroutine::Finalize()
extern "C" void Coroutine_Finalize_m4872 (Coroutine_t740 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void Coroutine_t740_marshal(const Coroutine_t740& unmarshaled, Coroutine_t740_marshaled& marshaled);
void Coroutine_t740_marshal_back(const Coroutine_t740_marshaled& marshaled, Coroutine_t740& unmarshaled);
void Coroutine_t740_marshal_cleanup(Coroutine_t740_marshaled& marshaled);
