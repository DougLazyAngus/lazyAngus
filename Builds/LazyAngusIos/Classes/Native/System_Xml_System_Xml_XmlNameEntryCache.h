#pragma once
#include <stdint.h>
// System.Collections.Hashtable
struct Hashtable_t697;
// System.Xml.XmlNameTable
struct XmlNameTable_t3182;
// System.Xml.XmlNameEntry
struct XmlNameEntry_t3212;
// System.Char[]
struct CharU5BU5D_t698;
// System.Object
#include "mscorlib_System_Object.h"
// System.Xml.XmlNameEntryCache
struct  XmlNameEntryCache_t3224  : public Object_t
{
	// System.Collections.Hashtable System.Xml.XmlNameEntryCache::table
	Hashtable_t697 * ___table_0;
	// System.Xml.XmlNameTable System.Xml.XmlNameEntryCache::nameTable
	XmlNameTable_t3182 * ___nameTable_1;
	// System.Xml.XmlNameEntry System.Xml.XmlNameEntryCache::dummy
	XmlNameEntry_t3212 * ___dummy_2;
	// System.Char[] System.Xml.XmlNameEntryCache::cacheBuffer
	CharU5BU5D_t698* ___cacheBuffer_3;
};
