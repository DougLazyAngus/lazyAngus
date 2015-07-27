﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<System.Byte[]>
struct Predicate_1_t3911;
// System.Object
struct Object_t;
// System.Byte[]
struct ByteU5BU5D_t36;
// System.IAsyncResult
struct IAsyncResult_t345;
// System.AsyncCallback
struct AsyncCallback_t346;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Predicate`1<System.Byte[]>::.ctor(System.Object,System.IntPtr)
// System.Predicate`1<System.Object>
#include "mscorlib_System_Predicate_1_gen_3MethodDeclarations.h"
#define Predicate_1__ctor_m26015(__this, ___object, ___method, method) (( void (*) (Predicate_1_t3911 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m17541_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<System.Byte[]>::Invoke(T)
#define Predicate_1_Invoke_m26016(__this, ___obj, method) (( bool (*) (Predicate_1_t3911 *, ByteU5BU5D_t36*, const MethodInfo*))Predicate_1_Invoke_m17542_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<System.Byte[]>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Predicate_1_BeginInvoke_m26017(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t3911 *, ByteU5BU5D_t36*, AsyncCallback_t346 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m17543_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<System.Byte[]>::EndInvoke(System.IAsyncResult)
#define Predicate_1_EndInvoke_m26018(__this, ___result, method) (( bool (*) (Predicate_1_t3911 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m17544_gshared)(__this, ___result, method)
