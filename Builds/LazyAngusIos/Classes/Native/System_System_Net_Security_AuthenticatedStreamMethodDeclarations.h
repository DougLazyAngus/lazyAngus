#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.Security.AuthenticatedStream
struct AuthenticatedStream_t3936;
// System.IO.Stream
struct Stream_t51;

// System.Void System.Net.Security.AuthenticatedStream::.ctor(System.IO.Stream,System.Boolean)
extern "C" void AuthenticatedStream__ctor_m13250 (AuthenticatedStream_t3936 * __this, Stream_t51 * ___innerStream, bool ___leaveInnerStreamOpen, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Net.Security.AuthenticatedStream::get_InnerStream()
extern "C" Stream_t51 * AuthenticatedStream_get_InnerStream_m13251 (AuthenticatedStream_t3936 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Security.AuthenticatedStream::get_IsAuthenticated()
// System.Boolean System.Net.Security.AuthenticatedStream::get_LeaveInnerStreamOpen()
extern "C" bool AuthenticatedStream_get_LeaveInnerStreamOpen_m13252 (AuthenticatedStream_t3936 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Security.AuthenticatedStream::Dispose(System.Boolean)
extern "C" void AuthenticatedStream_Dispose_m13253 (AuthenticatedStream_t3936 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
