#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.AsyncOperation
struct AsyncOperation_t954;
struct AsyncOperation_t954_marshaled;

// System.Void UnityEngine.AsyncOperation::.ctor()
extern "C" void AsyncOperation__ctor_m5482 (AsyncOperation_t954 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AsyncOperation::InternalDestroy()
extern "C" void AsyncOperation_InternalDestroy_m5483 (AsyncOperation_t954 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AsyncOperation::Finalize()
extern "C" void AsyncOperation_Finalize_m5484 (AsyncOperation_t954 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void AsyncOperation_t954_marshal(const AsyncOperation_t954& unmarshaled, AsyncOperation_t954_marshaled& marshaled);
void AsyncOperation_t954_marshal_back(const AsyncOperation_t954_marshaled& marshaled, AsyncOperation_t954& unmarshaled);
void AsyncOperation_t954_marshal_cleanup(AsyncOperation_t954_marshaled& marshaled);
