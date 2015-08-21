#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.SortedDictionary`2/NodeHelper<System.String,System.String>
struct NodeHelper_t5634;
// System.Collections.Generic.IComparer`1<System.String>
struct IComparer_1_t5376;
// System.String
struct String_t;
// System.Collections.Generic.RBTree/Node
struct Node_t3949;

// System.Void System.Collections.Generic.SortedDictionary`2/NodeHelper<System.String,System.String>::.ctor(System.Collections.Generic.IComparer`1<TKey>)
// System.Collections.Generic.SortedDictionary`2/NodeHelper<System.Object,System.Object>
#include "System_System_Collections_Generic_SortedDictionary_2_NodeHelMethodDeclarations.h"
#define NodeHelper__ctor_m25969(__this, ___cmp, method) (( void (*) (NodeHelper_t5634 *, Object_t*, const MethodInfo*))NodeHelper__ctor_m25954_gshared)(__this, ___cmp, method)
// System.Void System.Collections.Generic.SortedDictionary`2/NodeHelper<System.String,System.String>::.cctor()
#define NodeHelper__cctor_m25970(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))NodeHelper__cctor_m25955_gshared)(__this /* static, unused */, method)
// System.Int32 System.Collections.Generic.SortedDictionary`2/NodeHelper<System.String,System.String>::Compare(TKey,System.Collections.Generic.RBTree/Node)
#define NodeHelper_Compare_m25971(__this, ___key, ___node, method) (( int32_t (*) (NodeHelper_t5634 *, String_t*, Node_t3949 *, const MethodInfo*))NodeHelper_Compare_m25956_gshared)(__this, ___key, ___node, method)
// System.Collections.Generic.RBTree/Node System.Collections.Generic.SortedDictionary`2/NodeHelper<System.String,System.String>::CreateNode(TKey)
#define NodeHelper_CreateNode_m25972(__this, ___key, method) (( Node_t3949 * (*) (NodeHelper_t5634 *, String_t*, const MethodInfo*))NodeHelper_CreateNode_m25957_gshared)(__this, ___key, method)
// System.Collections.Generic.SortedDictionary`2/NodeHelper<TKey,TValue> System.Collections.Generic.SortedDictionary`2/NodeHelper<System.String,System.String>::GetHelper(System.Collections.Generic.IComparer`1<TKey>)
#define NodeHelper_GetHelper_m25973(__this /* static, unused */, ___cmp, method) (( NodeHelper_t5634 * (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))NodeHelper_GetHelper_m25958_gshared)(__this /* static, unused */, ___cmp, method)
