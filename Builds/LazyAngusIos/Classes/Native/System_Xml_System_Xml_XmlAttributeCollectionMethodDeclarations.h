#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.XmlAttributeCollection
struct XmlAttributeCollection_t674;
// System.Object
struct Object_t;
// System.Xml.XmlAttribute
struct XmlAttribute_t672;
// System.String
struct String_t;
// System.Xml.XmlNode
struct XmlNode_t668;
// System.Array
struct Array_t;

// System.Void System.Xml.XmlAttributeCollection::.ctor(System.Xml.XmlNode)
extern "C" void XmlAttributeCollection__ctor_m10497 (XmlAttributeCollection_t674 * __this, XmlNode_t668 * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlAttributeCollection::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool XmlAttributeCollection_System_Collections_ICollection_get_IsSynchronized_m10498 (XmlAttributeCollection_t674 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.XmlAttributeCollection::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * XmlAttributeCollection_System_Collections_ICollection_get_SyncRoot_m10499 (XmlAttributeCollection_t674 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlAttributeCollection::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void XmlAttributeCollection_System_Collections_ICollection_CopyTo_m10500 (XmlAttributeCollection_t674 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlAttributeCollection::get_IsReadOnly()
extern "C" bool XmlAttributeCollection_get_IsReadOnly_m10501 (XmlAttributeCollection_t674 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlAttribute System.Xml.XmlAttributeCollection::get_ItemOf(System.String)
extern "C" XmlAttribute_t672 * XmlAttributeCollection_get_ItemOf_m10502 (XmlAttributeCollection_t674 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlAttribute System.Xml.XmlAttributeCollection::get_ItemOf(System.Int32)
extern "C" XmlAttribute_t672 * XmlAttributeCollection_get_ItemOf_m10503 (XmlAttributeCollection_t674 * __this, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlAttribute System.Xml.XmlAttributeCollection::Append(System.Xml.XmlAttribute)
extern "C" XmlAttribute_t672 * XmlAttributeCollection_Append_m3503 (XmlAttributeCollection_t674 * __this, XmlAttribute_t672 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlAttribute System.Xml.XmlAttributeCollection::Remove(System.Xml.XmlAttribute)
extern "C" XmlAttribute_t672 * XmlAttributeCollection_Remove_m10504 (XmlAttributeCollection_t674 * __this, XmlAttribute_t672 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlAttributeCollection::RemoveAll()
extern "C" void XmlAttributeCollection_RemoveAll_m10505 (XmlAttributeCollection_t674 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlAttributeCollection::SetNamedItem(System.Xml.XmlNode)
extern "C" XmlNode_t668 * XmlAttributeCollection_SetNamedItem_m10506 (XmlAttributeCollection_t674 * __this, XmlNode_t668 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlAttributeCollection::AdjustIdenticalAttributes(System.Xml.XmlAttribute,System.Xml.XmlNode)
extern "C" void XmlAttributeCollection_AdjustIdenticalAttributes_m10507 (XmlAttributeCollection_t674 * __this, XmlAttribute_t672 * ___node, XmlNode_t668 * ___existing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlAttributeCollection::RemoveIdenticalAttribute(System.Xml.XmlNode)
extern "C" XmlNode_t668 * XmlAttributeCollection_RemoveIdenticalAttribute_m10508 (XmlAttributeCollection_t674 * __this, XmlNode_t668 * ___existing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
