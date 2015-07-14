#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.AsyncOperation
struct AsyncOperation_t1001;
struct AsyncOperation_t1001_marshaled;

// System.Void UnityEngine.AsyncOperation::.ctor()
extern "C" void AsyncOperation__ctor_m5770 (AsyncOperation_t1001 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AsyncOperation::InternalDestroy()
extern "C" void AsyncOperation_InternalDestroy_m5771 (AsyncOperation_t1001 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AsyncOperation::Finalize()
extern "C" void AsyncOperation_Finalize_m5772 (AsyncOperation_t1001 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void AsyncOperation_t1001_marshal(const AsyncOperation_t1001& unmarshaled, AsyncOperation_t1001_marshaled& marshaled);
void AsyncOperation_t1001_marshal_back(const AsyncOperation_t1001_marshaled& marshaled, AsyncOperation_t1001& unmarshaled);
void AsyncOperation_t1001_marshal_cleanup(AsyncOperation_t1001_marshaled& marshaled);
