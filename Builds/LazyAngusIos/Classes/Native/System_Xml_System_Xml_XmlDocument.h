#pragma once
#include <stdint.h>
// System.Type[]
struct TypeU5BU5D_t1199;
// System.Xml.XmlNameTable
struct XmlNameTable_t1578;
// System.String
struct String_t;
// System.Xml.XmlImplementation
struct XmlImplementation_t1619;
// System.Xml.XmlResolver
struct XmlResolver_t1577;
// System.Collections.Hashtable
struct Hashtable_t1570;
// System.Xml.XmlNameEntryCache
struct XmlNameEntryCache_t1620;
// System.Xml.XmlLinkedNode
struct XmlLinkedNode_t1609;
// System.Xml.Schema.IXmlSchemaInfo
struct IXmlSchemaInfo_t1610;
// System.Xml.XmlNodeChangedEventHandler
struct XmlNodeChangedEventHandler_t1621;
// System.Xml.XmlNode
#include "System_Xml_System_Xml_XmlNode.h"
// System.Xml.XmlDocument
struct  XmlDocument_t576  : public XmlNode_t614
{
	// System.Boolean System.Xml.XmlDocument::optimal_create_element
	bool ___optimal_create_element_6;
	// System.Boolean System.Xml.XmlDocument::optimal_create_attribute
	bool ___optimal_create_attribute_7;
	// System.Xml.XmlNameTable System.Xml.XmlDocument::nameTable
	XmlNameTable_t1578 * ___nameTable_8;
	// System.String System.Xml.XmlDocument::baseURI
	String_t* ___baseURI_9;
	// System.Xml.XmlImplementation System.Xml.XmlDocument::implementation
	XmlImplementation_t1619 * ___implementation_10;
	// System.Boolean System.Xml.XmlDocument::preserveWhitespace
	bool ___preserveWhitespace_11;
	// System.Xml.XmlResolver System.Xml.XmlDocument::resolver
	XmlResolver_t1577 * ___resolver_12;
	// System.Collections.Hashtable System.Xml.XmlDocument::idTable
	Hashtable_t1570 * ___idTable_13;
	// System.Xml.XmlNameEntryCache System.Xml.XmlDocument::nameCache
	XmlNameEntryCache_t1620 * ___nameCache_14;
	// System.Xml.XmlLinkedNode System.Xml.XmlDocument::lastLinkedChild
	XmlLinkedNode_t1609 * ___lastLinkedChild_15;
	// System.Xml.Schema.IXmlSchemaInfo System.Xml.XmlDocument::schemaInfo
	Object_t * ___schemaInfo_16;
	// System.Boolean System.Xml.XmlDocument::loadMode
	bool ___loadMode_17;
	// System.Xml.XmlNodeChangedEventHandler System.Xml.XmlDocument::NodeChanged
	XmlNodeChangedEventHandler_t1621 * ___NodeChanged_18;
	// System.Xml.XmlNodeChangedEventHandler System.Xml.XmlDocument::NodeChanging
	XmlNodeChangedEventHandler_t1621 * ___NodeChanging_19;
	// System.Xml.XmlNodeChangedEventHandler System.Xml.XmlDocument::NodeInserted
	XmlNodeChangedEventHandler_t1621 * ___NodeInserted_20;
	// System.Xml.XmlNodeChangedEventHandler System.Xml.XmlDocument::NodeInserting
	XmlNodeChangedEventHandler_t1621 * ___NodeInserting_21;
	// System.Xml.XmlNodeChangedEventHandler System.Xml.XmlDocument::NodeRemoved
	XmlNodeChangedEventHandler_t1621 * ___NodeRemoved_22;
	// System.Xml.XmlNodeChangedEventHandler System.Xml.XmlDocument::NodeRemoving
	XmlNodeChangedEventHandler_t1621 * ___NodeRemoving_23;
};
struct XmlDocument_t576_StaticFields{
	// System.Type[] System.Xml.XmlDocument::optimal_create_types
	TypeU5BU5D_t1199* ___optimal_create_types_5;
};
