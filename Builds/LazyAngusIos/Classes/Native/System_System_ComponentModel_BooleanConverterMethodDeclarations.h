#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.ComponentModel.BooleanConverter
struct BooleanConverter_t4235;
// System.ComponentModel.ITypeDescriptorContext
struct ITypeDescriptorContext_t4559;
// System.Type
struct Type_t;
// System.Object
struct Object_t;
// System.Globalization.CultureInfo
struct CultureInfo_t793;
// System.ComponentModel.TypeConverter/StandardValuesCollection
struct StandardValuesCollection_t4242;

// System.Void System.ComponentModel.BooleanConverter::.ctor()
extern "C" void BooleanConverter__ctor_m15817 (BooleanConverter_t4235 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.BooleanConverter::CanConvertFrom(System.ComponentModel.ITypeDescriptorContext,System.Type)
extern "C" bool BooleanConverter_CanConvertFrom_m15818 (BooleanConverter_t4235 * __this, Object_t * ___context, Type_t * ___sourceType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.BooleanConverter::ConvertFrom(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object)
extern "C" Object_t * BooleanConverter_ConvertFrom_m15819 (BooleanConverter_t4235 * __this, Object_t * ___context, CultureInfo_t793 * ___culture, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.TypeConverter/StandardValuesCollection System.ComponentModel.BooleanConverter::GetStandardValues(System.ComponentModel.ITypeDescriptorContext)
extern "C" StandardValuesCollection_t4242 * BooleanConverter_GetStandardValues_m15820 (BooleanConverter_t4235 * __this, Object_t * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.BooleanConverter::GetStandardValuesExclusive(System.ComponentModel.ITypeDescriptorContext)
extern "C" bool BooleanConverter_GetStandardValuesExclusive_m15821 (BooleanConverter_t4235 * __this, Object_t * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.BooleanConverter::GetStandardValuesSupported(System.ComponentModel.ITypeDescriptorContext)
extern "C" bool BooleanConverter_GetStandardValuesSupported_m15822 (BooleanConverter_t4235 * __this, Object_t * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
