#pragma once
#include <stdint.h>
// Mono.Xml.DTDAutomataFactory
struct DTDAutomataFactory_t3444;
// Mono.Xml.DTDElementAutomata
struct DTDElementAutomata_t3446;
// Mono.Xml.DTDEmptyAutomata
struct DTDEmptyAutomata_t3450;
// Mono.Xml.DTDAnyAutomata
struct DTDAnyAutomata_t3451;
// Mono.Xml.DTDInvalidAutomata
struct DTDInvalidAutomata_t3452;
// Mono.Xml.DTDElementDeclarationCollection
struct DTDElementDeclarationCollection_t3453;
// Mono.Xml.DTDAttListDeclarationCollection
struct DTDAttListDeclarationCollection_t3454;
// Mono.Xml.DTDParameterEntityDeclarationCollection
struct DTDParameterEntityDeclarationCollection_t3455;
// Mono.Xml.DTDEntityDeclarationCollection
struct DTDEntityDeclarationCollection_t3456;
// Mono.Xml.DTDNotationDeclarationCollection
struct DTDNotationDeclarationCollection_t3457;
// System.Collections.ArrayList
struct ArrayList_t712;
// System.Xml.XmlResolver
struct XmlResolver_t3433;
// System.Xml.XmlNameTable
struct XmlNameTable_t3458;
// System.Collections.Hashtable
struct Hashtable_t710;
// System.String
struct String_t;
// System.Object
#include "mscorlib_System_Object.h"
// Mono.Xml.DTDObjectModel
struct  DTDObjectModel_t3443  : public Object_t
{
	// Mono.Xml.DTDAutomataFactory Mono.Xml.DTDObjectModel::factory
	DTDAutomataFactory_t3444 * ___factory_0;
	// Mono.Xml.DTDElementAutomata Mono.Xml.DTDObjectModel::rootAutomata
	DTDElementAutomata_t3446 * ___rootAutomata_1;
	// Mono.Xml.DTDEmptyAutomata Mono.Xml.DTDObjectModel::emptyAutomata
	DTDEmptyAutomata_t3450 * ___emptyAutomata_2;
	// Mono.Xml.DTDAnyAutomata Mono.Xml.DTDObjectModel::anyAutomata
	DTDAnyAutomata_t3451 * ___anyAutomata_3;
	// Mono.Xml.DTDInvalidAutomata Mono.Xml.DTDObjectModel::invalidAutomata
	DTDInvalidAutomata_t3452 * ___invalidAutomata_4;
	// Mono.Xml.DTDElementDeclarationCollection Mono.Xml.DTDObjectModel::elementDecls
	DTDElementDeclarationCollection_t3453 * ___elementDecls_5;
	// Mono.Xml.DTDAttListDeclarationCollection Mono.Xml.DTDObjectModel::attListDecls
	DTDAttListDeclarationCollection_t3454 * ___attListDecls_6;
	// Mono.Xml.DTDParameterEntityDeclarationCollection Mono.Xml.DTDObjectModel::peDecls
	DTDParameterEntityDeclarationCollection_t3455 * ___peDecls_7;
	// Mono.Xml.DTDEntityDeclarationCollection Mono.Xml.DTDObjectModel::entityDecls
	DTDEntityDeclarationCollection_t3456 * ___entityDecls_8;
	// Mono.Xml.DTDNotationDeclarationCollection Mono.Xml.DTDObjectModel::notationDecls
	DTDNotationDeclarationCollection_t3457 * ___notationDecls_9;
	// System.Collections.ArrayList Mono.Xml.DTDObjectModel::validationErrors
	ArrayList_t712 * ___validationErrors_10;
	// System.Xml.XmlResolver Mono.Xml.DTDObjectModel::resolver
	XmlResolver_t3433 * ___resolver_11;
	// System.Xml.XmlNameTable Mono.Xml.DTDObjectModel::nameTable
	XmlNameTable_t3458 * ___nameTable_12;
	// System.Collections.Hashtable Mono.Xml.DTDObjectModel::externalResources
	Hashtable_t710 * ___externalResources_13;
	// System.String Mono.Xml.DTDObjectModel::baseURI
	String_t* ___baseURI_14;
	// System.String Mono.Xml.DTDObjectModel::name
	String_t* ___name_15;
	// System.String Mono.Xml.DTDObjectModel::publicId
	String_t* ___publicId_16;
	// System.String Mono.Xml.DTDObjectModel::systemId
	String_t* ___systemId_17;
	// System.String Mono.Xml.DTDObjectModel::intSubset
	String_t* ___intSubset_18;
	// System.Boolean Mono.Xml.DTDObjectModel::intSubsetHasPERef
	bool ___intSubsetHasPERef_19;
	// System.Boolean Mono.Xml.DTDObjectModel::isStandalone
	bool ___isStandalone_20;
	// System.Int32 Mono.Xml.DTDObjectModel::lineNumber
	int32_t ___lineNumber_21;
	// System.Int32 Mono.Xml.DTDObjectModel::linePosition
	int32_t ___linePosition_22;
};
