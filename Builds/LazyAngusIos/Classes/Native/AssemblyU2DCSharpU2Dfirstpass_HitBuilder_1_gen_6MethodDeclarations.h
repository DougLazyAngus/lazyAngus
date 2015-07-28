#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// HitBuilder`1<System.Object>
struct HitBuilder_1_t53;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.String>
struct Dictionary_2_t103;

// System.Void HitBuilder`1<System.Object>::.ctor()
extern "C" void HitBuilder_1__ctor_m20751_gshared (HitBuilder_1_t53 * __this, const MethodInfo* method);
#define HitBuilder_1__ctor_m20751(__this, method) (( void (*) (HitBuilder_1_t53 *, const MethodInfo*))HitBuilder_1__ctor_m20751_gshared)(__this, method)
// T HitBuilder`1<System.Object>::GetThis()
// T HitBuilder`1<System.Object>::Validate()
// T HitBuilder`1<System.Object>::SetCustomDimension(System.Int32,System.String)
extern "C" Object_t * HitBuilder_1_SetCustomDimension_m20752_gshared (HitBuilder_1_t53 * __this, int32_t ___dimensionNumber, String_t* ___value, const MethodInfo* method);
#define HitBuilder_1_SetCustomDimension_m20752(__this, ___dimensionNumber, ___value, method) (( Object_t * (*) (HitBuilder_1_t53 *, int32_t, String_t*, const MethodInfo*))HitBuilder_1_SetCustomDimension_m20752_gshared)(__this, ___dimensionNumber, ___value, method)
// System.Collections.Generic.Dictionary`2<System.Int32,System.String> HitBuilder`1<System.Object>::GetCustomDimensions()
extern "C" Dictionary_2_t103 * HitBuilder_1_GetCustomDimensions_m20753_gshared (HitBuilder_1_t53 * __this, const MethodInfo* method);
#define HitBuilder_1_GetCustomDimensions_m20753(__this, method) (( Dictionary_2_t103 * (*) (HitBuilder_1_t53 *, const MethodInfo*))HitBuilder_1_GetCustomDimensions_m20753_gshared)(__this, method)
// T HitBuilder`1<System.Object>::SetCustomMetric(System.Int32,System.String)
extern "C" Object_t * HitBuilder_1_SetCustomMetric_m20754_gshared (HitBuilder_1_t53 * __this, int32_t ___metricNumber, String_t* ___value, const MethodInfo* method);
#define HitBuilder_1_SetCustomMetric_m20754(__this, ___metricNumber, ___value, method) (( Object_t * (*) (HitBuilder_1_t53 *, int32_t, String_t*, const MethodInfo*))HitBuilder_1_SetCustomMetric_m20754_gshared)(__this, ___metricNumber, ___value, method)
// System.Collections.Generic.Dictionary`2<System.Int32,System.String> HitBuilder`1<System.Object>::GetCustomMetrics()
extern "C" Dictionary_2_t103 * HitBuilder_1_GetCustomMetrics_m20755_gshared (HitBuilder_1_t53 * __this, const MethodInfo* method);
#define HitBuilder_1_GetCustomMetrics_m20755(__this, method) (( Dictionary_2_t103 * (*) (HitBuilder_1_t53 *, const MethodInfo*))HitBuilder_1_GetCustomMetrics_m20755_gshared)(__this, method)
// System.String HitBuilder`1<System.Object>::GetCampaignName()
extern "C" String_t* HitBuilder_1_GetCampaignName_m20756_gshared (HitBuilder_1_t53 * __this, const MethodInfo* method);
#define HitBuilder_1_GetCampaignName_m20756(__this, method) (( String_t* (*) (HitBuilder_1_t53 *, const MethodInfo*))HitBuilder_1_GetCampaignName_m20756_gshared)(__this, method)
// T HitBuilder`1<System.Object>::SetCampaignName(System.String)
extern "C" Object_t * HitBuilder_1_SetCampaignName_m20757_gshared (HitBuilder_1_t53 * __this, String_t* ___campaignName, const MethodInfo* method);
#define HitBuilder_1_SetCampaignName_m20757(__this, ___campaignName, method) (( Object_t * (*) (HitBuilder_1_t53 *, String_t*, const MethodInfo*))HitBuilder_1_SetCampaignName_m20757_gshared)(__this, ___campaignName, method)
// System.String HitBuilder`1<System.Object>::GetCampaignSource()
extern "C" String_t* HitBuilder_1_GetCampaignSource_m20758_gshared (HitBuilder_1_t53 * __this, const MethodInfo* method);
#define HitBuilder_1_GetCampaignSource_m20758(__this, method) (( String_t* (*) (HitBuilder_1_t53 *, const MethodInfo*))HitBuilder_1_GetCampaignSource_m20758_gshared)(__this, method)
// T HitBuilder`1<System.Object>::SetCampaignSource(System.String)
extern "C" Object_t * HitBuilder_1_SetCampaignSource_m20759_gshared (HitBuilder_1_t53 * __this, String_t* ___campaignSource, const MethodInfo* method);
#define HitBuilder_1_SetCampaignSource_m20759(__this, ___campaignSource, method) (( Object_t * (*) (HitBuilder_1_t53 *, String_t*, const MethodInfo*))HitBuilder_1_SetCampaignSource_m20759_gshared)(__this, ___campaignSource, method)
// System.String HitBuilder`1<System.Object>::GetCampaignMedium()
extern "C" String_t* HitBuilder_1_GetCampaignMedium_m20760_gshared (HitBuilder_1_t53 * __this, const MethodInfo* method);
#define HitBuilder_1_GetCampaignMedium_m20760(__this, method) (( String_t* (*) (HitBuilder_1_t53 *, const MethodInfo*))HitBuilder_1_GetCampaignMedium_m20760_gshared)(__this, method)
// T HitBuilder`1<System.Object>::SetCampaignMedium(System.String)
extern "C" Object_t * HitBuilder_1_SetCampaignMedium_m20761_gshared (HitBuilder_1_t53 * __this, String_t* ___campaignMedium, const MethodInfo* method);
#define HitBuilder_1_SetCampaignMedium_m20761(__this, ___campaignMedium, method) (( Object_t * (*) (HitBuilder_1_t53 *, String_t*, const MethodInfo*))HitBuilder_1_SetCampaignMedium_m20761_gshared)(__this, ___campaignMedium, method)
// System.String HitBuilder`1<System.Object>::GetCampaignKeyword()
extern "C" String_t* HitBuilder_1_GetCampaignKeyword_m20762_gshared (HitBuilder_1_t53 * __this, const MethodInfo* method);
#define HitBuilder_1_GetCampaignKeyword_m20762(__this, method) (( String_t* (*) (HitBuilder_1_t53 *, const MethodInfo*))HitBuilder_1_GetCampaignKeyword_m20762_gshared)(__this, method)
// T HitBuilder`1<System.Object>::SetCampaignKeyword(System.String)
extern "C" Object_t * HitBuilder_1_SetCampaignKeyword_m20763_gshared (HitBuilder_1_t53 * __this, String_t* ___campaignKeyword, const MethodInfo* method);
#define HitBuilder_1_SetCampaignKeyword_m20763(__this, ___campaignKeyword, method) (( Object_t * (*) (HitBuilder_1_t53 *, String_t*, const MethodInfo*))HitBuilder_1_SetCampaignKeyword_m20763_gshared)(__this, ___campaignKeyword, method)
// System.String HitBuilder`1<System.Object>::GetCampaignContent()
extern "C" String_t* HitBuilder_1_GetCampaignContent_m20764_gshared (HitBuilder_1_t53 * __this, const MethodInfo* method);
#define HitBuilder_1_GetCampaignContent_m20764(__this, method) (( String_t* (*) (HitBuilder_1_t53 *, const MethodInfo*))HitBuilder_1_GetCampaignContent_m20764_gshared)(__this, method)
// T HitBuilder`1<System.Object>::SetCampaignContent(System.String)
extern "C" Object_t * HitBuilder_1_SetCampaignContent_m20765_gshared (HitBuilder_1_t53 * __this, String_t* ___campaignContent, const MethodInfo* method);
#define HitBuilder_1_SetCampaignContent_m20765(__this, ___campaignContent, method) (( Object_t * (*) (HitBuilder_1_t53 *, String_t*, const MethodInfo*))HitBuilder_1_SetCampaignContent_m20765_gshared)(__this, ___campaignContent, method)
// System.String HitBuilder`1<System.Object>::GetCampaignID()
extern "C" String_t* HitBuilder_1_GetCampaignID_m20766_gshared (HitBuilder_1_t53 * __this, const MethodInfo* method);
#define HitBuilder_1_GetCampaignID_m20766(__this, method) (( String_t* (*) (HitBuilder_1_t53 *, const MethodInfo*))HitBuilder_1_GetCampaignID_m20766_gshared)(__this, method)
// T HitBuilder`1<System.Object>::SetCampaignID(System.String)
extern "C" Object_t * HitBuilder_1_SetCampaignID_m20767_gshared (HitBuilder_1_t53 * __this, String_t* ___campaignID, const MethodInfo* method);
#define HitBuilder_1_SetCampaignID_m20767(__this, ___campaignID, method) (( Object_t * (*) (HitBuilder_1_t53 *, String_t*, const MethodInfo*))HitBuilder_1_SetCampaignID_m20767_gshared)(__this, ___campaignID, method)
// System.String HitBuilder`1<System.Object>::GetGclid()
extern "C" String_t* HitBuilder_1_GetGclid_m20768_gshared (HitBuilder_1_t53 * __this, const MethodInfo* method);
#define HitBuilder_1_GetGclid_m20768(__this, method) (( String_t* (*) (HitBuilder_1_t53 *, const MethodInfo*))HitBuilder_1_GetGclid_m20768_gshared)(__this, method)
// T HitBuilder`1<System.Object>::SetGclid(System.String)
extern "C" Object_t * HitBuilder_1_SetGclid_m20769_gshared (HitBuilder_1_t53 * __this, String_t* ___gclid, const MethodInfo* method);
#define HitBuilder_1_SetGclid_m20769(__this, ___gclid, method) (( Object_t * (*) (HitBuilder_1_t53 *, String_t*, const MethodInfo*))HitBuilder_1_SetGclid_m20769_gshared)(__this, ___gclid, method)
// System.String HitBuilder`1<System.Object>::GetDclid()
extern "C" String_t* HitBuilder_1_GetDclid_m20770_gshared (HitBuilder_1_t53 * __this, const MethodInfo* method);
#define HitBuilder_1_GetDclid_m20770(__this, method) (( String_t* (*) (HitBuilder_1_t53 *, const MethodInfo*))HitBuilder_1_GetDclid_m20770_gshared)(__this, method)
// T HitBuilder`1<System.Object>::SetDclid(System.String)
extern "C" Object_t * HitBuilder_1_SetDclid_m20771_gshared (HitBuilder_1_t53 * __this, String_t* ___dclid, const MethodInfo* method);
#define HitBuilder_1_SetDclid_m20771(__this, ___dclid, method) (( Object_t * (*) (HitBuilder_1_t53 *, String_t*, const MethodInfo*))HitBuilder_1_SetDclid_m20771_gshared)(__this, ___dclid, method)
