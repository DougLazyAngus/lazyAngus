#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<Facebook.FacebookDelegate>
struct Predicate_1_t3633;
// System.Object
struct Object_t;
// Facebook.FacebookDelegate
struct FacebookDelegate_t391;
// System.IAsyncResult
struct IAsyncResult_t343;
// System.AsyncCallback
struct AsyncCallback_t344;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Predicate`1<Facebook.FacebookDelegate>::.ctor(System.Object,System.IntPtr)
// System.Predicate`1<System.Object>
#include "mscorlib_System_Predicate_1_gen_3MethodDeclarations.h"
#define Predicate_1__ctor_m21894(__this, ___object, ___method, method) (( void (*) (Predicate_1_t3633 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m17538_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<Facebook.FacebookDelegate>::Invoke(T)
#define Predicate_1_Invoke_m21895(__this, ___obj, method) (( bool (*) (Predicate_1_t3633 *, FacebookDelegate_t391 *, const MethodInfo*))Predicate_1_Invoke_m17539_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<Facebook.FacebookDelegate>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Predicate_1_BeginInvoke_m21896(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t3633 *, FacebookDelegate_t391 *, AsyncCallback_t344 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m17540_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<Facebook.FacebookDelegate>::EndInvoke(System.IAsyncResult)
#define Predicate_1_EndInvoke_m21897(__this, ___result, method) (( bool (*) (Predicate_1_t3633 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m17541_gshared)(__this, ___result, method)
