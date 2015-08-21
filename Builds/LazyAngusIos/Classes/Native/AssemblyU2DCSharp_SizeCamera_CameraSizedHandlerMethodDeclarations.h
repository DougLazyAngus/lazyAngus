#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// SizeCamera/CameraSizedHandler
struct CameraSizedHandler_t640;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void SizeCamera/CameraSizedHandler::.ctor(System.Object,System.IntPtr)
extern "C" void CameraSizedHandler__ctor_m3436 (CameraSizedHandler_t640 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SizeCamera/CameraSizedHandler::Invoke()
extern "C" void CameraSizedHandler_Invoke_m3437 (CameraSizedHandler_t640 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_CameraSizedHandler_t640(Il2CppObject* delegate);
// System.IAsyncResult SizeCamera/CameraSizedHandler::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * CameraSizedHandler_BeginInvoke_m3438 (CameraSizedHandler_t640 * __this, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SizeCamera/CameraSizedHandler::EndInvoke(System.IAsyncResult)
extern "C" void CameraSizedHandler_EndInvoke_m3439 (CameraSizedHandler_t640 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
