#pragma once
#include <stdint.h>
// System.Text.RegularExpressions.FactoryCache
struct FactoryCache_t4474;
// System.Text.RegularExpressions.IMachineFactory
struct IMachineFactory_t4509;
// System.Collections.IDictionary
struct IDictionary_t703;
// System.String[]
struct StringU5BU5D_t75;
// System.Int32[]
struct Int32U5BU5D_t484;
// System.String
struct String_t;
// System.Collections.Hashtable
struct Hashtable_t714;
// System.Text.RegularExpressions.RegexRunnerFactory
struct RegexRunnerFactory_t4510;
// System.Object
#include "mscorlib_System_Object.h"
// System.Text.RegularExpressions.RegexOptions
#include "System_System_Text_RegularExpressions_RegexOptions.h"
// System.Text.RegularExpressions.Regex
struct  Regex_t805  : public Object_t
{
	// System.Text.RegularExpressions.IMachineFactory System.Text.RegularExpressions.Regex::machineFactory
	Object_t * ___machineFactory_2;
	// System.Collections.IDictionary System.Text.RegularExpressions.Regex::mapping
	Object_t * ___mapping_3;
	// System.Int32 System.Text.RegularExpressions.Regex::group_count
	int32_t ___group_count_4;
	// System.Int32 System.Text.RegularExpressions.Regex::gap
	int32_t ___gap_5;
	// System.Boolean System.Text.RegularExpressions.Regex::refsInitialized
	bool ___refsInitialized_6;
	// System.String[] System.Text.RegularExpressions.Regex::group_names
	StringU5BU5D_t75* ___group_names_7;
	// System.Int32[] System.Text.RegularExpressions.Regex::group_numbers
	Int32U5BU5D_t484* ___group_numbers_8;
	// System.String System.Text.RegularExpressions.Regex::pattern
	String_t* ___pattern_9;
	// System.Text.RegularExpressions.RegexOptions System.Text.RegularExpressions.Regex::roptions
	int32_t ___roptions_10;
	// System.Collections.Hashtable System.Text.RegularExpressions.Regex::capnames
	Hashtable_t714 * ___capnames_11;
	// System.Collections.Hashtable System.Text.RegularExpressions.Regex::caps
	Hashtable_t714 * ___caps_12;
	// System.Text.RegularExpressions.RegexRunnerFactory System.Text.RegularExpressions.Regex::factory
	RegexRunnerFactory_t4510 * ___factory_13;
	// System.Int32 System.Text.RegularExpressions.Regex::capsize
	int32_t ___capsize_14;
	// System.String[] System.Text.RegularExpressions.Regex::capslist
	StringU5BU5D_t75* ___capslist_15;
};
struct Regex_t805_StaticFields{
	// System.Text.RegularExpressions.FactoryCache System.Text.RegularExpressions.Regex::cache
	FactoryCache_t4474 * ___cache_0;
	// System.Boolean System.Text.RegularExpressions.Regex::old_rx
	bool ___old_rx_1;
};
