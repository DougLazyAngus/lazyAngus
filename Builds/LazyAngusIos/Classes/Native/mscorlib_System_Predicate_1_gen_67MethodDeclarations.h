#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>
struct Predicate_1_t7228;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_65.h"

// System.Void System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::.ctor(System.Object,System.IntPtr)
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>
#include "mscorlib_System_Predicate_1_gen_66MethodDeclarations.h"
#define Predicate_1__ctor_m46507(__this, ___object, ___method, method) (( void (*) (Predicate_1_t7228 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m46405_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::Invoke(T)
#define Predicate_1_Invoke_m46508(__this, ___obj, method) (( bool (*) (Predicate_1_t7228 *, KeyValuePair_2_t7111 , const MethodInfo*))Predicate_1_Invoke_m46406_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Predicate_1_BeginInvoke_m46509(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t7228 *, KeyValuePair_2_t7111 , AsyncCallback_t386 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m46407_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::EndInvoke(System.IAsyncResult)
#define Predicate_1_EndInvoke_m46510(__this, ___result, method) (( bool (*) (Predicate_1_t7228 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m46408_gshared)(__this, ___result, method)
