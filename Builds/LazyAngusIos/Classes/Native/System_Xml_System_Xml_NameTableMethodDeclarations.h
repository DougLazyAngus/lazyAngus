#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.NameTable
struct NameTable_t3222;
// System.String
struct String_t;
// System.Char[]
struct CharU5BU5D_t711;

// System.Void System.Xml.NameTable::.ctor()
extern "C" void NameTable__ctor_m10876 (NameTable_t3222 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.NameTable::Add(System.Char[],System.Int32,System.Int32)
extern "C" String_t* NameTable_Add_m10877 (NameTable_t3222 * __this, CharU5BU5D_t711* ___key, int32_t ___start, int32_t ___len, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.NameTable::Add(System.String)
extern "C" String_t* NameTable_Add_m10878 (NameTable_t3222 * __this, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.NameTable::Get(System.String)
extern "C" String_t* NameTable_Get_m10879 (NameTable_t3222 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.NameTable::AddEntry(System.String,System.Int32)
extern "C" String_t* NameTable_AddEntry_m10880 (NameTable_t3222 * __this, String_t* ___str, int32_t ___hash, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.NameTable::StrEqArray(System.String,System.Char[],System.Int32)
extern "C" bool NameTable_StrEqArray_m10881 (Object_t * __this /* static, unused */, String_t* ___str, CharU5BU5D_t711* ___str2, int32_t ___start, const MethodInfo* method) IL2CPP_METHOD_ATTR;
