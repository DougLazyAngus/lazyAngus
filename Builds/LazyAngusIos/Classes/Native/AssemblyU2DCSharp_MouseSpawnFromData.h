#pragma once
#include <stdint.h>
// MouseSpawnFromData
struct MouseSpawnFromData_t556;
// System.Collections.Generic.List`1<ExplicitMouseDesc>
struct List_1_t581;
// UnityEngine.GameObject
struct GameObject_t352;
// MouseSpawnFromData/MouseSpawnEventHandler
struct MouseSpawnEventHandler_t608;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// MouseSpawnFromData
struct  MouseSpawnFromData_t556  : public MonoBehaviour_t13
{
	// System.Single MouseSpawnFromData::minRandomDelay
	float ___minRandomDelay_3;
	// System.Single MouseSpawnFromData::maxRandomDelay
	float ___maxRandomDelay_4;
	// System.Collections.Generic.List`1<ExplicitMouseDesc> MouseSpawnFromData::miceDesc
	List_1_t581 * ___miceDesc_5;
	// System.Single MouseSpawnFromData::nextSpawnTime
	float ___nextSpawnTime_6;
	// UnityEngine.GameObject MouseSpawnFromData::mousePrototype
	GameObject_t352 * ___mousePrototype_7;
	// System.Boolean MouseSpawnFromData::registeredForEvents
	bool ___registeredForEvents_8;
	// MouseSpawnFromData/MouseSpawnEventHandler MouseSpawnFromData::MouseSpawn
	MouseSpawnEventHandler_t608 * ___MouseSpawn_9;
	// System.Int32 MouseSpawnFromData::<miceSpawned>k__BackingField
	int32_t ___U3CmiceSpawnedU3Ek__BackingField_10;
};
struct MouseSpawnFromData_t556_StaticFields{
	// MouseSpawnFromData MouseSpawnFromData::instance
	MouseSpawnFromData_t556 * ___instance_2;
};
