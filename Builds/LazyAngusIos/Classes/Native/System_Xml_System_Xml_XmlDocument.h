#pragma once
#include <stdint.h>
// System.Type[]
struct TypeU5BU5D_t1142;
// System.Xml.XmlNameTable
struct XmlNameTable_t3124;
// System.String
struct String_t;
// System.Xml.XmlImplementation
struct XmlImplementation_t3165;
// System.Xml.XmlResolver
struct XmlResolver_t3123;
// System.Collections.Hashtable
struct Hashtable_t1268;
// System.Xml.XmlNameEntryCache
struct XmlNameEntryCache_t3166;
// System.Xml.XmlLinkedNode
struct XmlLinkedNode_t3155;
// System.Xml.Schema.IXmlSchemaInfo
struct IXmlSchemaInfo_t3156;
// System.Xml.XmlNodeChangedEventHandler
struct XmlNodeChangedEventHandler_t3167;
// System.Xml.XmlNode
#include "System_Xml_System_Xml_XmlNode.h"
// System.Xml.XmlDocument
struct  XmlDocument_t622  : public XmlNode_t660
{
	// System.Boolean System.Xml.XmlDocument::optimal_create_element
	bool ___optimal_create_element_6;
	// System.Boolean System.Xml.XmlDocument::optimal_create_attribute
	bool ___optimal_create_attribute_7;
	// System.Xml.XmlNameTable System.Xml.XmlDocument::nameTable
	XmlNameTable_t3124 * ___nameTable_8;
	// System.String System.Xml.XmlDocument::baseURI
	String_t* ___baseURI_9;
	// System.Xml.XmlImplementation System.Xml.XmlDocument::implementation
	XmlImplementation_t3165 * ___implementation_10;
	// System.Boolean System.Xml.XmlDocument::preserveWhitespace
	bool ___preserveWhitespace_11;
	// System.Xml.XmlResolver System.Xml.XmlDocument::resolver
	XmlResolver_t3123 * ___resolver_12;
	// System.Collections.Hashtable System.Xml.XmlDocument::idTable
	Hashtable_t1268 * ___idTable_13;
	// System.Xml.XmlNameEntryCache System.Xml.XmlDocument::nameCache
	XmlNameEntryCache_t3166 * ___nameCache_14;
	// System.Xml.XmlLinkedNode System.Xml.XmlDocument::lastLinkedChild
	XmlLinkedNode_t3155 * ___lastLinkedChild_15;
	// System.Xml.Schema.IXmlSchemaInfo System.Xml.XmlDocument::schemaInfo
	Object_t * ___schemaInfo_16;
	// System.Boolean System.Xml.XmlDocument::loadMode
	bool ___loadMode_17;
	// System.Xml.XmlNodeChangedEventHandler System.Xml.XmlDocument::NodeChanged
	XmlNodeChangedEventHandler_t3167 * ___NodeChanged_18;
	// System.Xml.XmlNodeChangedEventHandler System.Xml.XmlDocument::NodeChanging
	XmlNodeChangedEventHandler_t3167 * ___NodeChanging_19;
	// System.Xml.XmlNodeChangedEventHandler System.Xml.XmlDocument::NodeInserted
	XmlNodeChangedEventHandler_t3167 * ___NodeInserted_20;
	// System.Xml.XmlNodeChangedEventHandler System.Xml.XmlDocument::NodeInserting
	XmlNodeChangedEventHandler_t3167 * ___NodeInserting_21;
	// System.Xml.XmlNodeChangedEventHandler System.Xml.XmlDocument::NodeRemoved
	XmlNodeChangedEventHandler_t3167 * ___NodeRemoved_22;
	// System.Xml.XmlNodeChangedEventHandler System.Xml.XmlDocument::NodeRemoving
	XmlNodeChangedEventHandler_t3167 * ___NodeRemoving_23;
};
struct XmlDocument_t622_StaticFields{
	// System.Type[] System.Xml.XmlDocument::optimal_create_types
	TypeU5BU5D_t1142* ___optimal_create_types_5;
};
