﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Action`1<UnityEngine.WWW>
struct Action_1_t1259;
// System.Object
struct Object_t;
// UnityEngine.WWW
struct WWW_t265;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Action`1<UnityEngine.WWW>::.ctor(System.Object,System.IntPtr)
// System.Action`1<System.Object>
#include "mscorlib_System_Action_1_gen_34MethodDeclarations.h"
#define Action_1__ctor_m7421(__this, ___object, ___method, method) (( void (*) (Action_1_t1259 *, Object_t *, IntPtr_t, const MethodInfo*))Action_1__ctor_m22912_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`1<UnityEngine.WWW>::Invoke(T)
#define Action_1_Invoke_m58315(__this, ___obj, method) (( void (*) (Action_1_t1259 *, WWW_t265 *, const MethodInfo*))Action_1_Invoke_m22914_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Action`1<UnityEngine.WWW>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Action_1_BeginInvoke_m58316(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Action_1_t1259 *, WWW_t265 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Action_1_BeginInvoke_m22916_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Void System.Action`1<UnityEngine.WWW>::EndInvoke(System.IAsyncResult)
#define Action_1_EndInvoke_m58317(__this, ___result, method) (( void (*) (Action_1_t1259 *, Object_t *, const MethodInfo*))Action_1_EndInvoke_m22918_gshared)(__this, ___result, method)