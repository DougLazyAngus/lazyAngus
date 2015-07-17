#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.NameTable
struct NameTable_t1601;
// System.String
struct String_t;
// System.Char[]
struct CharU5BU5D_t606;

// System.Void System.Xml.NameTable::.ctor()
extern "C" void NameTable__ctor_m7778 (NameTable_t1601 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.NameTable::Add(System.Char[],System.Int32,System.Int32)
extern "C" String_t* NameTable_Add_m7779 (NameTable_t1601 * __this, CharU5BU5D_t606* ___key, int32_t ___start, int32_t ___len, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.NameTable::Add(System.String)
extern "C" String_t* NameTable_Add_m7780 (NameTable_t1601 * __this, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.NameTable::Get(System.String)
extern "C" String_t* NameTable_Get_m7781 (NameTable_t1601 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.NameTable::AddEntry(System.String,System.Int32)
extern "C" String_t* NameTable_AddEntry_m7782 (NameTable_t1601 * __this, String_t* ___str, int32_t ___hash, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.NameTable::StrEqArray(System.String,System.Char[],System.Int32)
extern "C" bool NameTable_StrEqArray_m7783 (Object_t * __this /* static, unused */, String_t* ___str, CharU5BU5D_t606* ___str2, int32_t ___start, const MethodInfo* method) IL2CPP_METHOD_ATTR;
