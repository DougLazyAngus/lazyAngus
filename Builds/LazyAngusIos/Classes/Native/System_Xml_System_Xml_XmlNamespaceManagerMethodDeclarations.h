#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.XmlNamespaceManager
struct XmlNamespaceManager_t3194;
// System.String
struct String_t;
// System.Xml.XmlNameTable
struct XmlNameTable_t3135;
// System.Collections.IEnumerator
struct IEnumerator_t48;

// System.Void System.Xml.XmlNamespaceManager::.ctor(System.Xml.XmlNameTable)
extern "C" void XmlNamespaceManager__ctor_m10766 (XmlNamespaceManager_t3194 * __this, XmlNameTable_t3135 * ___nameTable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNamespaceManager::InitData()
extern "C" void XmlNamespaceManager_InitData_m10767 (XmlNamespaceManager_t3194 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNamespaceManager::GrowDecls()
extern "C" void XmlNamespaceManager_GrowDecls_m10768 (XmlNamespaceManager_t3194 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNamespaceManager::GrowScopes()
extern "C" void XmlNamespaceManager_GrowScopes_m10769 (XmlNamespaceManager_t3194 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNamespaceManager::get_DefaultNamespace()
extern "C" String_t* XmlNamespaceManager_get_DefaultNamespace_m10770 (XmlNamespaceManager_t3194 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNameTable System.Xml.XmlNamespaceManager::get_NameTable()
extern "C" XmlNameTable_t3135 * XmlNamespaceManager_get_NameTable_m10771 (XmlNamespaceManager_t3194 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNamespaceManager::AddNamespace(System.String,System.String)
extern "C" void XmlNamespaceManager_AddNamespace_m10772 (XmlNamespaceManager_t3194 * __this, String_t* ___prefix, String_t* ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNamespaceManager::AddNamespace(System.String,System.String,System.Boolean)
extern "C" void XmlNamespaceManager_AddNamespace_m10773 (XmlNamespaceManager_t3194 * __this, String_t* ___prefix, String_t* ___uri, bool ___atomizedNames, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNamespaceManager::IsValidDeclaration(System.String,System.String,System.Boolean)
extern "C" String_t* XmlNamespaceManager_IsValidDeclaration_m10774 (Object_t * __this /* static, unused */, String_t* ___prefix, String_t* ___uri, bool ___throwException, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Xml.XmlNamespaceManager::GetEnumerator()
extern "C" Object_t * XmlNamespaceManager_GetEnumerator_m10775 (XmlNamespaceManager_t3194 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNamespaceManager::LookupNamespace(System.String)
extern "C" String_t* XmlNamespaceManager_LookupNamespace_m10776 (XmlNamespaceManager_t3194 * __this, String_t* ___prefix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNamespaceManager::LookupNamespace(System.String,System.Boolean)
extern "C" String_t* XmlNamespaceManager_LookupNamespace_m10777 (XmlNamespaceManager_t3194 * __this, String_t* ___prefix, bool ___atomizedNames, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNamespaceManager::CompareString(System.String,System.String,System.Boolean)
extern "C" bool XmlNamespaceManager_CompareString_m10778 (XmlNamespaceManager_t3194 * __this, String_t* ___s1, String_t* ___s2, bool ___atomizedNames, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNamespaceManager::LookupPrefixExclusive(System.String,System.Boolean)
extern "C" String_t* XmlNamespaceManager_LookupPrefixExclusive_m10779 (XmlNamespaceManager_t3194 * __this, String_t* ___uri, bool ___atomizedName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNamespaceManager::LookupPrefixCore(System.String,System.Boolean,System.Boolean)
extern "C" String_t* XmlNamespaceManager_LookupPrefixCore_m10780 (XmlNamespaceManager_t3194 * __this, String_t* ___uri, bool ___atomizedName, bool ___excludeOverriden, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNamespaceManager::IsOverriden(System.Int32)
extern "C" bool XmlNamespaceManager_IsOverriden_m10781 (XmlNamespaceManager_t3194 * __this, int32_t ___idx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNamespaceManager::PopScope()
extern "C" bool XmlNamespaceManager_PopScope_m10782 (XmlNamespaceManager_t3194 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNamespaceManager::PushScope()
extern "C" void XmlNamespaceManager_PushScope_m10783 (XmlNamespaceManager_t3194 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNamespaceManager::RemoveNamespace(System.String,System.String)
extern "C" void XmlNamespaceManager_RemoveNamespace_m10784 (XmlNamespaceManager_t3194 * __this, String_t* ___prefix, String_t* ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNamespaceManager::RemoveNamespace(System.String,System.String,System.Boolean)
extern "C" void XmlNamespaceManager_RemoveNamespace_m10785 (XmlNamespaceManager_t3194 * __this, String_t* ___prefix, String_t* ___uri, bool ___atomizedNames, const MethodInfo* method) IL2CPP_METHOD_ATTR;
