#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Coroutine
struct Coroutine_t979;
struct Coroutine_t979_marshaled;

// System.Void UnityEngine.Coroutine::.ctor()
extern "C" void Coroutine__ctor_m8925 (Coroutine_t979 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Coroutine::ReleaseCoroutine()
extern "C" void Coroutine_ReleaseCoroutine_m8926 (Coroutine_t979 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Coroutine::Finalize()
extern "C" void Coroutine_Finalize_m8927 (Coroutine_t979 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void Coroutine_t979_marshal(const Coroutine_t979& unmarshaled, Coroutine_t979_marshaled& marshaled);
void Coroutine_t979_marshal_back(const Coroutine_t979_marshaled& marshaled, Coroutine_t979& unmarshaled);
void Coroutine_t979_marshal_cleanup(Coroutine_t979_marshaled& marshaled);
