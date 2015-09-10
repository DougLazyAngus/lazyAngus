#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.UriTypeConverter
struct UriTypeConverter_t4553;
// System.Type
struct Type_t;
// System.ComponentModel.ITypeDescriptorContext
struct ITypeDescriptorContext_t4559;
// System.Object
struct Object_t;
// System.Globalization.CultureInfo
struct CultureInfo_t793;

// System.Void System.UriTypeConverter::.ctor()
extern "C" void UriTypeConverter__ctor_m18042 (UriTypeConverter_t4553 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.UriTypeConverter::CanConvert(System.Type)
extern "C" bool UriTypeConverter_CanConvert_m18043 (UriTypeConverter_t4553 * __this, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.UriTypeConverter::CanConvertFrom(System.ComponentModel.ITypeDescriptorContext,System.Type)
extern "C" bool UriTypeConverter_CanConvertFrom_m18044 (UriTypeConverter_t4553 * __this, Object_t * ___context, Type_t * ___sourceType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.UriTypeConverter::CanConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Type)
extern "C" bool UriTypeConverter_CanConvertTo_m18045 (UriTypeConverter_t4553 * __this, Object_t * ___context, Type_t * ___destinationType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.UriTypeConverter::ConvertFrom(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object)
extern "C" Object_t * UriTypeConverter_ConvertFrom_m18046 (UriTypeConverter_t4553 * __this, Object_t * ___context, CultureInfo_t793 * ___culture, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.UriTypeConverter::ConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object,System.Type)
extern "C" Object_t * UriTypeConverter_ConvertTo_m18047 (UriTypeConverter_t4553 * __this, Object_t * ___context, CultureInfo_t793 * ___culture, Object_t * ___value, Type_t * ___destinationType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.UriTypeConverter::IsValid(System.ComponentModel.ITypeDescriptorContext,System.Object)
extern "C" bool UriTypeConverter_IsValid_m18048 (UriTypeConverter_t4553 * __this, Object_t * ___context, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
