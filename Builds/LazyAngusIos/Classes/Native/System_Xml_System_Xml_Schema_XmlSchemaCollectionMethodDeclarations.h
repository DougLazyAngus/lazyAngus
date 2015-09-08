#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Schema.XmlSchemaCollection
struct XmlSchemaCollection_t3554;
// System.Object
struct Object_t;
// System.Xml.Schema.XmlSchemaSet
struct XmlSchemaSet_t3436;
// System.Xml.XmlNameTable
struct XmlNameTable_t3459;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Xml.Schema.XmlSchemaCollectionEnumerator
struct XmlSchemaCollectionEnumerator_t3638;
// System.Xml.Schema.ValidationEventArgs
struct ValidationEventArgs_t3622;

// System.Void System.Xml.Schema.XmlSchemaCollection::.ctor(System.Xml.XmlNameTable)
extern "C" void XmlSchemaCollection__ctor_m14090 (XmlSchemaCollection_t3554 * __this, XmlNameTable_t3459 * ___nameTable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaCollection::.ctor(System.Xml.Schema.XmlSchemaSet)
extern "C" void XmlSchemaCollection__ctor_m14091 (XmlSchemaCollection_t3554 * __this, XmlSchemaSet_t3436 * ___schemaSet, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaCollection::System.Collections.ICollection.get_Count()
extern "C" int32_t XmlSchemaCollection_System_Collections_ICollection_get_Count_m14092 (XmlSchemaCollection_t3554 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaCollection::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void XmlSchemaCollection_System_Collections_ICollection_CopyTo_m14093 (XmlSchemaCollection_t3554 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaCollection::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool XmlSchemaCollection_System_Collections_ICollection_get_IsSynchronized_m14094 (XmlSchemaCollection_t3554 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Xml.Schema.XmlSchemaCollection::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * XmlSchemaCollection_System_Collections_IEnumerable_GetEnumerator_m14095 (XmlSchemaCollection_t3554 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Schema.XmlSchemaCollection::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * XmlSchemaCollection_System_Collections_ICollection_get_SyncRoot_m14096 (XmlSchemaCollection_t3554 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaSet System.Xml.Schema.XmlSchemaCollection::get_SchemaSet()
extern "C" XmlSchemaSet_t3436 * XmlSchemaCollection_get_SchemaSet_m14097 (XmlSchemaCollection_t3554 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaCollection::get_Count()
extern "C" int32_t XmlSchemaCollection_get_Count_m14098 (XmlSchemaCollection_t3554 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaCollectionEnumerator System.Xml.Schema.XmlSchemaCollection::GetEnumerator()
extern "C" XmlSchemaCollectionEnumerator_t3638 * XmlSchemaCollection_GetEnumerator_m14099 (XmlSchemaCollection_t3554 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaCollection::OnValidationError(System.Object,System.Xml.Schema.ValidationEventArgs)
extern "C" void XmlSchemaCollection_OnValidationError_m14100 (XmlSchemaCollection_t3554 * __this, Object_t * ___o, ValidationEventArgs_t3622 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
