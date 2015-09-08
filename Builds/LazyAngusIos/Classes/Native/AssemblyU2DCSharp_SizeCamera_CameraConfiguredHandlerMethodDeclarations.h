#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// SizeCamera/CameraConfiguredHandler
struct CameraConfiguredHandler_t663;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void SizeCamera/CameraConfiguredHandler::.ctor(System.Object,System.IntPtr)
extern "C" void CameraConfiguredHandler__ctor_m3611 (CameraConfiguredHandler_t663 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SizeCamera/CameraConfiguredHandler::Invoke()
extern "C" void CameraConfiguredHandler_Invoke_m3612 (CameraConfiguredHandler_t663 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_CameraConfiguredHandler_t663(Il2CppObject* delegate);
// System.IAsyncResult SizeCamera/CameraConfiguredHandler::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * CameraConfiguredHandler_BeginInvoke_m3613 (CameraConfiguredHandler_t663 * __this, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SizeCamera/CameraConfiguredHandler::EndInvoke(System.IAsyncResult)
extern "C" void CameraConfiguredHandler_EndInvoke_m3614 (CameraConfiguredHandler_t663 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
