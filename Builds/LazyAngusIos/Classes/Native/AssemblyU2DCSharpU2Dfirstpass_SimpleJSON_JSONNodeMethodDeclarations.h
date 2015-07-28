#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// SimpleJSON.JSONNode
struct JSONNode_t29;
// System.String
struct String_t;
// System.Collections.Generic.IEnumerable`1<SimpleJSON.JSONNode>
struct IEnumerable_1_t49;
// SimpleJSON.JSONArray
struct JSONArray_t33;
// SimpleJSON.JSONClass
struct JSONClass_t38;
// System.Object
struct Object_t;
// System.IO.BinaryWriter
struct BinaryWriter_t50;
// System.IO.Stream
struct Stream_t51;
// System.IO.BinaryReader
struct BinaryReader_t52;

// System.Void SimpleJSON.JSONNode::.ctor()
extern "C" void JSONNode__ctor_m209 (JSONNode_t29 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONNode::Add(System.String,SimpleJSON.JSONNode)
extern "C" void JSONNode_Add_m210 (JSONNode_t29 * __this, String_t* ___aKey, JSONNode_t29 * ___aItem, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONNode SimpleJSON.JSONNode::get_Item(System.Int32)
extern "C" JSONNode_t29 * JSONNode_get_Item_m211 (JSONNode_t29 * __this, int32_t ___aIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONNode::set_Item(System.Int32,SimpleJSON.JSONNode)
extern "C" void JSONNode_set_Item_m212 (JSONNode_t29 * __this, int32_t ___aIndex, JSONNode_t29 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONNode SimpleJSON.JSONNode::get_Item(System.String)
extern "C" JSONNode_t29 * JSONNode_get_Item_m213 (JSONNode_t29 * __this, String_t* ___aKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONNode::set_Item(System.String,SimpleJSON.JSONNode)
extern "C" void JSONNode_set_Item_m214 (JSONNode_t29 * __this, String_t* ___aKey, JSONNode_t29 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SimpleJSON.JSONNode::get_Value()
extern "C" String_t* JSONNode_get_Value_m215 (JSONNode_t29 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONNode::set_Value(System.String)
extern "C" void JSONNode_set_Value_m216 (JSONNode_t29 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 SimpleJSON.JSONNode::get_Count()
extern "C" int32_t JSONNode_get_Count_m217 (JSONNode_t29 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONNode::Add(SimpleJSON.JSONNode)
extern "C" void JSONNode_Add_m218 (JSONNode_t29 * __this, JSONNode_t29 * ___aItem, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONNode SimpleJSON.JSONNode::Remove(System.String)
extern "C" JSONNode_t29 * JSONNode_Remove_m219 (JSONNode_t29 * __this, String_t* ___aKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONNode SimpleJSON.JSONNode::Remove(System.Int32)
extern "C" JSONNode_t29 * JSONNode_Remove_m220 (JSONNode_t29 * __this, int32_t ___aIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONNode SimpleJSON.JSONNode::Remove(SimpleJSON.JSONNode)
extern "C" JSONNode_t29 * JSONNode_Remove_m221 (JSONNode_t29 * __this, JSONNode_t29 * ___aNode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<SimpleJSON.JSONNode> SimpleJSON.JSONNode::get_Childs()
extern "C" Object_t* JSONNode_get_Childs_m222 (JSONNode_t29 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<SimpleJSON.JSONNode> SimpleJSON.JSONNode::get_DeepChilds()
extern "C" Object_t* JSONNode_get_DeepChilds_m223 (JSONNode_t29 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SimpleJSON.JSONNode::ToString()
extern "C" String_t* JSONNode_ToString_m224 (JSONNode_t29 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SimpleJSON.JSONNode::ToString(System.String)
extern "C" String_t* JSONNode_ToString_m225 (JSONNode_t29 * __this, String_t* ___aPrefix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 SimpleJSON.JSONNode::get_AsInt()
extern "C" int32_t JSONNode_get_AsInt_m226 (JSONNode_t29 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONNode::set_AsInt(System.Int32)
extern "C" void JSONNode_set_AsInt_m227 (JSONNode_t29 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single SimpleJSON.JSONNode::get_AsFloat()
extern "C" float JSONNode_get_AsFloat_m228 (JSONNode_t29 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONNode::set_AsFloat(System.Single)
extern "C" void JSONNode_set_AsFloat_m229 (JSONNode_t29 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double SimpleJSON.JSONNode::get_AsDouble()
extern "C" double JSONNode_get_AsDouble_m230 (JSONNode_t29 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONNode::set_AsDouble(System.Double)
extern "C" void JSONNode_set_AsDouble_m231 (JSONNode_t29 * __this, double ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SimpleJSON.JSONNode::get_AsBool()
extern "C" bool JSONNode_get_AsBool_m232 (JSONNode_t29 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONNode::set_AsBool(System.Boolean)
extern "C" void JSONNode_set_AsBool_m233 (JSONNode_t29 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONArray SimpleJSON.JSONNode::get_AsArray()
extern "C" JSONArray_t33 * JSONNode_get_AsArray_m234 (JSONNode_t29 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONClass SimpleJSON.JSONNode::get_AsObject()
extern "C" JSONClass_t38 * JSONNode_get_AsObject_m235 (JSONNode_t29 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SimpleJSON.JSONNode::Equals(System.Object)
extern "C" bool JSONNode_Equals_m236 (JSONNode_t29 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 SimpleJSON.JSONNode::GetHashCode()
extern "C" int32_t JSONNode_GetHashCode_m237 (JSONNode_t29 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SimpleJSON.JSONNode::Escape(System.String)
extern "C" String_t* JSONNode_Escape_m238 (Object_t * __this /* static, unused */, String_t* ___aText, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONNode SimpleJSON.JSONNode::Parse(System.String)
extern "C" JSONNode_t29 * JSONNode_Parse_m239 (Object_t * __this /* static, unused */, String_t* ___aJSON, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONNode::Serialize(System.IO.BinaryWriter)
extern "C" void JSONNode_Serialize_m240 (JSONNode_t29 * __this, BinaryWriter_t50 * ___aWriter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONNode::SaveToStream(System.IO.Stream)
extern "C" void JSONNode_SaveToStream_m241 (JSONNode_t29 * __this, Stream_t51 * ___aData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONNode::SaveToCompressedStream(System.IO.Stream)
extern "C" void JSONNode_SaveToCompressedStream_m242 (JSONNode_t29 * __this, Stream_t51 * ___aData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONNode::SaveToCompressedFile(System.String)
extern "C" void JSONNode_SaveToCompressedFile_m243 (JSONNode_t29 * __this, String_t* ___aFileName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SimpleJSON.JSONNode::SaveToCompressedBase64()
extern "C" String_t* JSONNode_SaveToCompressedBase64_m244 (JSONNode_t29 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONNode::SaveToFile(System.String)
extern "C" void JSONNode_SaveToFile_m245 (JSONNode_t29 * __this, String_t* ___aFileName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SimpleJSON.JSONNode::SaveToBase64()
extern "C" String_t* JSONNode_SaveToBase64_m246 (JSONNode_t29 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONNode SimpleJSON.JSONNode::Deserialize(System.IO.BinaryReader)
extern "C" JSONNode_t29 * JSONNode_Deserialize_m247 (Object_t * __this /* static, unused */, BinaryReader_t52 * ___aReader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONNode SimpleJSON.JSONNode::LoadFromCompressedFile(System.String)
extern "C" JSONNode_t29 * JSONNode_LoadFromCompressedFile_m248 (Object_t * __this /* static, unused */, String_t* ___aFileName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONNode SimpleJSON.JSONNode::LoadFromCompressedStream(System.IO.Stream)
extern "C" JSONNode_t29 * JSONNode_LoadFromCompressedStream_m249 (Object_t * __this /* static, unused */, Stream_t51 * ___aData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONNode SimpleJSON.JSONNode::LoadFromCompressedBase64(System.String)
extern "C" JSONNode_t29 * JSONNode_LoadFromCompressedBase64_m250 (Object_t * __this /* static, unused */, String_t* ___aBase64, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONNode SimpleJSON.JSONNode::LoadFromStream(System.IO.Stream)
extern "C" JSONNode_t29 * JSONNode_LoadFromStream_m251 (Object_t * __this /* static, unused */, Stream_t51 * ___aData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONNode SimpleJSON.JSONNode::LoadFromFile(System.String)
extern "C" JSONNode_t29 * JSONNode_LoadFromFile_m252 (Object_t * __this /* static, unused */, String_t* ___aFileName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONNode SimpleJSON.JSONNode::LoadFromBase64(System.String)
extern "C" JSONNode_t29 * JSONNode_LoadFromBase64_m253 (Object_t * __this /* static, unused */, String_t* ___aBase64, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONNode SimpleJSON.JSONNode::op_Implicit(System.String)
extern "C" JSONNode_t29 * JSONNode_op_Implicit_m254 (Object_t * __this /* static, unused */, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SimpleJSON.JSONNode::op_Implicit(SimpleJSON.JSONNode)
extern "C" String_t* JSONNode_op_Implicit_m255 (Object_t * __this /* static, unused */, JSONNode_t29 * ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SimpleJSON.JSONNode::op_Equality(SimpleJSON.JSONNode,System.Object)
extern "C" bool JSONNode_op_Equality_m256 (Object_t * __this /* static, unused */, JSONNode_t29 * ___a, Object_t * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SimpleJSON.JSONNode::op_Inequality(SimpleJSON.JSONNode,System.Object)
extern "C" bool JSONNode_op_Inequality_m257 (Object_t * __this /* static, unused */, JSONNode_t29 * ___a, Object_t * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
