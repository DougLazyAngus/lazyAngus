﻿#pragma once
#include <stdint.h>
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>
struct Dictionary_2_t85;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.DataEventHandlerFunction>>
struct Dictionary_2_t86;
// System.Object
#include "mscorlib_System_Object.h"
// UnionAssets.FLE.EventDispatcherBase
struct  EventDispatcherBase_t88  : public Object_t
{
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>> UnionAssets.FLE.EventDispatcherBase::listners
	Dictionary_2_t85 * ___listners_0;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.DataEventHandlerFunction>> UnionAssets.FLE.EventDispatcherBase::dataListners
	Dictionary_2_t86 * ___dataListners_1;
};