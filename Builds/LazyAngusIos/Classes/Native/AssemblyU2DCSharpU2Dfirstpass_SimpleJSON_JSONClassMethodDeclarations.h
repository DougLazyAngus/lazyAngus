#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// SimpleJSON.JSONClass
struct JSONClass_t38;
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

// System.Void SimpleJSON.JSONClass::.ctor()
extern "C" void JSONClass__ctor_m302 (JSONClass_t38 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONNode SimpleJSON.JSONClass::get_Item(System.String)
extern "C" JSONNode_t29 * JSONClass_get_Item_m303 (JSONClass_t38 * __this, String_t* ___aKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONClass::set_Item(System.String,SimpleJSON.JSONNode)
extern "C" void JSONClass_set_Item_m304 (JSONClass_t38 * __this, String_t* ___aKey, JSONNode_t29 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONNode SimpleJSON.JSONClass::get_Item(System.Int32)
extern "C" JSONNode_t29 * JSONClass_get_Item_m305 (JSONClass_t38 * __this, int32_t ___aIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONClass::set_Item(System.Int32,SimpleJSON.JSONNode)
extern "C" void JSONClass_set_Item_m306 (JSONClass_t38 * __this, int32_t ___aIndex, JSONNode_t29 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 SimpleJSON.JSONClass::get_Count()
extern "C" int32_t JSONClass_get_Count_m307 (JSONClass_t38 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONClass::Add(System.String,SimpleJSON.JSONNode)
extern "C" void JSONClass_Add_m308 (JSONClass_t38 * __this, String_t* ___aKey, JSONNode_t29 * ___aItem, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONNode SimpleJSON.JSONClass::Remove(System.String)
extern "C" JSONNode_t29 * JSONClass_Remove_m309 (JSONClass_t38 * __this, String_t* ___aKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONNode SimpleJSON.JSONClass::Remove(System.Int32)
extern "C" JSONNode_t29 * JSONClass_Remove_m310 (JSONClass_t38 * __this, int32_t ___aIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONNode SimpleJSON.JSONClass::Remove(SimpleJSON.JSONNode)
extern "C" JSONNode_t29 * JSONClass_Remove_m311 (JSONClass_t38 * __this, JSONNode_t29 * ___aNode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<SimpleJSON.JSONNode> SimpleJSON.JSONClass::get_Childs()
extern "C" Object_t* JSONClass_get_Childs_m312 (JSONClass_t38 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator SimpleJSON.JSONClass::GetEnumerator()
extern "C" Object_t * JSONClass_GetEnumerator_m313 (JSONClass_t38 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SimpleJSON.JSONClass::ToString()
extern "C" String_t* JSONClass_ToString_m314 (JSONClass_t38 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SimpleJSON.JSONClass::ToString(System.String)
extern "C" String_t* JSONClass_ToString_m315 (JSONClass_t38 * __this, String_t* ___aPrefix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONClass::Serialize(System.IO.BinaryWriter)
extern "C" void JSONClass_Serialize_m316 (JSONClass_t38 * __this, BinaryWriter_t50 * ___aWriter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
