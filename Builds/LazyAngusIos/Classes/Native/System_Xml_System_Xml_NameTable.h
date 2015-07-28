#pragma once
#include <stdint.h>
// System.Xml.NameTable/Entry[]
struct EntryU5BU5D_t3147;
// System.Xml.XmlNameTable
#include "System_Xml_System_Xml_XmlNameTable.h"
// System.Xml.NameTable
struct  NameTable_t3148  : public XmlNameTable_t3124
{
	// System.Int32 System.Xml.NameTable::count
	int32_t ___count_0;
	// System.Xml.NameTable/Entry[] System.Xml.NameTable::buckets
	EntryU5BU5D_t3147* ___buckets_1;
	// System.Int32 System.Xml.NameTable::size
	int32_t ___size_2;
};
