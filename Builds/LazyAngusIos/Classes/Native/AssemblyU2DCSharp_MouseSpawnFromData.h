#pragma once
#include <stdint.h>
// MouseSpawnFromData
struct MouseSpawnFromData_t554;
// System.Collections.Generic.List`1<ExplicitMouseDesc>
struct List_1_t576;
// UnityEngine.GameObject
struct GameObject_t352;
// MouseSpawnFromData/MouseSpawnEventHandler
struct MouseSpawnEventHandler_t602;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// MouseSpawnFromData
struct  MouseSpawnFromData_t554  : public MonoBehaviour_t13
{
	// System.Single MouseSpawnFromData::minRandomDelay
	float ___minRandomDelay_3;
	// System.Single MouseSpawnFromData::maxRandomDelay
	float ___maxRandomDelay_4;
	// System.Collections.Generic.List`1<ExplicitMouseDesc> MouseSpawnFromData::miceDesc
	List_1_t576 * ___miceDesc_5;
	// System.Single MouseSpawnFromData::nextSpawnTime
	float ___nextSpawnTime_6;
	// UnityEngine.GameObject MouseSpawnFromData::mousePrototype
	GameObject_t352 * ___mousePrototype_7;
	// System.Boolean MouseSpawnFromData::registeredForEvents
	bool ___registeredForEvents_8;
	// MouseSpawnFromData/MouseSpawnEventHandler MouseSpawnFromData::MouseSpawn
	MouseSpawnEventHandler_t602 * ___MouseSpawn_9;
	// System.Int32 MouseSpawnFromData::<miceSpawned>k__BackingField
	int32_t ___U3CmiceSpawnedU3Ek__BackingField_10;
};
struct MouseSpawnFromData_t554_StaticFields{
	// MouseSpawnFromData MouseSpawnFromData::instance
	MouseSpawnFromData_t554 * ___instance_2;
};
