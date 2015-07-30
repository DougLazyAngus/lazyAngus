#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// MouseSpawnFromData/MouseSpawnEventHandler
struct MouseSpawnEventHandler_t565;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void MouseSpawnFromData/MouseSpawnEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void MouseSpawnEventHandler__ctor_m2991 (MouseSpawnEventHandler_t565 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseSpawnFromData/MouseSpawnEventHandler::Invoke()
extern "C" void MouseSpawnEventHandler_Invoke_m2992 (MouseSpawnEventHandler_t565 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_MouseSpawnEventHandler_t565(Il2CppObject* delegate);
// System.IAsyncResult MouseSpawnFromData/MouseSpawnEventHandler::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * MouseSpawnEventHandler_BeginInvoke_m2993 (MouseSpawnEventHandler_t565 * __this, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseSpawnFromData/MouseSpawnEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void MouseSpawnEventHandler_EndInvoke_m2994 (MouseSpawnEventHandler_t565 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
