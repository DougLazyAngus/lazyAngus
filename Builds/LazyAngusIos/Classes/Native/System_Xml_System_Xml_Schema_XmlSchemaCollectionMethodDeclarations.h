#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Schema.XmlSchemaCollection
struct XmlSchemaCollection_t3553;
// System.Object
struct Object_t;
// System.Xml.Schema.XmlSchemaSet
struct XmlSchemaSet_t3435;
// System.Xml.XmlNameTable
struct XmlNameTable_t3458;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Xml.Schema.XmlSchemaCollectionEnumerator
struct XmlSchemaCollectionEnumerator_t3637;
// System.Xml.Schema.ValidationEventArgs
struct ValidationEventArgs_t3621;

// System.Void System.Xml.Schema.XmlSchemaCollection::.ctor(System.Xml.XmlNameTable)
extern "C" void XmlSchemaCollection__ctor_m14077 (XmlSchemaCollection_t3553 * __this, XmlNameTable_t3458 * ___nameTable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaCollection::.ctor(System.Xml.Schema.XmlSchemaSet)
extern "C" void XmlSchemaCollection__ctor_m14078 (XmlSchemaCollection_t3553 * __this, XmlSchemaSet_t3435 * ___schemaSet, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaCollection::System.Collections.ICollection.get_Count()
extern "C" int32_t XmlSchemaCollection_System_Collections_ICollection_get_Count_m14079 (XmlSchemaCollection_t3553 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaCollection::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void XmlSchemaCollection_System_Collections_ICollection_CopyTo_m14080 (XmlSchemaCollection_t3553 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaCollection::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool XmlSchemaCollection_System_Collections_ICollection_get_IsSynchronized_m14081 (XmlSchemaCollection_t3553 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Xml.Schema.XmlSchemaCollection::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * XmlSchemaCollection_System_Collections_IEnumerable_GetEnumerator_m14082 (XmlSchemaCollection_t3553 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Schema.XmlSchemaCollection::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * XmlSchemaCollection_System_Collections_ICollection_get_SyncRoot_m14083 (XmlSchemaCollection_t3553 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaSet System.Xml.Schema.XmlSchemaCollection::get_SchemaSet()
extern "C" XmlSchemaSet_t3435 * XmlSchemaCollection_get_SchemaSet_m14084 (XmlSchemaCollection_t3553 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaCollection::get_Count()
extern "C" int32_t XmlSchemaCollection_get_Count_m14085 (XmlSchemaCollection_t3553 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaCollectionEnumerator System.Xml.Schema.XmlSchemaCollection::GetEnumerator()
extern "C" XmlSchemaCollectionEnumerator_t3637 * XmlSchemaCollection_GetEnumerator_m14086 (XmlSchemaCollection_t3553 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaCollection::OnValidationError(System.Object,System.Xml.Schema.ValidationEventArgs)
extern "C" void XmlSchemaCollection_OnValidationError_m14087 (XmlSchemaCollection_t3553 * __this, Object_t * ___o, ValidationEventArgs_t3621 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
