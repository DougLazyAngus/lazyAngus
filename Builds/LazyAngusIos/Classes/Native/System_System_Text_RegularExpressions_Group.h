#pragma once
#include <stdint.h>
// System.Text.RegularExpressions.Group
struct Group_t1456;
// System.Text.RegularExpressions.CaptureCollection
struct CaptureCollection_t1459;
// System.Text.RegularExpressions.Capture
#include "System_System_Text_RegularExpressions_Capture.h"
// System.Text.RegularExpressions.Group
struct  Group_t1456  : public Capture_t1457
{
	// System.Boolean System.Text.RegularExpressions.Group::success
	bool ___success_4;
	// System.Text.RegularExpressions.CaptureCollection System.Text.RegularExpressions.Group::captures
	CaptureCollection_t1459 * ___captures_5;
};
struct Group_t1456_StaticFields{
	// System.Text.RegularExpressions.Group System.Text.RegularExpressions.Group::Fail
	Group_t1456 * ___Fail_3;
};
