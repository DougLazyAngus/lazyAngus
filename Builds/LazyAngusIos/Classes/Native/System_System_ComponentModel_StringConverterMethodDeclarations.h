#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.ComponentModel.StringConverter
struct StringConverter_t4266;
// System.ComponentModel.ITypeDescriptorContext
struct ITypeDescriptorContext_t4559;
// System.Type
struct Type_t;
// System.Object
struct Object_t;
// System.Globalization.CultureInfo
struct CultureInfo_t793;

// System.Void System.ComponentModel.StringConverter::.ctor()
extern "C" void StringConverter__ctor_m16001 (StringConverter_t4266 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.StringConverter::CanConvertFrom(System.ComponentModel.ITypeDescriptorContext,System.Type)
extern "C" bool StringConverter_CanConvertFrom_m16002 (StringConverter_t4266 * __this, Object_t * ___context, Type_t * ___sourceType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.StringConverter::ConvertFrom(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object)
extern "C" Object_t * StringConverter_ConvertFrom_m16003 (StringConverter_t4266 * __this, Object_t * ___context, CultureInfo_t793 * ___culture, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
