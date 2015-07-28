#pragma once
#include <stdint.h>
// Parse.ParseInstallation
struct ParseInstallation_t1227;
// System.Object
struct Object_t;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_t1229;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t122;
// System.Action`1<System.Threading.Tasks.Task>
struct Action_1_t1109;
// Parse.Internal.InternalExtensions/PartialAccessor`1<System.Threading.Tasks.Task>
struct PartialAccessor_1_t1230;
// Parse.ParseObject
#include "Parse_Unity_Parse_ParseObject.h"
// Parse.ParseInstallation
struct  ParseInstallation_t1227  : public ParseObject_t1159
{
};
struct ParseInstallation_t1227_StaticFields{
	// System.Boolean Parse.ParseInstallation::currentInstallationMatchesDisk
	bool ___currentInstallationMatchesDisk_30;
	// Parse.ParseInstallation Parse.ParseInstallation::currentInstallation
	ParseInstallation_t1227 * ___currentInstallation_31;
	// System.Object Parse.ParseInstallation::currentInstallationMutex
	Object_t * ___currentInstallationMutex_32;
	// System.Collections.Generic.HashSet`1<System.String> Parse.ParseInstallation::readOnlyKeys
	HashSet_1_t1229 * ___readOnlyKeys_33;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> Parse.ParseInstallation::tzNameMap
	Dictionary_2_t122 * ___tzNameMap_34;
	// System.Action`1<System.Threading.Tasks.Task> Parse.ParseInstallation::CS$<>9__CachedAnonymousMethodDelegate92
	Action_1_t1109 * ___CSU24U3CU3E9__CachedAnonymousMethodDelegate92_35;
	// Parse.Internal.InternalExtensions/PartialAccessor`1<System.Threading.Tasks.Task> Parse.ParseInstallation::CS$<>9__CachedAnonymousMethodDelegate95
	PartialAccessor_1_t1230 * ___CSU24U3CU3E9__CachedAnonymousMethodDelegate95_36;
};
