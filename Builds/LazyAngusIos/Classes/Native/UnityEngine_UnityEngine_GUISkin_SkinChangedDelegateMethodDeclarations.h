﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.GUISkin/SkinChangedDelegate
struct SkinChangedDelegate_t2668;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.GUISkin/SkinChangedDelegate::.ctor(System.Object,System.IntPtr)
extern "C" void SkinChangedDelegate__ctor_m8644 (SkinChangedDelegate_t2668 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin/SkinChangedDelegate::Invoke()
extern "C" void SkinChangedDelegate_Invoke_m8645 (SkinChangedDelegate_t2668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_SkinChangedDelegate_t2668(Il2CppObject* delegate);
// System.IAsyncResult UnityEngine.GUISkin/SkinChangedDelegate::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * SkinChangedDelegate_BeginInvoke_m8646 (SkinChangedDelegate_t2668 * __this, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin/SkinChangedDelegate::EndInvoke(System.IAsyncResult)
extern "C" void SkinChangedDelegate_EndInvoke_m8647 (SkinChangedDelegate_t2668 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
