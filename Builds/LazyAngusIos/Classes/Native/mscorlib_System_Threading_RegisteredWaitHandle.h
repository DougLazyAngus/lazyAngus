﻿#pragma once
#include <stdint.h>
// System.Threading.WaitHandle
struct WaitHandle_t3252;
// System.Threading.WaitOrTimerCallback
struct WaitOrTimerCallback_t5377;
// System.Object
struct Object_t;
// System.Threading.ManualResetEvent
struct ManualResetEvent_t3201;
// System.MarshalByRefObject
#include "mscorlib_System_MarshalByRefObject.h"
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"
// System.Threading.RegisteredWaitHandle
struct  RegisteredWaitHandle_t5378  : public MarshalByRefObject_t4288
{
	// System.Threading.WaitHandle System.Threading.RegisteredWaitHandle::_waitObject
	WaitHandle_t3252 * ____waitObject_1;
	// System.Threading.WaitOrTimerCallback System.Threading.RegisteredWaitHandle::_callback
	WaitOrTimerCallback_t5377 * ____callback_2;
	// System.TimeSpan System.Threading.RegisteredWaitHandle::_timeout
	TimeSpan_t334  ____timeout_3;
	// System.Object System.Threading.RegisteredWaitHandle::_state
	Object_t * ____state_4;
	// System.Boolean System.Threading.RegisteredWaitHandle::_executeOnlyOnce
	bool ____executeOnlyOnce_5;
	// System.Threading.WaitHandle System.Threading.RegisteredWaitHandle::_finalEvent
	WaitHandle_t3252 * ____finalEvent_6;
	// System.Threading.ManualResetEvent System.Threading.RegisteredWaitHandle::_cancelEvent
	ManualResetEvent_t3201 * ____cancelEvent_7;
	// System.Int32 System.Threading.RegisteredWaitHandle::_callsInProcess
	int32_t ____callsInProcess_8;
	// System.Boolean System.Threading.RegisteredWaitHandle::_unregistered
	bool ____unregistered_9;
};