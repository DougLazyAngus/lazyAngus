﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.XmlNameEntryCache
struct XmlNameEntryCache_t1621;
// System.Xml.XmlNameTable
struct XmlNameTable_t1579;
// System.String
struct String_t;
// System.Xml.XmlNameEntry
struct XmlNameEntry_t1609;

// System.Void System.Xml.XmlNameEntryCache::.ctor(System.Xml.XmlNameTable)
extern "C" void XmlNameEntryCache__ctor_m8061 (XmlNameEntryCache_t1621 * __this, XmlNameTable_t1579 * ___nameTable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNameEntryCache::GetAtomizedPrefixedName(System.String,System.String)
extern "C" String_t* XmlNameEntryCache_GetAtomizedPrefixedName_m8062 (XmlNameEntryCache_t1621 * __this, String_t* ___prefix, String_t* ___local, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNameEntry System.Xml.XmlNameEntryCache::Add(System.String,System.String,System.String,System.Boolean)
extern "C" XmlNameEntry_t1609 * XmlNameEntryCache_Add_m8063 (XmlNameEntryCache_t1621 * __this, String_t* ___prefix, String_t* ___local, String_t* ___ns, bool ___atomic, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNameEntry System.Xml.XmlNameEntryCache::GetInternal(System.String,System.String,System.String,System.Boolean)
extern "C" XmlNameEntry_t1609 * XmlNameEntryCache_GetInternal_m8064 (XmlNameEntryCache_t1621 * __this, String_t* ___prefix, String_t* ___local, String_t* ___ns, bool ___atomic, const MethodInfo* method) IL2CPP_METHOD_ATTR;
