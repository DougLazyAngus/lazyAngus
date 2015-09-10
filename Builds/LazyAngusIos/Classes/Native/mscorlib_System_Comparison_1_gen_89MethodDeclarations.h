#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Double>>
struct Comparison_1_t8431;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_58.h"

// System.Void System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Double>>::.ctor(System.Object,System.IntPtr)
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>
#include "mscorlib_System_Comparison_1_gen_88MethodDeclarations.h"
#define Comparison_1__ctor_m58819(__this, ___object, ___method, method) (( void (*) (Comparison_1_t8431 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m58716_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Double>>::Invoke(T,T)
#define Comparison_1_Invoke_m58820(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t8431 *, KeyValuePair_2_t7659 , KeyValuePair_2_t7659 , const MethodInfo*))Comparison_1_Invoke_m58717_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Double>>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
#define Comparison_1_BeginInvoke_m58821(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t8431 *, KeyValuePair_2_t7659 , KeyValuePair_2_t7659 , AsyncCallback_t386 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m58718_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Double>>::EndInvoke(System.IAsyncResult)
#define Comparison_1_EndInvoke_m58822(__this, ___result, method) (( int32_t (*) (Comparison_1_t8431 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m58719_gshared)(__this, ___result, method)
