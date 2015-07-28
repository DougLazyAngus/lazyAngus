#pragma once
#include <stdint.h>
// System.Globalization.CompareInfo
struct CompareInfo_t3216;
// System.StringComparer
#include "mscorlib_System_StringComparer.h"
// System.CultureAwareComparer
struct  CultureAwareComparer_t4781  : public StringComparer_t2868
{
	// System.Boolean System.CultureAwareComparer::_ignoreCase
	bool ____ignoreCase_4;
	// System.Globalization.CompareInfo System.CultureAwareComparer::_compareInfo
	CompareInfo_t3216 * ____compareInfo_5;
};
