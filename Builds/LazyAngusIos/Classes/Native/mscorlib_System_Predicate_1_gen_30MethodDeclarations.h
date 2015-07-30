#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<UnityEngine.EventSystems.EventTrigger/Entry>
struct Predicate_1_t5719;
// System.Object
struct Object_t;
// UnityEngine.EventSystems.EventTrigger/Entry
struct Entry_t788;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Predicate`1<UnityEngine.EventSystems.EventTrigger/Entry>::.ctor(System.Object,System.IntPtr)
// System.Predicate`1<System.Object>
#include "mscorlib_System_Predicate_1_gen_3MethodDeclarations.h"
#define Predicate_1__ctor_m27484(__this, ___object, ___method, method) (( void (*) (Predicate_1_t5719 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m21448_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.EventSystems.EventTrigger/Entry>::Invoke(T)
#define Predicate_1_Invoke_m27485(__this, ___obj, method) (( bool (*) (Predicate_1_t5719 *, Entry_t788 *, const MethodInfo*))Predicate_1_Invoke_m21449_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.EventSystems.EventTrigger/Entry>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Predicate_1_BeginInvoke_m27486(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t5719 *, Entry_t788 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m21450_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.EventSystems.EventTrigger/Entry>::EndInvoke(System.IAsyncResult)
#define Predicate_1_EndInvoke_m27487(__this, ___result, method) (( bool (*) (Predicate_1_t5719 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m21451_gshared)(__this, ___result, method)
