#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t3448;
// System.Object
struct Object_t;
// System.Xml.Schema.ValidationEventArgs
struct ValidationEventArgs_t3632;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Xml.Schema.ValidationEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void ValidationEventHandler__ctor_m14791 (ValidationEventHandler_t3448 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.ValidationEventHandler::Invoke(System.Object,System.Xml.Schema.ValidationEventArgs)
extern "C" void ValidationEventHandler_Invoke_m14792 (ValidationEventHandler_t3448 * __this, Object_t * ___sender, ValidationEventArgs_t3632 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_ValidationEventHandler_t3448(Il2CppObject* delegate, Object_t * ___sender, ValidationEventArgs_t3632 * ___e);
// System.IAsyncResult System.Xml.Schema.ValidationEventHandler::BeginInvoke(System.Object,System.Xml.Schema.ValidationEventArgs,System.AsyncCallback,System.Object)
extern "C" Object_t * ValidationEventHandler_BeginInvoke_m14793 (ValidationEventHandler_t3448 * __this, Object_t * ___sender, ValidationEventArgs_t3632 * ___e, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.ValidationEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void ValidationEventHandler_EndInvoke_m14794 (ValidationEventHandler_t3448 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
