#pragma once
#include <stdint.h>
// System.Text.RegularExpressions.Regex
struct Regex_t1342;
// System.Text.RegularExpressions.IMachine
struct IMachine_t2111;
// System.Text.RegularExpressions.GroupCollection
struct GroupCollection_t1892;
// System.Text.RegularExpressions.Match
struct Match_t1891;
// System.Text.RegularExpressions.Group
#include "System_System_Text_RegularExpressions_Group.h"
// System.Text.RegularExpressions.Match
struct  Match_t1891  : public Group_t1893
{
	// System.Text.RegularExpressions.Regex System.Text.RegularExpressions.Match::regex
	Regex_t1342 * ___regex_6;
	// System.Text.RegularExpressions.IMachine System.Text.RegularExpressions.Match::machine
	Object_t * ___machine_7;
	// System.Int32 System.Text.RegularExpressions.Match::text_length
	int32_t ___text_length_8;
	// System.Text.RegularExpressions.GroupCollection System.Text.RegularExpressions.Match::groups
	GroupCollection_t1892 * ___groups_9;
};
struct Match_t1891_StaticFields{
	// System.Text.RegularExpressions.Match System.Text.RegularExpressions.Match::empty
	Match_t1891 * ___empty_10;
};
