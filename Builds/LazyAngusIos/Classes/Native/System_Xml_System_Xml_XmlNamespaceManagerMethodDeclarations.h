#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.XmlNamespaceManager
struct XmlNamespaceManager_t3496;
// System.String
struct String_t;
// System.Xml.XmlNameTable
struct XmlNameTable_t3469;
// System.Collections.IEnumerator
struct IEnumerator_t48;

// System.Void System.Xml.XmlNamespaceManager::.ctor(System.Xml.XmlNameTable)
extern "C" void XmlNamespaceManager__ctor_m13147 (XmlNamespaceManager_t3496 * __this, XmlNameTable_t3469 * ___nameTable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNamespaceManager::InitData()
extern "C" void XmlNamespaceManager_InitData_m13148 (XmlNamespaceManager_t3496 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNamespaceManager::GrowDecls()
extern "C" void XmlNamespaceManager_GrowDecls_m13149 (XmlNamespaceManager_t3496 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNamespaceManager::GrowScopes()
extern "C" void XmlNamespaceManager_GrowScopes_m13150 (XmlNamespaceManager_t3496 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNamespaceManager::get_DefaultNamespace()
extern "C" String_t* XmlNamespaceManager_get_DefaultNamespace_m13151 (XmlNamespaceManager_t3496 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNameTable System.Xml.XmlNamespaceManager::get_NameTable()
extern "C" XmlNameTable_t3469 * XmlNamespaceManager_get_NameTable_m13152 (XmlNamespaceManager_t3496 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNamespaceManager::AddNamespace(System.String,System.String)
extern "C" void XmlNamespaceManager_AddNamespace_m13153 (XmlNamespaceManager_t3496 * __this, String_t* ___prefix, String_t* ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNamespaceManager::AddNamespace(System.String,System.String,System.Boolean)
extern "C" void XmlNamespaceManager_AddNamespace_m13154 (XmlNamespaceManager_t3496 * __this, String_t* ___prefix, String_t* ___uri, bool ___atomizedNames, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNamespaceManager::IsValidDeclaration(System.String,System.String,System.Boolean)
extern "C" String_t* XmlNamespaceManager_IsValidDeclaration_m13155 (Object_t * __this /* static, unused */, String_t* ___prefix, String_t* ___uri, bool ___throwException, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Xml.XmlNamespaceManager::GetEnumerator()
extern "C" Object_t * XmlNamespaceManager_GetEnumerator_m13156 (XmlNamespaceManager_t3496 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNamespaceManager::LookupNamespace(System.String)
extern "C" String_t* XmlNamespaceManager_LookupNamespace_m13157 (XmlNamespaceManager_t3496 * __this, String_t* ___prefix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNamespaceManager::LookupNamespace(System.String,System.Boolean)
extern "C" String_t* XmlNamespaceManager_LookupNamespace_m13158 (XmlNamespaceManager_t3496 * __this, String_t* ___prefix, bool ___atomizedNames, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNamespaceManager::CompareString(System.String,System.String,System.Boolean)
extern "C" bool XmlNamespaceManager_CompareString_m13159 (XmlNamespaceManager_t3496 * __this, String_t* ___s1, String_t* ___s2, bool ___atomizedNames, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNamespaceManager::LookupPrefix(System.String,System.Boolean)
extern "C" String_t* XmlNamespaceManager_LookupPrefix_m13160 (XmlNamespaceManager_t3496 * __this, String_t* ___uri, bool ___atomizedName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNamespaceManager::LookupPrefixExclusive(System.String,System.Boolean)
extern "C" String_t* XmlNamespaceManager_LookupPrefixExclusive_m13161 (XmlNamespaceManager_t3496 * __this, String_t* ___uri, bool ___atomizedName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNamespaceManager::LookupPrefixCore(System.String,System.Boolean,System.Boolean)
extern "C" String_t* XmlNamespaceManager_LookupPrefixCore_m13162 (XmlNamespaceManager_t3496 * __this, String_t* ___uri, bool ___atomizedName, bool ___excludeOverriden, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNamespaceManager::IsOverriden(System.Int32)
extern "C" bool XmlNamespaceManager_IsOverriden_m13163 (XmlNamespaceManager_t3496 * __this, int32_t ___idx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNamespaceManager::PopScope()
extern "C" bool XmlNamespaceManager_PopScope_m13164 (XmlNamespaceManager_t3496 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNamespaceManager::PushScope()
extern "C" void XmlNamespaceManager_PushScope_m13165 (XmlNamespaceManager_t3496 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNamespaceManager::RemoveNamespace(System.String,System.String)
extern "C" void XmlNamespaceManager_RemoveNamespace_m13166 (XmlNamespaceManager_t3496 * __this, String_t* ___prefix, String_t* ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNamespaceManager::RemoveNamespace(System.String,System.String,System.Boolean)
extern "C" void XmlNamespaceManager_RemoveNamespace_m13167 (XmlNamespaceManager_t3496 * __this, String_t* ___prefix, String_t* ___uri, bool ___atomizedNames, const MethodInfo* method) IL2CPP_METHOD_ATTR;
