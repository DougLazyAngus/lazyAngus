#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.XmlNameEntryCache
struct XmlNameEntryCache_t2023;
// System.Xml.XmlNameTable
struct XmlNameTable_t1981;
// System.String
struct String_t;
// System.Xml.XmlNameEntry
struct XmlNameEntry_t2011;

// System.Void System.Xml.XmlNameEntryCache::.ctor(System.Xml.XmlNameTable)
extern "C" void XmlNameEntryCache__ctor_m9666 (XmlNameEntryCache_t2023 * __this, XmlNameTable_t1981 * ___nameTable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNameEntryCache::GetAtomizedPrefixedName(System.String,System.String)
extern "C" String_t* XmlNameEntryCache_GetAtomizedPrefixedName_m9667 (XmlNameEntryCache_t2023 * __this, String_t* ___prefix, String_t* ___local, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNameEntry System.Xml.XmlNameEntryCache::Add(System.String,System.String,System.String,System.Boolean)
extern "C" XmlNameEntry_t2011 * XmlNameEntryCache_Add_m9668 (XmlNameEntryCache_t2023 * __this, String_t* ___prefix, String_t* ___local, String_t* ___ns, bool ___atomic, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNameEntry System.Xml.XmlNameEntryCache::GetInternal(System.String,System.String,System.String,System.Boolean)
extern "C" XmlNameEntry_t2011 * XmlNameEntryCache_GetInternal_m9669 (XmlNameEntryCache_t2023 * __this, String_t* ___prefix, String_t* ___local, String_t* ___ns, bool ___atomic, const MethodInfo* method) IL2CPP_METHOD_ATTR;
