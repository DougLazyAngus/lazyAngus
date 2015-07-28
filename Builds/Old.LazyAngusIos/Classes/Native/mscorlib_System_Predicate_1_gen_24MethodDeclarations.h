﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<MouseHole/MouseHoleLocation>
struct Predicate_1_t3620;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t386;
// System.AsyncCallback
struct AsyncCallback_t387;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// MouseHole/MouseHoleLocation
#include "AssemblyU2DCSharp_MouseHole_MouseHoleLocation.h"

// System.Void System.Predicate`1<MouseHole/MouseHoleLocation>::.ctor(System.Object,System.IntPtr)
// System.Predicate`1<System.Int32>
#include "mscorlib_System_Predicate_1_gen_21MethodDeclarations.h"
#define Predicate_1__ctor_m21687(__this, ___object, ___method, method) (( void (*) (Predicate_1_t3620 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m21199_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<MouseHole/MouseHoleLocation>::Invoke(T)
#define Predicate_1_Invoke_m21688(__this, ___obj, method) (( bool (*) (Predicate_1_t3620 *, int32_t, const MethodInfo*))Predicate_1_Invoke_m21200_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<MouseHole/MouseHoleLocation>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Predicate_1_BeginInvoke_m21689(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t3620 *, int32_t, AsyncCallback_t387 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m21201_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<MouseHole/MouseHoleLocation>::EndInvoke(System.IAsyncResult)
#define Predicate_1_EndInvoke_m21690(__this, ___result, method) (( bool (*) (Predicate_1_t3620 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m21202_gshared)(__this, ___result, method)