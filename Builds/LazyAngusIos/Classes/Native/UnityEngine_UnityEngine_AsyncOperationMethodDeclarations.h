#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.AsyncOperation
struct AsyncOperation_t2632;
struct AsyncOperation_t2632_marshaled;

// System.Void UnityEngine.AsyncOperation::.ctor()
extern "C" void AsyncOperation__ctor_m9057 (AsyncOperation_t2632 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AsyncOperation::InternalDestroy()
extern "C" void AsyncOperation_InternalDestroy_m9058 (AsyncOperation_t2632 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AsyncOperation::Finalize()
extern "C" void AsyncOperation_Finalize_m9059 (AsyncOperation_t2632 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void AsyncOperation_t2632_marshal(const AsyncOperation_t2632& unmarshaled, AsyncOperation_t2632_marshaled& marshaled);
void AsyncOperation_t2632_marshal_back(const AsyncOperation_t2632_marshaled& marshaled, AsyncOperation_t2632& unmarshaled);
void AsyncOperation_t2632_marshal_cleanup(AsyncOperation_t2632_marshaled& marshaled);
