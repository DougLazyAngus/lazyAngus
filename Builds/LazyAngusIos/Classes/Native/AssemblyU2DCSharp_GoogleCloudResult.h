#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t36;
// System.Object
#include "mscorlib_System_Object.h"
// GP_AppStateStatusCodes
#include "AssemblyU2DCSharp_GP_AppStateStatusCodes.h"
// GoogleCloudResult
struct  GoogleCloudResult_t193  : public Object_t
{
	// GP_AppStateStatusCodes GoogleCloudResult::_response
	int32_t ____response_0;
	// System.String GoogleCloudResult::_message
	String_t* ____message_1;
	// System.Int32 GoogleCloudResult::_stateKey
	int32_t ____stateKey_2;
	// System.Byte[] GoogleCloudResult::stateData
	ByteU5BU5D_t36* ___stateData_3;
	// System.Byte[] GoogleCloudResult::serverConflictData
	ByteU5BU5D_t36* ___serverConflictData_4;
	// System.String GoogleCloudResult::resolvedVersion
	String_t* ___resolvedVersion_5;
};
