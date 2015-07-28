#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.ValueType
#include "mscorlib_System_ValueType.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"
// UnityEngine.SkeletonBone
struct  SkeletonBone_t2725 
{
	// System.String UnityEngine.SkeletonBone::name
	String_t* ___name_0;
	// UnityEngine.Vector3 UnityEngine.SkeletonBone::position
	Vector3_t493  ___position_1;
	// UnityEngine.Quaternion UnityEngine.SkeletonBone::rotation
	Quaternion_t726  ___rotation_2;
	// UnityEngine.Vector3 UnityEngine.SkeletonBone::scale
	Vector3_t493  ___scale_3;
	// System.Int32 UnityEngine.SkeletonBone::transformModified
	int32_t ___transformModified_4;
};
// Native definition for marshalling of: UnityEngine.SkeletonBone
struct SkeletonBone_t2725_marshaled
{
	char* ___name_0;
	Vector3_t493  ___position_1;
	Quaternion_t726  ___rotation_2;
	Vector3_t493  ___scale_3;
	int32_t ___transformModified_4;
};
