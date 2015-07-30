#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.DelegateSerializationHolder/DelegateEntry
struct DelegateEntry_t4749;
// System.Delegate
struct Delegate_t674;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2867;

// System.Void System.DelegateSerializationHolder/DelegateEntry::.ctor(System.Delegate,System.String)
extern "C" void DelegateEntry__ctor_m19435 (DelegateEntry_t4749 * __this, Delegate_t674 * ___del, String_t* ___targetLabel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.DelegateSerializationHolder/DelegateEntry::DeserializeDelegate(System.Runtime.Serialization.SerializationInfo)
extern "C" Delegate_t674 * DelegateEntry_DeserializeDelegate_m19436 (DelegateEntry_t4749 * __this, SerializationInfo_t2867 * ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
