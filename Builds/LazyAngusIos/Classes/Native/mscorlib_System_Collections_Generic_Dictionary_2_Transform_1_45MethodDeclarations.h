#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>,System.Collections.DictionaryEntry>
struct Transform_1_t5998;
// System.Object
struct Object_t;
// System.Tuple`2<System.Type,System.Type>
struct Tuple_2_t1388;
// System.Func`3<System.Object,System.Object,System.Object>
struct Func_3_t1139;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_5MethodDeclarations.h"
#define Transform_1__ctor_m31160(__this, ___object, ___method, method) (( void (*) (Transform_1_t5998 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m21692_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m31161(__this, ___key, ___value, method) (( DictionaryEntry_t2086  (*) (Transform_1_t5998 *, Tuple_2_t1388 *, Func_3_t1139 *, const MethodInfo*))Transform_1_Invoke_m21693_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m31162(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t5998 *, Tuple_2_t1388 *, Func_3_t1139 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m21694_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m31163(__this, ___result, method) (( DictionaryEntry_t2086  (*) (Transform_1_t5998 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m21695_gshared)(__this, ___result, method)
