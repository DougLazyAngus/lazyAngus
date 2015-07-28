#pragma once
#include <stdint.h>
// SimpleJson.IJsonSerializerStrategy
struct IJsonSerializerStrategy_t2762;
// SimpleJson.PocoJsonSerializerStrategy
struct PocoJsonSerializerStrategy_t2763;
// System.Object
#include "mscorlib_System_Object.h"
// SimpleJson.SimpleJson
struct  SimpleJson_t2764  : public Object_t
{
};
struct SimpleJson_t2764_StaticFields{
	// SimpleJson.IJsonSerializerStrategy SimpleJson.SimpleJson::_currentJsonSerializerStrategy
	Object_t * ____currentJsonSerializerStrategy_0;
	// SimpleJson.PocoJsonSerializerStrategy SimpleJson.SimpleJson::_pocoJsonSerializerStrategy
	PocoJsonSerializerStrategy_t2763 * ____pocoJsonSerializerStrategy_1;
};
