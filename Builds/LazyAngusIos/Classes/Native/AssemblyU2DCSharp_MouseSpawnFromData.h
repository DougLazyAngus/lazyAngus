#pragma once
#include <stdint.h>
// MouseSpawnFromData
struct MouseSpawnFromData_t503;
// System.Collections.Generic.List`1<ExplicitMouseDesc>
struct List_1_t527;
// UnityEngine.GameObject
struct GameObject_t352;
// MouseSpawnFromData/MouseSpawnEventHandler
struct MouseSpawnEventHandler_t557;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// MouseSpawnFromData
struct  MouseSpawnFromData_t503  : public MonoBehaviour_t13
{
	// System.Single MouseSpawnFromData::initialSpawnDelta
	float ___initialSpawnDelta_2;
	// System.Single MouseSpawnFromData::minRandomDelay
	float ___minRandomDelay_4;
	// System.Single MouseSpawnFromData::maxRandomDelay
	float ___maxRandomDelay_5;
	// System.Collections.Generic.List`1<ExplicitMouseDesc> MouseSpawnFromData::miceDesc
	List_1_t527 * ___miceDesc_6;
	// System.Single MouseSpawnFromData::nextSpawnTime
	float ___nextSpawnTime_7;
	// UnityEngine.GameObject MouseSpawnFromData::mousePrototype
	GameObject_t352 * ___mousePrototype_8;
	// System.Boolean MouseSpawnFromData::registeredForEvents
	bool ___registeredForEvents_9;
	// MouseSpawnFromData/MouseSpawnEventHandler MouseSpawnFromData::MouseSpawn
	MouseSpawnEventHandler_t557 * ___MouseSpawn_10;
	// System.Int32 MouseSpawnFromData::<miceSpawned>k__BackingField
	int32_t ___U3CmiceSpawnedU3Ek__BackingField_11;
};
struct MouseSpawnFromData_t503_StaticFields{
	// MouseSpawnFromData MouseSpawnFromData::instance
	MouseSpawnFromData_t503 * ___instance_3;
};
