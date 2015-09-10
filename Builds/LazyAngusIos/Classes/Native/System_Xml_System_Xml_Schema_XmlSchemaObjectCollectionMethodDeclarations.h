#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Schema.XmlSchemaObjectCollection
struct XmlSchemaObjectCollection_t3634;
// System.Xml.Schema.XmlSchemaObject
struct XmlSchemaObject_t3450;
// System.Xml.Schema.XmlSchemaObjectEnumerator
struct XmlSchemaObjectEnumerator_t3685;
// System.Object
struct Object_t;

// System.Void System.Xml.Schema.XmlSchemaObjectCollection::.ctor()
extern "C" void XmlSchemaObjectCollection__ctor_m14432 (XmlSchemaObjectCollection_t3634 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaObjectCollection::.ctor(System.Xml.Schema.XmlSchemaObject)
extern "C" void XmlSchemaObjectCollection__ctor_m14433 (XmlSchemaObjectCollection_t3634 * __this, XmlSchemaObject_t3450 * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObject System.Xml.Schema.XmlSchemaObjectCollection::get_Item(System.Int32)
extern "C" XmlSchemaObject_t3450 * XmlSchemaObjectCollection_get_Item_m14434 (XmlSchemaObjectCollection_t3634 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaObjectCollection::Add(System.Xml.Schema.XmlSchemaObject)
extern "C" int32_t XmlSchemaObjectCollection_Add_m14435 (XmlSchemaObjectCollection_t3634 * __this, XmlSchemaObject_t3450 * ___item, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaObjectCollection::Contains(System.Xml.Schema.XmlSchemaObject)
extern "C" bool XmlSchemaObjectCollection_Contains_m14436 (XmlSchemaObjectCollection_t3634 * __this, XmlSchemaObject_t3450 * ___item, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObjectEnumerator System.Xml.Schema.XmlSchemaObjectCollection::GetEnumerator()
extern "C" XmlSchemaObjectEnumerator_t3685 * XmlSchemaObjectCollection_GetEnumerator_m14437 (XmlSchemaObjectCollection_t3634 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaObjectCollection::OnClear()
extern "C" void XmlSchemaObjectCollection_OnClear_m14438 (XmlSchemaObjectCollection_t3634 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaObjectCollection::OnInsert(System.Int32,System.Object)
extern "C" void XmlSchemaObjectCollection_OnInsert_m14439 (XmlSchemaObjectCollection_t3634 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaObjectCollection::OnRemove(System.Int32,System.Object)
extern "C" void XmlSchemaObjectCollection_OnRemove_m14440 (XmlSchemaObjectCollection_t3634 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaObjectCollection::OnSet(System.Int32,System.Object,System.Object)
extern "C" void XmlSchemaObjectCollection_OnSet_m14441 (XmlSchemaObjectCollection_t3634 * __this, int32_t ___index, Object_t * ___oldValue, Object_t * ___newValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
