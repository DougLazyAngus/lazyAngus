#pragma once
#include <stdint.h>
// System.Type[]
struct TypeU5BU5D_t1150;
// System.Xml.XmlNameTable
struct XmlNameTable_t3133;
// System.String
struct String_t;
// System.Xml.XmlImplementation
struct XmlImplementation_t3174;
// System.Xml.XmlResolver
struct XmlResolver_t3132;
// System.Collections.Hashtable
struct Hashtable_t1276;
// System.Xml.XmlNameEntryCache
struct XmlNameEntryCache_t3175;
// System.Xml.XmlLinkedNode
struct XmlLinkedNode_t3164;
// System.Xml.Schema.IXmlSchemaInfo
struct IXmlSchemaInfo_t3165;
// System.Xml.XmlNodeChangedEventHandler
struct XmlNodeChangedEventHandler_t3176;
// System.Xml.XmlNode
#include "System_Xml_System_Xml_XmlNode.h"
// System.Xml.XmlDocument
struct  XmlDocument_t631  : public XmlNode_t668
{
	// System.Boolean System.Xml.XmlDocument::optimal_create_element
	bool ___optimal_create_element_6;
	// System.Boolean System.Xml.XmlDocument::optimal_create_attribute
	bool ___optimal_create_attribute_7;
	// System.Xml.XmlNameTable System.Xml.XmlDocument::nameTable
	XmlNameTable_t3133 * ___nameTable_8;
	// System.String System.Xml.XmlDocument::baseURI
	String_t* ___baseURI_9;
	// System.Xml.XmlImplementation System.Xml.XmlDocument::implementation
	XmlImplementation_t3174 * ___implementation_10;
	// System.Boolean System.Xml.XmlDocument::preserveWhitespace
	bool ___preserveWhitespace_11;
	// System.Xml.XmlResolver System.Xml.XmlDocument::resolver
	XmlResolver_t3132 * ___resolver_12;
	// System.Collections.Hashtable System.Xml.XmlDocument::idTable
	Hashtable_t1276 * ___idTable_13;
	// System.Xml.XmlNameEntryCache System.Xml.XmlDocument::nameCache
	XmlNameEntryCache_t3175 * ___nameCache_14;
	// System.Xml.XmlLinkedNode System.Xml.XmlDocument::lastLinkedChild
	XmlLinkedNode_t3164 * ___lastLinkedChild_15;
	// System.Xml.Schema.IXmlSchemaInfo System.Xml.XmlDocument::schemaInfo
	Object_t * ___schemaInfo_16;
	// System.Boolean System.Xml.XmlDocument::loadMode
	bool ___loadMode_17;
	// System.Xml.XmlNodeChangedEventHandler System.Xml.XmlDocument::NodeChanged
	XmlNodeChangedEventHandler_t3176 * ___NodeChanged_18;
	// System.Xml.XmlNodeChangedEventHandler System.Xml.XmlDocument::NodeChanging
	XmlNodeChangedEventHandler_t3176 * ___NodeChanging_19;
	// System.Xml.XmlNodeChangedEventHandler System.Xml.XmlDocument::NodeInserted
	XmlNodeChangedEventHandler_t3176 * ___NodeInserted_20;
	// System.Xml.XmlNodeChangedEventHandler System.Xml.XmlDocument::NodeInserting
	XmlNodeChangedEventHandler_t3176 * ___NodeInserting_21;
	// System.Xml.XmlNodeChangedEventHandler System.Xml.XmlDocument::NodeRemoved
	XmlNodeChangedEventHandler_t3176 * ___NodeRemoved_22;
	// System.Xml.XmlNodeChangedEventHandler System.Xml.XmlDocument::NodeRemoving
	XmlNodeChangedEventHandler_t3176 * ___NodeRemoving_23;
};
struct XmlDocument_t631_StaticFields{
	// System.Type[] System.Xml.XmlDocument::optimal_create_types
	TypeU5BU5D_t1150* ___optimal_create_types_5;
};
