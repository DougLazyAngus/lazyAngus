#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>,System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>
struct Func_2_t7577;
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
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_66.h"

// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>,System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
#include "System_Core_System_Func_2_gen_513MethodDeclarations.h"
#define Func_2__ctor_m50653(__this, ___object, ___method, method) (( void (*) (Func_2_t7577 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m50654_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>,System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::Invoke(T)
#define Func_2_Invoke_m50655(__this, ___arg1, method) (( KeyValuePair_2_t5543  (*) (Func_2_t7577 *, KeyValuePair_2_t7183 , const MethodInfo*))Func_2_Invoke_m50656_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>,System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m50657(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t7577 *, KeyValuePair_2_t7183 , AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m50658_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>,System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m50659(__this, ___result, method) (( KeyValuePair_2_t5543  (*) (Func_2_t7577 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m50660_gshared)(__this, ___result, method)
