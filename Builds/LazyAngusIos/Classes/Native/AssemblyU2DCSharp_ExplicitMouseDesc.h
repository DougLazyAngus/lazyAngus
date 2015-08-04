#pragma once
#include <stdint.h>
// System.Object
#include "mscorlib_System_Object.h"
// MouseConfig/MouseType
#include "AssemblyU2DCSharp_MouseConfig_MouseType.h"
// MouseHole/MouseHoleLocation
#include "AssemblyU2DCSharp_MouseHole_MouseHoleLocation.h"
// MouseConfig/MouseWiggleType
#include "AssemblyU2DCSharp_MouseConfig_MouseWiggleType.h"
// ExplicitMouseDesc
struct  ExplicitMouseDesc_t496  : public Object_t
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
	// MouseConfig/MouseWiggleType ExplicitMouseDesc::<wiggleType>k__BackingField
	int32_t ___U3CwiggleTypeU3Ek__BackingField_5;
	// System.Single ExplicitMouseDesc::<wiggleMagnitude>k__BackingField
	float ___U3CwiggleMagnitudeU3Ek__BackingField_6;
	// System.Int32 ExplicitMouseDesc::<wiggleCycles>k__BackingField
	int32_t ___U3CwiggleCyclesU3Ek__BackingField_7;
	// System.Boolean ExplicitMouseDesc::<wiggleClockwise>k__BackingField
	bool ___U3CwiggleClockwiseU3Ek__BackingField_8;
};
