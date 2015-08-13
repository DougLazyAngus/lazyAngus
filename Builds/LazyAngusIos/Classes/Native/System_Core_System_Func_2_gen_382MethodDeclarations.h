#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>,System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
struct Func_2_t7191;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_68.h"

// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>,System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "System_Core_System_Func_2_gen_383MethodDeclarations.h"
#define Func_2__ctor_m46401(__this, ___object, ___method, method) (( void (*) (Func_2_t7191 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m46402_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>,System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::Invoke(T)
#define Func_2_Invoke_m46403(__this, ___arg1, method) (( KeyValuePair_2_t777  (*) (Func_2_t7191 *, KeyValuePair_2_t7194 , const MethodInfo*))Func_2_Invoke_m46404_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>,System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m46405(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t7191 *, KeyValuePair_2_t7194 , AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m46406_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>,System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m46407(__this, ___result, method) (( KeyValuePair_2_t777  (*) (Func_2_t7191 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m46408_gshared)(__this, ___result, method)
