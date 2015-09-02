#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<Parse.ParseFile>
struct Predicate_1_t6995;
// System.Object
struct Object_t;
// Parse.ParseFile
struct ParseFile_t1259;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Predicate`1<Parse.ParseFile>::.ctor(System.Object,System.IntPtr)
// System.Predicate`1<System.Object>
#include "mscorlib_System_Predicate_1_gen_3MethodDeclarations.h"
#define Predicate_1__ctor_m43747(__this, ___object, ___method, method) (( void (*) (Predicate_1_t6995 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m21871_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<Parse.ParseFile>::Invoke(T)
#define Predicate_1_Invoke_m43748(__this, ___obj, method) (( bool (*) (Predicate_1_t6995 *, ParseFile_t1259 *, const MethodInfo*))Predicate_1_Invoke_m21872_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<Parse.ParseFile>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Predicate_1_BeginInvoke_m43749(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t6995 *, ParseFile_t1259 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m21873_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<Parse.ParseFile>::EndInvoke(System.IAsyncResult)
#define Predicate_1_EndInvoke_m43750(__this, ___result, method) (( bool (*) (Predicate_1_t6995 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m21874_gshared)(__this, ___result, method)
