#pragma once
#include <stdint.h>
// System.Collections.Generic.List`1<ExplicitMouseDesc>
struct List_1_t431;
// UnityEngine.GameObject
struct GameObject_t284;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// MouseSpawnFromData
struct  MouseSpawnFromData_t422  : public MonoBehaviour_t67
{
	// System.Single MouseSpawnFromData::initialSpawnDelta
	float ___initialSpawnDelta_2;
	// System.Single MouseSpawnFromData::minRandomDelay
	float ___minRandomDelay_3;
	// System.Single MouseSpawnFromData::maxRandomDelay
	float ___maxRandomDelay_4;
	// System.Collections.Generic.List`1<ExplicitMouseDesc> MouseSpawnFromData::miceDesc
	List_1_t431 * ___miceDesc_5;
	// System.Single MouseSpawnFromData::nextSpawnTime
	float ___nextSpawnTime_6;
	// UnityEngine.GameObject MouseSpawnFromData::mousePrototype
	GameObject_t284 * ___mousePrototype_7;
};
