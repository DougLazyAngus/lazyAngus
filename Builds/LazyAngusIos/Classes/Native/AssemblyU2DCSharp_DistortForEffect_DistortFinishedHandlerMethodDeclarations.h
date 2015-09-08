#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// DistortForEffect/DistortFinishedHandler
struct DistortFinishedHandler_t536;
// System.Object
struct Object_t;
// UnityEngine.GameObject
struct GameObject_t352;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void DistortForEffect/DistortFinishedHandler::.ctor(System.Object,System.IntPtr)
extern "C" void DistortFinishedHandler__ctor_m2897 (DistortFinishedHandler_t536 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DistortForEffect/DistortFinishedHandler::Invoke(UnityEngine.GameObject)
extern "C" void DistortFinishedHandler_Invoke_m2898 (DistortFinishedHandler_t536 * __this, GameObject_t352 * ___go, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_DistortFinishedHandler_t536(Il2CppObject* delegate, GameObject_t352 * ___go);
// System.IAsyncResult DistortForEffect/DistortFinishedHandler::BeginInvoke(UnityEngine.GameObject,System.AsyncCallback,System.Object)
extern "C" Object_t * DistortFinishedHandler_BeginInvoke_m2899 (DistortFinishedHandler_t536 * __this, GameObject_t352 * ___go, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DistortForEffect/DistortFinishedHandler::EndInvoke(System.IAsyncResult)
extern "C" void DistortFinishedHandler_EndInvoke_m2900 (DistortFinishedHandler_t536 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
