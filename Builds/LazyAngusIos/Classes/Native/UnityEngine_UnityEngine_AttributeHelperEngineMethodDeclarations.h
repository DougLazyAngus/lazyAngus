#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.AttributeHelperEngine
struct AttributeHelperEngine_t1214;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t1198;

// System.Void UnityEngine.AttributeHelperEngine::.cctor()
extern "C" void AttributeHelperEngine__cctor_m6898 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type UnityEngine.AttributeHelperEngine::GetParentTypeDisallowingMultipleInclusion(System.Type)
extern "C" Type_t * AttributeHelperEngine_GetParentTypeDisallowingMultipleInclusion_m6899 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] UnityEngine.AttributeHelperEngine::GetRequiredComponents(System.Type)
extern "C" TypeU5BU5D_t1198* AttributeHelperEngine_GetRequiredComponents_m6900 (Object_t * __this /* static, unused */, Type_t * ___klass, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.AttributeHelperEngine::CheckIsEditorScript(System.Type)
extern "C" bool AttributeHelperEngine_CheckIsEditorScript_m6901 (Object_t * __this /* static, unused */, Type_t * ___klass, const MethodInfo* method) IL2CPP_METHOD_ATTR;
