#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// BoostConfig/BoostActiveEventHandler
struct BoostActiveEventHandler_t387;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// BoostConfig/BoostType
#include "AssemblyU2DCSharp_BoostConfig_BoostType.h"

// System.Void BoostConfig/BoostActiveEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void BoostActiveEventHandler__ctor_m1825 (BoostActiveEventHandler_t387 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BoostConfig/BoostActiveEventHandler::Invoke(BoostConfig/BoostType,BoostConfig/BoostType)
extern "C" void BoostActiveEventHandler_Invoke_m1826 (BoostActiveEventHandler_t387 * __this, int32_t ___newBoostType, int32_t ___oldBoostType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_BoostActiveEventHandler_t387(Il2CppObject* delegate, int32_t ___newBoostType, int32_t ___oldBoostType);
// System.IAsyncResult BoostConfig/BoostActiveEventHandler::BeginInvoke(BoostConfig/BoostType,BoostConfig/BoostType,System.AsyncCallback,System.Object)
extern "C" Object_t * BoostActiveEventHandler_BeginInvoke_m1827 (BoostActiveEventHandler_t387 * __this, int32_t ___newBoostType, int32_t ___oldBoostType, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BoostConfig/BoostActiveEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void BoostActiveEventHandler_EndInvoke_m1828 (BoostActiveEventHandler_t387 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
