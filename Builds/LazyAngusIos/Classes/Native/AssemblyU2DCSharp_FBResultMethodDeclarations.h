#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// FBResult
struct FBResult_t213;
// UnityEngine.Texture2D
struct Texture2D_t65;
// System.String
struct String_t;
// UnityEngine.WWW
struct WWW_t196;

// System.Void FBResult::.ctor(UnityEngine.WWW)
extern "C" void FBResult__ctor_m1553 (FBResult_t213 * __this, WWW_t196 * ___www, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBResult::.ctor(System.String,System.String)
extern "C" void FBResult__ctor_m1554 (FBResult_t213 * __this, String_t* ___data, String_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D FBResult::get_Texture()
extern "C" Texture2D_t65 * FBResult_get_Texture_m1555 (FBResult_t213 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String FBResult::get_Text()
extern "C" String_t* FBResult_get_Text_m1556 (FBResult_t213 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String FBResult::get_Error()
extern "C" String_t* FBResult_get_Error_m1557 (FBResult_t213 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBResult::Dispose()
extern "C" void FBResult_Dispose_m1558 (FBResult_t213 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBResult::Finalize()
extern "C" void FBResult_Finalize_m1559 (FBResult_t213 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
