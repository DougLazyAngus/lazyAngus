﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// SoundController/SoundMuteChangedEventHandler
struct SoundMuteChangedEventHandler_t650;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void SoundController/SoundMuteChangedEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void SoundMuteChangedEventHandler__ctor_m3501 (SoundMuteChangedEventHandler_t650 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SoundController/SoundMuteChangedEventHandler::Invoke()
extern "C" void SoundMuteChangedEventHandler_Invoke_m3502 (SoundMuteChangedEventHandler_t650 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_SoundMuteChangedEventHandler_t650(Il2CppObject* delegate);
// System.IAsyncResult SoundController/SoundMuteChangedEventHandler::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * SoundMuteChangedEventHandler_BeginInvoke_m3503 (SoundMuteChangedEventHandler_t650 * __this, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SoundController/SoundMuteChangedEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void SoundMuteChangedEventHandler_EndInvoke_m3504 (SoundMuteChangedEventHandler_t650 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
