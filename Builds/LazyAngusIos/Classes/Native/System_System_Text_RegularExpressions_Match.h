#pragma once
#include <stdint.h>
// System.Text.RegularExpressions.Regex
struct Regex_t1264;
// System.Text.RegularExpressions.IMachine
struct IMachine_t1615;
// System.Text.RegularExpressions.GroupCollection
struct GroupCollection_t1614;
// System.Text.RegularExpressions.Match
struct Match_t1606;
// System.Text.RegularExpressions.Group
#include "System_System_Text_RegularExpressions_Group.h"
// System.Text.RegularExpressions.Match
struct  Match_t1606  : public Group_t1612
{
	// System.Text.RegularExpressions.Regex System.Text.RegularExpressions.Match::regex
	Regex_t1264 * ___regex_6;
	// System.Text.RegularExpressions.IMachine System.Text.RegularExpressions.Match::machine
	Object_t * ___machine_7;
	// System.Int32 System.Text.RegularExpressions.Match::text_length
	int32_t ___text_length_8;
	// System.Text.RegularExpressions.GroupCollection System.Text.RegularExpressions.Match::groups
	GroupCollection_t1614 * ___groups_9;
};
struct Match_t1606_StaticFields{
	// System.Text.RegularExpressions.Match System.Text.RegularExpressions.Match::empty
	Match_t1606 * ___empty_10;
};
