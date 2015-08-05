#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Boolean>
struct Func_2_t73;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"

// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Boolean>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Byte>
#include "System_Core_System_Func_2_gen_55MethodDeclarations.h"
#define Func_2__ctor_m21792(__this, ___object, ___method, method) (( void (*) (Func_2_t73 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m21785_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Boolean>::Invoke(T)
#define Func_2_Invoke_m21793(__this, ___arg1, method) (( bool (*) (Func_2_t73 *, KeyValuePair_2_t70 , const MethodInfo*))Func_2_Invoke_m21787_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Boolean>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m21794(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t73 *, KeyValuePair_2_t70 , AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m21789_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Boolean>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m21795(__this, ___result, method) (( bool (*) (Func_2_t73 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m21791_gshared)(__this, ___result, method)
