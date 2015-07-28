#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.Emit.FieldBuilder
struct FieldBuilder_t4458;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Reflection.Emit.UnmanagedMarshal
struct UnmanagedMarshal_t4457;
// System.Reflection.Module
struct Module_t4463;
// System.Object[]
struct ObjectU5BU5D_t627;
// System.Object
struct Object_t;
// System.Reflection.Binder
struct Binder_t2895;
// System.Globalization.CultureInfo
struct CultureInfo_t711;
// System.Exception
struct Exception_t57;
// System.Reflection.FieldAttributes
#include "mscorlib_System_Reflection_FieldAttributes.h"
// System.RuntimeFieldHandle
#include "mscorlib_System_RuntimeFieldHandle.h"
// System.Reflection.BindingFlags
#include "mscorlib_System_Reflection_BindingFlags.h"

// System.Reflection.FieldAttributes System.Reflection.Emit.FieldBuilder::get_Attributes()
extern "C" int32_t FieldBuilder_get_Attributes_m17371 (FieldBuilder_t4458 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.FieldBuilder::get_DeclaringType()
extern "C" Type_t * FieldBuilder_get_DeclaringType_m17372 (FieldBuilder_t4458 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.RuntimeFieldHandle System.Reflection.Emit.FieldBuilder::get_FieldHandle()
extern "C" RuntimeFieldHandle_t4288  FieldBuilder_get_FieldHandle_m17373 (FieldBuilder_t4458 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.FieldBuilder::get_FieldType()
extern "C" Type_t * FieldBuilder_get_FieldType_m17374 (FieldBuilder_t4458 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.FieldBuilder::get_Name()
extern "C" String_t* FieldBuilder_get_Name_m17375 (FieldBuilder_t4458 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.FieldBuilder::get_ReflectedType()
extern "C" Type_t * FieldBuilder_get_ReflectedType_m17376 (FieldBuilder_t4458 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.FieldBuilder::GetCustomAttributes(System.Boolean)
extern "C" ObjectU5BU5D_t627* FieldBuilder_GetCustomAttributes_m17377 (FieldBuilder_t4458 * __this, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.FieldBuilder::GetCustomAttributes(System.Type,System.Boolean)
extern "C" ObjectU5BU5D_t627* FieldBuilder_GetCustomAttributes_m17378 (FieldBuilder_t4458 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.Emit.FieldBuilder::GetValue(System.Object)
extern "C" Object_t * FieldBuilder_GetValue_m17379 (FieldBuilder_t4458 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.FieldBuilder::IsDefined(System.Type,System.Boolean)
extern "C" bool FieldBuilder_IsDefined_m17380 (FieldBuilder_t4458 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.FieldBuilder::GetFieldOffset()
extern "C" int32_t FieldBuilder_GetFieldOffset_m17381 (FieldBuilder_t4458 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.FieldBuilder::SetValue(System.Object,System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Globalization.CultureInfo)
extern "C" void FieldBuilder_SetValue_m17382 (FieldBuilder_t4458 * __this, Object_t * ___obj, Object_t * ___val, int32_t ___invokeAttr, Binder_t2895 * ___binder, CultureInfo_t711 * ___culture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.UnmanagedMarshal System.Reflection.Emit.FieldBuilder::get_UMarshal()
extern "C" UnmanagedMarshal_t4457 * FieldBuilder_get_UMarshal_m17383 (FieldBuilder_t4458 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Reflection.Emit.FieldBuilder::CreateNotSupportedException()
extern "C" Exception_t57 * FieldBuilder_CreateNotSupportedException_m17384 (FieldBuilder_t4458 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.Reflection.Emit.FieldBuilder::get_Module()
extern "C" Module_t4463 * FieldBuilder_get_Module_m17385 (FieldBuilder_t4458 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
