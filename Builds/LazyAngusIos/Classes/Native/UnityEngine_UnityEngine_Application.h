#pragma once
#include <stdint.h>
// UnityEngine.Application/LogCallback
struct LogCallback_t54;
// UnityEngine.Application/LogCallback modreq(System.Runtime.CompilerServices.IsVolatile)
struct LogCallback_t54;
// System.Object
#include "mscorlib_System_Object.h"
// UnityEngine.Application
struct  Application_t1453  : public Object_t
{
};
struct Application_t1453_StaticFields{
	// UnityEngine.Application/LogCallback UnityEngine.Application::s_LogCallbackHandler
	LogCallback_t54 * ___s_LogCallbackHandler_0;
	// UnityEngine.Application/LogCallback UnityEngine.Application::s_LogCallbackHandlerThreaded
	LogCallback_t54 * ___s_LogCallbackHandlerThreaded_1;
	// UnityEngine.Application/LogCallback modreq(System.Runtime.CompilerServices.IsVolatile) UnityEngine.Application::s_RegisterLogCallbackDeprecated
	LogCallback_t54 * ___s_RegisterLogCallbackDeprecated_2;
};
