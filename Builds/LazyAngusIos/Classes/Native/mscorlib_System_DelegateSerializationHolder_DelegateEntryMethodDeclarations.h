#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.DelegateSerializationHolder/DelegateEntry
struct DelegateEntry_t4753;
// System.Delegate
struct Delegate_t676;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2871;

// System.Void System.DelegateSerializationHolder/DelegateEntry::.ctor(System.Delegate,System.String)
extern "C" void DelegateEntry__ctor_m19463 (DelegateEntry_t4753 * __this, Delegate_t676 * ___del, String_t* ___targetLabel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.DelegateSerializationHolder/DelegateEntry::DeserializeDelegate(System.Runtime.Serialization.SerializationInfo)
extern "C" Delegate_t676 * DelegateEntry_DeserializeDelegate_m19464 (DelegateEntry_t4753 * __this, SerializationInfo_t2871 * ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
