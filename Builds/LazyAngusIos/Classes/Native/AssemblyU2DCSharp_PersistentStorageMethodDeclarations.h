#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PersistentStorage
struct PersistentStorage_t618;
// System.String
struct String_t;

// System.Void PersistentStorage::.ctor()
extern "C" void PersistentStorage__ctor_m3292 (PersistentStorage_t618 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PersistentStorage::Awake()
extern "C" void PersistentStorage_Awake_m3293 (PersistentStorage_t618 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PersistentStorage::ClearAll()
extern "C" void PersistentStorage_ClearAll_m3294 (PersistentStorage_t618 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PersistentStorage::SetFloatValue(System.String,System.Single)
extern "C" void PersistentStorage_SetFloatValue_m3295 (PersistentStorage_t618 * __this, String_t* ___name, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single PersistentStorage::GetFloatValue(System.String,System.Single)
extern "C" float PersistentStorage_GetFloatValue_m3296 (PersistentStorage_t618 * __this, String_t* ___name, float ___defaultValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PersistentStorage::SetIntValue(System.String,System.Int32)
extern "C" void PersistentStorage_SetIntValue_m3297 (PersistentStorage_t618 * __this, String_t* ___name, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PersistentStorage::GetIntValue(System.String,System.Int32)
extern "C" int32_t PersistentStorage_GetIntValue_m3298 (PersistentStorage_t618 * __this, String_t* ___name, int32_t ___defaultValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PersistentStorage::SetBoolValue(System.String,System.Boolean)
extern "C" void PersistentStorage_SetBoolValue_m3299 (PersistentStorage_t618 * __this, String_t* ___name, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PersistentStorage::GetBoolValue(System.String,System.Boolean)
extern "C" bool PersistentStorage_GetBoolValue_m3300 (PersistentStorage_t618 * __this, String_t* ___name, bool ___defaultValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
