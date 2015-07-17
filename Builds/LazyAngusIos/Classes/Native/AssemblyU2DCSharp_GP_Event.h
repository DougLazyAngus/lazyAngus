#pragma once
#include <stdint.h>
// System.String
struct String_t;
// UnityEngine.Texture2D
struct Texture2D_t65;
// System.Object
#include "mscorlib_System_Object.h"
// GP_Event
struct  GP_Event_t195  : public Object_t
{
	// System.String GP_Event::Id
	String_t* ___Id_0;
	// System.String GP_Event::Description
	String_t* ___Description_1;
	// System.String GP_Event::IconImageUrl
	String_t* ___IconImageUrl_2;
	// System.String GP_Event::FormattedValue
	String_t* ___FormattedValue_3;
	// System.Int64 GP_Event::Value
	int64_t ___Value_4;
	// UnityEngine.Texture2D GP_Event::_icon
	Texture2D_t65 * ____icon_5;
};
