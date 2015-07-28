#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// SimpleJSON.JSONLazyCreator
struct JSONLazyCreator_t46;
// SimpleJSON.JSONNode
struct JSONNode_t29;
// System.String
struct String_t;
// SimpleJSON.JSONArray
struct JSONArray_t33;
// SimpleJSON.JSONClass
struct JSONClass_t38;
// System.Object
struct Object_t;

// System.Void SimpleJSON.JSONLazyCreator::.ctor(SimpleJSON.JSONNode)
extern "C" void JSONLazyCreator__ctor_m327 (JSONLazyCreator_t46 * __this, JSONNode_t29 * ___aNode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONLazyCreator::.ctor(SimpleJSON.JSONNode,System.String)
extern "C" void JSONLazyCreator__ctor_m328 (JSONLazyCreator_t46 * __this, JSONNode_t29 * ___aNode, String_t* ___aKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONLazyCreator::Set(SimpleJSON.JSONNode)
extern "C" void JSONLazyCreator_Set_m329 (JSONLazyCreator_t46 * __this, JSONNode_t29 * ___aVal, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONNode SimpleJSON.JSONLazyCreator::get_Item(System.Int32)
extern "C" JSONNode_t29 * JSONLazyCreator_get_Item_m330 (JSONLazyCreator_t46 * __this, int32_t ___aIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONLazyCreator::set_Item(System.Int32,SimpleJSON.JSONNode)
extern "C" void JSONLazyCreator_set_Item_m331 (JSONLazyCreator_t46 * __this, int32_t ___aIndex, JSONNode_t29 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONNode SimpleJSON.JSONLazyCreator::get_Item(System.String)
extern "C" JSONNode_t29 * JSONLazyCreator_get_Item_m332 (JSONLazyCreator_t46 * __this, String_t* ___aKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONLazyCreator::set_Item(System.String,SimpleJSON.JSONNode)
extern "C" void JSONLazyCreator_set_Item_m333 (JSONLazyCreator_t46 * __this, String_t* ___aKey, JSONNode_t29 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONLazyCreator::Add(SimpleJSON.JSONNode)
extern "C" void JSONLazyCreator_Add_m334 (JSONLazyCreator_t46 * __this, JSONNode_t29 * ___aItem, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONLazyCreator::Add(System.String,SimpleJSON.JSONNode)
extern "C" void JSONLazyCreator_Add_m335 (JSONLazyCreator_t46 * __this, String_t* ___aKey, JSONNode_t29 * ___aItem, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SimpleJSON.JSONLazyCreator::Equals(System.Object)
extern "C" bool JSONLazyCreator_Equals_m336 (JSONLazyCreator_t46 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 SimpleJSON.JSONLazyCreator::GetHashCode()
extern "C" int32_t JSONLazyCreator_GetHashCode_m337 (JSONLazyCreator_t46 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SimpleJSON.JSONLazyCreator::ToString()
extern "C" String_t* JSONLazyCreator_ToString_m338 (JSONLazyCreator_t46 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SimpleJSON.JSONLazyCreator::ToString(System.String)
extern "C" String_t* JSONLazyCreator_ToString_m339 (JSONLazyCreator_t46 * __this, String_t* ___aPrefix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 SimpleJSON.JSONLazyCreator::get_AsInt()
extern "C" int32_t JSONLazyCreator_get_AsInt_m340 (JSONLazyCreator_t46 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONLazyCreator::set_AsInt(System.Int32)
extern "C" void JSONLazyCreator_set_AsInt_m341 (JSONLazyCreator_t46 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single SimpleJSON.JSONLazyCreator::get_AsFloat()
extern "C" float JSONLazyCreator_get_AsFloat_m342 (JSONLazyCreator_t46 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONLazyCreator::set_AsFloat(System.Single)
extern "C" void JSONLazyCreator_set_AsFloat_m343 (JSONLazyCreator_t46 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double SimpleJSON.JSONLazyCreator::get_AsDouble()
extern "C" double JSONLazyCreator_get_AsDouble_m344 (JSONLazyCreator_t46 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONLazyCreator::set_AsDouble(System.Double)
extern "C" void JSONLazyCreator_set_AsDouble_m345 (JSONLazyCreator_t46 * __this, double ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SimpleJSON.JSONLazyCreator::get_AsBool()
extern "C" bool JSONLazyCreator_get_AsBool_m346 (JSONLazyCreator_t46 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONLazyCreator::set_AsBool(System.Boolean)
extern "C" void JSONLazyCreator_set_AsBool_m347 (JSONLazyCreator_t46 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONArray SimpleJSON.JSONLazyCreator::get_AsArray()
extern "C" JSONArray_t33 * JSONLazyCreator_get_AsArray_m348 (JSONLazyCreator_t46 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONClass SimpleJSON.JSONLazyCreator::get_AsObject()
extern "C" JSONClass_t38 * JSONLazyCreator_get_AsObject_m349 (JSONLazyCreator_t46 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SimpleJSON.JSONLazyCreator::op_Equality(SimpleJSON.JSONLazyCreator,System.Object)
extern "C" bool JSONLazyCreator_op_Equality_m350 (Object_t * __this /* static, unused */, JSONLazyCreator_t46 * ___a, Object_t * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SimpleJSON.JSONLazyCreator::op_Inequality(SimpleJSON.JSONLazyCreator,System.Object)
extern "C" bool JSONLazyCreator_op_Inequality_m351 (Object_t * __this /* static, unused */, JSONLazyCreator_t46 * ___a, Object_t * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
