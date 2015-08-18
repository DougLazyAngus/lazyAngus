#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.DelegateSerializationHolder/DelegateEntry
struct DelegateEntry_t4797;
// System.Delegate
struct Delegate_t724;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2919;

// System.Void System.DelegateSerializationHolder/DelegateEntry::.ctor(System.Delegate,System.String)
extern "C" void DelegateEntry__ctor_m19707 (DelegateEntry_t4797 * __this, Delegate_t724 * ___del, String_t* ___targetLabel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.DelegateSerializationHolder/DelegateEntry::DeserializeDelegate(System.Runtime.Serialization.SerializationInfo)
extern "C" Delegate_t724 * DelegateEntry_DeserializeDelegate_m19708 (DelegateEntry_t4797 * __this, SerializationInfo_t2919 * ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
