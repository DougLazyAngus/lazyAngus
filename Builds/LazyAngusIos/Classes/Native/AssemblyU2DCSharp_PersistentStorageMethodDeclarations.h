#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PersistentStorage
struct PersistentStorage_t523;
// System.String
struct String_t;

// System.Void PersistentStorage::.ctor()
extern "C" void PersistentStorage__ctor_m2742 (PersistentStorage_t523 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PersistentStorage::.cctor()
extern "C" void PersistentStorage__cctor_m2743 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PersistentStorage::FullPathFromPartialPath(System.String)
extern "C" String_t* PersistentStorage_FullPathFromPartialPath_m2744 (PersistentStorage_t523 * __this, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PersistentStorage::Awake()
extern "C" void PersistentStorage_Awake_m2745 (PersistentStorage_t523 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PersistentStorage::ReadFileAsText(System.String)
extern "C" String_t* PersistentStorage_ReadFileAsText_m2746 (PersistentStorage_t523 * __this, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PersistentStorage::WriteTextToFile(System.String,System.String)
extern "C" void PersistentStorage_WriteTextToFile_m2747 (PersistentStorage_t523 * __this, String_t* ___path, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PersistentStorage::SetFloatValue(System.String,System.Single)
extern "C" void PersistentStorage_SetFloatValue_m2748 (PersistentStorage_t523 * __this, String_t* ___name, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single PersistentStorage::GetFloatValue(System.String,System.Single)
extern "C" float PersistentStorage_GetFloatValue_m2749 (PersistentStorage_t523 * __this, String_t* ___name, float ___defaultValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PersistentStorage::SetIntValue(System.String,System.Int32)
extern "C" void PersistentStorage_SetIntValue_m2750 (PersistentStorage_t523 * __this, String_t* ___name, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PersistentStorage::GetIntValue(System.String,System.Int32)
extern "C" int32_t PersistentStorage_GetIntValue_m2751 (PersistentStorage_t523 * __this, String_t* ___name, int32_t ___defaultValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PersistentStorage::SetBoolValue(System.String,System.Boolean)
extern "C" void PersistentStorage_SetBoolValue_m2752 (PersistentStorage_t523 * __this, String_t* ___name, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PersistentStorage::GetBoolValue(System.String,System.Boolean)
extern "C" bool PersistentStorage_GetBoolValue_m2753 (PersistentStorage_t523 * __this, String_t* ___name, bool ___defaultValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PersistentStorage::SaveValueStore()
extern "C" void PersistentStorage_SaveValueStore_m2754 (PersistentStorage_t523 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PersistentStorage::LoadValueStore()
extern "C" void PersistentStorage_LoadValueStore_m2755 (PersistentStorage_t523 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
