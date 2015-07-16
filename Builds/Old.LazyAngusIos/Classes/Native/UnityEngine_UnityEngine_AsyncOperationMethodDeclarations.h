#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.AsyncOperation
struct AsyncOperation_t1002;
struct AsyncOperation_t1002_marshaled;

// System.Void UnityEngine.AsyncOperation::.ctor()
extern "C" void AsyncOperation__ctor_m5795 (AsyncOperation_t1002 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AsyncOperation::InternalDestroy()
extern "C" void AsyncOperation_InternalDestroy_m5796 (AsyncOperation_t1002 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AsyncOperation::Finalize()
extern "C" void AsyncOperation_Finalize_m5797 (AsyncOperation_t1002 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void AsyncOperation_t1002_marshal(const AsyncOperation_t1002& unmarshaled, AsyncOperation_t1002_marshaled& marshaled);
void AsyncOperation_t1002_marshal_back(const AsyncOperation_t1002_marshaled& marshaled, AsyncOperation_t1002& unmarshaled);
void AsyncOperation_t1002_marshal_cleanup(AsyncOperation_t1002_marshaled& marshaled);
