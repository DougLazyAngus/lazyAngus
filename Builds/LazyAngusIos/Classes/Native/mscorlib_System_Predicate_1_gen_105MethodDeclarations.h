#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,Mono.Xml.DTDNode>>
struct Predicate_1_t8579;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.String,Mono.Xml.DTDNode>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_16.h"

// System.Void System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,Mono.Xml.DTDNode>>::.ctor(System.Object,System.IntPtr)
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Predicate_1_gen_47MethodDeclarations.h"
#define Predicate_1__ctor_m62913(__this, ___object, ___method, method) (( void (*) (Predicate_1_t8579 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m31570_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,Mono.Xml.DTDNode>>::Invoke(T)
#define Predicate_1_Invoke_m62914(__this, ___obj, method) (( bool (*) (Predicate_1_t8579 *, KeyValuePair_2_t3186 , const MethodInfo*))Predicate_1_Invoke_m31571_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,Mono.Xml.DTDNode>>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Predicate_1_BeginInvoke_m62915(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t8579 *, KeyValuePair_2_t3186 , AsyncCallback_t386 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m31572_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,Mono.Xml.DTDNode>>::EndInvoke(System.IAsyncResult)
#define Predicate_1_EndInvoke_m62916(__this, ___result, method) (( bool (*) (Predicate_1_t8579 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m31573_gshared)(__this, ___result, method)
