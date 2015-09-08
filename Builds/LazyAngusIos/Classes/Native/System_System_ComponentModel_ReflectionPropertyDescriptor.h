#pragma once
#include <stdint.h>
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.Type
struct Type_t;
// System.ComponentModel.PropertyDescriptor
#include "System_System_ComponentModel_PropertyDescriptor.h"
// System.ComponentModel.ReflectionPropertyDescriptor
struct  ReflectionPropertyDescriptor_t4256  : public PropertyDescriptor_t4223
{
	// System.Reflection.PropertyInfo System.ComponentModel.ReflectionPropertyDescriptor::_member
	PropertyInfo_t * ____member_3;
	// System.Type System.ComponentModel.ReflectionPropertyDescriptor::_componentType
	Type_t * ____componentType_4;
	// System.Type System.ComponentModel.ReflectionPropertyDescriptor::_propertyType
	Type_t * ____propertyType_5;
};
