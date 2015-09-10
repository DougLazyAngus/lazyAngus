#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.ComponentModel.AttributeCollection
struct AttributeCollection_t4233;
// System.Object
struct Object_t;
// System.Attribute
struct Attribute_t426;
// System.Type
struct Type_t;
// System.Collections.ArrayList
struct ArrayList_t723;
// System.Attribute[]
struct AttributeU5BU5D_t4258;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Array
struct Array_t;

// System.Void System.ComponentModel.AttributeCollection::.ctor(System.Collections.ArrayList)
extern "C" void AttributeCollection__ctor_m15797 (AttributeCollection_t4233 * __this, ArrayList_t723 * ___attributes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.AttributeCollection::.ctor(System.Attribute[])
extern "C" void AttributeCollection__ctor_m15798 (AttributeCollection_t4233 * __this, AttributeU5BU5D_t4258* ___attributes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.AttributeCollection::.cctor()
extern "C" void AttributeCollection__cctor_m15799 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.ComponentModel.AttributeCollection::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * AttributeCollection_System_Collections_IEnumerable_GetEnumerator_m15800 (AttributeCollection_t4233 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.AttributeCollection::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool AttributeCollection_System_Collections_ICollection_get_IsSynchronized_m15801 (AttributeCollection_t4233 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.AttributeCollection::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * AttributeCollection_System_Collections_ICollection_get_SyncRoot_m15802 (AttributeCollection_t4233 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.ComponentModel.AttributeCollection::System.Collections.ICollection.get_Count()
extern "C" int32_t AttributeCollection_System_Collections_ICollection_get_Count_m15803 (AttributeCollection_t4233 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.AttributeCollection::Contains(System.Attribute)
extern "C" bool AttributeCollection_Contains_m15804 (AttributeCollection_t4233 * __this, Attribute_t426 * ___attr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.AttributeCollection::Contains(System.Attribute[])
extern "C" bool AttributeCollection_Contains_m15805 (AttributeCollection_t4233 * __this, AttributeU5BU5D_t4258* ___attributes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.AttributeCollection::CopyTo(System.Array,System.Int32)
extern "C" void AttributeCollection_CopyTo_m15806 (AttributeCollection_t4233 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.ComponentModel.AttributeCollection::GetEnumerator()
extern "C" Object_t * AttributeCollection_GetEnumerator_m15807 (AttributeCollection_t4233 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Attribute System.ComponentModel.AttributeCollection::GetDefaultAttribute(System.Type)
extern "C" Attribute_t426 * AttributeCollection_GetDefaultAttribute_m15808 (AttributeCollection_t4233 * __this, Type_t * ___attributeType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.ComponentModel.AttributeCollection::get_Count()
extern "C" int32_t AttributeCollection_get_Count_m15809 (AttributeCollection_t4233 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Attribute System.ComponentModel.AttributeCollection::get_Item(System.Type)
extern "C" Attribute_t426 * AttributeCollection_get_Item_m15810 (AttributeCollection_t4233 * __this, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
