#pragma once
#include <stdint.h>
// System.Xml.Schema.XmlSchemaObject
struct XmlSchemaObject_t3439;
// System.String
struct String_t;
// System.Collections.Specialized.StringCollection
struct StringCollection_t3440;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t223;
// System.Object
#include "mscorlib_System_Object.h"
// System.Xml.Schema.XmlSchemaContentProcessing
#include "System_Xml_System_Xml_Schema_XmlSchemaContentProcessing.h"
// Mono.Xml.Schema.XsdWildcard
struct  XsdWildcard_t3441  : public Object_t
{
	// System.Xml.Schema.XmlSchemaObject Mono.Xml.Schema.XsdWildcard::xsobj
	XmlSchemaObject_t3439 * ___xsobj_0;
	// System.Xml.Schema.XmlSchemaContentProcessing Mono.Xml.Schema.XsdWildcard::ResolvedProcessing
	int32_t ___ResolvedProcessing_1;
	// System.String Mono.Xml.Schema.XsdWildcard::TargetNamespace
	String_t* ___TargetNamespace_2;
	// System.Boolean Mono.Xml.Schema.XsdWildcard::SkipCompile
	bool ___SkipCompile_3;
	// System.Boolean Mono.Xml.Schema.XsdWildcard::HasValueAny
	bool ___HasValueAny_4;
	// System.Boolean Mono.Xml.Schema.XsdWildcard::HasValueLocal
	bool ___HasValueLocal_5;
	// System.Boolean Mono.Xml.Schema.XsdWildcard::HasValueOther
	bool ___HasValueOther_6;
	// System.Boolean Mono.Xml.Schema.XsdWildcard::HasValueTargetNamespace
	bool ___HasValueTargetNamespace_7;
	// System.Collections.Specialized.StringCollection Mono.Xml.Schema.XsdWildcard::ResolvedNamespaces
	StringCollection_t3440 * ___ResolvedNamespaces_8;
};
struct XsdWildcard_t3441_StaticFields{
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Xml.Schema.XsdWildcard::<>f__switch$map6
	Dictionary_2_t223 * ___U3CU3Ef__switchU24map6_9;
};
