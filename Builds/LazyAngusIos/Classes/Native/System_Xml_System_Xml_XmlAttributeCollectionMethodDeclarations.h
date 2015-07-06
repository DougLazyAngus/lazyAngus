#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.XmlAttributeCollection
struct XmlAttributeCollection_t549;
// System.Object
struct Object_t;
// System.Xml.XmlAttribute
struct XmlAttribute_t547;
// System.String
struct String_t;
// System.Xml.XmlNode
struct XmlNode_t543;
// System.Array
struct Array_t;

// System.Void System.Xml.XmlAttributeCollection::.ctor(System.Xml.XmlNode)
extern "C" void XmlAttributeCollection__ctor_m9424 (XmlAttributeCollection_t549 * __this, XmlNode_t543 * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlAttributeCollection::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool XmlAttributeCollection_System_Collections_ICollection_get_IsSynchronized_m9425 (XmlAttributeCollection_t549 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.XmlAttributeCollection::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * XmlAttributeCollection_System_Collections_ICollection_get_SyncRoot_m9426 (XmlAttributeCollection_t549 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlAttributeCollection::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void XmlAttributeCollection_System_Collections_ICollection_CopyTo_m9427 (XmlAttributeCollection_t549 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlAttributeCollection::get_IsReadOnly()
extern "C" bool XmlAttributeCollection_get_IsReadOnly_m9428 (XmlAttributeCollection_t549 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlAttribute System.Xml.XmlAttributeCollection::get_ItemOf(System.String)
extern "C" XmlAttribute_t547 * XmlAttributeCollection_get_ItemOf_m9429 (XmlAttributeCollection_t549 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlAttribute System.Xml.XmlAttributeCollection::get_ItemOf(System.Int32)
extern "C" XmlAttribute_t547 * XmlAttributeCollection_get_ItemOf_m9430 (XmlAttributeCollection_t549 * __this, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlAttribute System.Xml.XmlAttributeCollection::Append(System.Xml.XmlAttribute)
extern "C" XmlAttribute_t547 * XmlAttributeCollection_Append_m2513 (XmlAttributeCollection_t549 * __this, XmlAttribute_t547 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlAttribute System.Xml.XmlAttributeCollection::Remove(System.Xml.XmlAttribute)
extern "C" XmlAttribute_t547 * XmlAttributeCollection_Remove_m9431 (XmlAttributeCollection_t549 * __this, XmlAttribute_t547 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlAttributeCollection::RemoveAll()
extern "C" void XmlAttributeCollection_RemoveAll_m9432 (XmlAttributeCollection_t549 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlAttributeCollection::SetNamedItem(System.Xml.XmlNode)
extern "C" XmlNode_t543 * XmlAttributeCollection_SetNamedItem_m9433 (XmlAttributeCollection_t549 * __this, XmlNode_t543 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlAttributeCollection::AdjustIdenticalAttributes(System.Xml.XmlAttribute,System.Xml.XmlNode)
extern "C" void XmlAttributeCollection_AdjustIdenticalAttributes_m9434 (XmlAttributeCollection_t549 * __this, XmlAttribute_t547 * ___node, XmlNode_t543 * ___existing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlAttributeCollection::RemoveIdenticalAttribute(System.Xml.XmlNode)
extern "C" XmlNode_t543 * XmlAttributeCollection_RemoveIdenticalAttribute_m9435 (XmlAttributeCollection_t549 * __this, XmlNode_t543 * ___existing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
