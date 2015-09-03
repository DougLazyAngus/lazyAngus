﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.ComponentModel.DesignerAttribute
struct DesignerAttribute_t4235;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Type
struct Type_t;

// System.Void System.ComponentModel.DesignerAttribute::.ctor(System.String,System.Type)
extern "C" void DesignerAttribute__ctor_m15788 (DesignerAttribute_t4235 * __this, String_t* ___designerTypeName, Type_t * ___designerBaseType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.DesignerAttribute::.ctor(System.String,System.String)
extern "C" void DesignerAttribute__ctor_m15789 (DesignerAttribute_t4235 * __this, String_t* ___designerTypeName, String_t* ___designerBaseTypeName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.DesignerAttribute::get_DesignerBaseTypeName()
extern "C" String_t* DesignerAttribute_get_DesignerBaseTypeName_m15790 (DesignerAttribute_t4235 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.DesignerAttribute::get_DesignerTypeName()
extern "C" String_t* DesignerAttribute_get_DesignerTypeName_m15791 (DesignerAttribute_t4235 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.DesignerAttribute::get_TypeId()
extern "C" Object_t * DesignerAttribute_get_TypeId_m15792 (DesignerAttribute_t4235 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.DesignerAttribute::Equals(System.Object)
extern "C" bool DesignerAttribute_Equals_m15793 (DesignerAttribute_t4235 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.ComponentModel.DesignerAttribute::GetHashCode()
extern "C" int32_t DesignerAttribute_GetHashCode_m15794 (DesignerAttribute_t4235 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;