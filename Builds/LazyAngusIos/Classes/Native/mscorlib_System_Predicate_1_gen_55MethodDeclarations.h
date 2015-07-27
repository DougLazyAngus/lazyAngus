﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<System.Security.Policy.StrongName>
struct Predicate_1_t4203;
// System.Object
struct Object_t;
// System.Security.Policy.StrongName
struct StrongName_t2699;
// System.IAsyncResult
struct IAsyncResult_t343;
// System.AsyncCallback
struct AsyncCallback_t344;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Predicate`1<System.Security.Policy.StrongName>::.ctor(System.Object,System.IntPtr)
// System.Predicate`1<System.Object>
#include "mscorlib_System_Predicate_1_gen_3MethodDeclarations.h"
#define Predicate_1__ctor_m29296(__this, ___object, ___method, method) (( void (*) (Predicate_1_t4203 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m17538_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<System.Security.Policy.StrongName>::Invoke(T)
#define Predicate_1_Invoke_m29297(__this, ___obj, method) (( bool (*) (Predicate_1_t4203 *, StrongName_t2699 *, const MethodInfo*))Predicate_1_Invoke_m17539_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<System.Security.Policy.StrongName>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Predicate_1_BeginInvoke_m29298(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t4203 *, StrongName_t2699 *, AsyncCallback_t344 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m17540_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<System.Security.Policy.StrongName>::EndInvoke(System.IAsyncResult)
#define Predicate_1_EndInvoke_m29299(__this, ___result, method) (( bool (*) (Predicate_1_t4203 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m17541_gshared)(__this, ___result, method)
