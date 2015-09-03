#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Attribute
#include "mscorlib_System_Attribute.h"
// System.ComponentModel.Design.Serialization.RootDesignerSerializerAttribute
struct  RootDesignerSerializerAttribute_t4238  : public Attribute_t426
{
	// System.String System.ComponentModel.Design.Serialization.RootDesignerSerializerAttribute::serializer
	String_t* ___serializer_0;
	// System.String System.ComponentModel.Design.Serialization.RootDesignerSerializerAttribute::baseserializer
	String_t* ___baseserializer_1;
	// System.Boolean System.ComponentModel.Design.Serialization.RootDesignerSerializerAttribute::reload
	bool ___reload_2;
};
