﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Globalization.Unicode.SimpleCollator
struct SimpleCollator_t4324;
// System.Globalization.CultureInfo
struct CultureInfo_t711;
// Mono.Globalization.Unicode.CodePointIndexer
struct CodePointIndexer_t4311;
// Mono.Globalization.Unicode.Contraction
struct Contraction_t4313;
// System.String
struct String_t;
// Mono.Globalization.Unicode.Contraction[]
struct ContractionU5BU5D_t4326;
// System.Globalization.SortKey
struct SortKey_t4328;
// Mono.Globalization.Unicode.SortKeyBuffer
struct SortKeyBuffer_t4329;
// Mono.Globalization.Unicode.SimpleCollator/ExtenderType
#include "mscorlib_Mono_Globalization_Unicode_SimpleCollator_ExtenderT.h"
// System.Globalization.CompareOptions
#include "mscorlib_System_Globalization_CompareOptions.h"
// Mono.Globalization.Unicode.SimpleCollator/Context
#include "mscorlib_Mono_Globalization_Unicode_SimpleCollator_Context.h"

// System.Void Mono.Globalization.Unicode.SimpleCollator::.ctor(System.Globalization.CultureInfo)
extern "C" void SimpleCollator__ctor_m16016 (SimpleCollator_t4324 * __this, CultureInfo_t711 * ___culture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Globalization.Unicode.SimpleCollator::.cctor()
extern "C" void SimpleCollator__cctor_m16017 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Globalization.Unicode.SimpleCollator::SetCJKTable(System.Globalization.CultureInfo,Mono.Globalization.Unicode.CodePointIndexer&,System.Byte*&,System.Byte*&,Mono.Globalization.Unicode.CodePointIndexer&,System.Byte*&)
extern "C" void SimpleCollator_SetCJKTable_m16018 (SimpleCollator_t4324 * __this, CultureInfo_t711 * ___culture, CodePointIndexer_t4311 ** ___cjkIndexer, uint8_t** ___catTable, uint8_t** ___lv1Table, CodePointIndexer_t4311 ** ___lv2Indexer, uint8_t** ___lv2Table, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo Mono.Globalization.Unicode.SimpleCollator::GetNeutralCulture(System.Globalization.CultureInfo)
extern "C" CultureInfo_t711 * SimpleCollator_GetNeutralCulture_m16019 (Object_t * __this /* static, unused */, CultureInfo_t711 * ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte Mono.Globalization.Unicode.SimpleCollator::Category(System.Int32)
extern "C" uint8_t SimpleCollator_Category_m16020 (SimpleCollator_t4324 * __this, int32_t ___cp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte Mono.Globalization.Unicode.SimpleCollator::Level1(System.Int32)
extern "C" uint8_t SimpleCollator_Level1_m16021 (SimpleCollator_t4324 * __this, int32_t ___cp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte Mono.Globalization.Unicode.SimpleCollator::Level2(System.Int32,Mono.Globalization.Unicode.SimpleCollator/ExtenderType)
extern "C" uint8_t SimpleCollator_Level2_m16022 (SimpleCollator_t4324 * __this, int32_t ___cp, int32_t ___ext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Globalization.Unicode.SimpleCollator::IsHalfKana(System.Int32,System.Globalization.CompareOptions)
extern "C" bool SimpleCollator_IsHalfKana_m16023 (Object_t * __this /* static, unused */, int32_t ___cp, int32_t ___opt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Globalization.Unicode.Contraction Mono.Globalization.Unicode.SimpleCollator::GetContraction(System.String,System.Int32,System.Int32)
extern "C" Contraction_t4313 * SimpleCollator_GetContraction_m16024 (SimpleCollator_t4324 * __this, String_t* ___s, int32_t ___start, int32_t ___end, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Globalization.Unicode.Contraction Mono.Globalization.Unicode.SimpleCollator::GetContraction(System.String,System.Int32,System.Int32,Mono.Globalization.Unicode.Contraction[])
extern "C" Contraction_t4313 * SimpleCollator_GetContraction_m16025 (SimpleCollator_t4324 * __this, String_t* ___s, int32_t ___start, int32_t ___end, ContractionU5BU5D_t4326* ___clist, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Globalization.Unicode.Contraction Mono.Globalization.Unicode.SimpleCollator::GetTailContraction(System.String,System.Int32,System.Int32)
extern "C" Contraction_t4313 * SimpleCollator_GetTailContraction_m16026 (SimpleCollator_t4324 * __this, String_t* ___s, int32_t ___start, int32_t ___end, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Globalization.Unicode.Contraction Mono.Globalization.Unicode.SimpleCollator::GetTailContraction(System.String,System.Int32,System.Int32,Mono.Globalization.Unicode.Contraction[])
extern "C" Contraction_t4313 * SimpleCollator_GetTailContraction_m16027 (SimpleCollator_t4324 * __this, String_t* ___s, int32_t ___start, int32_t ___end, ContractionU5BU5D_t4326* ___clist, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Globalization.Unicode.SimpleCollator::FilterOptions(System.Int32,System.Globalization.CompareOptions)
extern "C" int32_t SimpleCollator_FilterOptions_m16028 (SimpleCollator_t4324 * __this, int32_t ___i, int32_t ___opt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Globalization.Unicode.SimpleCollator/ExtenderType Mono.Globalization.Unicode.SimpleCollator::GetExtenderType(System.Int32)
extern "C" int32_t SimpleCollator_GetExtenderType_m16029 (SimpleCollator_t4324 * __this, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte Mono.Globalization.Unicode.SimpleCollator::ToDashTypeValue(Mono.Globalization.Unicode.SimpleCollator/ExtenderType,System.Globalization.CompareOptions)
extern "C" uint8_t SimpleCollator_ToDashTypeValue_m16030 (Object_t * __this /* static, unused */, int32_t ___ext, int32_t ___opt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Globalization.Unicode.SimpleCollator::FilterExtender(System.Int32,Mono.Globalization.Unicode.SimpleCollator/ExtenderType,System.Globalization.CompareOptions)
extern "C" int32_t SimpleCollator_FilterExtender_m16031 (SimpleCollator_t4324 * __this, int32_t ___i, int32_t ___ext, int32_t ___opt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Globalization.Unicode.SimpleCollator::IsIgnorable(System.Int32,System.Globalization.CompareOptions)
extern "C" bool SimpleCollator_IsIgnorable_m16032 (Object_t * __this /* static, unused */, int32_t ___i, int32_t ___opt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Globalization.Unicode.SimpleCollator::IsSafe(System.Int32)
extern "C" bool SimpleCollator_IsSafe_m16033 (SimpleCollator_t4324 * __this, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.SortKey Mono.Globalization.Unicode.SimpleCollator::GetSortKey(System.String,System.Globalization.CompareOptions)
extern "C" SortKey_t4328 * SimpleCollator_GetSortKey_m16034 (SimpleCollator_t4324 * __this, String_t* ___s, int32_t ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.SortKey Mono.Globalization.Unicode.SimpleCollator::GetSortKey(System.String,System.Int32,System.Int32,System.Globalization.CompareOptions)
extern "C" SortKey_t4328 * SimpleCollator_GetSortKey_m16035 (SimpleCollator_t4324 * __this, String_t* ___s, int32_t ___start, int32_t ___length, int32_t ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Globalization.Unicode.SimpleCollator::GetSortKey(System.String,System.Int32,System.Int32,Mono.Globalization.Unicode.SortKeyBuffer,System.Globalization.CompareOptions)
extern "C" void SimpleCollator_GetSortKey_m16036 (SimpleCollator_t4324 * __this, String_t* ___s, int32_t ___start, int32_t ___end, SortKeyBuffer_t4329 * ___buf, int32_t ___opt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Globalization.Unicode.SimpleCollator::FillSortKeyRaw(System.Int32,Mono.Globalization.Unicode.SimpleCollator/ExtenderType,Mono.Globalization.Unicode.SortKeyBuffer,System.Globalization.CompareOptions)
extern "C" void SimpleCollator_FillSortKeyRaw_m16037 (SimpleCollator_t4324 * __this, int32_t ___i, int32_t ___ext, SortKeyBuffer_t4329 * ___buf, int32_t ___opt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Globalization.Unicode.SimpleCollator::FillSurrogateSortKeyRaw(System.Int32,Mono.Globalization.Unicode.SortKeyBuffer)
extern "C" void SimpleCollator_FillSurrogateSortKeyRaw_m16038 (SimpleCollator_t4324 * __this, int32_t ___i, SortKeyBuffer_t4329 * ___buf, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Globalization.Unicode.SimpleCollator::CompareOrdinal(System.String,System.Int32,System.Int32,System.String,System.Int32,System.Int32)
extern "C" int32_t SimpleCollator_CompareOrdinal_m16039 (SimpleCollator_t4324 * __this, String_t* ___s1, int32_t ___idx1, int32_t ___len1, String_t* ___s2, int32_t ___idx2, int32_t ___len2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Globalization.Unicode.SimpleCollator::CompareQuick(System.String,System.Int32,System.Int32,System.String,System.Int32,System.Int32,System.Boolean&,System.Boolean&,System.Boolean)
extern "C" int32_t SimpleCollator_CompareQuick_m16040 (SimpleCollator_t4324 * __this, String_t* ___s1, int32_t ___idx1, int32_t ___len1, String_t* ___s2, int32_t ___idx2, int32_t ___len2, bool* ___sourceConsumed, bool* ___targetConsumed, bool ___immediateBreakup, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Globalization.Unicode.SimpleCollator::CompareOrdinalIgnoreCase(System.String,System.Int32,System.Int32,System.String,System.Int32,System.Int32)
extern "C" int32_t SimpleCollator_CompareOrdinalIgnoreCase_m16041 (SimpleCollator_t4324 * __this, String_t* ___s1, int32_t ___idx1, int32_t ___len1, String_t* ___s2, int32_t ___idx2, int32_t ___len2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Globalization.Unicode.SimpleCollator::Compare(System.String,System.Int32,System.Int32,System.String,System.Int32,System.Int32,System.Globalization.CompareOptions)
extern "C" int32_t SimpleCollator_Compare_m16042 (SimpleCollator_t4324 * __this, String_t* ___s1, int32_t ___idx1, int32_t ___len1, String_t* ___s2, int32_t ___idx2, int32_t ___len2, int32_t ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Globalization.Unicode.SimpleCollator::ClearBuffer(System.Byte*,System.Int32)
extern "C" void SimpleCollator_ClearBuffer_m16043 (SimpleCollator_t4324 * __this, uint8_t* ___buffer, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Globalization.Unicode.SimpleCollator::QuickCheckPossible(System.String,System.Int32,System.Int32,System.String,System.Int32,System.Int32)
extern "C" bool SimpleCollator_QuickCheckPossible_m16044 (SimpleCollator_t4324 * __this, String_t* ___s1, int32_t ___idx1, int32_t ___end1, String_t* ___s2, int32_t ___idx2, int32_t ___end2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Globalization.Unicode.SimpleCollator::CompareInternal(System.String,System.Int32,System.Int32,System.String,System.Int32,System.Int32,System.Boolean&,System.Boolean&,System.Boolean,System.Boolean,Mono.Globalization.Unicode.SimpleCollator/Context&)
extern "C" int32_t SimpleCollator_CompareInternal_m16045 (SimpleCollator_t4324 * __this, String_t* ___s1, int32_t ___idx1, int32_t ___len1, String_t* ___s2, int32_t ___idx2, int32_t ___len2, bool* ___targetConsumed, bool* ___sourceConsumed, bool ___skipHeadingExtenders, bool ___immediateBreakup, Context_t4320 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Globalization.Unicode.SimpleCollator::CompareFlagPair(System.Boolean,System.Boolean)
extern "C" int32_t SimpleCollator_CompareFlagPair_m16046 (SimpleCollator_t4324 * __this, bool ___b1, bool ___b2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Globalization.Unicode.SimpleCollator::IsPrefix(System.String,System.String,System.Globalization.CompareOptions)
extern "C" bool SimpleCollator_IsPrefix_m16047 (SimpleCollator_t4324 * __this, String_t* ___src, String_t* ___target, int32_t ___opt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Globalization.Unicode.SimpleCollator::IsPrefix(System.String,System.String,System.Int32,System.Int32,System.Globalization.CompareOptions)
extern "C" bool SimpleCollator_IsPrefix_m16048 (SimpleCollator_t4324 * __this, String_t* ___s, String_t* ___target, int32_t ___start, int32_t ___length, int32_t ___opt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Globalization.Unicode.SimpleCollator::IsPrefix(System.String,System.String,System.Int32,System.Int32,System.Boolean,Mono.Globalization.Unicode.SimpleCollator/Context&)
extern "C" bool SimpleCollator_IsPrefix_m16049 (SimpleCollator_t4324 * __this, String_t* ___s, String_t* ___target, int32_t ___start, int32_t ___length, bool ___skipHeadingExtenders, Context_t4320 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Globalization.Unicode.SimpleCollator::IsSuffix(System.String,System.String,System.Globalization.CompareOptions)
extern "C" bool SimpleCollator_IsSuffix_m16050 (SimpleCollator_t4324 * __this, String_t* ___src, String_t* ___target, int32_t ___opt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Globalization.Unicode.SimpleCollator::IsSuffix(System.String,System.String,System.Int32,System.Int32,System.Globalization.CompareOptions)
extern "C" bool SimpleCollator_IsSuffix_m16051 (SimpleCollator_t4324 * __this, String_t* ___s, String_t* ___target, int32_t ___start, int32_t ___length, int32_t ___opt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Globalization.Unicode.SimpleCollator::QuickIndexOf(System.String,System.String,System.Int32,System.Int32,System.Boolean&)
extern "C" int32_t SimpleCollator_QuickIndexOf_m16052 (SimpleCollator_t4324 * __this, String_t* ___s, String_t* ___target, int32_t ___start, int32_t ___length, bool* ___testWasUnable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Globalization.Unicode.SimpleCollator::IndexOf(System.String,System.String,System.Int32,System.Int32,System.Globalization.CompareOptions)
extern "C" int32_t SimpleCollator_IndexOf_m16053 (SimpleCollator_t4324 * __this, String_t* ___s, String_t* ___target, int32_t ___start, int32_t ___length, int32_t ___opt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Globalization.Unicode.SimpleCollator::IndexOfOrdinal(System.String,System.String,System.Int32,System.Int32)
extern "C" int32_t SimpleCollator_IndexOfOrdinal_m16054 (SimpleCollator_t4324 * __this, String_t* ___s, String_t* ___target, int32_t ___start, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Globalization.Unicode.SimpleCollator::IndexOfOrdinalIgnoreCase(System.String,System.String,System.Int32,System.Int32)
extern "C" int32_t SimpleCollator_IndexOfOrdinalIgnoreCase_m16055 (SimpleCollator_t4324 * __this, String_t* ___s, String_t* ___target, int32_t ___start, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Globalization.Unicode.SimpleCollator::IndexOfSortKey(System.String,System.Int32,System.Int32,System.Byte*,System.Char,System.Int32,System.Boolean,Mono.Globalization.Unicode.SimpleCollator/Context&)
extern "C" int32_t SimpleCollator_IndexOfSortKey_m16056 (SimpleCollator_t4324 * __this, String_t* ___s, int32_t ___start, int32_t ___length, uint8_t* ___sortkey, uint16_t ___target, int32_t ___ti, bool ___noLv4, Context_t4320 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Globalization.Unicode.SimpleCollator::IndexOf(System.String,System.String,System.Int32,System.Int32,System.Byte*,Mono.Globalization.Unicode.SimpleCollator/Context&)
extern "C" int32_t SimpleCollator_IndexOf_m16057 (SimpleCollator_t4324 * __this, String_t* ___s, String_t* ___target, int32_t ___start, int32_t ___length, uint8_t* ___targetSortKey, Context_t4320 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Globalization.Unicode.SimpleCollator::LastIndexOf(System.String,System.String,System.Int32,System.Int32,System.Globalization.CompareOptions)
extern "C" int32_t SimpleCollator_LastIndexOf_m16058 (SimpleCollator_t4324 * __this, String_t* ___s, String_t* ___target, int32_t ___start, int32_t ___length, int32_t ___opt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Globalization.Unicode.SimpleCollator::LastIndexOfOrdinal(System.String,System.String,System.Int32,System.Int32)
extern "C" int32_t SimpleCollator_LastIndexOfOrdinal_m16059 (SimpleCollator_t4324 * __this, String_t* ___s, String_t* ___target, int32_t ___start, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Globalization.Unicode.SimpleCollator::LastIndexOfOrdinalIgnoreCase(System.String,System.String,System.Int32,System.Int32)
extern "C" int32_t SimpleCollator_LastIndexOfOrdinalIgnoreCase_m16060 (SimpleCollator_t4324 * __this, String_t* ___s, String_t* ___target, int32_t ___start, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Globalization.Unicode.SimpleCollator::LastIndexOfSortKey(System.String,System.Int32,System.Int32,System.Int32,System.Byte*,System.Int32,System.Boolean,Mono.Globalization.Unicode.SimpleCollator/Context&)
extern "C" int32_t SimpleCollator_LastIndexOfSortKey_m16061 (SimpleCollator_t4324 * __this, String_t* ___s, int32_t ___start, int32_t ___orgStart, int32_t ___length, uint8_t* ___sortkey, int32_t ___ti, bool ___noLv4, Context_t4320 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Globalization.Unicode.SimpleCollator::LastIndexOf(System.String,System.String,System.Int32,System.Int32,System.Byte*,Mono.Globalization.Unicode.SimpleCollator/Context&)
extern "C" int32_t SimpleCollator_LastIndexOf_m16062 (SimpleCollator_t4324 * __this, String_t* ___s, String_t* ___target, int32_t ___start, int32_t ___length, uint8_t* ___targetSortKey, Context_t4320 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Globalization.Unicode.SimpleCollator::MatchesForward(System.String,System.Int32&,System.Int32,System.Int32,System.Byte*,System.Boolean,Mono.Globalization.Unicode.SimpleCollator/Context&)
extern "C" bool SimpleCollator_MatchesForward_m16063 (SimpleCollator_t4324 * __this, String_t* ___s, int32_t* ___idx, int32_t ___end, int32_t ___ti, uint8_t* ___sortkey, bool ___noLv4, Context_t4320 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Globalization.Unicode.SimpleCollator::MatchesForwardCore(System.String,System.Int32&,System.Int32,System.Int32,System.Byte*,System.Boolean,Mono.Globalization.Unicode.SimpleCollator/ExtenderType,Mono.Globalization.Unicode.Contraction&,Mono.Globalization.Unicode.SimpleCollator/Context&)
extern "C" bool SimpleCollator_MatchesForwardCore_m16064 (SimpleCollator_t4324 * __this, String_t* ___s, int32_t* ___idx, int32_t ___end, int32_t ___ti, uint8_t* ___sortkey, bool ___noLv4, int32_t ___ext, Contraction_t4313 ** ___ct, Context_t4320 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Globalization.Unicode.SimpleCollator::MatchesPrimitive(System.Globalization.CompareOptions,System.Byte*,System.Int32,Mono.Globalization.Unicode.SimpleCollator/ExtenderType,System.Byte*,System.Int32,System.Boolean)
extern "C" bool SimpleCollator_MatchesPrimitive_m16065 (SimpleCollator_t4324 * __this, int32_t ___opt, uint8_t* ___source, int32_t ___si, int32_t ___ext, uint8_t* ___target, int32_t ___ti, bool ___noLv4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Globalization.Unicode.SimpleCollator::MatchesBackward(System.String,System.Int32&,System.Int32,System.Int32,System.Int32,System.Byte*,System.Boolean,Mono.Globalization.Unicode.SimpleCollator/Context&)
extern "C" bool SimpleCollator_MatchesBackward_m16066 (SimpleCollator_t4324 * __this, String_t* ___s, int32_t* ___idx, int32_t ___end, int32_t ___orgStart, int32_t ___ti, uint8_t* ___sortkey, bool ___noLv4, Context_t4320 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Globalization.Unicode.SimpleCollator::MatchesBackwardCore(System.String,System.Int32&,System.Int32,System.Int32,System.Int32,System.Byte*,System.Boolean,Mono.Globalization.Unicode.SimpleCollator/ExtenderType,Mono.Globalization.Unicode.Contraction&,Mono.Globalization.Unicode.SimpleCollator/Context&)
extern "C" bool SimpleCollator_MatchesBackwardCore_m16067 (SimpleCollator_t4324 * __this, String_t* ___s, int32_t* ___idx, int32_t ___end, int32_t ___orgStart, int32_t ___ti, uint8_t* ___sortkey, bool ___noLv4, int32_t ___ext, Contraction_t4313 ** ___ct, Context_t4320 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
