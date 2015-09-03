#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// OneSignal/IdsAvailable
struct IdsAvailable_t376;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void OneSignal/IdsAvailable::.ctor(System.Object,System.IntPtr)
extern "C" void IdsAvailable__ctor_m2112 (IdsAvailable_t376 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OneSignal/IdsAvailable::Invoke(System.String,System.String)
extern "C" void IdsAvailable_Invoke_m2113 (IdsAvailable_t376 * __this, String_t* ___playerID, String_t* ___pushToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String
#include "mscorlib_System_String.h"
extern "C" void pinvoke_delegate_wrapper_IdsAvailable_t376(Il2CppObject* delegate, String_t* ___playerID, String_t* ___pushToken);
// System.IAsyncResult OneSignal/IdsAvailable::BeginInvoke(System.String,System.String,System.AsyncCallback,System.Object)
extern "C" Object_t * IdsAvailable_BeginInvoke_m2114 (IdsAvailable_t376 * __this, String_t* ___playerID, String_t* ___pushToken, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OneSignal/IdsAvailable::EndInvoke(System.IAsyncResult)
extern "C" void IdsAvailable_EndInvoke_m2115 (IdsAvailable_t376 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
