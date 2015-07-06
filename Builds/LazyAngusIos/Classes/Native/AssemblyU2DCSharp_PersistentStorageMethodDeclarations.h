#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PersistentStorage
struct PersistentStorage_t469;
// System.String
struct String_t;

// System.Void PersistentStorage::.ctor()
extern "C" void PersistentStorage__ctor_m2191 (PersistentStorage_t469 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PersistentStorage::.cctor()
extern "C" void PersistentStorage__cctor_m2192 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PersistentStorage::FullPathFromPartialPath(System.String)
extern "C" String_t* PersistentStorage_FullPathFromPartialPath_m2193 (PersistentStorage_t469 * __this, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PersistentStorage::Awake()
extern "C" void PersistentStorage_Awake_m2194 (PersistentStorage_t469 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PersistentStorage::ReadFileAsText(System.String)
extern "C" String_t* PersistentStorage_ReadFileAsText_m2195 (PersistentStorage_t469 * __this, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PersistentStorage::WriteTextToFile(System.String,System.String)
extern "C" void PersistentStorage_WriteTextToFile_m2196 (PersistentStorage_t469 * __this, String_t* ___path, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PersistentStorage::SetIntValue(System.String,System.Int32)
extern "C" void PersistentStorage_SetIntValue_m2197 (PersistentStorage_t469 * __this, String_t* ___name, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PersistentStorage::GetIntValue(System.String,System.Int32)
extern "C" int32_t PersistentStorage_GetIntValue_m2198 (PersistentStorage_t469 * __this, String_t* ___name, int32_t ___defaultValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PersistentStorage::SetBoolValue(System.String,System.Boolean)
extern "C" void PersistentStorage_SetBoolValue_m2199 (PersistentStorage_t469 * __this, String_t* ___name, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PersistentStorage::GetBoolValue(System.String,System.Boolean)
extern "C" bool PersistentStorage_GetBoolValue_m2200 (PersistentStorage_t469 * __this, String_t* ___name, bool ___defaultValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PersistentStorage::SaveValueStore()
extern "C" void PersistentStorage_SaveValueStore_m2201 (PersistentStorage_t469 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PersistentStorage::LoadValueStore()
extern "C" void PersistentStorage_LoadValueStore_m2202 (PersistentStorage_t469 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
