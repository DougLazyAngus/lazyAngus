#pragma once
#include <stdint.h>
// System.Collections.Hashtable
struct Hashtable_t1436;
// System.Xml.XmlNameTable
struct XmlNameTable_t2004;
// System.Xml.XmlNameEntry
struct XmlNameEntry_t2034;
// System.Char[]
struct CharU5BU5D_t555;
// System.Object
#include "mscorlib_System_Object.h"
// System.Xml.XmlNameEntryCache
struct  XmlNameEntryCache_t2046  : public Object_t
{
	// System.Collections.Hashtable System.Xml.XmlNameEntryCache::table
	Hashtable_t1436 * ___table_0;
	// System.Xml.XmlNameTable System.Xml.XmlNameEntryCache::nameTable
	XmlNameTable_t2004 * ___nameTable_1;
	// System.Xml.XmlNameEntry System.Xml.XmlNameEntryCache::dummy
	XmlNameEntry_t2034 * ___dummy_2;
	// System.Char[] System.Xml.XmlNameEntryCache::cacheBuffer
	CharU5BU5D_t555* ___cacheBuffer_3;
};
