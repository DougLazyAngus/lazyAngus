﻿#pragma once
#include <stdint.h>
// System.Xml.NameTable/Entry[]
struct EntryU5BU5D_t2029;
// System.Xml.XmlNameTable
#include "System_Xml_System_Xml_XmlNameTable.h"
// System.Xml.NameTable
struct  NameTable_t2030  : public XmlNameTable_t2006
{
	// System.Int32 System.Xml.NameTable::count
	int32_t ___count_0;
	// System.Xml.NameTable/Entry[] System.Xml.NameTable::buckets
	EntryU5BU5D_t2029* ___buckets_1;
	// System.Int32 System.Xml.NameTable::size
	int32_t ___size_2;
};