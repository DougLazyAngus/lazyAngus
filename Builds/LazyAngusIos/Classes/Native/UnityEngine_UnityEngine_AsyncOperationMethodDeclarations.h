#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.AsyncOperation
struct AsyncOperation_t2629;
struct AsyncOperation_t2629_marshaled;

// System.Void UnityEngine.AsyncOperation::.ctor()
extern "C" void AsyncOperation__ctor_m9034 (AsyncOperation_t2629 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AsyncOperation::InternalDestroy()
extern "C" void AsyncOperation_InternalDestroy_m9035 (AsyncOperation_t2629 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AsyncOperation::Finalize()
extern "C" void AsyncOperation_Finalize_m9036 (AsyncOperation_t2629 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void AsyncOperation_t2629_marshal(const AsyncOperation_t2629& unmarshaled, AsyncOperation_t2629_marshaled& marshaled);
void AsyncOperation_t2629_marshal_back(const AsyncOperation_t2629_marshaled& marshaled, AsyncOperation_t2629& unmarshaled);
void AsyncOperation_t2629_marshal_cleanup(AsyncOperation_t2629_marshaled& marshaled);
