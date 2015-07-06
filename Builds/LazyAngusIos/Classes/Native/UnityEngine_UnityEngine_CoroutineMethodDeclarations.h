#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Coroutine
struct Coroutine_t763;
struct Coroutine_t763_marshaled;

// System.Void UnityEngine.Coroutine::.ctor()
extern "C" void Coroutine__ctor_m5016 (Coroutine_t763 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Coroutine::ReleaseCoroutine()
extern "C" void Coroutine_ReleaseCoroutine_m5017 (Coroutine_t763 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Coroutine::Finalize()
extern "C" void Coroutine_Finalize_m5018 (Coroutine_t763 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void Coroutine_t763_marshal(const Coroutine_t763& unmarshaled, Coroutine_t763_marshaled& marshaled);
void Coroutine_t763_marshal_back(const Coroutine_t763_marshaled& marshaled, Coroutine_t763& unmarshaled);
void Coroutine_t763_marshal_cleanup(Coroutine_t763_marshaled& marshaled);
