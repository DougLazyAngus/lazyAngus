#pragma once
#include <stdint.h>
// System.Xml.Schema.XmlSchemaAttribute[]
struct XmlSchemaAttributeU5BU5D_t3432;
// System.Xml.XmlReader
struct XmlReader_t3368;
// System.Xml.XmlResolver
struct XmlResolver_t3433;
// Mono.Xml.IHasXmlSchemaInfo
struct IHasXmlSchemaInfo_t3434;
// System.Xml.IXmlLineInfo
struct IXmlLineInfo_t3373;
// System.Xml.Schema.XmlSchemaSet
struct XmlSchemaSet_t3435;
// Mono.Xml.Schema.XsdIDManager
struct XsdIDManager_t3436;
// System.Collections.ArrayList
struct ArrayList_t712;
// Mono.Xml.Schema.XsdParticleStateManager
struct XsdParticleStateManager_t3418;
// System.Text.StringBuilder
struct StringBuilder_t261;
// System.Object
struct Object_t;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t3437;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t223;
// System.Xml.XmlReader
#include "System_Xml_System_Xml_XmlReader.h"
// System.Xml.ValidationType
#include "System_Xml_System_Xml_ValidationType.h"
// Mono.Xml.Schema.XsdValidatingReader
struct  XsdValidatingReader_t3438  : public XmlReader_t3368
{
	// System.Xml.XmlReader Mono.Xml.Schema.XsdValidatingReader::reader
	XmlReader_t3368 * ___reader_3;
	// System.Xml.XmlResolver Mono.Xml.Schema.XsdValidatingReader::resolver
	XmlResolver_t3433 * ___resolver_4;
	// Mono.Xml.IHasXmlSchemaInfo Mono.Xml.Schema.XsdValidatingReader::sourceReaderSchemaInfo
	Object_t * ___sourceReaderSchemaInfo_5;
	// System.Xml.IXmlLineInfo Mono.Xml.Schema.XsdValidatingReader::readerLineInfo
	Object_t * ___readerLineInfo_6;
	// System.Xml.ValidationType Mono.Xml.Schema.XsdValidatingReader::validationType
	int32_t ___validationType_7;
	// System.Xml.Schema.XmlSchemaSet Mono.Xml.Schema.XsdValidatingReader::schemas
	XmlSchemaSet_t3435 * ___schemas_8;
	// System.Boolean Mono.Xml.Schema.XsdValidatingReader::namespaces
	bool ___namespaces_9;
	// System.Boolean Mono.Xml.Schema.XsdValidatingReader::validationStarted
	bool ___validationStarted_10;
	// System.Boolean Mono.Xml.Schema.XsdValidatingReader::checkIdentity
	bool ___checkIdentity_11;
	// Mono.Xml.Schema.XsdIDManager Mono.Xml.Schema.XsdValidatingReader::idManager
	XsdIDManager_t3436 * ___idManager_12;
	// System.Boolean Mono.Xml.Schema.XsdValidatingReader::checkKeyConstraints
	bool ___checkKeyConstraints_13;
	// System.Collections.ArrayList Mono.Xml.Schema.XsdValidatingReader::keyTables
	ArrayList_t712 * ___keyTables_14;
	// System.Collections.ArrayList Mono.Xml.Schema.XsdValidatingReader::currentKeyFieldConsumers
	ArrayList_t712 * ___currentKeyFieldConsumers_15;
	// System.Collections.ArrayList Mono.Xml.Schema.XsdValidatingReader::tmpKeyrefPool
	ArrayList_t712 * ___tmpKeyrefPool_16;
	// System.Collections.ArrayList Mono.Xml.Schema.XsdValidatingReader::elementQNameStack
	ArrayList_t712 * ___elementQNameStack_17;
	// Mono.Xml.Schema.XsdParticleStateManager Mono.Xml.Schema.XsdValidatingReader::state
	XsdParticleStateManager_t3418 * ___state_18;
	// System.Int32 Mono.Xml.Schema.XsdValidatingReader::skipValidationDepth
	int32_t ___skipValidationDepth_19;
	// System.Int32 Mono.Xml.Schema.XsdValidatingReader::xsiNilDepth
	int32_t ___xsiNilDepth_20;
	// System.Text.StringBuilder Mono.Xml.Schema.XsdValidatingReader::storedCharacters
	StringBuilder_t261 * ___storedCharacters_21;
	// System.Boolean Mono.Xml.Schema.XsdValidatingReader::shouldValidateCharacters
	bool ___shouldValidateCharacters_22;
	// System.Xml.Schema.XmlSchemaAttribute[] Mono.Xml.Schema.XsdValidatingReader::defaultAttributes
	XmlSchemaAttributeU5BU5D_t3432* ___defaultAttributes_23;
	// System.Int32 Mono.Xml.Schema.XsdValidatingReader::currentDefaultAttribute
	int32_t ___currentDefaultAttribute_24;
	// System.Collections.ArrayList Mono.Xml.Schema.XsdValidatingReader::defaultAttributesCache
	ArrayList_t712 * ___defaultAttributesCache_25;
	// System.Boolean Mono.Xml.Schema.XsdValidatingReader::defaultAttributeConsumed
	bool ___defaultAttributeConsumed_26;
	// System.Object Mono.Xml.Schema.XsdValidatingReader::currentAttrType
	Object_t * ___currentAttrType_27;
	// System.Xml.Schema.ValidationEventHandler Mono.Xml.Schema.XsdValidatingReader::ValidationEventHandler
	ValidationEventHandler_t3437 * ___ValidationEventHandler_28;
};
struct XsdValidatingReader_t3438_StaticFields{
	// System.Xml.Schema.XmlSchemaAttribute[] Mono.Xml.Schema.XsdValidatingReader::emptyAttributeArray
	XmlSchemaAttributeU5BU5D_t3432* ___emptyAttributeArray_2;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Xml.Schema.XsdValidatingReader::<>f__switch$map3
	Dictionary_2_t223 * ___U3CU3Ef__switchU24map3_29;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Xml.Schema.XsdValidatingReader::<>f__switch$map4
	Dictionary_2_t223 * ___U3CU3Ef__switchU24map4_30;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Xml.Schema.XsdValidatingReader::<>f__switch$map5
	Dictionary_2_t223 * ___U3CU3Ef__switchU24map5_31;
};
