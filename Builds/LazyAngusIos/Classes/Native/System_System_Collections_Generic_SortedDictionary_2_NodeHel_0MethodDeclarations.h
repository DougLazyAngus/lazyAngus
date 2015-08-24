#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.SortedDictionary`2/NodeHelper<System.String,System.String>
struct NodeHelper_t5637;
// System.Collections.Generic.IComparer`1<System.String>
struct IComparer_1_t5379;
// System.String
struct String_t;
// System.Collections.Generic.RBTree/Node
struct Node_t3952;

// System.Void System.Collections.Generic.SortedDictionary`2/NodeHelper<System.String,System.String>::.ctor(System.Collections.Generic.IComparer`1<TKey>)
// System.Collections.Generic.SortedDictionary`2/NodeHelper<System.Object,System.Object>
#include "System_System_Collections_Generic_SortedDictionary_2_NodeHelMethodDeclarations.h"
#define NodeHelper__ctor_m26001(__this, ___cmp, method) (( void (*) (NodeHelper_t5637 *, Object_t*, const MethodInfo*))NodeHelper__ctor_m25986_gshared)(__this, ___cmp, method)
// System.Void System.Collections.Generic.SortedDictionary`2/NodeHelper<System.String,System.String>::.cctor()
#define NodeHelper__cctor_m26002(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))NodeHelper__cctor_m25987_gshared)(__this /* static, unused */, method)
// System.Int32 System.Collections.Generic.SortedDictionary`2/NodeHelper<System.String,System.String>::Compare(TKey,System.Collections.Generic.RBTree/Node)
#define NodeHelper_Compare_m26003(__this, ___key, ___node, method) (( int32_t (*) (NodeHelper_t5637 *, String_t*, Node_t3952 *, const MethodInfo*))NodeHelper_Compare_m25988_gshared)(__this, ___key, ___node, method)
// System.Collections.Generic.RBTree/Node System.Collections.Generic.SortedDictionary`2/NodeHelper<System.String,System.String>::CreateNode(TKey)
#define NodeHelper_CreateNode_m26004(__this, ___key, method) (( Node_t3952 * (*) (NodeHelper_t5637 *, String_t*, const MethodInfo*))NodeHelper_CreateNode_m25989_gshared)(__this, ___key, method)
// System.Collections.Generic.SortedDictionary`2/NodeHelper<TKey,TValue> System.Collections.Generic.SortedDictionary`2/NodeHelper<System.String,System.String>::GetHelper(System.Collections.Generic.IComparer`1<TKey>)
#define NodeHelper_GetHelper_m26005(__this /* static, unused */, ___cmp, method) (( NodeHelper_t5637 * (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))NodeHelper_GetHelper_m25990_gshared)(__this /* static, unused */, ___cmp, method)
