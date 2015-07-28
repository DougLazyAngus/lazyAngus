﻿#pragma once
#include <stdint.h>
// Mono.Xml.DTDAutomataFactory
struct DTDAutomataFactory_t3117;
// Mono.Xml.DTDElementDeclarationCollection
struct DTDElementDeclarationCollection_t3118;
// Mono.Xml.DTDAttListDeclarationCollection
struct DTDAttListDeclarationCollection_t3119;
// Mono.Xml.DTDParameterEntityDeclarationCollection
struct DTDParameterEntityDeclarationCollection_t3120;
// Mono.Xml.DTDEntityDeclarationCollection
struct DTDEntityDeclarationCollection_t3121;
// Mono.Xml.DTDNotationDeclarationCollection
struct DTDNotationDeclarationCollection_t3122;
// System.Collections.ArrayList
struct ArrayList_t3102;
// System.Xml.XmlResolver
struct XmlResolver_t3123;
// System.Xml.XmlNameTable
struct XmlNameTable_t3124;
// System.Collections.Hashtable
struct Hashtable_t1268;
// System.String
struct String_t;
// System.Object
#include "mscorlib_System_Object.h"
// Mono.Xml.DTDObjectModel
struct  DTDObjectModel_t3116  : public Object_t
{
	// Mono.Xml.DTDAutomataFactory Mono.Xml.DTDObjectModel::factory
	DTDAutomataFactory_t3117 * ___factory_0;
	// Mono.Xml.DTDElementDeclarationCollection Mono.Xml.DTDObjectModel::elementDecls
	DTDElementDeclarationCollection_t3118 * ___elementDecls_1;
	// Mono.Xml.DTDAttListDeclarationCollection Mono.Xml.DTDObjectModel::attListDecls
	DTDAttListDeclarationCollection_t3119 * ___attListDecls_2;
	// Mono.Xml.DTDParameterEntityDeclarationCollection Mono.Xml.DTDObjectModel::peDecls
	DTDParameterEntityDeclarationCollection_t3120 * ___peDecls_3;
	// Mono.Xml.DTDEntityDeclarationCollection Mono.Xml.DTDObjectModel::entityDecls
	DTDEntityDeclarationCollection_t3121 * ___entityDecls_4;
	// Mono.Xml.DTDNotationDeclarationCollection Mono.Xml.DTDObjectModel::notationDecls
	DTDNotationDeclarationCollection_t3122 * ___notationDecls_5;
	// System.Collections.ArrayList Mono.Xml.DTDObjectModel::validationErrors
	ArrayList_t3102 * ___validationErrors_6;
	// System.Xml.XmlResolver Mono.Xml.DTDObjectModel::resolver
	XmlResolver_t3123 * ___resolver_7;
	// System.Xml.XmlNameTable Mono.Xml.DTDObjectModel::nameTable
	XmlNameTable_t3124 * ___nameTable_8;
	// System.Collections.Hashtable Mono.Xml.DTDObjectModel::externalResources
	Hashtable_t1268 * ___externalResources_9;
	// System.String Mono.Xml.DTDObjectModel::baseURI
	String_t* ___baseURI_10;
	// System.String Mono.Xml.DTDObjectModel::name
	String_t* ___name_11;
	// System.String Mono.Xml.DTDObjectModel::publicId
	String_t* ___publicId_12;
	// System.String Mono.Xml.DTDObjectModel::systemId
	String_t* ___systemId_13;
	// System.String Mono.Xml.DTDObjectModel::intSubset
	String_t* ___intSubset_14;
	// System.Boolean Mono.Xml.DTDObjectModel::intSubsetHasPERef
	bool ___intSubsetHasPERef_15;
	// System.Boolean Mono.Xml.DTDObjectModel::isStandalone
	bool ___isStandalone_16;
	// System.Int32 Mono.Xml.DTDObjectModel::lineNumber
	int32_t ___lineNumber_17;
	// System.Int32 Mono.Xml.DTDObjectModel::linePosition
	int32_t ___linePosition_18;
};
