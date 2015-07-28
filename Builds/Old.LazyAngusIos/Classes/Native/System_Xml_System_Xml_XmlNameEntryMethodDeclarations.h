﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.XmlNameEntry
struct XmlNameEntry_t2036;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Xml.XmlNameEntryCache
struct XmlNameEntryCache_t2048;

// System.Void System.Xml.XmlNameEntry::.ctor(System.String,System.String,System.String)
extern "C" void XmlNameEntry__ctor_m9841 (XmlNameEntry_t2036 * __this, String_t* ___prefix, String_t* ___local, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNameEntry::Update(System.String,System.String,System.String)
extern "C" void XmlNameEntry_Update_m9842 (XmlNameEntry_t2036 * __this, String_t* ___prefix, String_t* ___local, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNameEntry::Equals(System.Object)
extern "C" bool XmlNameEntry_Equals_m9843 (XmlNameEntry_t2036 * __this, Object_t * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlNameEntry::GetHashCode()
extern "C" int32_t XmlNameEntry_GetHashCode_m9844 (XmlNameEntry_t2036 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNameEntry::GetPrefixedName(System.Xml.XmlNameEntryCache)
extern "C" String_t* XmlNameEntry_GetPrefixedName_m9845 (XmlNameEntry_t2036 * __this, XmlNameEntryCache_t2048 * ___owner, const MethodInfo* method) IL2CPP_METHOD_ATTR;