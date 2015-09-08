#pragma once
#include <stdint.h>
// System.Collections.Hashtable
struct Hashtable_t714;
// System.Collections.ArrayList
struct ArrayList_t716;
// System.String
struct String_t;
// System.Object
#include "mscorlib_System_Object.h"
// Mono.Xml.Schema.XsdIDManager
struct  XsdIDManager_t3440  : public Object_t
{
	// System.Collections.Hashtable Mono.Xml.Schema.XsdIDManager::idList
	Hashtable_t714 * ___idList_0;
	// System.Collections.ArrayList Mono.Xml.Schema.XsdIDManager::missingIDReferences
	ArrayList_t716 * ___missingIDReferences_1;
	// System.String Mono.Xml.Schema.XsdIDManager::thisElementId
	String_t* ___thisElementId_2;
};
