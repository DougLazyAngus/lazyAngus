#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.DelegateSerializationHolder/DelegateEntry
struct DelegateEntry_t4742;
// System.Delegate
struct Delegate_t667;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2861;

// System.Void System.DelegateSerializationHolder/DelegateEntry::.ctor(System.Delegate,System.String)
extern "C" void DelegateEntry__ctor_m19388 (DelegateEntry_t4742 * __this, Delegate_t667 * ___del, String_t* ___targetLabel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.DelegateSerializationHolder/DelegateEntry::DeserializeDelegate(System.Runtime.Serialization.SerializationInfo)
extern "C" Delegate_t667 * DelegateEntry_DeserializeDelegate_m19389 (DelegateEntry_t4742 * __this, SerializationInfo_t2861 * ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
