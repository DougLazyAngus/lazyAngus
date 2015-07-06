#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.DelegateSerializationHolder/DelegateEntry
struct DelegateEntry_t2692;
// System.Delegate
struct Delegate_t562;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1220;

// System.Void System.DelegateSerializationHolder/DelegateEntry::.ctor(System.Delegate,System.String)
extern "C" void DelegateEntry__ctor_m15264 (DelegateEntry_t2692 * __this, Delegate_t562 * ___del, String_t* ___targetLabel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.DelegateSerializationHolder/DelegateEntry::DeserializeDelegate(System.Runtime.Serialization.SerializationInfo)
extern "C" Delegate_t562 * DelegateEntry_DeserializeDelegate_m15265 (DelegateEntry_t2692 * __this, SerializationInfo_t1220 * ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
