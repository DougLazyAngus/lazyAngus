#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.UriTypeConverter
struct UriTypeConverter_t4546;
// System.Type
struct Type_t;
// System.ComponentModel.ITypeDescriptorContext
struct ITypeDescriptorContext_t4552;
// System.Object
struct Object_t;
// System.Globalization.CultureInfo
struct CultureInfo_t786;

// System.Void System.UriTypeConverter::.ctor()
extern "C" void UriTypeConverter__ctor_m17985 (UriTypeConverter_t4546 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.UriTypeConverter::CanConvert(System.Type)
extern "C" bool UriTypeConverter_CanConvert_m17986 (UriTypeConverter_t4546 * __this, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.UriTypeConverter::CanConvertFrom(System.ComponentModel.ITypeDescriptorContext,System.Type)
extern "C" bool UriTypeConverter_CanConvertFrom_m17987 (UriTypeConverter_t4546 * __this, Object_t * ___context, Type_t * ___sourceType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.UriTypeConverter::CanConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Type)
extern "C" bool UriTypeConverter_CanConvertTo_m17988 (UriTypeConverter_t4546 * __this, Object_t * ___context, Type_t * ___destinationType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.UriTypeConverter::ConvertFrom(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object)
extern "C" Object_t * UriTypeConverter_ConvertFrom_m17989 (UriTypeConverter_t4546 * __this, Object_t * ___context, CultureInfo_t786 * ___culture, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.UriTypeConverter::ConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object,System.Type)
extern "C" Object_t * UriTypeConverter_ConvertTo_m17990 (UriTypeConverter_t4546 * __this, Object_t * ___context, CultureInfo_t786 * ___culture, Object_t * ___value, Type_t * ___destinationType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.UriTypeConverter::IsValid(System.ComponentModel.ITypeDescriptorContext,System.Object)
extern "C" bool UriTypeConverter_IsValid_m17991 (UriTypeConverter_t4546 * __this, Object_t * ___context, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
