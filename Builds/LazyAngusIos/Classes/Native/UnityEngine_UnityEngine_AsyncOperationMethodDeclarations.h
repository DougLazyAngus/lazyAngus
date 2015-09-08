#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.AsyncOperation
struct AsyncOperation_t2700;
struct AsyncOperation_t2700_marshaled;

// System.Void UnityEngine.AsyncOperation::.ctor()
extern "C" void AsyncOperation__ctor_m9476 (AsyncOperation_t2700 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AsyncOperation::InternalDestroy()
extern "C" void AsyncOperation_InternalDestroy_m9477 (AsyncOperation_t2700 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AsyncOperation::Finalize()
extern "C" void AsyncOperation_Finalize_m9478 (AsyncOperation_t2700 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void AsyncOperation_t2700_marshal(const AsyncOperation_t2700& unmarshaled, AsyncOperation_t2700_marshaled& marshaled);
void AsyncOperation_t2700_marshal_back(const AsyncOperation_t2700_marshaled& marshaled, AsyncOperation_t2700& unmarshaled);
void AsyncOperation_t2700_marshal_cleanup(AsyncOperation_t2700_marshaled& marshaled);
