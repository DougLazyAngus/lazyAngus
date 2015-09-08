#pragma once
#include <stdint.h>
// System.Type
struct Type_t;
// System.ComponentModel.TypeConverter
struct TypeConverter_t3331;
// System.ComponentModel.TypeConverter
#include "System_System_ComponentModel_TypeConverter.h"
// System.ComponentModel.NullableConverter
struct  NullableConverter_t4253  : public TypeConverter_t3331
{
	// System.Type System.ComponentModel.NullableConverter::nullableType
	Type_t * ___nullableType_0;
	// System.Type System.ComponentModel.NullableConverter::underlyingType
	Type_t * ___underlyingType_1;
	// System.ComponentModel.TypeConverter System.ComponentModel.NullableConverter::underlyingTypeConverter
	TypeConverter_t3331 * ___underlyingTypeConverter_2;
};
