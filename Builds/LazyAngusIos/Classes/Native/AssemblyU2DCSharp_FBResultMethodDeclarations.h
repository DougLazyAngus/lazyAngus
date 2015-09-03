#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// FBResult
struct FBResult_t281;
// UnityEngine.Texture2D
struct Texture2D_t108;
// System.String
struct String_t;
// UnityEngine.WWW
struct WWW_t265;

// System.Void FBResult::.ctor(UnityEngine.WWW)
extern "C" void FBResult__ctor_m2293 (FBResult_t281 * __this, WWW_t265 * ___www, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBResult::.ctor(System.String,System.String)
extern "C" void FBResult__ctor_m2294 (FBResult_t281 * __this, String_t* ___data, String_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D FBResult::get_Texture()
extern "C" Texture2D_t108 * FBResult_get_Texture_m2295 (FBResult_t281 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String FBResult::get_Text()
extern "C" String_t* FBResult_get_Text_m2296 (FBResult_t281 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String FBResult::get_Error()
extern "C" String_t* FBResult_get_Error_m2297 (FBResult_t281 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBResult::Dispose()
extern "C" void FBResult_Dispose_m2298 (FBResult_t281 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBResult::Finalize()
extern "C" void FBResult_Finalize_m2299 (FBResult_t281 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
