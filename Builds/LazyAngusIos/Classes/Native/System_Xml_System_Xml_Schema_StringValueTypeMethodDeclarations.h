#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Schema.StringValueType
struct StringValueType_t3617;
struct StringValueType_t3617_marshaled;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Xml.Schema.StringValueType
#include "System_Xml_System_Xml_Schema_StringValueType.h"

// System.Void System.Xml.Schema.StringValueType::.ctor(System.String)
extern "C" void StringValueType__ctor_m13907 (StringValueType_t3617 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.StringValueType::get_Value()
extern "C" String_t* StringValueType_get_Value_m13908 (StringValueType_t3617 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.StringValueType::Equals(System.Object)
extern "C" bool StringValueType_Equals_m13909 (StringValueType_t3617 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.StringValueType::GetHashCode()
extern "C" int32_t StringValueType_GetHashCode_m13910 (StringValueType_t3617 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.StringValueType::op_Equality(System.Xml.Schema.StringValueType,System.Xml.Schema.StringValueType)
extern "C" bool StringValueType_op_Equality_m13911 (Object_t * __this /* static, unused */, StringValueType_t3617  ___v1, StringValueType_t3617  ___v2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void StringValueType_t3617_marshal(const StringValueType_t3617& unmarshaled, StringValueType_t3617_marshaled& marshaled);
void StringValueType_t3617_marshal_back(const StringValueType_t3617_marshaled& marshaled, StringValueType_t3617& unmarshaled);
void StringValueType_t3617_marshal_cleanup(StringValueType_t3617_marshaled& marshaled);
