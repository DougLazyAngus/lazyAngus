#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.AsyncOperation
struct AsyncOperation_t2622;
struct AsyncOperation_t2622_marshaled;

// System.Void UnityEngine.AsyncOperation::.ctor()
extern "C" void AsyncOperation__ctor_m8988 (AsyncOperation_t2622 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AsyncOperation::InternalDestroy()
extern "C" void AsyncOperation_InternalDestroy_m8989 (AsyncOperation_t2622 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AsyncOperation::Finalize()
extern "C" void AsyncOperation_Finalize_m8990 (AsyncOperation_t2622 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void AsyncOperation_t2622_marshal(const AsyncOperation_t2622& unmarshaled, AsyncOperation_t2622_marshaled& marshaled);
void AsyncOperation_t2622_marshal_back(const AsyncOperation_t2622_marshaled& marshaled, AsyncOperation_t2622& unmarshaled);
void AsyncOperation_t2622_marshal_cleanup(AsyncOperation_t2622_marshaled& marshaled);
