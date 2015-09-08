#pragma once
#include <stdint.h>
// Mono.Xml.Schema.XsdIdentitySelector
struct XsdIdentitySelector_t3407;
// System.Xml.Schema.XmlSchemaIdentityConstraint
struct XmlSchemaIdentityConstraint_t3418;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t3419;
// Mono.Xml.Schema.XsdKeyEntryCollection
struct XsdKeyEntryCollection_t3417;
// Mono.Xml.Schema.XsdKeyTable
struct XsdKeyTable_t3416;
// System.Object
#include "mscorlib_System_Object.h"
// Mono.Xml.Schema.XsdKeyTable
struct  XsdKeyTable_t3416  : public Object_t
{
	// System.Boolean Mono.Xml.Schema.XsdKeyTable::alwaysTrue
	bool ___alwaysTrue_0;
	// Mono.Xml.Schema.XsdIdentitySelector Mono.Xml.Schema.XsdKeyTable::selector
	XsdIdentitySelector_t3407 * ___selector_1;
	// System.Xml.Schema.XmlSchemaIdentityConstraint Mono.Xml.Schema.XsdKeyTable::source
	XmlSchemaIdentityConstraint_t3418 * ___source_2;
	// System.Xml.XmlQualifiedName Mono.Xml.Schema.XsdKeyTable::qname
	XmlQualifiedName_t3419 * ___qname_3;
	// System.Xml.XmlQualifiedName Mono.Xml.Schema.XsdKeyTable::refKeyName
	XmlQualifiedName_t3419 * ___refKeyName_4;
	// Mono.Xml.Schema.XsdKeyEntryCollection Mono.Xml.Schema.XsdKeyTable::Entries
	XsdKeyEntryCollection_t3417 * ___Entries_5;
	// Mono.Xml.Schema.XsdKeyEntryCollection Mono.Xml.Schema.XsdKeyTable::FinishedEntries
	XsdKeyEntryCollection_t3417 * ___FinishedEntries_6;
	// System.Int32 Mono.Xml.Schema.XsdKeyTable::StartDepth
	int32_t ___StartDepth_7;
	// Mono.Xml.Schema.XsdKeyTable Mono.Xml.Schema.XsdKeyTable::ReferencedKey
	XsdKeyTable_t3416 * ___ReferencedKey_8;
};
