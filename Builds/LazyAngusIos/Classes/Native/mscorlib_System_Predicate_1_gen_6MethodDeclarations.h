#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<AN_PropertyTemplate>
struct Predicate_1_t3381;
// System.Object
struct Object_t;
// AN_PropertyTemplate
struct AN_PropertyTemplate_t84;
// System.IAsyncResult
struct IAsyncResult_t386;
// System.AsyncCallback
struct AsyncCallback_t387;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Predicate`1<AN_PropertyTemplate>::.ctor(System.Object,System.IntPtr)
// System.Predicate`1<System.Object>
#include "mscorlib_System_Predicate_1_gen_3MethodDeclarations.h"
#define Predicate_1__ctor_m17757(__this, ___object, ___method, method) (( void (*) (Predicate_1_t3381 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m16993_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<AN_PropertyTemplate>::Invoke(T)
#define Predicate_1_Invoke_m17758(__this, ___obj, method) (( bool (*) (Predicate_1_t3381 *, AN_PropertyTemplate_t84 *, const MethodInfo*))Predicate_1_Invoke_m16994_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<AN_PropertyTemplate>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Predicate_1_BeginInvoke_m17759(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t3381 *, AN_PropertyTemplate_t84 *, AsyncCallback_t387 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m16995_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<AN_PropertyTemplate>::EndInvoke(System.IAsyncResult)
#define Predicate_1_EndInvoke_m17760(__this, ___result, method) (( bool (*) (Predicate_1_t3381 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m16996_gshared)(__this, ___result, method)
