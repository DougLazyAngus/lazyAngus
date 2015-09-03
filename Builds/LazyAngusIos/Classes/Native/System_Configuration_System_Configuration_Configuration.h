#pragma once
#include <stdint.h>
// System.Configuration.Configuration
struct Configuration_t3296;
// System.Collections.Hashtable
struct Hashtable_t710;
// System.String
struct String_t;
// System.Configuration.ConfigurationSectionGroup
struct ConfigurationSectionGroup_t3302;
// System.Configuration.ConfigurationLocationCollection
struct ConfigurationLocationCollection_t3303;
// System.Configuration.SectionGroupInfo
struct SectionGroupInfo_t3304;
// System.Configuration.Internal.IConfigSystem
struct IConfigSystem_t3305;
// System.Object
#include "mscorlib_System_Object.h"
// System.Configuration.Configuration
struct  Configuration_t3296  : public Object_t
{
	// System.Configuration.Configuration System.Configuration.Configuration::parent
	Configuration_t3296 * ___parent_0;
	// System.Collections.Hashtable System.Configuration.Configuration::elementData
	Hashtable_t710 * ___elementData_1;
	// System.String System.Configuration.Configuration::streamName
	String_t* ___streamName_2;
	// System.Configuration.ConfigurationSectionGroup System.Configuration.Configuration::rootSectionGroup
	ConfigurationSectionGroup_t3302 * ___rootSectionGroup_3;
	// System.Configuration.ConfigurationLocationCollection System.Configuration.Configuration::locations
	ConfigurationLocationCollection_t3303 * ___locations_4;
	// System.Configuration.SectionGroupInfo System.Configuration.Configuration::rootGroup
	SectionGroupInfo_t3304 * ___rootGroup_5;
	// System.Configuration.Internal.IConfigSystem System.Configuration.Configuration::system
	Object_t * ___system_6;
	// System.Boolean System.Configuration.Configuration::hasFile
	bool ___hasFile_7;
	// System.String System.Configuration.Configuration::rootNamespace
	String_t* ___rootNamespace_8;
	// System.String System.Configuration.Configuration::configPath
	String_t* ___configPath_9;
	// System.String System.Configuration.Configuration::locationConfigPath
	String_t* ___locationConfigPath_10;
	// System.String System.Configuration.Configuration::locationSubPath
	String_t* ___locationSubPath_11;
};
