#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.InternalExtensions/PartialAccessor`1<System.Object>
struct PartialAccessor_1_t6057;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void Parse.Internal.InternalExtensions/PartialAccessor`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void PartialAccessor_1__ctor_m31719_gshared (PartialAccessor_1_t6057 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define PartialAccessor_1__ctor_m31719(__this, ___object, ___method, method) (( void (*) (PartialAccessor_1_t6057 *, Object_t *, IntPtr_t, const MethodInfo*))PartialAccessor_1__ctor_m31719_gshared)(__this, ___object, ___method, method)
// System.Void Parse.Internal.InternalExtensions/PartialAccessor`1<System.Object>::Invoke(T&)
extern "C" void PartialAccessor_1_Invoke_m31720_gshared (PartialAccessor_1_t6057 * __this, Object_t ** ___arg, const MethodInfo* method);
#define PartialAccessor_1_Invoke_m31720(__this, ___arg, method) (( void (*) (PartialAccessor_1_t6057 *, Object_t **, const MethodInfo*))PartialAccessor_1_Invoke_m31720_gshared)(__this, ___arg, method)
// System.IAsyncResult Parse.Internal.InternalExtensions/PartialAccessor`1<System.Object>::BeginInvoke(T&,System.AsyncCallback,System.Object)
extern "C" Object_t * PartialAccessor_1_BeginInvoke_m31721_gshared (PartialAccessor_1_t6057 * __this, Object_t ** ___arg, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define PartialAccessor_1_BeginInvoke_m31721(__this, ___arg, ___callback, ___object, method) (( Object_t * (*) (PartialAccessor_1_t6057 *, Object_t **, AsyncCallback_t386 *, Object_t *, const MethodInfo*))PartialAccessor_1_BeginInvoke_m31721_gshared)(__this, ___arg, ___callback, ___object, method)
// System.Void Parse.Internal.InternalExtensions/PartialAccessor`1<System.Object>::EndInvoke(T&,System.IAsyncResult)
extern "C" void PartialAccessor_1_EndInvoke_m31722_gshared (PartialAccessor_1_t6057 * __this, Object_t ** ___arg, Object_t * ___result, const MethodInfo* method);
#define PartialAccessor_1_EndInvoke_m31722(__this, ___arg, ___result, method) (( void (*) (PartialAccessor_1_t6057 *, Object_t **, Object_t *, const MethodInfo*))PartialAccessor_1_EndInvoke_m31722_gshared)(__this, ___arg, ___result, method)
