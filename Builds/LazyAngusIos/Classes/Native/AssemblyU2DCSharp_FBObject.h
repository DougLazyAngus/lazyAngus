#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Collections.Generic.List`1<System.String>
struct List_1_t115;
// System.Object
#include "mscorlib_System_Object.h"
// System.DateTime
#include "mscorlib_System_DateTime.h"
// FBObject
struct  FBObject_t285  : public Object_t
{
	// System.String FBObject::Id
	String_t* ___Id_0;
	// System.Collections.Generic.List`1<System.String> FBObject::ImageUrls
	List_1_t115 * ___ImageUrls_1;
	// System.String FBObject::Title
	String_t* ___Title_2;
	// System.String FBObject::Type
	String_t* ___Type_3;
	// System.DateTime FBObject::CreatedTime
	DateTime_t287  ___CreatedTime_4;
	// System.String FBObject::CreatedTimeString
	String_t* ___CreatedTimeString_5;
};
