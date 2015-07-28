#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// SimpleJSON.JSONArray
struct JSONArray_t33;
// SimpleJSON.JSONNode
struct JSONNode_t29;
// System.String
struct String_t;
// System.Collections.Generic.IEnumerable`1<SimpleJSON.JSONNode>
struct IEnumerable_1_t49;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.IO.BinaryWriter
struct BinaryWriter_t50;

// System.Void SimpleJSON.JSONArray::.ctor()
extern "C" void JSONArray__ctor_m272 (JSONArray_t33 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONNode SimpleJSON.JSONArray::get_Item(System.Int32)
extern "C" JSONNode_t29 * JSONArray_get_Item_m273 (JSONArray_t33 * __this, int32_t ___aIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONArray::set_Item(System.Int32,SimpleJSON.JSONNode)
extern "C" void JSONArray_set_Item_m274 (JSONArray_t33 * __this, int32_t ___aIndex, JSONNode_t29 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONNode SimpleJSON.JSONArray::get_Item(System.String)
extern "C" JSONNode_t29 * JSONArray_get_Item_m275 (JSONArray_t33 * __this, String_t* ___aKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONArray::set_Item(System.String,SimpleJSON.JSONNode)
extern "C" void JSONArray_set_Item_m276 (JSONArray_t33 * __this, String_t* ___aKey, JSONNode_t29 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 SimpleJSON.JSONArray::get_Count()
extern "C" int32_t JSONArray_get_Count_m277 (JSONArray_t33 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONArray::Add(System.String,SimpleJSON.JSONNode)
extern "C" void JSONArray_Add_m278 (JSONArray_t33 * __this, String_t* ___aKey, JSONNode_t29 * ___aItem, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONNode SimpleJSON.JSONArray::Remove(System.Int32)
extern "C" JSONNode_t29 * JSONArray_Remove_m279 (JSONArray_t33 * __this, int32_t ___aIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONNode SimpleJSON.JSONArray::Remove(SimpleJSON.JSONNode)
extern "C" JSONNode_t29 * JSONArray_Remove_m280 (JSONArray_t33 * __this, JSONNode_t29 * ___aNode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<SimpleJSON.JSONNode> SimpleJSON.JSONArray::get_Childs()
extern "C" Object_t* JSONArray_get_Childs_m281 (JSONArray_t33 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator SimpleJSON.JSONArray::GetEnumerator()
extern "C" Object_t * JSONArray_GetEnumerator_m282 (JSONArray_t33 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SimpleJSON.JSONArray::ToString()
extern "C" String_t* JSONArray_ToString_m283 (JSONArray_t33 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SimpleJSON.JSONArray::ToString(System.String)
extern "C" String_t* JSONArray_ToString_m284 (JSONArray_t33 * __this, String_t* ___aPrefix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONArray::Serialize(System.IO.BinaryWriter)
extern "C" void JSONArray_Serialize_m285 (JSONArray_t33 * __this, BinaryWriter_t50 * ___aWriter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
