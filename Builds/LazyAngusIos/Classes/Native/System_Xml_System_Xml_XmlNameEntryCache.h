#pragma once
#include <stdint.h>
// System.Collections.Hashtable
struct Hashtable_t1571;
// System.Xml.XmlNameTable
struct XmlNameTable_t1579;
// System.Xml.XmlNameEntry
struct XmlNameEntry_t1609;
// System.Char[]
struct CharU5BU5D_t608;
// System.Object
#include "mscorlib_System_Object.h"
// System.Xml.XmlNameEntryCache
struct  XmlNameEntryCache_t1621  : public Object_t
{
	// System.Collections.Hashtable System.Xml.XmlNameEntryCache::table
	Hashtable_t1571 * ___table_0;
	// System.Xml.XmlNameTable System.Xml.XmlNameEntryCache::nameTable
	XmlNameTable_t1579 * ___nameTable_1;
	// System.Xml.XmlNameEntry System.Xml.XmlNameEntryCache::dummy
	XmlNameEntry_t1609 * ___dummy_2;
	// System.Char[] System.Xml.XmlNameEntryCache::cacheBuffer
	CharU5BU5D_t608* ___cacheBuffer_3;
};
