#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.SortedDictionary`2/NodeHelper<System.String,System.String>
struct NodeHelper_t5636;
// System.Collections.Generic.IComparer`1<System.String>
struct IComparer_1_t5378;
// System.String
struct String_t;
// System.Collections.Generic.RBTree/Node
struct Node_t3951;

// System.Void System.Collections.Generic.SortedDictionary`2/NodeHelper<System.String,System.String>::.ctor(System.Collections.Generic.IComparer`1<TKey>)
// System.Collections.Generic.SortedDictionary`2/NodeHelper<System.Object,System.Object>
#include "System_System_Collections_Generic_SortedDictionary_2_NodeHelMethodDeclarations.h"
#define NodeHelper__ctor_m25982(__this, ___cmp, method) (( void (*) (NodeHelper_t5636 *, Object_t*, const MethodInfo*))NodeHelper__ctor_m25967_gshared)(__this, ___cmp, method)
// System.Void System.Collections.Generic.SortedDictionary`2/NodeHelper<System.String,System.String>::.cctor()
#define NodeHelper__cctor_m25983(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))NodeHelper__cctor_m25968_gshared)(__this /* static, unused */, method)
// System.Int32 System.Collections.Generic.SortedDictionary`2/NodeHelper<System.String,System.String>::Compare(TKey,System.Collections.Generic.RBTree/Node)
#define NodeHelper_Compare_m25984(__this, ___key, ___node, method) (( int32_t (*) (NodeHelper_t5636 *, String_t*, Node_t3951 *, const MethodInfo*))NodeHelper_Compare_m25969_gshared)(__this, ___key, ___node, method)
// System.Collections.Generic.RBTree/Node System.Collections.Generic.SortedDictionary`2/NodeHelper<System.String,System.String>::CreateNode(TKey)
#define NodeHelper_CreateNode_m25985(__this, ___key, method) (( Node_t3951 * (*) (NodeHelper_t5636 *, String_t*, const MethodInfo*))NodeHelper_CreateNode_m25970_gshared)(__this, ___key, method)
// System.Collections.Generic.SortedDictionary`2/NodeHelper<TKey,TValue> System.Collections.Generic.SortedDictionary`2/NodeHelper<System.String,System.String>::GetHelper(System.Collections.Generic.IComparer`1<TKey>)
#define NodeHelper_GetHelper_m25986(__this /* static, unused */, ___cmp, method) (( NodeHelper_t5636 * (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))NodeHelper_GetHelper_m25971_gshared)(__this /* static, unused */, ___cmp, method)
