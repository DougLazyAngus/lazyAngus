#pragma once
#include <stdint.h>
// System.Text.RegularExpressions.Group
struct Group_t1893;
// System.Text.RegularExpressions.CaptureCollection
struct CaptureCollection_t2109;
// System.Text.RegularExpressions.Capture
#include "System_System_Text_RegularExpressions_Capture.h"
// System.Text.RegularExpressions.Group
struct  Group_t1893  : public Capture_t2107
{
	// System.Boolean System.Text.RegularExpressions.Group::success
	bool ___success_4;
	// System.Text.RegularExpressions.CaptureCollection System.Text.RegularExpressions.Group::captures
	CaptureCollection_t2109 * ___captures_5;
};
struct Group_t1893_StaticFields{
	// System.Text.RegularExpressions.Group System.Text.RegularExpressions.Group::Fail
	Group_t1893 * ___Fail_3;
};
