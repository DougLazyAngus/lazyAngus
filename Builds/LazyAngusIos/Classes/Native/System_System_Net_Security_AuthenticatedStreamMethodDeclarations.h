#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.Security.AuthenticatedStream
struct AuthenticatedStream_t1966;
// System.IO.Stream
struct Stream_t24;

// System.Void System.Net.Security.AuthenticatedStream::.ctor(System.IO.Stream,System.Boolean)
extern "C" void AuthenticatedStream__ctor_m9961 (AuthenticatedStream_t1966 * __this, Stream_t24 * ___innerStream, bool ___leaveInnerStreamOpen, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Net.Security.AuthenticatedStream::get_InnerStream()
extern "C" Stream_t24 * AuthenticatedStream_get_InnerStream_m9962 (AuthenticatedStream_t1966 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Security.AuthenticatedStream::get_IsAuthenticated()
// System.Boolean System.Net.Security.AuthenticatedStream::get_LeaveInnerStreamOpen()
extern "C" bool AuthenticatedStream_get_LeaveInnerStreamOpen_m9963 (AuthenticatedStream_t1966 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Security.AuthenticatedStream::Dispose(System.Boolean)
extern "C" void AuthenticatedStream_Dispose_m9964 (AuthenticatedStream_t1966 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
