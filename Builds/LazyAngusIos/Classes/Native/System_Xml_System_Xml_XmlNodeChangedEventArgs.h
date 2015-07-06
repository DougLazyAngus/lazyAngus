﻿#pragma once
#include <stdint.h>
// System.Xml.XmlNode
struct XmlNode_t543;
// System.String
struct String_t;
// System.EventArgs
#include "mscorlib_System_EventArgs.h"
// System.Xml.XmlNodeChangedAction
#include "System_Xml_System_Xml_XmlNodeChangedAction.h"
// System.Xml.XmlNodeChangedEventArgs
struct  XmlNodeChangedEventArgs_t2044  : public EventArgs_t1689
{
	// System.Xml.XmlNode System.Xml.XmlNodeChangedEventArgs::_oldParent
	XmlNode_t543 * ____oldParent_1;
	// System.Xml.XmlNode System.Xml.XmlNodeChangedEventArgs::_newParent
	XmlNode_t543 * ____newParent_2;
	// System.Xml.XmlNodeChangedAction System.Xml.XmlNodeChangedEventArgs::_action
	int32_t ____action_3;
	// System.Xml.XmlNode System.Xml.XmlNodeChangedEventArgs::_node
	XmlNode_t543 * ____node_4;
	// System.String System.Xml.XmlNodeChangedEventArgs::_oldValue
	String_t* ____oldValue_5;
	// System.String System.Xml.XmlNodeChangedEventArgs::_newValue
	String_t* ____newValue_6;
};
