#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`3<Parse.ParseObject,System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>,System.Collections.Generic.Dictionary`2<System.String,System.Object>>
struct Func_3_t1212;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t312;
// Parse.ParseObject
struct ParseObject_t1170;
// System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>
struct IDictionary_2_t1201;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`3<Parse.ParseObject,System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>,System.Collections.Generic.Dictionary`2<System.String,System.Object>>::.ctor(System.Object,System.IntPtr)
// System.Func`3<System.Object,System.Object,System.Object>
#include "System_Core_System_Func_3_genMethodDeclarations.h"
#define Func_3__ctor_m7279(__this, ___object, ___method, method) (( void (*) (Func_3_t1212 *, Object_t *, IntPtr_t, const MethodInfo*))Func_3__ctor_m7137_gshared)(__this, ___object, ___method, method)
// TResult System.Func`3<Parse.ParseObject,System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>,System.Collections.Generic.Dictionary`2<System.String,System.Object>>::Invoke(T1,T2)
#define Func_3_Invoke_m33825(__this, ___arg1, ___arg2, method) (( Dictionary_2_t312 * (*) (Func_3_t1212 *, ParseObject_t1170 *, Object_t*, const MethodInfo*))Func_3_Invoke_m29980_gshared)(__this, ___arg1, ___arg2, method)
// System.IAsyncResult System.Func`3<Parse.ParseObject,System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>,System.Collections.Generic.Dictionary`2<System.String,System.Object>>::BeginInvoke(T1,T2,System.AsyncCallback,System.Object)
#define Func_3_BeginInvoke_m33826(__this, ___arg1, ___arg2, ___callback, ___object, method) (( Object_t * (*) (Func_3_t1212 *, ParseObject_t1170 *, Object_t*, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_3_BeginInvoke_m29982_gshared)(__this, ___arg1, ___arg2, ___callback, ___object, method)
// TResult System.Func`3<Parse.ParseObject,System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>,System.Collections.Generic.Dictionary`2<System.String,System.Object>>::EndInvoke(System.IAsyncResult)
#define Func_3_EndInvoke_m33827(__this, ___result, method) (( Dictionary_2_t312 * (*) (Func_3_t1212 *, Object_t *, const MethodInfo*))Func_3_EndInvoke_m29984_gshared)(__this, ___result, method)
