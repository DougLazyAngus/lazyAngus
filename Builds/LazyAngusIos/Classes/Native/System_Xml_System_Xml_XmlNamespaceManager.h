﻿#pragma once
#include <stdint.h>
// System.Xml.XmlNamespaceManager/NsDecl[]
struct NsDeclU5BU5D_t2037;
// System.Xml.XmlNamespaceManager/NsScope[]
struct NsScopeU5BU5D_t2038;
// System.String
struct String_t;
// System.Xml.XmlNameTable
struct XmlNameTable_t1981;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t154;
// System.Object
#include "mscorlib_System_Object.h"
// System.Xml.XmlNamespaceManager
struct  XmlNamespaceManager_t2039  : public Object_t
{
	// System.Xml.XmlNamespaceManager/NsDecl[] System.Xml.XmlNamespaceManager::decls
	NsDeclU5BU5D_t2037* ___decls_0;
	// System.Int32 System.Xml.XmlNamespaceManager::declPos
	int32_t ___declPos_1;
	// System.Xml.XmlNamespaceManager/NsScope[] System.Xml.XmlNamespaceManager::scopes
	NsScopeU5BU5D_t2038* ___scopes_2;
	// System.Int32 System.Xml.XmlNamespaceManager::scopePos
	int32_t ___scopePos_3;
	// System.String System.Xml.XmlNamespaceManager::defaultNamespace
	String_t* ___defaultNamespace_4;
	// System.Int32 System.Xml.XmlNamespaceManager::count
	int32_t ___count_5;
	// System.Xml.XmlNameTable System.Xml.XmlNamespaceManager::nameTable
	XmlNameTable_t1981 * ___nameTable_6;
	// System.Boolean System.Xml.XmlNamespaceManager::internalAtomizedNames
	bool ___internalAtomizedNames_7;
};
struct XmlNamespaceManager_t2039_StaticFields{
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Xml.XmlNamespaceManager::<>f__switch$map28
	Dictionary_2_t154 * ___U3CU3Ef__switchU24map28_8;
};