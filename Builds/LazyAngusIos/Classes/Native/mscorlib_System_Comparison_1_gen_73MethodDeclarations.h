#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>
struct Comparison_1_t7886;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_66.h"

// System.Void System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::.ctor(System.Object,System.IntPtr)
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>
#include "mscorlib_System_Comparison_1_gen_72MethodDeclarations.h"
#define Comparison_1__ctor_m51999(__this, ___object, ___method, method) (( void (*) (Comparison_1_t7886 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m51896_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::Invoke(T,T)
#define Comparison_1_Invoke_m52000(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t7886 *, KeyValuePair_2_t7767 , KeyValuePair_2_t7767 , const MethodInfo*))Comparison_1_Invoke_m51897_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
#define Comparison_1_BeginInvoke_m52001(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t7886 *, KeyValuePair_2_t7767 , KeyValuePair_2_t7767 , AsyncCallback_t386 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m51898_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::EndInvoke(System.IAsyncResult)
#define Comparison_1_EndInvoke_m52002(__this, ___result, method) (( int32_t (*) (Comparison_1_t7886 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m51899_gshared)(__this, ___result, method)
