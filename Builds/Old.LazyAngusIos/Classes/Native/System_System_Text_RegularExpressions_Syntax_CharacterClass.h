﻿#pragma once
#include <stdint.h>
// System.Collections.BitArray
struct BitArray_t1691;
// System.Text.RegularExpressions.IntervalCollection
struct IntervalCollection_t1671;
// System.Text.RegularExpressions.Syntax.Expression
#include "System_System_Text_RegularExpressions_Syntax_Expression.h"
// System.Text.RegularExpressions.Interval
#include "System_System_Text_RegularExpressions_Interval.h"
// System.Text.RegularExpressions.Syntax.CharacterClass
struct  CharacterClass_t1692  : public Expression_t1675
{
	// System.Boolean System.Text.RegularExpressions.Syntax.CharacterClass::negate
	bool ___negate_1;
	// System.Boolean System.Text.RegularExpressions.Syntax.CharacterClass::ignore
	bool ___ignore_2;
	// System.Collections.BitArray System.Text.RegularExpressions.Syntax.CharacterClass::pos_cats
	BitArray_t1691 * ___pos_cats_3;
	// System.Collections.BitArray System.Text.RegularExpressions.Syntax.CharacterClass::neg_cats
	BitArray_t1691 * ___neg_cats_4;
	// System.Text.RegularExpressions.IntervalCollection System.Text.RegularExpressions.Syntax.CharacterClass::intervals
	IntervalCollection_t1671 * ___intervals_5;
};
struct CharacterClass_t1692_StaticFields{
	// System.Text.RegularExpressions.Interval System.Text.RegularExpressions.Syntax.CharacterClass::upper_case_characters
	Interval_t1668  ___upper_case_characters_0;
};