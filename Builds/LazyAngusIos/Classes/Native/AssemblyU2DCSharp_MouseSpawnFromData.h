#pragma once
#include <stdint.h>
// MouseSpawnFromData
struct MouseSpawnFromData_t459;
// System.Collections.Generic.List`1<ExplicitMouseDesc>
struct List_1_t483;
// UnityEngine.GameObject
struct GameObject_t310;
// MouseSpawnFromData/MouseSpawnEventHandler
struct MouseSpawnEventHandler_t513;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// MouseSpawnFromData
struct  MouseSpawnFromData_t459  : public MonoBehaviour_t67
{
	// System.Single MouseSpawnFromData::initialSpawnDelta
	float ___initialSpawnDelta_2;
	// System.Single MouseSpawnFromData::minRandomDelay
	float ___minRandomDelay_4;
	// System.Single MouseSpawnFromData::maxRandomDelay
	float ___maxRandomDelay_5;
	// System.Collections.Generic.List`1<ExplicitMouseDesc> MouseSpawnFromData::miceDesc
	List_1_t483 * ___miceDesc_6;
	// System.Single MouseSpawnFromData::nextSpawnTime
	float ___nextSpawnTime_7;
	// UnityEngine.GameObject MouseSpawnFromData::mousePrototype
	GameObject_t310 * ___mousePrototype_8;
	// System.Boolean MouseSpawnFromData::registeredForEvents
	bool ___registeredForEvents_9;
	// MouseSpawnFromData/MouseSpawnEventHandler MouseSpawnFromData::MouseSpawn
	MouseSpawnEventHandler_t513 * ___MouseSpawn_10;
	// System.Int32 MouseSpawnFromData::<miceSpawned>k__BackingField
	int32_t ___U3CmiceSpawnedU3Ek__BackingField_11;
};
struct MouseSpawnFromData_t459_StaticFields{
	// MouseSpawnFromData MouseSpawnFromData::instance
	MouseSpawnFromData_t459 * ___instance_3;
};
