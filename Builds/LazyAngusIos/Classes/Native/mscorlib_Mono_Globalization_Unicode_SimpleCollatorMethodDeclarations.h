#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Globalization.Unicode.SimpleCollator
struct SimpleCollator_t4380;
// System.Globalization.CultureInfo
struct CultureInfo_t769;
// Mono.Globalization.Unicode.CodePointIndexer
struct CodePointIndexer_t4367;
// Mono.Globalization.Unicode.Contraction
struct Contraction_t4369;
// System.String
struct String_t;
// Mono.Globalization.Unicode.Contraction[]
struct ContractionU5BU5D_t4382;
// System.Globalization.SortKey
struct SortKey_t4384;
// Mono.Globalization.Unicode.SortKeyBuffer
struct SortKeyBuffer_t4385;
// Mono.Globalization.Unicode.SimpleCollator/ExtenderType
#include "mscorlib_Mono_Globalization_Unicode_SimpleCollator_ExtenderT.h"
// System.Globalization.CompareOptions
#include "mscorlib_System_Globalization_CompareOptions.h"
// Mono.Globalization.Unicode.SimpleCollator/Context
#include "mscorlib_Mono_Globalization_Unicode_SimpleCollator_Context.h"

// System.Void Mono.Globalization.Unicode.SimpleCollator::.ctor(System.Globalization.CultureInfo)
extern "C" void SimpleCollator__ctor_m16362 (SimpleCollator_t4380 * __this, CultureInfo_t769 * ___culture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Globalization.Unicode.SimpleCollator::.cctor()
extern "C" void SimpleCollator__cctor_m16363 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Globalization.Unicode.SimpleCollator::SetCJKTable(System.Globalization.CultureInfo,Mono.Globalization.Unicode.CodePointIndexer&,System.Byte*&,System.Byte*&,Mono.Globalization.Unicode.CodePointIndexer&,System.Byte*&)
extern "C" void SimpleCollator_SetCJKTable_m16364 (SimpleCollator_t4380 * __this, CultureInfo_t769 * ___culture, CodePointIndexer_t4367 ** ___cjkIndexer, uint8_t** ___catTable, uint8_t** ___lv1Table, CodePointIndexer_t4367 ** ___lv2Indexer, uint8_t** ___lv2Table, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo Mono.Globalization.Unicode.SimpleCollator::GetNeutralCulture(System.Globalization.CultureInfo)
extern "C" CultureInfo_t769 * SimpleCollator_GetNeutralCulture_m16365 (Object_t * __this /* static, unused */, CultureInfo_t769 * ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte Mono.Globalization.Unicode.SimpleCollator::Category(System.Int32)
extern "C" uint8_t SimpleCollator_Category_m16366 (SimpleCollator_t4380 * __this, int32_t ___cp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte Mono.Globalization.Unicode.SimpleCollator::Level1(System.Int32)
extern "C" uint8_t SimpleCollator_Level1_m16367 (SimpleCollator_t4380 * __this, int32_t ___cp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte Mono.Globalization.Unicode.SimpleCollator::Level2(System.Int32,Mono.Globalization.Unicode.SimpleCollator/ExtenderType)
extern "C" uint8_t SimpleCollator_Level2_m16368 (SimpleCollator_t4380 * __this, int32_t ___cp, int32_t ___ext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Globalization.Unicode.SimpleCollator::IsHalfKana(System.Int32,System.Globalization.CompareOptions)
extern "C" bool SimpleCollator_IsHalfKana_m16369 (Object_t * __this /* static, unused */, int32_t ___cp, int32_t ___opt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Globalization.Unicode.Contraction Mono.Globalization.Unicode.SimpleCollator::GetContraction(System.String,System.Int32,System.Int32)
extern "C" Contraction_t4369 * SimpleCollator_GetContraction_m16370 (SimpleCollator_t4380 * __this, String_t* ___s, int32_t ___start, int32_t ___end, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Globalization.Unicode.Contraction Mono.Globalization.Unicode.SimpleCollator::GetContraction(System.String,System.Int32,System.Int32,Mono.Globalization.Unicode.Contraction[])
extern "C" Contraction_t4369 * SimpleCollator_GetContraction_m16371 (SimpleCollator_t4380 * __this, String_t* ___s, int32_t ___start, int32_t ___end, ContractionU5BU5D_t4382* ___clist, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Globalization.Unicode.Contraction Mono.Globalization.Unicode.SimpleCollator::GetTailContraction(System.String,System.Int32,System.Int32)
extern "C" Contraction_t4369 * SimpleCollator_GetTailContraction_m16372 (SimpleCollator_t4380 * __this, String_t* ___s, int32_t ___start, int32_t ___end, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Globalization.Unicode.Contraction Mono.Globalization.Unicode.SimpleCollator::GetTailContraction(System.String,System.Int32,System.Int32,Mono.Globalization.Unicode.Contraction[])
extern "C" Contraction_t4369 * SimpleCollator_GetTailContraction_m16373 (SimpleCollator_t4380 * __this, String_t* ___s, int32_t ___start, int32_t ___end, ContractionU5BU5D_t4382* ___clist, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Globalization.Unicode.SimpleCollator::FilterOptions(System.Int32,System.Globalization.CompareOptions)
extern "C" int32_t SimpleCollator_FilterOptions_m16374 (SimpleCollator_t4380 * __this, int32_t ___i, int32_t ___opt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Globalization.Unicode.SimpleCollator/ExtenderType Mono.Globalization.Unicode.SimpleCollator::GetExtenderType(System.Int32)
extern "C" int32_t SimpleCollator_GetExtenderType_m16375 (SimpleCollator_t4380 * __this, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte Mono.Globalization.Unicode.SimpleCollator::ToDashTypeValue(Mono.Globalization.Unicode.SimpleCollator/ExtenderType,System.Globalization.CompareOptions)
extern "C" uint8_t SimpleCollator_ToDashTypeValue_m16376 (Object_t * __this /* static, unused */, int32_t ___ext, int32_t ___opt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Globalization.Unicode.SimpleCollator::FilterExtender(System.Int32,Mono.Globalization.Unicode.SimpleCollator/ExtenderType,System.Globalization.CompareOptions)
extern "C" int32_t SimpleCollator_FilterExtender_m16377 (SimpleCollator_t4380 * __this, int32_t ___i, int32_t ___ext, int32_t ___opt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Globalization.Unicode.SimpleCollator::IsIgnorable(System.Int32,System.Globalization.CompareOptions)
extern "C" bool SimpleCollator_IsIgnorable_m16378 (Object_t * __this /* static, unused */, int32_t ___i, int32_t ___opt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Globalization.Unicode.SimpleCollator::IsSafe(System.Int32)
extern "C" bool SimpleCollator_IsSafe_m16379 (SimpleCollator_t4380 * __this, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.SortKey Mono.Globalization.Unicode.SimpleCollator::GetSortKey(System.String,System.Globalization.CompareOptions)
extern "C" SortKey_t4384 * SimpleCollator_GetSortKey_m16380 (SimpleCollator_t4380 * __this, String_t* ___s, int32_t ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.SortKey Mono.Globalization.Unicode.SimpleCollator::GetSortKey(System.String,System.Int32,System.Int32,System.Globalization.CompareOptions)
extern "C" SortKey_t4384 * SimpleCollator_GetSortKey_m16381 (SimpleCollator_t4380 * __this, String_t* ___s, int32_t ___start, int32_t ___length, int32_t ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Globalization.Unicode.SimpleCollator::GetSortKey(System.String,System.Int32,System.Int32,Mono.Globalization.Unicode.SortKeyBuffer,System.Globalization.CompareOptions)
extern "C" void SimpleCollator_GetSortKey_m16382 (SimpleCollator_t4380 * __this, String_t* ___s, int32_t ___start, int32_t ___end, SortKeyBuffer_t4385 * ___buf, int32_t ___opt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Globalization.Unicode.SimpleCollator::FillSortKeyRaw(System.Int32,Mono.Globalization.Unicode.SimpleCollator/ExtenderType,Mono.Globalization.Unicode.SortKeyBuffer,System.Globalization.CompareOptions)
extern "C" void SimpleCollator_FillSortKeyRaw_m16383 (SimpleCollator_t4380 * __this, int32_t ___i, int32_t ___ext, SortKeyBuffer_t4385 * ___buf, int32_t ___opt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Globalization.Unicode.SimpleCollator::FillSurrogateSortKeyRaw(System.Int32,Mono.Globalization.Unicode.SortKeyBuffer)
extern "C" void SimpleCollator_FillSurrogateSortKeyRaw_m16384 (SimpleCollator_t4380 * __this, int32_t ___i, SortKeyBuffer_t4385 * ___buf, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Globalization.Unicode.SimpleCollator::CompareOrdinal(System.String,System.Int32,System.Int32,System.String,System.Int32,System.Int32)
extern "C" int32_t SimpleCollator_CompareOrdinal_m16385 (SimpleCollator_t4380 * __this, String_t* ___s1, int32_t ___idx1, int32_t ___len1, String_t* ___s2, int32_t ___idx2, int32_t ___len2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Globalization.Unicode.SimpleCollator::CompareQuick(System.String,System.Int32,System.Int32,System.String,System.Int32,System.Int32,System.Boolean&,System.Boolean&,System.Boolean)
extern "C" int32_t SimpleCollator_CompareQuick_m16386 (SimpleCollator_t4380 * __this, String_t* ___s1, int32_t ___idx1, int32_t ___len1, String_t* ___s2, int32_t ___idx2, int32_t ___len2, bool* ___sourceConsumed, bool* ___targetConsumed, bool ___immediateBreakup, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Globalization.Unicode.SimpleCollator::CompareOrdinalIgnoreCase(System.String,System.Int32,System.Int32,System.String,System.Int32,System.Int32)
extern "C" int32_t SimpleCollator_CompareOrdinalIgnoreCase_m16387 (SimpleCollator_t4380 * __this, String_t* ___s1, int32_t ___idx1, int32_t ___len1, String_t* ___s2, int32_t ___idx2, int32_t ___len2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Globalization.Unicode.SimpleCollator::Compare(System.String,System.Int32,System.Int32,System.String,System.Int32,System.Int32,System.Globalization.CompareOptions)
extern "C" int32_t SimpleCollator_Compare_m16388 (SimpleCollator_t4380 * __this, String_t* ___s1, int32_t ___idx1, int32_t ___len1, String_t* ___s2, int32_t ___idx2, int32_t ___len2, int32_t ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Globalization.Unicode.SimpleCollator::ClearBuffer(System.Byte*,System.Int32)
extern "C" void SimpleCollator_ClearBuffer_m16389 (SimpleCollator_t4380 * __this, uint8_t* ___buffer, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Globalization.Unicode.SimpleCollator::QuickCheckPossible(System.String,System.Int32,System.Int32,System.String,System.Int32,System.Int32)
extern "C" bool SimpleCollator_QuickCheckPossible_m16390 (SimpleCollator_t4380 * __this, String_t* ___s1, int32_t ___idx1, int32_t ___end1, String_t* ___s2, int32_t ___idx2, int32_t ___end2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Globalization.Unicode.SimpleCollator::CompareInternal(System.String,System.Int32,System.Int32,System.String,System.Int32,System.Int32,System.Boolean&,System.Boolean&,System.Boolean,System.Boolean,Mono.Globalization.Unicode.SimpleCollator/Context&)
extern "C" int32_t SimpleCollator_CompareInternal_m16391 (SimpleCollator_t4380 * __this, String_t* ___s1, int32_t ___idx1, int32_t ___len1, String_t* ___s2, int32_t ___idx2, int32_t ___len2, bool* ___targetConsumed, bool* ___sourceConsumed, bool ___skipHeadingExtenders, bool ___immediateBreakup, Context_t4376 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Globalization.Unicode.SimpleCollator::CompareFlagPair(System.Boolean,System.Boolean)
extern "C" int32_t SimpleCollator_CompareFlagPair_m16392 (SimpleCollator_t4380 * __this, bool ___b1, bool ___b2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Globalization.Unicode.SimpleCollator::IsPrefix(System.String,System.String,System.Globalization.CompareOptions)
extern "C" bool SimpleCollator_IsPrefix_m16393 (SimpleCollator_t4380 * __this, String_t* ___src, String_t* ___target, int32_t ___opt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Globalization.Unicode.SimpleCollator::IsPrefix(System.String,System.String,System.Int32,System.Int32,System.Globalization.CompareOptions)
extern "C" bool SimpleCollator_IsPrefix_m16394 (SimpleCollator_t4380 * __this, String_t* ___s, String_t* ___target, int32_t ___start, int32_t ___length, int32_t ___opt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Globalization.Unicode.SimpleCollator::IsPrefix(System.String,System.String,System.Int32,System.Int32,System.Boolean,Mono.Globalization.Unicode.SimpleCollator/Context&)
extern "C" bool SimpleCollator_IsPrefix_m16395 (SimpleCollator_t4380 * __this, String_t* ___s, String_t* ___target, int32_t ___start, int32_t ___length, bool ___skipHeadingExtenders, Context_t4376 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Globalization.Unicode.SimpleCollator::IsSuffix(System.String,System.String,System.Globalization.CompareOptions)
extern "C" bool SimpleCollator_IsSuffix_m16396 (SimpleCollator_t4380 * __this, String_t* ___src, String_t* ___target, int32_t ___opt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Globalization.Unicode.SimpleCollator::IsSuffix(System.String,System.String,System.Int32,System.Int32,System.Globalization.CompareOptions)
extern "C" bool SimpleCollator_IsSuffix_m16397 (SimpleCollator_t4380 * __this, String_t* ___s, String_t* ___target, int32_t ___start, int32_t ___length, int32_t ___opt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Globalization.Unicode.SimpleCollator::QuickIndexOf(System.String,System.String,System.Int32,System.Int32,System.Boolean&)
extern "C" int32_t SimpleCollator_QuickIndexOf_m16398 (SimpleCollator_t4380 * __this, String_t* ___s, String_t* ___target, int32_t ___start, int32_t ___length, bool* ___testWasUnable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Globalization.Unicode.SimpleCollator::IndexOf(System.String,System.String,System.Int32,System.Int32,System.Globalization.CompareOptions)
extern "C" int32_t SimpleCollator_IndexOf_m16399 (SimpleCollator_t4380 * __this, String_t* ___s, String_t* ___target, int32_t ___start, int32_t ___length, int32_t ___opt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Globalization.Unicode.SimpleCollator::IndexOfOrdinal(System.String,System.String,System.Int32,System.Int32)
extern "C" int32_t SimpleCollator_IndexOfOrdinal_m16400 (SimpleCollator_t4380 * __this, String_t* ___s, String_t* ___target, int32_t ___start, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Globalization.Unicode.SimpleCollator::IndexOfOrdinalIgnoreCase(System.String,System.String,System.Int32,System.Int32)
extern "C" int32_t SimpleCollator_IndexOfOrdinalIgnoreCase_m16401 (SimpleCollator_t4380 * __this, String_t* ___s, String_t* ___target, int32_t ___start, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Globalization.Unicode.SimpleCollator::IndexOfSortKey(System.String,System.Int32,System.Int32,System.Byte*,System.Char,System.Int32,System.Boolean,Mono.Globalization.Unicode.SimpleCollator/Context&)
extern "C" int32_t SimpleCollator_IndexOfSortKey_m16402 (SimpleCollator_t4380 * __this, String_t* ___s, int32_t ___start, int32_t ___length, uint8_t* ___sortkey, uint16_t ___target, int32_t ___ti, bool ___noLv4, Context_t4376 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Globalization.Unicode.SimpleCollator::IndexOf(System.String,System.String,System.Int32,System.Int32,System.Byte*,Mono.Globalization.Unicode.SimpleCollator/Context&)
extern "C" int32_t SimpleCollator_IndexOf_m16403 (SimpleCollator_t4380 * __this, String_t* ___s, String_t* ___target, int32_t ___start, int32_t ___length, uint8_t* ___targetSortKey, Context_t4376 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Globalization.Unicode.SimpleCollator::LastIndexOf(System.String,System.String,System.Int32,System.Int32,System.Globalization.CompareOptions)
extern "C" int32_t SimpleCollator_LastIndexOf_m16404 (SimpleCollator_t4380 * __this, String_t* ___s, String_t* ___target, int32_t ___start, int32_t ___length, int32_t ___opt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Globalization.Unicode.SimpleCollator::LastIndexOfOrdinal(System.String,System.String,System.Int32,System.Int32)
extern "C" int32_t SimpleCollator_LastIndexOfOrdinal_m16405 (SimpleCollator_t4380 * __this, String_t* ___s, String_t* ___target, int32_t ___start, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Globalization.Unicode.SimpleCollator::LastIndexOfOrdinalIgnoreCase(System.String,System.String,System.Int32,System.Int32)
extern "C" int32_t SimpleCollator_LastIndexOfOrdinalIgnoreCase_m16406 (SimpleCollator_t4380 * __this, String_t* ___s, String_t* ___target, int32_t ___start, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Globalization.Unicode.SimpleCollator::LastIndexOfSortKey(System.String,System.Int32,System.Int32,System.Int32,System.Byte*,System.Int32,System.Boolean,Mono.Globalization.Unicode.SimpleCollator/Context&)
extern "C" int32_t SimpleCollator_LastIndexOfSortKey_m16407 (SimpleCollator_t4380 * __this, String_t* ___s, int32_t ___start, int32_t ___orgStart, int32_t ___length, uint8_t* ___sortkey, int32_t ___ti, bool ___noLv4, Context_t4376 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Globalization.Unicode.SimpleCollator::LastIndexOf(System.String,System.String,System.Int32,System.Int32,System.Byte*,Mono.Globalization.Unicode.SimpleCollator/Context&)
extern "C" int32_t SimpleCollator_LastIndexOf_m16408 (SimpleCollator_t4380 * __this, String_t* ___s, String_t* ___target, int32_t ___start, int32_t ___length, uint8_t* ___targetSortKey, Context_t4376 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Globalization.Unicode.SimpleCollator::MatchesForward(System.String,System.Int32&,System.Int32,System.Int32,System.Byte*,System.Boolean,Mono.Globalization.Unicode.SimpleCollator/Context&)
extern "C" bool SimpleCollator_MatchesForward_m16409 (SimpleCollator_t4380 * __this, String_t* ___s, int32_t* ___idx, int32_t ___end, int32_t ___ti, uint8_t* ___sortkey, bool ___noLv4, Context_t4376 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Globalization.Unicode.SimpleCollator::MatchesForwardCore(System.String,System.Int32&,System.Int32,System.Int32,System.Byte*,System.Boolean,Mono.Globalization.Unicode.SimpleCollator/ExtenderType,Mono.Globalization.Unicode.Contraction&,Mono.Globalization.Unicode.SimpleCollator/Context&)
extern "C" bool SimpleCollator_MatchesForwardCore_m16410 (SimpleCollator_t4380 * __this, String_t* ___s, int32_t* ___idx, int32_t ___end, int32_t ___ti, uint8_t* ___sortkey, bool ___noLv4, int32_t ___ext, Contraction_t4369 ** ___ct, Context_t4376 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Globalization.Unicode.SimpleCollator::MatchesPrimitive(System.Globalization.CompareOptions,System.Byte*,System.Int32,Mono.Globalization.Unicode.SimpleCollator/ExtenderType,System.Byte*,System.Int32,System.Boolean)
extern "C" bool SimpleCollator_MatchesPrimitive_m16411 (SimpleCollator_t4380 * __this, int32_t ___opt, uint8_t* ___source, int32_t ___si, int32_t ___ext, uint8_t* ___target, int32_t ___ti, bool ___noLv4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Globalization.Unicode.SimpleCollator::MatchesBackward(System.String,System.Int32&,System.Int32,System.Int32,System.Int32,System.Byte*,System.Boolean,Mono.Globalization.Unicode.SimpleCollator/Context&)
extern "C" bool SimpleCollator_MatchesBackward_m16412 (SimpleCollator_t4380 * __this, String_t* ___s, int32_t* ___idx, int32_t ___end, int32_t ___orgStart, int32_t ___ti, uint8_t* ___sortkey, bool ___noLv4, Context_t4376 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Globalization.Unicode.SimpleCollator::MatchesBackwardCore(System.String,System.Int32&,System.Int32,System.Int32,System.Int32,System.Byte*,System.Boolean,Mono.Globalization.Unicode.SimpleCollator/ExtenderType,Mono.Globalization.Unicode.Contraction&,Mono.Globalization.Unicode.SimpleCollator/Context&)
extern "C" bool SimpleCollator_MatchesBackwardCore_m16413 (SimpleCollator_t4380 * __this, String_t* ___s, int32_t* ___idx, int32_t ___end, int32_t ___orgStart, int32_t ___ti, uint8_t* ___sortkey, bool ___noLv4, int32_t ___ext, Contraction_t4369 ** ___ct, Context_t4376 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
