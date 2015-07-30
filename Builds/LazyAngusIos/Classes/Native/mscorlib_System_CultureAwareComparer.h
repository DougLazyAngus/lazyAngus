#pragma once
#include <stdint.h>
// System.Globalization.CompareInfo
struct CompareInfo_t3224;
// System.StringComparer
#include "mscorlib_System_StringComparer.h"
// System.CultureAwareComparer
struct  CultureAwareComparer_t4789  : public StringComparer_t2875
{
	// System.Boolean System.CultureAwareComparer::_ignoreCase
	bool ____ignoreCase_4;
	// System.Globalization.CompareInfo System.CultureAwareComparer::_compareInfo
	CompareInfo_t3224 * ____compareInfo_5;
};
