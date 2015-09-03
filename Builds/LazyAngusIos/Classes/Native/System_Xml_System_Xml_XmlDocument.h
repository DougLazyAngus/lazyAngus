#pragma once
#include <stdint.h>
// System.Type[]
struct TypeU5BU5D_t1220;
// System.Xml.XmlNameTable
struct XmlNameTable_t3458;
// System.String
struct String_t;
// System.Xml.XmlImplementation
struct XmlImplementation_t3510;
// System.Xml.XmlResolver
struct XmlResolver_t3433;
// System.Collections.Hashtable
struct Hashtable_t710;
// System.Xml.XmlNameEntryCache
struct XmlNameEntryCache_t3511;
// System.Xml.XmlLinkedNode
struct XmlLinkedNode_t3499;
// System.Xml.Schema.XmlSchemaSet
struct XmlSchemaSet_t3435;
// System.Xml.Schema.IXmlSchemaInfo
struct IXmlSchemaInfo_t3502;
// System.Xml.XmlNodeChangedEventHandler
struct XmlNodeChangedEventHandler_t3512;
// System.Xml.XmlNode
#include "System_Xml_System_Xml_XmlNode.h"
// System.Xml.XmlDocument
struct  XmlDocument_t691  : public XmlNode_t731
{
	// System.Boolean System.Xml.XmlDocument::optimal_create_element
	bool ___optimal_create_element_6;
	// System.Boolean System.Xml.XmlDocument::optimal_create_attribute
	bool ___optimal_create_attribute_7;
	// System.Xml.XmlNameTable System.Xml.XmlDocument::nameTable
	XmlNameTable_t3458 * ___nameTable_8;
	// System.String System.Xml.XmlDocument::baseURI
	String_t* ___baseURI_9;
	// System.Xml.XmlImplementation System.Xml.XmlDocument::implementation
	XmlImplementation_t3510 * ___implementation_10;
	// System.Boolean System.Xml.XmlDocument::preserveWhitespace
	bool ___preserveWhitespace_11;
	// System.Xml.XmlResolver System.Xml.XmlDocument::resolver
	XmlResolver_t3433 * ___resolver_12;
	// System.Collections.Hashtable System.Xml.XmlDocument::idTable
	Hashtable_t710 * ___idTable_13;
	// System.Xml.XmlNameEntryCache System.Xml.XmlDocument::nameCache
	XmlNameEntryCache_t3511 * ___nameCache_14;
	// System.Xml.XmlLinkedNode System.Xml.XmlDocument::lastLinkedChild
	XmlLinkedNode_t3499 * ___lastLinkedChild_15;
	// System.Xml.Schema.XmlSchemaSet System.Xml.XmlDocument::schemas
	XmlSchemaSet_t3435 * ___schemas_16;
	// System.Xml.Schema.IXmlSchemaInfo System.Xml.XmlDocument::schemaInfo
	Object_t * ___schemaInfo_17;
	// System.Boolean System.Xml.XmlDocument::loadMode
	bool ___loadMode_18;
	// System.Xml.XmlNodeChangedEventHandler System.Xml.XmlDocument::NodeChanged
	XmlNodeChangedEventHandler_t3512 * ___NodeChanged_19;
	// System.Xml.XmlNodeChangedEventHandler System.Xml.XmlDocument::NodeChanging
	XmlNodeChangedEventHandler_t3512 * ___NodeChanging_20;
	// System.Xml.XmlNodeChangedEventHandler System.Xml.XmlDocument::NodeInserted
	XmlNodeChangedEventHandler_t3512 * ___NodeInserted_21;
	// System.Xml.XmlNodeChangedEventHandler System.Xml.XmlDocument::NodeInserting
	XmlNodeChangedEventHandler_t3512 * ___NodeInserting_22;
	// System.Xml.XmlNodeChangedEventHandler System.Xml.XmlDocument::NodeRemoved
	XmlNodeChangedEventHandler_t3512 * ___NodeRemoved_23;
	// System.Xml.XmlNodeChangedEventHandler System.Xml.XmlDocument::NodeRemoving
	XmlNodeChangedEventHandler_t3512 * ___NodeRemoving_24;
};
struct XmlDocument_t691_StaticFields{
	// System.Type[] System.Xml.XmlDocument::optimal_create_types
	TypeU5BU5D_t1220* ___optimal_create_types_5;
};
