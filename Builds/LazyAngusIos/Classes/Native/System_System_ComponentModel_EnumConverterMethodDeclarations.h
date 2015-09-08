#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.ComponentModel.EnumConverter
struct EnumConverter_t4246;
// System.Collections.IComparer
struct IComparer_t3320;
// System.Type
struct Type_t;
// System.ComponentModel.TypeConverter/StandardValuesCollection
struct StandardValuesCollection_t4235;
// System.ComponentModel.ITypeDescriptorContext
struct ITypeDescriptorContext_t4552;
// System.Object
struct Object_t;
// System.Globalization.CultureInfo
struct CultureInfo_t786;
// System.ArgumentException
struct ArgumentException_t729;

// System.Void System.ComponentModel.EnumConverter::.ctor(System.Type)
extern "C" void EnumConverter__ctor_m15824 (EnumConverter_t4246 * __this, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.EnumConverter::CanConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Type)
extern "C" bool EnumConverter_CanConvertTo_m15825 (EnumConverter_t4246 * __this, Object_t * ___context, Type_t * ___destinationType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.EnumConverter::ConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object,System.Type)
extern "C" Object_t * EnumConverter_ConvertTo_m15826 (EnumConverter_t4246 * __this, Object_t * ___context, CultureInfo_t786 * ___culture, Object_t * ___value, Type_t * ___destinationType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.EnumConverter::CanConvertFrom(System.ComponentModel.ITypeDescriptorContext,System.Type)
extern "C" bool EnumConverter_CanConvertFrom_m15827 (EnumConverter_t4246 * __this, Object_t * ___context, Type_t * ___sourceType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.EnumConverter::ConvertFrom(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object)
extern "C" Object_t * EnumConverter_ConvertFrom_m15828 (EnumConverter_t4246 * __this, Object_t * ___context, CultureInfo_t786 * ___culture, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.EnumConverter::IsValid(System.ComponentModel.ITypeDescriptorContext,System.Object)
extern "C" bool EnumConverter_IsValid_m15829 (EnumConverter_t4246 * __this, Object_t * ___context, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.EnumConverter::GetStandardValuesSupported(System.ComponentModel.ITypeDescriptorContext)
extern "C" bool EnumConverter_GetStandardValuesSupported_m15830 (EnumConverter_t4246 * __this, Object_t * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.EnumConverter::GetStandardValuesExclusive(System.ComponentModel.ITypeDescriptorContext)
extern "C" bool EnumConverter_GetStandardValuesExclusive_m15831 (EnumConverter_t4246 * __this, Object_t * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.TypeConverter/StandardValuesCollection System.ComponentModel.EnumConverter::GetStandardValues(System.ComponentModel.ITypeDescriptorContext)
extern "C" StandardValuesCollection_t4235 * EnumConverter_GetStandardValues_m15832 (EnumConverter_t4246 * __this, Object_t * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IComparer System.ComponentModel.EnumConverter::get_Comparer()
extern "C" Object_t * EnumConverter_get_Comparer_m15833 (EnumConverter_t4246 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.ComponentModel.EnumConverter::get_EnumType()
extern "C" Type_t * EnumConverter_get_EnumType_m15834 (EnumConverter_t4246 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.TypeConverter/StandardValuesCollection System.ComponentModel.EnumConverter::get_Values()
extern "C" StandardValuesCollection_t4235 * EnumConverter_get_Values_m15835 (EnumConverter_t4246 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.EnumConverter::set_Values(System.ComponentModel.TypeConverter/StandardValuesCollection)
extern "C" void EnumConverter_set_Values_m15836 (EnumConverter_t4246 * __this, StandardValuesCollection_t4235 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ArgumentException System.ComponentModel.EnumConverter::CreateValueNotValidException(System.Object)
extern "C" ArgumentException_t729 * EnumConverter_CreateValueNotValidException_m15837 (EnumConverter_t4246 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.EnumConverter::get_IsFlags()
extern "C" bool EnumConverter_get_IsFlags_m15838 (EnumConverter_t4246 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
