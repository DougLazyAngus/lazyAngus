#pragma once
#include <stdint.h>
// System.ValueType
#include "mscorlib_System_ValueType.h"
// MouseConfig/MouseType
#include "AssemblyU2DCSharp_MouseConfig_MouseType.h"
// MouseHole/MouseHoleLocation
#include "AssemblyU2DCSharp_MouseHole_MouseHoleLocation.h"
// ExplicitMouseDesc
struct  ExplicitMouseDesc_t415 
{
	// MouseConfig/MouseType ExplicitMouseDesc::mouseType
	int32_t ___mouseType_0;
	// MouseHole/MouseHoleLocation ExplicitMouseDesc::mouseHoleLocation
	int32_t ___mouseHoleLocation_1;
	// System.Boolean ExplicitMouseDesc::isClockwise
	bool ___isClockwise_2;
	// System.Int32 ExplicitMouseDesc::track
	int32_t ___track_3;
	// System.Single ExplicitMouseDesc::delayToNextMouse
	float ___delayToNextMouse_4;
};
// Native definition for marshalling of: ExplicitMouseDesc
struct ExplicitMouseDesc_t415_marshaled
{
	int32_t ___mouseType_0;
	int32_t ___mouseHoleLocation_1;
	int32_t ___isClockwise_2;
	int32_t ___track_3;
	float ___delayToNextMouse_4;
};
