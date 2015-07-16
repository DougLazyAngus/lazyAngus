#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.AsyncOperation
struct AsyncOperation_t1010;
struct AsyncOperation_t1010_marshaled;

// System.Void UnityEngine.AsyncOperation::.ctor()
extern "C" void AsyncOperation__ctor_m5833 (AsyncOperation_t1010 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AsyncOperation::InternalDestroy()
extern "C" void AsyncOperation_InternalDestroy_m5834 (AsyncOperation_t1010 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AsyncOperation::Finalize()
extern "C" void AsyncOperation_Finalize_m5835 (AsyncOperation_t1010 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void AsyncOperation_t1010_marshal(const AsyncOperation_t1010& unmarshaled, AsyncOperation_t1010_marshaled& marshaled);
void AsyncOperation_t1010_marshal_back(const AsyncOperation_t1010_marshaled& marshaled, AsyncOperation_t1010& unmarshaled);
void AsyncOperation_t1010_marshal_cleanup(AsyncOperation_t1010_marshaled& marshaled);
