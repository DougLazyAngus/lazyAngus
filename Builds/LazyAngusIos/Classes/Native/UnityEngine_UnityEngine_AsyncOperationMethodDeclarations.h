#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.AsyncOperation
struct AsyncOperation_t2623;
struct AsyncOperation_t2623_marshaled;

// System.Void UnityEngine.AsyncOperation::.ctor()
extern "C" void AsyncOperation__ctor_m8988 (AsyncOperation_t2623 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AsyncOperation::InternalDestroy()
extern "C" void AsyncOperation_InternalDestroy_m8989 (AsyncOperation_t2623 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AsyncOperation::Finalize()
extern "C" void AsyncOperation_Finalize_m8990 (AsyncOperation_t2623 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void AsyncOperation_t2623_marshal(const AsyncOperation_t2623& unmarshaled, AsyncOperation_t2623_marshaled& marshaled);
void AsyncOperation_t2623_marshal_back(const AsyncOperation_t2623_marshaled& marshaled, AsyncOperation_t2623& unmarshaled);
void AsyncOperation_t2623_marshal_cleanup(AsyncOperation_t2623_marshaled& marshaled);
