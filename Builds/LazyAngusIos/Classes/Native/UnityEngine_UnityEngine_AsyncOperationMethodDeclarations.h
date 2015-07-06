#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.AsyncOperation
struct AsyncOperation_t976;
struct AsyncOperation_t976_marshaled;

// System.Void UnityEngine.AsyncOperation::.ctor()
extern "C" void AsyncOperation__ctor_m5628 (AsyncOperation_t976 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AsyncOperation::InternalDestroy()
extern "C" void AsyncOperation_InternalDestroy_m5629 (AsyncOperation_t976 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AsyncOperation::Finalize()
extern "C" void AsyncOperation_Finalize_m5630 (AsyncOperation_t976 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void AsyncOperation_t976_marshal(const AsyncOperation_t976& unmarshaled, AsyncOperation_t976_marshaled& marshaled);
void AsyncOperation_t976_marshal_back(const AsyncOperation_t976_marshaled& marshaled, AsyncOperation_t976& unmarshaled);
void AsyncOperation_t976_marshal_cleanup(AsyncOperation_t976_marshaled& marshaled);
