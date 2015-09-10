#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>
struct Predicate_1_t7961;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_68.h"

// System.Void System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::.ctor(System.Object,System.IntPtr)
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>
#include "mscorlib_System_Predicate_1_gen_74MethodDeclarations.h"
#define Predicate_1__ctor_m53057(__this, ___object, ___method, method) (( void (*) (Predicate_1_t7961 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m52955_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::Invoke(T)
#define Predicate_1_Invoke_m53058(__this, ___obj, method) (( bool (*) (Predicate_1_t7961 *, KeyValuePair_2_t7778 , const MethodInfo*))Predicate_1_Invoke_m52956_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Predicate_1_BeginInvoke_m53059(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t7961 *, KeyValuePair_2_t7778 , AsyncCallback_t386 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m52957_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::EndInvoke(System.IAsyncResult)
#define Predicate_1_EndInvoke_m53060(__this, ___result, method) (( bool (*) (Predicate_1_t7961 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m52958_gshared)(__this, ___result, method)
