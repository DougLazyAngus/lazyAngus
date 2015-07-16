﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.SortedDictionary`2/Node<System.Object,System.Object>
struct Node_t3541;
// System.Object
struct Object_t;
// System.Collections.Generic.RBTree/Node
struct Node_t1433;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.SortedDictionary`2/Node<System.Object,System.Object>::.ctor(TKey)
extern "C" void Node__ctor_m20575_gshared (Node_t3541 * __this, Object_t * ___key, const MethodInfo* method);
#define Node__ctor_m20575(__this, ___key, method) (( void (*) (Node_t3541 *, Object_t *, const MethodInfo*))Node__ctor_m20575_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.SortedDictionary`2/Node<System.Object,System.Object>::.ctor(TKey,TValue)
extern "C" void Node__ctor_m20576_gshared (Node_t3541 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Node__ctor_m20576(__this, ___key, ___value, method) (( void (*) (Node_t3541 *, Object_t *, Object_t *, const MethodInfo*))Node__ctor_m20576_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.SortedDictionary`2/Node<System.Object,System.Object>::SwapValue(System.Collections.Generic.RBTree/Node)
extern "C" void Node_SwapValue_m20577_gshared (Node_t3541 * __this, Node_t1433 * ___other, const MethodInfo* method);
#define Node_SwapValue_m20577(__this, ___other, method) (( void (*) (Node_t3541 *, Node_t1433 *, const MethodInfo*))Node_SwapValue_m20577_gshared)(__this, ___other, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.SortedDictionary`2/Node<System.Object,System.Object>::AsKV()
extern "C" KeyValuePair_2_t40  Node_AsKV_m20578_gshared (Node_t3541 * __this, const MethodInfo* method);
#define Node_AsKV_m20578(__this, method) (( KeyValuePair_2_t40  (*) (Node_t3541 *, const MethodInfo*))Node_AsKV_m20578_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.SortedDictionary`2/Node<System.Object,System.Object>::AsDE()
extern "C" DictionaryEntry_t1710  Node_AsDE_m20579_gshared (Node_t3541 * __this, const MethodInfo* method);
#define Node_AsDE_m20579(__this, method) (( DictionaryEntry_t1710  (*) (Node_t3541 *, const MethodInfo*))Node_AsDE_m20579_gshared)(__this, method)
