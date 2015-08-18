#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Coroutine
struct Coroutine_t952;
struct Coroutine_t952_marshaled;

// System.Void UnityEngine.Coroutine::.ctor()
extern "C" void Coroutine__ctor_m8697 (Coroutine_t952 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Coroutine::ReleaseCoroutine()
extern "C" void Coroutine_ReleaseCoroutine_m8698 (Coroutine_t952 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Coroutine::Finalize()
extern "C" void Coroutine_Finalize_m8699 (Coroutine_t952 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void Coroutine_t952_marshal(const Coroutine_t952& unmarshaled, Coroutine_t952_marshaled& marshaled);
void Coroutine_t952_marshal_back(const Coroutine_t952_marshaled& marshaled, Coroutine_t952& unmarshaled);
void Coroutine_t952_marshal_cleanup(Coroutine_t952_marshaled& marshaled);
