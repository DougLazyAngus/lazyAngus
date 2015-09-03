#pragma once
#include <stdint.h>
// System.Text.RegularExpressions.Regex
struct Regex_t801;
// System.Text.RegularExpressions.IMachine
struct IMachine_t4502;
// System.Text.RegularExpressions.GroupCollection
struct GroupCollection_t1454;
// System.Text.RegularExpressions.Match
struct Match_t1391;
// System.Text.RegularExpressions.Group
#include "System_System_Text_RegularExpressions_Group.h"
// System.Text.RegularExpressions.Match
struct  Match_t1391  : public Group_t1452
{
	// System.Text.RegularExpressions.Regex System.Text.RegularExpressions.Match::regex
	Regex_t801 * ___regex_6;
	// System.Text.RegularExpressions.IMachine System.Text.RegularExpressions.Match::machine
	Object_t * ___machine_7;
	// System.Int32 System.Text.RegularExpressions.Match::text_length
	int32_t ___text_length_8;
	// System.Text.RegularExpressions.GroupCollection System.Text.RegularExpressions.Match::groups
	GroupCollection_t1454 * ___groups_9;
};
struct Match_t1391_StaticFields{
	// System.Text.RegularExpressions.Match System.Text.RegularExpressions.Match::empty
	Match_t1391 * ___empty_10;
};
