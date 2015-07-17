#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.AsyncOperation
struct AsyncOperation_t1056;
struct AsyncOperation_t1056_marshaled;

// System.Void UnityEngine.AsyncOperation::.ctor()
extern "C" void AsyncOperation__ctor_m6374 (AsyncOperation_t1056 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AsyncOperation::InternalDestroy()
extern "C" void AsyncOperation_InternalDestroy_m6375 (AsyncOperation_t1056 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AsyncOperation::Finalize()
extern "C" void AsyncOperation_Finalize_m6376 (AsyncOperation_t1056 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void AsyncOperation_t1056_marshal(const AsyncOperation_t1056& unmarshaled, AsyncOperation_t1056_marshaled& marshaled);
void AsyncOperation_t1056_marshal_back(const AsyncOperation_t1056_marshaled& marshaled, AsyncOperation_t1056& unmarshaled);
void AsyncOperation_t1056_marshal_cleanup(AsyncOperation_t1056_marshaled& marshaled);
