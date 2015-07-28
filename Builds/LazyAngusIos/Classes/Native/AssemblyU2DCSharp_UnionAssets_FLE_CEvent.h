#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnionAssets.FLE.IDispatcher
struct IDispatcher_t132;
// System.Object
#include "mscorlib_System_Object.h"
// UnionAssets.FLE.CEvent
struct  CEvent_t133  : public Object_t
{
	// System.Int32 UnionAssets.FLE.CEvent::_id
	int32_t ____id_0;
	// System.String UnionAssets.FLE.CEvent::_name
	String_t* ____name_1;
	// System.Object UnionAssets.FLE.CEvent::_data
	Object_t * ____data_2;
	// UnionAssets.FLE.IDispatcher UnionAssets.FLE.CEvent::_dispatcher
	Object_t * ____dispatcher_3;
	// System.Boolean UnionAssets.FLE.CEvent::_isStoped
	bool ____isStoped_4;
	// System.Boolean UnionAssets.FLE.CEvent::_isLocked
	bool ____isLocked_5;
	// System.Object UnionAssets.FLE.CEvent::_currentTarget
	Object_t * ____currentTarget_6;
};
