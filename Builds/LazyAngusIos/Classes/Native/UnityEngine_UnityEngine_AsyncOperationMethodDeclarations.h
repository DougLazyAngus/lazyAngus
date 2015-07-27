#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.AsyncOperation
struct AsyncOperation_t1057;
struct AsyncOperation_t1057_marshaled;

// System.Void UnityEngine.AsyncOperation::.ctor()
extern "C" void AsyncOperation__ctor_m6382 (AsyncOperation_t1057 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AsyncOperation::InternalDestroy()
extern "C" void AsyncOperation_InternalDestroy_m6383 (AsyncOperation_t1057 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AsyncOperation::Finalize()
extern "C" void AsyncOperation_Finalize_m6384 (AsyncOperation_t1057 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void AsyncOperation_t1057_marshal(const AsyncOperation_t1057& unmarshaled, AsyncOperation_t1057_marshaled& marshaled);
void AsyncOperation_t1057_marshal_back(const AsyncOperation_t1057_marshaled& marshaled, AsyncOperation_t1057& unmarshaled);
void AsyncOperation_t1057_marshal_cleanup(AsyncOperation_t1057_marshaled& marshaled);
