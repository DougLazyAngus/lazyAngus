#pragma once
#include <stdint.h>
// System.Text.RegularExpressions.Group
struct Group_t1386;
// System.Text.RegularExpressions.CaptureCollection
struct CaptureCollection_t1389;
// System.Text.RegularExpressions.Capture
#include "System_System_Text_RegularExpressions_Capture.h"
// System.Text.RegularExpressions.Group
struct  Group_t1386  : public Capture_t1387
{
	// System.Boolean System.Text.RegularExpressions.Group::success
	bool ___success_4;
	// System.Text.RegularExpressions.CaptureCollection System.Text.RegularExpressions.Group::captures
	CaptureCollection_t1389 * ___captures_5;
};
struct Group_t1386_StaticFields{
	// System.Text.RegularExpressions.Group System.Text.RegularExpressions.Group::Fail
	Group_t1386 * ___Fail_3;
};
