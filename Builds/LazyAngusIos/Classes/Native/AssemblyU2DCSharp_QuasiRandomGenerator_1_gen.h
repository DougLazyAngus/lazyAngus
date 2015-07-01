#pragma once
#include <stdint.h>
// LevelConfig/WaveType[]
struct WaveTypeU5BU5D_t439;
// System.Collections.Generic.List`1<LevelConfig/WaveType>
struct List_1_t499;
// System.Object
#include "mscorlib_System_Object.h"
// QuasiRandomGenerator`1<LevelConfig/WaveType>
struct  QuasiRandomGenerator_1_t591  : public Object_t
{
	// T[] QuasiRandomGenerator`1<LevelConfig/WaveType>::distribution
	WaveTypeU5BU5D_t439* ___distribution_0;
	// System.Collections.Generic.List`1<T> QuasiRandomGenerator`1<LevelConfig/WaveType>::values
	List_1_t499 * ___values_1;
	// System.Int32 QuasiRandomGenerator`1<LevelConfig/WaveType>::refreshTrigger
	int32_t ___refreshTrigger_2;
};
