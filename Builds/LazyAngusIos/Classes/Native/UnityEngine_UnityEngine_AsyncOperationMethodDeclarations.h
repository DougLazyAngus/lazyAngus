#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.AsyncOperation
struct AsyncOperation_t2682;
struct AsyncOperation_t2682_marshaled;

// System.Void UnityEngine.AsyncOperation::.ctor()
extern "C" void AsyncOperation__ctor_m9308 (AsyncOperation_t2682 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AsyncOperation::InternalDestroy()
extern "C" void AsyncOperation_InternalDestroy_m9309 (AsyncOperation_t2682 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AsyncOperation::Finalize()
extern "C" void AsyncOperation_Finalize_m9310 (AsyncOperation_t2682 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void AsyncOperation_t2682_marshal(const AsyncOperation_t2682& unmarshaled, AsyncOperation_t2682_marshaled& marshaled);
void AsyncOperation_t2682_marshal_back(const AsyncOperation_t2682_marshaled& marshaled, AsyncOperation_t2682& unmarshaled);
void AsyncOperation_t2682_marshal_cleanup(AsyncOperation_t2682_marshaled& marshaled);
