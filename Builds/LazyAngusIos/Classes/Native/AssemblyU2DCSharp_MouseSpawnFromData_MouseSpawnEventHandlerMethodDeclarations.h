#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// MouseSpawnFromData/MouseSpawnEventHandler
struct MouseSpawnEventHandler_t566;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void MouseSpawnFromData/MouseSpawnEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void MouseSpawnEventHandler__ctor_m3013 (MouseSpawnEventHandler_t566 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseSpawnFromData/MouseSpawnEventHandler::Invoke()
extern "C" void MouseSpawnEventHandler_Invoke_m3014 (MouseSpawnEventHandler_t566 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_MouseSpawnEventHandler_t566(Il2CppObject* delegate);
// System.IAsyncResult MouseSpawnFromData/MouseSpawnEventHandler::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * MouseSpawnEventHandler_BeginInvoke_m3015 (MouseSpawnEventHandler_t566 * __this, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseSpawnFromData/MouseSpawnEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void MouseSpawnEventHandler_EndInvoke_m3016 (MouseSpawnEventHandler_t566 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
