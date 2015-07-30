#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>
struct Comparison_1_t7500;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_25.h"

// System.Void System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::.ctor(System.Object,System.IntPtr)
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
#include "mscorlib_System_Comparison_1_gen_74MethodDeclarations.h"
#define Comparison_1__ctor_m49902(__this, ___object, ___method, method) (( void (*) (Comparison_1_t7500 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m49799_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::Invoke(T,T)
#define Comparison_1_Invoke_m49903(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t7500 *, KeyValuePair_2_t5495 , KeyValuePair_2_t5495 , const MethodInfo*))Comparison_1_Invoke_m49800_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
#define Comparison_1_BeginInvoke_m49904(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t7500 *, KeyValuePair_2_t5495 , KeyValuePair_2_t5495 , AsyncCallback_t386 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m49801_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::EndInvoke(System.IAsyncResult)
#define Comparison_1_EndInvoke_m49905(__this, ___result, method) (( int32_t (*) (Comparison_1_t7500 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m49802_gshared)(__this, ___result, method)
