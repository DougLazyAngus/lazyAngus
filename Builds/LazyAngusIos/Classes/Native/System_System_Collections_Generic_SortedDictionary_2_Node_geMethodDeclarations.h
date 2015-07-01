#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.SortedDictionary`2/Node<System.Object,System.Object>
struct Node_t3494;
// System.Object
struct Object_t;
// System.Collections.Generic.RBTree/Node
struct Node_t1386;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.SortedDictionary`2/Node<System.Object,System.Object>::.ctor(TKey)
extern "C" void Node__ctor_m20247_gshared (Node_t3494 * __this, Object_t * ___key, const MethodInfo* method);
#define Node__ctor_m20247(__this, ___key, method) (( void (*) (Node_t3494 *, Object_t *, const MethodInfo*))Node__ctor_m20247_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.SortedDictionary`2/Node<System.Object,System.Object>::.ctor(TKey,TValue)
extern "C" void Node__ctor_m20248_gshared (Node_t3494 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Node__ctor_m20248(__this, ___key, ___value, method) (( void (*) (Node_t3494 *, Object_t *, Object_t *, const MethodInfo*))Node__ctor_m20248_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.SortedDictionary`2/Node<System.Object,System.Object>::SwapValue(System.Collections.Generic.RBTree/Node)
extern "C" void Node_SwapValue_m20249_gshared (Node_t3494 * __this, Node_t1386 * ___other, const MethodInfo* method);
#define Node_SwapValue_m20249(__this, ___other, method) (( void (*) (Node_t3494 *, Node_t1386 *, const MethodInfo*))Node_SwapValue_m20249_gshared)(__this, ___other, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.SortedDictionary`2/Node<System.Object,System.Object>::AsKV()
extern "C" KeyValuePair_2_t40  Node_AsKV_m20250_gshared (Node_t3494 * __this, const MethodInfo* method);
#define Node_AsKV_m20250(__this, method) (( KeyValuePair_2_t40  (*) (Node_t3494 *, const MethodInfo*))Node_AsKV_m20250_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.SortedDictionary`2/Node<System.Object,System.Object>::AsDE()
extern "C" DictionaryEntry_t1663  Node_AsDE_m20251_gshared (Node_t3494 * __this, const MethodInfo* method);
#define Node_AsDE_m20251(__this, method) (( DictionaryEntry_t1663  (*) (Node_t3494 *, const MethodInfo*))Node_AsDE_m20251_gshared)(__this, method)
