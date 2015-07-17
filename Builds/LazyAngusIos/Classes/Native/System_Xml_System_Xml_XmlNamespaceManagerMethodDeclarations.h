#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.XmlNamespaceManager
struct XmlNamespaceManager_t1636;
// System.String
struct String_t;
// System.Xml.XmlNameTable
struct XmlNameTable_t1577;
// System.Collections.IEnumerator
struct IEnumerator_t21;

// System.Void System.Xml.XmlNamespaceManager::.ctor(System.Xml.XmlNameTable)
extern "C" void XmlNamespaceManager__ctor_m8065 (XmlNamespaceManager_t1636 * __this, XmlNameTable_t1577 * ___nameTable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNamespaceManager::InitData()
extern "C" void XmlNamespaceManager_InitData_m8066 (XmlNamespaceManager_t1636 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNamespaceManager::GrowDecls()
extern "C" void XmlNamespaceManager_GrowDecls_m8067 (XmlNamespaceManager_t1636 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNamespaceManager::GrowScopes()
extern "C" void XmlNamespaceManager_GrowScopes_m8068 (XmlNamespaceManager_t1636 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNamespaceManager::get_DefaultNamespace()
extern "C" String_t* XmlNamespaceManager_get_DefaultNamespace_m8069 (XmlNamespaceManager_t1636 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNameTable System.Xml.XmlNamespaceManager::get_NameTable()
extern "C" XmlNameTable_t1577 * XmlNamespaceManager_get_NameTable_m8070 (XmlNamespaceManager_t1636 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNamespaceManager::AddNamespace(System.String,System.String)
extern "C" void XmlNamespaceManager_AddNamespace_m8071 (XmlNamespaceManager_t1636 * __this, String_t* ___prefix, String_t* ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNamespaceManager::AddNamespace(System.String,System.String,System.Boolean)
extern "C" void XmlNamespaceManager_AddNamespace_m8072 (XmlNamespaceManager_t1636 * __this, String_t* ___prefix, String_t* ___uri, bool ___atomizedNames, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNamespaceManager::IsValidDeclaration(System.String,System.String,System.Boolean)
extern "C" String_t* XmlNamespaceManager_IsValidDeclaration_m8073 (Object_t * __this /* static, unused */, String_t* ___prefix, String_t* ___uri, bool ___throwException, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Xml.XmlNamespaceManager::GetEnumerator()
extern "C" Object_t * XmlNamespaceManager_GetEnumerator_m8074 (XmlNamespaceManager_t1636 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNamespaceManager::LookupNamespace(System.String)
extern "C" String_t* XmlNamespaceManager_LookupNamespace_m8075 (XmlNamespaceManager_t1636 * __this, String_t* ___prefix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNamespaceManager::LookupNamespace(System.String,System.Boolean)
extern "C" String_t* XmlNamespaceManager_LookupNamespace_m8076 (XmlNamespaceManager_t1636 * __this, String_t* ___prefix, bool ___atomizedNames, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNamespaceManager::CompareString(System.String,System.String,System.Boolean)
extern "C" bool XmlNamespaceManager_CompareString_m8077 (XmlNamespaceManager_t1636 * __this, String_t* ___s1, String_t* ___s2, bool ___atomizedNames, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNamespaceManager::LookupPrefixExclusive(System.String,System.Boolean)
extern "C" String_t* XmlNamespaceManager_LookupPrefixExclusive_m8078 (XmlNamespaceManager_t1636 * __this, String_t* ___uri, bool ___atomizedName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNamespaceManager::LookupPrefixCore(System.String,System.Boolean,System.Boolean)
extern "C" String_t* XmlNamespaceManager_LookupPrefixCore_m8079 (XmlNamespaceManager_t1636 * __this, String_t* ___uri, bool ___atomizedName, bool ___excludeOverriden, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNamespaceManager::IsOverriden(System.Int32)
extern "C" bool XmlNamespaceManager_IsOverriden_m8080 (XmlNamespaceManager_t1636 * __this, int32_t ___idx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNamespaceManager::PopScope()
extern "C" bool XmlNamespaceManager_PopScope_m8081 (XmlNamespaceManager_t1636 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNamespaceManager::PushScope()
extern "C" void XmlNamespaceManager_PushScope_m8082 (XmlNamespaceManager_t1636 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNamespaceManager::RemoveNamespace(System.String,System.String)
extern "C" void XmlNamespaceManager_RemoveNamespace_m8083 (XmlNamespaceManager_t1636 * __this, String_t* ___prefix, String_t* ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNamespaceManager::RemoveNamespace(System.String,System.String,System.Boolean)
extern "C" void XmlNamespaceManager_RemoveNamespace_m8084 (XmlNamespaceManager_t1636 * __this, String_t* ___prefix, String_t* ___uri, bool ___atomizedNames, const MethodInfo* method) IL2CPP_METHOD_ATTR;
