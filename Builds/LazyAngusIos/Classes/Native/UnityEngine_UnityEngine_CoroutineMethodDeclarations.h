#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Coroutine
struct Coroutine_t972;
struct Coroutine_t972_marshaled;

// System.Void UnityEngine.Coroutine::.ctor()
extern "C" void Coroutine__ctor_m8867 (Coroutine_t972 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Coroutine::ReleaseCoroutine()
extern "C" void Coroutine_ReleaseCoroutine_m8868 (Coroutine_t972 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Coroutine::Finalize()
extern "C" void Coroutine_Finalize_m8869 (Coroutine_t972 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void Coroutine_t972_marshal(const Coroutine_t972& unmarshaled, Coroutine_t972_marshaled& marshaled);
void Coroutine_t972_marshal_back(const Coroutine_t972_marshaled& marshaled, Coroutine_t972& unmarshaled);
void Coroutine_t972_marshal_cleanup(Coroutine_t972_marshaled& marshaled);
