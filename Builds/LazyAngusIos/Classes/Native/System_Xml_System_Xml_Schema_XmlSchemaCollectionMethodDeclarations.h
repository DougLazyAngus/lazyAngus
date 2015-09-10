#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Schema.XmlSchemaCollection
struct XmlSchemaCollection_t3564;
// System.Object
struct Object_t;
// System.Xml.Schema.XmlSchemaSet
struct XmlSchemaSet_t3446;
// System.Xml.XmlNameTable
struct XmlNameTable_t3469;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Xml.Schema.XmlSchemaCollectionEnumerator
struct XmlSchemaCollectionEnumerator_t3648;
// System.Xml.Schema.ValidationEventArgs
struct ValidationEventArgs_t3632;

// System.Void System.Xml.Schema.XmlSchemaCollection::.ctor(System.Xml.XmlNameTable)
extern "C" void XmlSchemaCollection__ctor_m14147 (XmlSchemaCollection_t3564 * __this, XmlNameTable_t3469 * ___nameTable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaCollection::.ctor(System.Xml.Schema.XmlSchemaSet)
extern "C" void XmlSchemaCollection__ctor_m14148 (XmlSchemaCollection_t3564 * __this, XmlSchemaSet_t3446 * ___schemaSet, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaCollection::System.Collections.ICollection.get_Count()
extern "C" int32_t XmlSchemaCollection_System_Collections_ICollection_get_Count_m14149 (XmlSchemaCollection_t3564 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaCollection::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void XmlSchemaCollection_System_Collections_ICollection_CopyTo_m14150 (XmlSchemaCollection_t3564 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaCollection::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool XmlSchemaCollection_System_Collections_ICollection_get_IsSynchronized_m14151 (XmlSchemaCollection_t3564 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Xml.Schema.XmlSchemaCollection::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * XmlSchemaCollection_System_Collections_IEnumerable_GetEnumerator_m14152 (XmlSchemaCollection_t3564 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Schema.XmlSchemaCollection::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * XmlSchemaCollection_System_Collections_ICollection_get_SyncRoot_m14153 (XmlSchemaCollection_t3564 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaSet System.Xml.Schema.XmlSchemaCollection::get_SchemaSet()
extern "C" XmlSchemaSet_t3446 * XmlSchemaCollection_get_SchemaSet_m14154 (XmlSchemaCollection_t3564 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaCollection::get_Count()
extern "C" int32_t XmlSchemaCollection_get_Count_m14155 (XmlSchemaCollection_t3564 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaCollectionEnumerator System.Xml.Schema.XmlSchemaCollection::GetEnumerator()
extern "C" XmlSchemaCollectionEnumerator_t3648 * XmlSchemaCollection_GetEnumerator_m14156 (XmlSchemaCollection_t3564 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaCollection::OnValidationError(System.Object,System.Xml.Schema.ValidationEventArgs)
extern "C" void XmlSchemaCollection_OnValidationError_m14157 (XmlSchemaCollection_t3564 * __this, Object_t * ___o, ValidationEventArgs_t3632 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
