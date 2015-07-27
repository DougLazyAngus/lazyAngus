﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// OneSignal/IdsAvailable
struct IdsAvailable_t336;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t345;
// System.AsyncCallback
struct AsyncCallback_t346;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void OneSignal/IdsAvailable::.ctor(System.Object,System.IntPtr)
extern "C" void IdsAvailable__ctor_m1839 (IdsAvailable_t336 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OneSignal/IdsAvailable::Invoke(System.String,System.String)
extern "C" void IdsAvailable_Invoke_m1840 (IdsAvailable_t336 * __this, String_t* ___playerID, String_t* ___pushToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String
#include "mscorlib_System_String.h"
extern "C" void pinvoke_delegate_wrapper_IdsAvailable_t336(Il2CppObject* delegate, String_t* ___playerID, String_t* ___pushToken);
// System.IAsyncResult OneSignal/IdsAvailable::BeginInvoke(System.String,System.String,System.AsyncCallback,System.Object)
extern "C" Object_t * IdsAvailable_BeginInvoke_m1841 (IdsAvailable_t336 * __this, String_t* ___playerID, String_t* ___pushToken, AsyncCallback_t346 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OneSignal/IdsAvailable::EndInvoke(System.IAsyncResult)
extern "C" void IdsAvailable_EndInvoke_m1842 (IdsAvailable_t336 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
