#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.DelegateSerializationHolder/DelegateEntry
struct DelegateEntry_t2770;
// System.Delegate
struct Delegate_t621;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1300;

// System.Void System.DelegateSerializationHolder/DelegateEntry::.ctor(System.Delegate,System.String)
extern "C" void DelegateEntry__ctor_m16026 (DelegateEntry_t2770 * __this, Delegate_t621 * ___del, String_t* ___targetLabel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.DelegateSerializationHolder/DelegateEntry::DeserializeDelegate(System.Runtime.Serialization.SerializationInfo)
extern "C" Delegate_t621 * DelegateEntry_DeserializeDelegate_m16027 (DelegateEntry_t2770 * __this, SerializationInfo_t1300 * ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
