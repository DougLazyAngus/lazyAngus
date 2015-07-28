#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Object,System.Collections.Generic.List`1<System.DateTime>>
struct Func_2_t6866;
// System.Object
struct Object_t;
// System.Collections.Generic.List`1<System.DateTime>
struct List_1_t6758;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Object,System.Collections.Generic.List`1<System.DateTime>>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Object,System.Object>
#include "System_Core_System_Func_2_gen_18MethodDeclarations.h"
#define Func_2__ctor_m42417(__this, ___object, ___method, method) (( void (*) (Func_2_t6866 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m7151_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Object,System.Collections.Generic.List`1<System.DateTime>>::Invoke(T)
#define Func_2_Invoke_m42418(__this, ___arg1, method) (( List_1_t6758 * (*) (Func_2_t6866 *, Object_t *, const MethodInfo*))Func_2_Invoke_m29980_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Object,System.Collections.Generic.List`1<System.DateTime>>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m42419(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t6866 *, Object_t *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m29982_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Object,System.Collections.Generic.List`1<System.DateTime>>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m42420(__this, ___result, method) (( List_1_t6758 * (*) (Func_2_t6866 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m29984_gshared)(__this, ___result, method)
