#pragma once
#include <stdint.h>
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>
struct Dictionary_2_t127;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.DataEventHandlerFunction>>
struct Dictionary_2_t128;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnionAssets.FLE.EventDispatcher
struct  EventDispatcher_t129  : public MonoBehaviour_t13
{
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>> UnionAssets.FLE.EventDispatcher::listners
	Dictionary_2_t127 * ___listners_2;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.DataEventHandlerFunction>> UnionAssets.FLE.EventDispatcher::dataListners
	Dictionary_2_t128 * ___dataListners_3;
};
