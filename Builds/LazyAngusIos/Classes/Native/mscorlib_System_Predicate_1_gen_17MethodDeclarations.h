#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<TweetTemplate>
struct Predicate_1_t5582;
// System.Object
struct Object_t;
// TweetTemplate
struct TweetTemplate_t323;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Predicate`1<TweetTemplate>::.ctor(System.Object,System.IntPtr)
// System.Predicate`1<System.Object>
#include "mscorlib_System_Predicate_1_gen_3MethodDeclarations.h"
#define Predicate_1__ctor_m25378(__this, ___object, ___method, method) (( void (*) (Predicate_1_t5582 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m21464_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<TweetTemplate>::Invoke(T)
#define Predicate_1_Invoke_m25379(__this, ___obj, method) (( bool (*) (Predicate_1_t5582 *, TweetTemplate_t323 *, const MethodInfo*))Predicate_1_Invoke_m21465_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<TweetTemplate>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Predicate_1_BeginInvoke_m25380(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t5582 *, TweetTemplate_t323 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m21466_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<TweetTemplate>::EndInvoke(System.IAsyncResult)
#define Predicate_1_EndInvoke_m25381(__this, ___result, method) (( bool (*) (Predicate_1_t5582 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m21467_gshared)(__this, ___result, method)
