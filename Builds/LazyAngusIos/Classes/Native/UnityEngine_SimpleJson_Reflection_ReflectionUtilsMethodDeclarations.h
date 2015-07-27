#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// SimpleJson.Reflection.ReflectionUtils
struct ReflectionUtils_t1209;
// System.Collections.Generic.IEnumerable`1<System.Reflection.ConstructorInfo>
struct IEnumerable_1_t1296;
// System.Type
struct Type_t;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t1203;
// System.Type[]
struct TypeU5BU5D_t1199;
// System.Collections.Generic.IEnumerable`1<System.Reflection.PropertyInfo>
struct IEnumerable_1_t1297;
// System.Collections.Generic.IEnumerable`1<System.Reflection.FieldInfo>
struct IEnumerable_1_t1298;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate
struct ConstructorDelegate_t1202;
// SimpleJson.Reflection.ReflectionUtils/GetDelegate
struct GetDelegate_t1200;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// SimpleJson.Reflection.ReflectionUtils/SetDelegate
struct SetDelegate_t1201;

// System.Void SimpleJson.Reflection.ReflectionUtils::.cctor()
extern "C" void ReflectionUtils__cctor_m6886 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<System.Reflection.ConstructorInfo> SimpleJson.Reflection.ReflectionUtils::GetConstructors(System.Type)
extern "C" Object_t* ReflectionUtils_GetConstructors_m6887 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo SimpleJson.Reflection.ReflectionUtils::GetConstructorInfo(System.Type,System.Type[])
extern "C" ConstructorInfo_t1203 * ReflectionUtils_GetConstructorInfo_m6888 (Object_t * __this /* static, unused */, Type_t * ___type, TypeU5BU5D_t1199* ___argsType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<System.Reflection.PropertyInfo> SimpleJson.Reflection.ReflectionUtils::GetProperties(System.Type)
extern "C" Object_t* ReflectionUtils_GetProperties_m6889 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<System.Reflection.FieldInfo> SimpleJson.Reflection.ReflectionUtils::GetFields(System.Type)
extern "C" Object_t* ReflectionUtils_GetFields_m6890 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo SimpleJson.Reflection.ReflectionUtils::GetGetterMethodInfo(System.Reflection.PropertyInfo)
extern "C" MethodInfo_t * ReflectionUtils_GetGetterMethodInfo_m6891 (Object_t * __this /* static, unused */, PropertyInfo_t * ___propertyInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo SimpleJson.Reflection.ReflectionUtils::GetSetterMethodInfo(System.Reflection.PropertyInfo)
extern "C" MethodInfo_t * ReflectionUtils_GetSetterMethodInfo_m6892 (Object_t * __this /* static, unused */, PropertyInfo_t * ___propertyInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate SimpleJson.Reflection.ReflectionUtils::GetContructor(System.Type,System.Type[])
extern "C" ConstructorDelegate_t1202 * ReflectionUtils_GetContructor_m6893 (Object_t * __this /* static, unused */, Type_t * ___type, TypeU5BU5D_t1199* ___argsType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate SimpleJson.Reflection.ReflectionUtils::GetConstructorByReflection(System.Reflection.ConstructorInfo)
extern "C" ConstructorDelegate_t1202 * ReflectionUtils_GetConstructorByReflection_m6894 (Object_t * __this /* static, unused */, ConstructorInfo_t1203 * ___constructorInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate SimpleJson.Reflection.ReflectionUtils::GetConstructorByReflection(System.Type,System.Type[])
extern "C" ConstructorDelegate_t1202 * ReflectionUtils_GetConstructorByReflection_m6895 (Object_t * __this /* static, unused */, Type_t * ___type, TypeU5BU5D_t1199* ___argsType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJson.Reflection.ReflectionUtils/GetDelegate SimpleJson.Reflection.ReflectionUtils::GetGetMethod(System.Reflection.PropertyInfo)
extern "C" GetDelegate_t1200 * ReflectionUtils_GetGetMethod_m6896 (Object_t * __this /* static, unused */, PropertyInfo_t * ___propertyInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJson.Reflection.ReflectionUtils/GetDelegate SimpleJson.Reflection.ReflectionUtils::GetGetMethod(System.Reflection.FieldInfo)
extern "C" GetDelegate_t1200 * ReflectionUtils_GetGetMethod_m6897 (Object_t * __this /* static, unused */, FieldInfo_t * ___fieldInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJson.Reflection.ReflectionUtils/GetDelegate SimpleJson.Reflection.ReflectionUtils::GetGetMethodByReflection(System.Reflection.PropertyInfo)
extern "C" GetDelegate_t1200 * ReflectionUtils_GetGetMethodByReflection_m6898 (Object_t * __this /* static, unused */, PropertyInfo_t * ___propertyInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJson.Reflection.ReflectionUtils/GetDelegate SimpleJson.Reflection.ReflectionUtils::GetGetMethodByReflection(System.Reflection.FieldInfo)
extern "C" GetDelegate_t1200 * ReflectionUtils_GetGetMethodByReflection_m6899 (Object_t * __this /* static, unused */, FieldInfo_t * ___fieldInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJson.Reflection.ReflectionUtils/SetDelegate SimpleJson.Reflection.ReflectionUtils::GetSetMethod(System.Reflection.PropertyInfo)
extern "C" SetDelegate_t1201 * ReflectionUtils_GetSetMethod_m6900 (Object_t * __this /* static, unused */, PropertyInfo_t * ___propertyInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJson.Reflection.ReflectionUtils/SetDelegate SimpleJson.Reflection.ReflectionUtils::GetSetMethod(System.Reflection.FieldInfo)
extern "C" SetDelegate_t1201 * ReflectionUtils_GetSetMethod_m6901 (Object_t * __this /* static, unused */, FieldInfo_t * ___fieldInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJson.Reflection.ReflectionUtils/SetDelegate SimpleJson.Reflection.ReflectionUtils::GetSetMethodByReflection(System.Reflection.PropertyInfo)
extern "C" SetDelegate_t1201 * ReflectionUtils_GetSetMethodByReflection_m6902 (Object_t * __this /* static, unused */, PropertyInfo_t * ___propertyInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJson.Reflection.ReflectionUtils/SetDelegate SimpleJson.Reflection.ReflectionUtils::GetSetMethodByReflection(System.Reflection.FieldInfo)
extern "C" SetDelegate_t1201 * ReflectionUtils_GetSetMethodByReflection_m6903 (Object_t * __this /* static, unused */, FieldInfo_t * ___fieldInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
