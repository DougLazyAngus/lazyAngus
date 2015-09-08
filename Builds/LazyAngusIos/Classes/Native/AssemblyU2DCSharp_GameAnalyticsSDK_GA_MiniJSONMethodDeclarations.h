#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GameAnalyticsSDK.GA_MiniJSON
struct GA_MiniJSON_t465;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Hashtable
struct Hashtable_t714;
// System.Char[]
struct CharU5BU5D_t715;
// System.Collections.ArrayList
struct ArrayList_t716;
// System.Text.StringBuilder
struct StringBuilder_t261;

// System.Void GameAnalyticsSDK.GA_MiniJSON::.ctor()
extern "C" void GA_MiniJSON__ctor_m2584 (GA_MiniJSON_t465 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameAnalyticsSDK.GA_MiniJSON::.cctor()
extern "C" void GA_MiniJSON__cctor_m2585 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object GameAnalyticsSDK.GA_MiniJSON::JsonDecode(System.String)
extern "C" Object_t * GA_MiniJSON_JsonDecode_m2586 (Object_t * __this /* static, unused */, String_t* ___json, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GameAnalyticsSDK.GA_MiniJSON::JsonEncode(System.Object)
extern "C" String_t* GA_MiniJSON_JsonEncode_m2587 (Object_t * __this /* static, unused */, Object_t * ___json, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GameAnalyticsSDK.GA_MiniJSON::LastDecodeSuccessful()
extern "C" bool GA_MiniJSON_LastDecodeSuccessful_m2588 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GameAnalyticsSDK.GA_MiniJSON::GetLastErrorIndex()
extern "C" int32_t GA_MiniJSON_GetLastErrorIndex_m2589 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GameAnalyticsSDK.GA_MiniJSON::GetLastErrorSnippet()
extern "C" String_t* GA_MiniJSON_GetLastErrorSnippet_m2590 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Hashtable GameAnalyticsSDK.GA_MiniJSON::ParseObject(System.Char[],System.Int32&)
extern "C" Hashtable_t714 * GA_MiniJSON_ParseObject_m2591 (GA_MiniJSON_t465 * __this, CharU5BU5D_t715* ___json, int32_t* ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList GameAnalyticsSDK.GA_MiniJSON::ParseArray(System.Char[],System.Int32&)
extern "C" ArrayList_t716 * GA_MiniJSON_ParseArray_m2592 (GA_MiniJSON_t465 * __this, CharU5BU5D_t715* ___json, int32_t* ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object GameAnalyticsSDK.GA_MiniJSON::ParseValue(System.Char[],System.Int32&,System.Boolean&)
extern "C" Object_t * GA_MiniJSON_ParseValue_m2593 (GA_MiniJSON_t465 * __this, CharU5BU5D_t715* ___json, int32_t* ___index, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GameAnalyticsSDK.GA_MiniJSON::ParseString(System.Char[],System.Int32&)
extern "C" String_t* GA_MiniJSON_ParseString_m2594 (GA_MiniJSON_t465 * __this, CharU5BU5D_t715* ___json, int32_t* ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GameAnalyticsSDK.GA_MiniJSON::ParseNumber(System.Char[],System.Int32&)
extern "C" float GA_MiniJSON_ParseNumber_m2595 (GA_MiniJSON_t465 * __this, CharU5BU5D_t715* ___json, int32_t* ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GameAnalyticsSDK.GA_MiniJSON::GetLastIndexOfNumber(System.Char[],System.Int32)
extern "C" int32_t GA_MiniJSON_GetLastIndexOfNumber_m2596 (GA_MiniJSON_t465 * __this, CharU5BU5D_t715* ___json, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameAnalyticsSDK.GA_MiniJSON::EatWhitespace(System.Char[],System.Int32&)
extern "C" void GA_MiniJSON_EatWhitespace_m2597 (GA_MiniJSON_t465 * __this, CharU5BU5D_t715* ___json, int32_t* ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GameAnalyticsSDK.GA_MiniJSON::LookAhead(System.Char[],System.Int32)
extern "C" int32_t GA_MiniJSON_LookAhead_m2598 (GA_MiniJSON_t465 * __this, CharU5BU5D_t715* ___json, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GameAnalyticsSDK.GA_MiniJSON::NextToken(System.Char[],System.Int32&)
extern "C" int32_t GA_MiniJSON_NextToken_m2599 (GA_MiniJSON_t465 * __this, CharU5BU5D_t715* ___json, int32_t* ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GameAnalyticsSDK.GA_MiniJSON::SerializeObjectOrArray(System.Object,System.Text.StringBuilder)
extern "C" bool GA_MiniJSON_SerializeObjectOrArray_m2600 (GA_MiniJSON_t465 * __this, Object_t * ___objectOrArray, StringBuilder_t261 * ___builder, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GameAnalyticsSDK.GA_MiniJSON::SerializeObject(System.Collections.Hashtable,System.Text.StringBuilder)
extern "C" bool GA_MiniJSON_SerializeObject_m2601 (GA_MiniJSON_t465 * __this, Hashtable_t714 * ___anObject, StringBuilder_t261 * ___builder, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GameAnalyticsSDK.GA_MiniJSON::SerializeArray(System.Collections.ArrayList,System.Text.StringBuilder)
extern "C" bool GA_MiniJSON_SerializeArray_m2602 (GA_MiniJSON_t465 * __this, ArrayList_t716 * ___anArray, StringBuilder_t261 * ___builder, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GameAnalyticsSDK.GA_MiniJSON::SerializeValue(System.Object,System.Text.StringBuilder)
extern "C" bool GA_MiniJSON_SerializeValue_m2603 (GA_MiniJSON_t465 * __this, Object_t * ___value, StringBuilder_t261 * ___builder, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameAnalyticsSDK.GA_MiniJSON::SerializeString(System.String,System.Text.StringBuilder)
extern "C" void GA_MiniJSON_SerializeString_m2604 (GA_MiniJSON_t465 * __this, String_t* ___aString, StringBuilder_t261 * ___builder, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameAnalyticsSDK.GA_MiniJSON::SerializeNumber(System.Single,System.Text.StringBuilder)
extern "C" void GA_MiniJSON_SerializeNumber_m2605 (GA_MiniJSON_t465 * __this, float ___number, StringBuilder_t261 * ___builder, const MethodInfo* method) IL2CPP_METHOD_ATTR;
