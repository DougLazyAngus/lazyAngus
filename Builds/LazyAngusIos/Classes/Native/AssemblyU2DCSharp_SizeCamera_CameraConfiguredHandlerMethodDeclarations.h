#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// SizeCamera/CameraConfiguredHandler
struct CameraConfiguredHandler_t585;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void SizeCamera/CameraConfiguredHandler::.ctor(System.Object,System.IntPtr)
extern "C" void CameraConfiguredHandler__ctor_m3157 (CameraConfiguredHandler_t585 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SizeCamera/CameraConfiguredHandler::Invoke()
extern "C" void CameraConfiguredHandler_Invoke_m3158 (CameraConfiguredHandler_t585 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_CameraConfiguredHandler_t585(Il2CppObject* delegate);
// System.IAsyncResult SizeCamera/CameraConfiguredHandler::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * CameraConfiguredHandler_BeginInvoke_m3159 (CameraConfiguredHandler_t585 * __this, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SizeCamera/CameraConfiguredHandler::EndInvoke(System.IAsyncResult)
extern "C" void CameraConfiguredHandler_EndInvoke_m3160 (CameraConfiguredHandler_t585 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
