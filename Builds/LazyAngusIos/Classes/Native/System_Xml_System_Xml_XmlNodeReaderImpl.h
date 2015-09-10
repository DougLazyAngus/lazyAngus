#pragma once
#include <stdint.h>
// System.Xml.XmlDocument
struct XmlDocument_t702;
// System.Xml.XmlNode
struct XmlNode_t742;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t223;
// System.Xml.XmlReader
#include "System_Xml_System_Xml_XmlReader.h"
// System.Xml.ReadState
#include "System_Xml_System_Xml_ReadState.h"
// System.Xml.XmlNodeReaderImpl
struct  XmlNodeReaderImpl_t3540  : public XmlReader_t3379
{
	// System.Xml.XmlDocument System.Xml.XmlNodeReaderImpl::document
	XmlDocument_t702 * ___document_2;
	// System.Xml.XmlNode System.Xml.XmlNodeReaderImpl::startNode
	XmlNode_t742 * ___startNode_3;
	// System.Xml.XmlNode System.Xml.XmlNodeReaderImpl::current
	XmlNode_t742 * ___current_4;
	// System.Xml.XmlNode System.Xml.XmlNodeReaderImpl::ownerLinkedNode
	XmlNode_t742 * ___ownerLinkedNode_5;
	// System.Xml.ReadState System.Xml.XmlNodeReaderImpl::state
	int32_t ___state_6;
	// System.Int32 System.Xml.XmlNodeReaderImpl::depth
	int32_t ___depth_7;
	// System.Boolean System.Xml.XmlNodeReaderImpl::isEndElement
	bool ___isEndElement_8;
	// System.Boolean System.Xml.XmlNodeReaderImpl::ignoreStartNode
	bool ___ignoreStartNode_9;
};
struct XmlNodeReaderImpl_t3540_StaticFields{
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Xml.XmlNodeReaderImpl::<>f__switch$map34
	Dictionary_2_t223 * ___U3CU3Ef__switchU24map34_10;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Xml.XmlNodeReaderImpl::<>f__switch$map35
	Dictionary_2_t223 * ___U3CU3Ef__switchU24map35_11;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Xml.XmlNodeReaderImpl::<>f__switch$map36
	Dictionary_2_t223 * ___U3CU3Ef__switchU24map36_12;
};
