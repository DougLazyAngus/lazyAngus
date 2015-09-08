#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.SortedDictionary`2/NodeHelper<System.String,System.String>
struct NodeHelper_t6187;
// System.Collections.Generic.IComparer`1<System.String>
struct IComparer_1_t5767;
// System.String
struct String_t;
// System.Collections.Generic.RBTree/Node
struct Node_t4205;

// System.Void System.Collections.Generic.SortedDictionary`2/NodeHelper<System.String,System.String>::.ctor(System.Collections.Generic.IComparer`1<TKey>)
// System.Collections.Generic.SortedDictionary`2/NodeHelper<System.Object,System.Object>
#include "System_System_Collections_Generic_SortedDictionary_2_NodeHelMethodDeclarations.h"
#define NodeHelper__ctor_m30357(__this, ___cmp, method) (( void (*) (NodeHelper_t6187 *, Object_t*, const MethodInfo*))NodeHelper__ctor_m30342_gshared)(__this, ___cmp, method)
// System.Void System.Collections.Generic.SortedDictionary`2/NodeHelper<System.String,System.String>::.cctor()
#define NodeHelper__cctor_m30358(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))NodeHelper__cctor_m30343_gshared)(__this /* static, unused */, method)
// System.Int32 System.Collections.Generic.SortedDictionary`2/NodeHelper<System.String,System.String>::Compare(TKey,System.Collections.Generic.RBTree/Node)
#define NodeHelper_Compare_m30359(__this, ___key, ___node, method) (( int32_t (*) (NodeHelper_t6187 *, String_t*, Node_t4205 *, const MethodInfo*))NodeHelper_Compare_m30344_gshared)(__this, ___key, ___node, method)
// System.Collections.Generic.RBTree/Node System.Collections.Generic.SortedDictionary`2/NodeHelper<System.String,System.String>::CreateNode(TKey)
#define NodeHelper_CreateNode_m30360(__this, ___key, method) (( Node_t4205 * (*) (NodeHelper_t6187 *, String_t*, const MethodInfo*))NodeHelper_CreateNode_m30345_gshared)(__this, ___key, method)
// System.Collections.Generic.SortedDictionary`2/NodeHelper<TKey,TValue> System.Collections.Generic.SortedDictionary`2/NodeHelper<System.String,System.String>::GetHelper(System.Collections.Generic.IComparer`1<TKey>)
#define NodeHelper_GetHelper_m30361(__this /* static, unused */, ___cmp, method) (( NodeHelper_t6187 * (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))NodeHelper_GetHelper_m30346_gshared)(__this /* static, unused */, ___cmp, method)
