#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<FacebookUserInfo>
struct Predicate_1_t5527;
// System.Object
struct Object_t;
// FacebookUserInfo
struct FacebookUserInfo_t271;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Predicate`1<FacebookUserInfo>::.ctor(System.Object,System.IntPtr)
// System.Predicate`1<System.Object>
#include "mscorlib_System_Predicate_1_gen_3MethodDeclarations.h"
#define Predicate_1__ctor_m24327(__this, ___object, ___method, method) (( void (*) (Predicate_1_t5527 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m21464_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<FacebookUserInfo>::Invoke(T)
#define Predicate_1_Invoke_m24328(__this, ___obj, method) (( bool (*) (Predicate_1_t5527 *, FacebookUserInfo_t271 *, const MethodInfo*))Predicate_1_Invoke_m21465_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<FacebookUserInfo>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Predicate_1_BeginInvoke_m24329(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t5527 *, FacebookUserInfo_t271 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m21466_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<FacebookUserInfo>::EndInvoke(System.IAsyncResult)
#define Predicate_1_EndInvoke_m24330(__this, ___result, method) (( bool (*) (Predicate_1_t5527 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m21467_gshared)(__this, ___result, method)
