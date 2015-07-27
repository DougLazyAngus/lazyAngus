#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.SortedDictionary`2/Node<System.String,System.String>
struct Node_t3627;
// System.String
struct String_t;
// System.Collections.Generic.RBTree/Node
struct Node_t1935;
// System.Collections.Generic.KeyValuePair`2<System.String,System.String>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_1.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.SortedDictionary`2/Node<System.String,System.String>::.ctor(TKey)
// System.Collections.Generic.SortedDictionary`2/Node<System.Object,System.Object>
#include "System_System_Collections_Generic_SortedDictionary_2_Node_geMethodDeclarations.h"
#define Node__ctor_m21791(__this, ___key, method) (( void (*) (Node_t3627 *, String_t*, const MethodInfo*))Node__ctor_m21648_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.SortedDictionary`2/Node<System.String,System.String>::.ctor(TKey,TValue)
#define Node__ctor_m21792(__this, ___key, ___value, method) (( void (*) (Node_t3627 *, String_t*, String_t*, const MethodInfo*))Node__ctor_m21649_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.SortedDictionary`2/Node<System.String,System.String>::SwapValue(System.Collections.Generic.RBTree/Node)
#define Node_SwapValue_m21793(__this, ___other, method) (( void (*) (Node_t3627 *, Node_t1935 *, const MethodInfo*))Node_SwapValue_m21650_gshared)(__this, ___other, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.SortedDictionary`2/Node<System.String,System.String>::AsKV()
#define Node_AsKV_m21794(__this, method) (( KeyValuePair_2_t262  (*) (Node_t3627 *, const MethodInfo*))Node_AsKV_m21651_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.SortedDictionary`2/Node<System.String,System.String>::AsDE()
#define Node_AsDE_m21795(__this, method) (( DictionaryEntry_t2181  (*) (Node_t3627 *, const MethodInfo*))Node_AsDE_m21652_gshared)(__this, method)
