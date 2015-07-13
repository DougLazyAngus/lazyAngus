﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Serialization.SerializationEntry
struct SerializationEntry_t2569;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Type
struct Type_t;

// System.Void System.Runtime.Serialization.SerializationEntry::.ctor(System.String,System.Type,System.Object)
extern "C" void SerializationEntry__ctor_m14144 (SerializationEntry_t2569 * __this, String_t* ___name, Type_t * ___type, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Serialization.SerializationEntry::get_Name()
extern "C" String_t* SerializationEntry_get_Name_m14145 (SerializationEntry_t2569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Serialization.SerializationEntry::get_Value()
extern "C" Object_t * SerializationEntry_get_Value_m14146 (SerializationEntry_t2569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;