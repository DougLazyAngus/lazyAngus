﻿#pragma once
#include <stdint.h>
// Mono.Xml.Schema.XsdKeyEntry
struct XsdKeyEntry_t3408;
// Mono.Xml.Schema.XsdIdentityField
struct XsdIdentityField_t3404;
// Mono.Xml.Schema.XsdAnySimpleType
struct XsdAnySimpleType_t3409;
// System.Object
struct Object_t;
// Mono.Xml.Schema.XsdIdentityPath
struct XsdIdentityPath_t3406;
// System.Object
#include "mscorlib_System_Object.h"
// Mono.Xml.Schema.XsdKeyEntryField
struct  XsdKeyEntryField_t3410  : public Object_t
{
	// Mono.Xml.Schema.XsdKeyEntry Mono.Xml.Schema.XsdKeyEntryField::entry
	XsdKeyEntry_t3408 * ___entry_0;
	// Mono.Xml.Schema.XsdIdentityField Mono.Xml.Schema.XsdKeyEntryField::field
	XsdIdentityField_t3404 * ___field_1;
	// System.Boolean Mono.Xml.Schema.XsdKeyEntryField::FieldFound
	bool ___FieldFound_2;
	// System.Int32 Mono.Xml.Schema.XsdKeyEntryField::FieldLineNumber
	int32_t ___FieldLineNumber_3;
	// System.Int32 Mono.Xml.Schema.XsdKeyEntryField::FieldLinePosition
	int32_t ___FieldLinePosition_4;
	// System.Boolean Mono.Xml.Schema.XsdKeyEntryField::FieldHasLineInfo
	bool ___FieldHasLineInfo_5;
	// Mono.Xml.Schema.XsdAnySimpleType Mono.Xml.Schema.XsdKeyEntryField::FieldType
	XsdAnySimpleType_t3409 * ___FieldType_6;
	// System.Object Mono.Xml.Schema.XsdKeyEntryField::Identity
	Object_t * ___Identity_7;
	// System.Boolean Mono.Xml.Schema.XsdKeyEntryField::IsXsiNil
	bool ___IsXsiNil_8;
	// System.Int32 Mono.Xml.Schema.XsdKeyEntryField::FieldFoundDepth
	int32_t ___FieldFoundDepth_9;
	// Mono.Xml.Schema.XsdIdentityPath Mono.Xml.Schema.XsdKeyEntryField::FieldFoundPath
	XsdIdentityPath_t3406 * ___FieldFoundPath_10;
	// System.Boolean Mono.Xml.Schema.XsdKeyEntryField::Consuming
	bool ___Consuming_11;
	// System.Boolean Mono.Xml.Schema.XsdKeyEntryField::Consumed
	bool ___Consumed_12;
};