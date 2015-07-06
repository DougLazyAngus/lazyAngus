﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.XmlNameEntry
struct XmlNameEntry_t2011;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Xml.XmlNameEntryCache
struct XmlNameEntryCache_t2023;

// System.Void System.Xml.XmlNameEntry::.ctor(System.String,System.String,System.String)
extern "C" void XmlNameEntry__ctor_m9661 (XmlNameEntry_t2011 * __this, String_t* ___prefix, String_t* ___local, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNameEntry::Update(System.String,System.String,System.String)
extern "C" void XmlNameEntry_Update_m9662 (XmlNameEntry_t2011 * __this, String_t* ___prefix, String_t* ___local, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNameEntry::Equals(System.Object)
extern "C" bool XmlNameEntry_Equals_m9663 (XmlNameEntry_t2011 * __this, Object_t * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlNameEntry::GetHashCode()
extern "C" int32_t XmlNameEntry_GetHashCode_m9664 (XmlNameEntry_t2011 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNameEntry::GetPrefixedName(System.Xml.XmlNameEntryCache)
extern "C" String_t* XmlNameEntry_GetPrefixedName_m9665 (XmlNameEntry_t2011 * __this, XmlNameEntryCache_t2023 * ___owner, const MethodInfo* method) IL2CPP_METHOD_ATTR;
