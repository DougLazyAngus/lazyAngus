#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Coroutine
struct Coroutine_t950;
struct Coroutine_t950_marshaled;

// System.Void UnityEngine.Coroutine::.ctor()
extern "C" void Coroutine__ctor_m8686 (Coroutine_t950 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Coroutine::ReleaseCoroutine()
extern "C" void Coroutine_ReleaseCoroutine_m8687 (Coroutine_t950 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Coroutine::Finalize()
extern "C" void Coroutine_Finalize_m8688 (Coroutine_t950 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void Coroutine_t950_marshal(const Coroutine_t950& unmarshaled, Coroutine_t950_marshaled& marshaled);
void Coroutine_t950_marshal_back(const Coroutine_t950_marshaled& marshaled, Coroutine_t950& unmarshaled);
void Coroutine_t950_marshal_cleanup(Coroutine_t950_marshaled& marshaled);
