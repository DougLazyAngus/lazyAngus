#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Schema.XmlSchemaObjectTable
struct XmlSchemaObjectTable_t3622;
// System.Xml.Schema.XmlSchemaObject
struct XmlSchemaObject_t3439;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t3415;
// System.Collections.ICollection
struct ICollection_t768;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t798;

// System.Void System.Xml.Schema.XmlSchemaObjectTable::.ctor()
extern "C" void XmlSchemaObjectTable__ctor_m14388 (XmlSchemaObjectTable_t3622 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObject System.Xml.Schema.XmlSchemaObjectTable::get_Item(System.Xml.XmlQualifiedName)
extern "C" XmlSchemaObject_t3439 * XmlSchemaObjectTable_get_Item_m14389 (XmlSchemaObjectTable_t3622 * __this, XmlQualifiedName_t3415 * ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.Xml.Schema.XmlSchemaObjectTable::get_Names()
extern "C" Object_t * XmlSchemaObjectTable_get_Names_m14390 (XmlSchemaObjectTable_t3622 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.Xml.Schema.XmlSchemaObjectTable::get_Values()
extern "C" Object_t * XmlSchemaObjectTable_get_Values_m14391 (XmlSchemaObjectTable_t3622 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaObjectTable::Contains(System.Xml.XmlQualifiedName)
extern "C" bool XmlSchemaObjectTable_Contains_m14392 (XmlSchemaObjectTable_t3622 * __this, XmlQualifiedName_t3415 * ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionaryEnumerator System.Xml.Schema.XmlSchemaObjectTable::GetEnumerator()
extern "C" Object_t * XmlSchemaObjectTable_GetEnumerator_m14393 (XmlSchemaObjectTable_t3622 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaObjectTable::Add(System.Xml.XmlQualifiedName,System.Xml.Schema.XmlSchemaObject)
extern "C" void XmlSchemaObjectTable_Add_m14394 (XmlSchemaObjectTable_t3622 * __this, XmlQualifiedName_t3415 * ___name, XmlSchemaObject_t3439 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaObjectTable::Clear()
extern "C" void XmlSchemaObjectTable_Clear_m14395 (XmlSchemaObjectTable_t3622 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaObjectTable::Set(System.Xml.XmlQualifiedName,System.Xml.Schema.XmlSchemaObject)
extern "C" void XmlSchemaObjectTable_Set_m14396 (XmlSchemaObjectTable_t3622 * __this, XmlQualifiedName_t3415 * ___name, XmlSchemaObject_t3439 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
