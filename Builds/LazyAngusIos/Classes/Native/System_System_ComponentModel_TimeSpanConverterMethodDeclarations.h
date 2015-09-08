#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.ComponentModel.TimeSpanConverter
struct TimeSpanConverter_t4257;
// System.ComponentModel.ITypeDescriptorContext
struct ITypeDescriptorContext_t4549;
// System.Type
struct Type_t;
// System.Object
struct Object_t;
// System.Globalization.CultureInfo
struct CultureInfo_t783;

// System.Void System.ComponentModel.TimeSpanConverter::.ctor()
extern "C" void TimeSpanConverter__ctor_m15947 (TimeSpanConverter_t4257 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.TimeSpanConverter::CanConvertFrom(System.ComponentModel.ITypeDescriptorContext,System.Type)
extern "C" bool TimeSpanConverter_CanConvertFrom_m15948 (TimeSpanConverter_t4257 * __this, Object_t * ___context, Type_t * ___sourceType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.TimeSpanConverter::CanConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Type)
extern "C" bool TimeSpanConverter_CanConvertTo_m15949 (TimeSpanConverter_t4257 * __this, Object_t * ___context, Type_t * ___destinationType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.TimeSpanConverter::ConvertFrom(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object)
extern "C" Object_t * TimeSpanConverter_ConvertFrom_m15950 (TimeSpanConverter_t4257 * __this, Object_t * ___context, CultureInfo_t783 * ___culture, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.TimeSpanConverter::ConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object,System.Type)
extern "C" Object_t * TimeSpanConverter_ConvertTo_m15951 (TimeSpanConverter_t4257 * __this, Object_t * ___context, CultureInfo_t783 * ___culture, Object_t * ___value, Type_t * ___destinationType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
