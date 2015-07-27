#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Object
#include "mscorlib_System_Object.h"
// GPGameRequestType
#include "AssemblyU2DCSharp_GPGameRequestType.h"
// GPGameRequest
struct  GPGameRequest_t181  : public Object_t
{
	// System.String GPGameRequest::id
	String_t* ___id_0;
	// System.String GPGameRequest::playload
	String_t* ___playload_1;
	// System.Int64 GPGameRequest::expirationTimestamp
	int64_t ___expirationTimestamp_2;
	// System.Int64 GPGameRequest::creationTimestamp
	int64_t ___creationTimestamp_3;
	// System.String GPGameRequest::sender
	String_t* ___sender_4;
	// GPGameRequestType GPGameRequest::type
	int32_t ___type_5;
};
