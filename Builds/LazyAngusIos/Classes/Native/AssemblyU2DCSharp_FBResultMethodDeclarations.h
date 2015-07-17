#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// FBResult
struct FBResult_t239;
// UnityEngine.Texture2D
struct Texture2D_t65;
// System.String
struct String_t;
// UnityEngine.WWW
struct WWW_t223;

// System.Void FBResult::.ctor(UnityEngine.WWW)
extern "C" void FBResult__ctor_m2018 (FBResult_t239 * __this, WWW_t223 * ___www, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBResult::.ctor(System.String,System.String)
extern "C" void FBResult__ctor_m2019 (FBResult_t239 * __this, String_t* ___data, String_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D FBResult::get_Texture()
extern "C" Texture2D_t65 * FBResult_get_Texture_m2020 (FBResult_t239 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String FBResult::get_Text()
extern "C" String_t* FBResult_get_Text_m2021 (FBResult_t239 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String FBResult::get_Error()
extern "C" String_t* FBResult_get_Error_m2022 (FBResult_t239 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBResult::Dispose()
extern "C" void FBResult_Dispose_m2023 (FBResult_t239 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBResult::Finalize()
extern "C" void FBResult_Finalize_m2024 (FBResult_t239 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
