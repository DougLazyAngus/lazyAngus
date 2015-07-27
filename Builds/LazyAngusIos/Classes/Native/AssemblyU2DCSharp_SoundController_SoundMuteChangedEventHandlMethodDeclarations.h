#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// SoundController/SoundMuteChangedEventHandler
struct SoundMuteChangedEventHandler_t554;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t345;
// System.AsyncCallback
struct AsyncCallback_t346;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void SoundController/SoundMuteChangedEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void SoundMuteChangedEventHandler__ctor_m2929 (SoundMuteChangedEventHandler_t554 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SoundController/SoundMuteChangedEventHandler::Invoke()
extern "C" void SoundMuteChangedEventHandler_Invoke_m2930 (SoundMuteChangedEventHandler_t554 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_SoundMuteChangedEventHandler_t554(Il2CppObject* delegate);
// System.IAsyncResult SoundController/SoundMuteChangedEventHandler::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * SoundMuteChangedEventHandler_BeginInvoke_m2931 (SoundMuteChangedEventHandler_t554 * __this, AsyncCallback_t346 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SoundController/SoundMuteChangedEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void SoundMuteChangedEventHandler_EndInvoke_m2932 (SoundMuteChangedEventHandler_t554 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
