#pragma once
#include <stdint.h>
// System.Globalization.CompareInfo
struct CompareInfo_t3227;
// System.StringComparer
#include "mscorlib_System_StringComparer.h"
// System.CultureAwareComparer
struct  CultureAwareComparer_t4792  : public StringComparer_t2878
{
	// System.Boolean System.CultureAwareComparer::_ignoreCase
	bool ____ignoreCase_4;
	// System.Globalization.CompareInfo System.CultureAwareComparer::_compareInfo
	CompareInfo_t3227 * ____compareInfo_5;
};
