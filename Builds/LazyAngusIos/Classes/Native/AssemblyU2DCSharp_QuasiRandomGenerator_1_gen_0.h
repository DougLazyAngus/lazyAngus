#pragma once
#include <stdint.h>
// MouseConfig/MouseType[]
struct MouseTypeU5BU5D_t522;
// System.Collections.Generic.List`1<MouseConfig/MouseType>
struct List_1_t3600;
// System.Object
#include "mscorlib_System_Object.h"
// QuasiRandomGenerator`1<MouseConfig/MouseType>
struct  QuasiRandomGenerator_1_t524  : public Object_t
{
	// T[] QuasiRandomGenerator`1<MouseConfig/MouseType>::distribution
	MouseTypeU5BU5D_t522* ___distribution_0;
	// System.Collections.Generic.List`1<T> QuasiRandomGenerator`1<MouseConfig/MouseType>::values
	List_1_t3600 * ___values_1;
	// System.Int32 QuasiRandomGenerator`1<MouseConfig/MouseType>::refreshTrigger
	int32_t ___refreshTrigger_2;
};
