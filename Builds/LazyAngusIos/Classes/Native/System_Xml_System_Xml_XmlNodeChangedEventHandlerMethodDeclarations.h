﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.XmlNodeChangedEventHandler
struct XmlNodeChangedEventHandler_t3167;
// System.Object
struct Object_t;
// System.Xml.XmlNodeChangedEventArgs
struct XmlNodeChangedEventArgs_t3188;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Xml.XmlNodeChangedEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void XmlNodeChangedEventHandler__ctor_m11111 (XmlNodeChangedEventHandler_t3167 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNodeChangedEventHandler::Invoke(System.Object,System.Xml.XmlNodeChangedEventArgs)
extern "C" void XmlNodeChangedEventHandler_Invoke_m11112 (XmlNodeChangedEventHandler_t3167 * __this, Object_t * ___sender, XmlNodeChangedEventArgs_t3188 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_XmlNodeChangedEventHandler_t3167(Il2CppObject* delegate, Object_t * ___sender, XmlNodeChangedEventArgs_t3188 * ___e);
// System.IAsyncResult System.Xml.XmlNodeChangedEventHandler::BeginInvoke(System.Object,System.Xml.XmlNodeChangedEventArgs,System.AsyncCallback,System.Object)
extern "C" Object_t * XmlNodeChangedEventHandler_BeginInvoke_m11113 (XmlNodeChangedEventHandler_t3167 * __this, Object_t * ___sender, XmlNodeChangedEventArgs_t3188 * ___e, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNodeChangedEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void XmlNodeChangedEventHandler_EndInvoke_m11114 (XmlNodeChangedEventHandler_t3167 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
