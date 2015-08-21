#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.NameTable
struct NameTable_t3203;
// System.String
struct String_t;
// System.Char[]
struct CharU5BU5D_t695;

// System.Void System.Xml.NameTable::.ctor()
extern "C" void NameTable__ctor_m10714 (NameTable_t3203 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.NameTable::Add(System.Char[],System.Int32,System.Int32)
extern "C" String_t* NameTable_Add_m10715 (NameTable_t3203 * __this, CharU5BU5D_t695* ___key, int32_t ___start, int32_t ___len, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.NameTable::Add(System.String)
extern "C" String_t* NameTable_Add_m10716 (NameTable_t3203 * __this, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.NameTable::Get(System.String)
extern "C" String_t* NameTable_Get_m10717 (NameTable_t3203 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.NameTable::AddEntry(System.String,System.Int32)
extern "C" String_t* NameTable_AddEntry_m10718 (NameTable_t3203 * __this, String_t* ___str, int32_t ___hash, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.NameTable::StrEqArray(System.String,System.Char[],System.Int32)
extern "C" bool NameTable_StrEqArray_m10719 (Object_t * __this /* static, unused */, String_t* ___str, CharU5BU5D_t695* ___str2, int32_t ___start, const MethodInfo* method) IL2CPP_METHOD_ATTR;
