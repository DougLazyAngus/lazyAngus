﻿#pragma once
#include <stdint.h>
// MouseHole/MouseHoleLocation[]
struct MouseHoleLocationU5BU5D_t615;
// System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>
struct List_1_t3568;
// System.Object
#include "mscorlib_System_Object.h"
// QuasiRandomGenerator`1<MouseHole/MouseHoleLocation>
struct  QuasiRandomGenerator_1_t442  : public Object_t
{
	// T[] QuasiRandomGenerator`1<MouseHole/MouseHoleLocation>::distribution
	MouseHoleLocationU5BU5D_t615* ___distribution_0;
	// System.Collections.Generic.List`1<T> QuasiRandomGenerator`1<MouseHole/MouseHoleLocation>::values
	List_1_t3568 * ___values_1;
	// System.Int32 QuasiRandomGenerator`1<MouseHole/MouseHoleLocation>::refreshTrigger
	int32_t ___refreshTrigger_2;
};