#pragma once
#include <stdint.h>
// System.Globalization.CompareInfo
struct CompareInfo_t1750;
// System.StringComparer
#include "mscorlib_System_StringComparer.h"
// System.CultureAwareComparer
struct  CultureAwareComparer_t2765  : public StringComparer_t1263
{
	// System.Boolean System.CultureAwareComparer::_ignoreCase
	bool ____ignoreCase_4;
	// System.Globalization.CompareInfo System.CultureAwareComparer::_compareInfo
	CompareInfo_t1750 * ____compareInfo_5;
};
