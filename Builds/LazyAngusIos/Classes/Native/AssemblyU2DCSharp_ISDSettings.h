#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Collections.Generic.List`1<System.String>
struct List_1_t73;
// ISDSettings
struct ISDSettings_t276;
// UnityEngine.ScriptableObject
#include "UnityEngine_UnityEngine_ScriptableObject.h"
// ISDSettings
struct  ISDSettings_t276  : public ScriptableObject_t111
{
	// System.Boolean ISDSettings::IsfwSettingOpen
	bool ___IsfwSettingOpen_6;
	// System.Boolean ISDSettings::IsLibSettingOpen
	bool ___IsLibSettingOpen_7;
	// System.Boolean ISDSettings::IslinkerSettingOpne
	bool ___IslinkerSettingOpne_8;
	// System.Boolean ISDSettings::IscompilerSettingsOpen
	bool ___IscompilerSettingsOpen_9;
	// System.Boolean ISDSettings::IsPlistSettingsOpen
	bool ___IsPlistSettingsOpen_10;
	// System.Collections.Generic.List`1<System.String> ISDSettings::frameworks
	List_1_t73 * ___frameworks_11;
	// System.Collections.Generic.List`1<System.String> ISDSettings::libraries
	List_1_t73 * ___libraries_12;
	// System.Collections.Generic.List`1<System.String> ISDSettings::compileFlags
	List_1_t73 * ___compileFlags_13;
	// System.Collections.Generic.List`1<System.String> ISDSettings::linkFlags
	List_1_t73 * ___linkFlags_14;
	// System.Collections.Generic.List`1<System.String> ISDSettings::plistkeys
	List_1_t73 * ___plistkeys_15;
	// System.Collections.Generic.List`1<System.String> ISDSettings::plisttags
	List_1_t73 * ___plisttags_16;
	// System.Collections.Generic.List`1<System.String> ISDSettings::plistvalues
	List_1_t73 * ___plistvalues_17;
};
struct ISDSettings_t276_StaticFields{
	// ISDSettings ISDSettings::instance
	ISDSettings_t276 * ___instance_18;
};
