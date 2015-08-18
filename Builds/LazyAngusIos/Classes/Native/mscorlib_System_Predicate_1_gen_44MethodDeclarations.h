#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<UnityEngine.RectTransform>
struct Predicate_1_t5920;
// System.Object
struct Object_t;
// UnityEngine.RectTransform
struct RectTransform_t543;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Predicate`1<UnityEngine.RectTransform>::.ctor(System.Object,System.IntPtr)
// System.Predicate`1<System.Object>
#include "mscorlib_System_Predicate_1_gen_3MethodDeclarations.h"
#define Predicate_1__ctor_m30280(__this, ___object, ___method, method) (( void (*) (Predicate_1_t5920 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m21720_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.RectTransform>::Invoke(T)
#define Predicate_1_Invoke_m30281(__this, ___obj, method) (( bool (*) (Predicate_1_t5920 *, RectTransform_t543 *, const MethodInfo*))Predicate_1_Invoke_m21721_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.RectTransform>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Predicate_1_BeginInvoke_m30282(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t5920 *, RectTransform_t543 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m21722_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.RectTransform>::EndInvoke(System.IAsyncResult)
#define Predicate_1_EndInvoke_m30283(__this, ___result, method) (( bool (*) (Predicate_1_t5920 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m21723_gshared)(__this, ___result, method)
