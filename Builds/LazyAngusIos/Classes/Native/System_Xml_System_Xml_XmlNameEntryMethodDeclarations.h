#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.XmlNameEntry
struct XmlNameEntry_t3505;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Xml.XmlNameEntryCache
struct XmlNameEntryCache_t3515;

// System.Void System.Xml.XmlNameEntry::.ctor(System.String,System.String,System.String)
extern "C" void XmlNameEntry__ctor_m13068 (XmlNameEntry_t3505 * __this, String_t* ___prefix, String_t* ___local, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNameEntry::Update(System.String,System.String,System.String)
extern "C" void XmlNameEntry_Update_m13069 (XmlNameEntry_t3505 * __this, String_t* ___prefix, String_t* ___local, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNameEntry::Equals(System.Object)
extern "C" bool XmlNameEntry_Equals_m13070 (XmlNameEntry_t3505 * __this, Object_t * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlNameEntry::GetHashCode()
extern "C" int32_t XmlNameEntry_GetHashCode_m13071 (XmlNameEntry_t3505 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNameEntry::GetPrefixedName(System.Xml.XmlNameEntryCache)
extern "C" String_t* XmlNameEntry_GetPrefixedName_m13072 (XmlNameEntry_t3505 * __this, XmlNameEntryCache_t3515 * ___owner, const MethodInfo* method) IL2CPP_METHOD_ATTR;
