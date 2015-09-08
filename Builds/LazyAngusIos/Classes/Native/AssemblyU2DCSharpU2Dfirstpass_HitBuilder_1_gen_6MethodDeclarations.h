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
extern "C" void HitBuilder_1__ctor_m25421_gshared (HitBuilder_1_t53 * __this, const MethodInfo* method);
#define HitBuilder_1__ctor_m25421(__this, method) (( void (*) (HitBuilder_1_t53 *, const MethodInfo*))HitBuilder_1__ctor_m25421_gshared)(__this, method)
// T HitBuilder`1<System.Object>::GetThis()
// T HitBuilder`1<System.Object>::Validate()
// T HitBuilder`1<System.Object>::SetCustomDimension(System.Int32,System.String)
extern "C" Object_t * HitBuilder_1_SetCustomDimension_m25422_gshared (HitBuilder_1_t53 * __this, int32_t ___dimensionNumber, String_t* ___value, const MethodInfo* method);
#define HitBuilder_1_SetCustomDimension_m25422(__this, ___dimensionNumber, ___value, method) (( Object_t * (*) (HitBuilder_1_t53 *, int32_t, String_t*, const MethodInfo*))HitBuilder_1_SetCustomDimension_m25422_gshared)(__this, ___dimensionNumber, ___value, method)
// System.Collections.Generic.Dictionary`2<System.Int32,System.String> HitBuilder`1<System.Object>::GetCustomDimensions()
extern "C" Dictionary_2_t103 * HitBuilder_1_GetCustomDimensions_m25423_gshared (HitBuilder_1_t53 * __this, const MethodInfo* method);
#define HitBuilder_1_GetCustomDimensions_m25423(__this, method) (( Dictionary_2_t103 * (*) (HitBuilder_1_t53 *, const MethodInfo*))HitBuilder_1_GetCustomDimensions_m25423_gshared)(__this, method)
// T HitBuilder`1<System.Object>::SetCustomMetric(System.Int32,System.String)
extern "C" Object_t * HitBuilder_1_SetCustomMetric_m25424_gshared (HitBuilder_1_t53 * __this, int32_t ___metricNumber, String_t* ___value, const MethodInfo* method);
#define HitBuilder_1_SetCustomMetric_m25424(__this, ___metricNumber, ___value, method) (( Object_t * (*) (HitBuilder_1_t53 *, int32_t, String_t*, const MethodInfo*))HitBuilder_1_SetCustomMetric_m25424_gshared)(__this, ___metricNumber, ___value, method)
// System.Collections.Generic.Dictionary`2<System.Int32,System.String> HitBuilder`1<System.Object>::GetCustomMetrics()
extern "C" Dictionary_2_t103 * HitBuilder_1_GetCustomMetrics_m25425_gshared (HitBuilder_1_t53 * __this, const MethodInfo* method);
#define HitBuilder_1_GetCustomMetrics_m25425(__this, method) (( Dictionary_2_t103 * (*) (HitBuilder_1_t53 *, const MethodInfo*))HitBuilder_1_GetCustomMetrics_m25425_gshared)(__this, method)
// System.String HitBuilder`1<System.Object>::GetCampaignName()
extern "C" String_t* HitBuilder_1_GetCampaignName_m25426_gshared (HitBuilder_1_t53 * __this, const MethodInfo* method);
#define HitBuilder_1_GetCampaignName_m25426(__this, method) (( String_t* (*) (HitBuilder_1_t53 *, const MethodInfo*))HitBuilder_1_GetCampaignName_m25426_gshared)(__this, method)
// T HitBuilder`1<System.Object>::SetCampaignName(System.String)
extern "C" Object_t * HitBuilder_1_SetCampaignName_m25427_gshared (HitBuilder_1_t53 * __this, String_t* ___campaignName, const MethodInfo* method);
#define HitBuilder_1_SetCampaignName_m25427(__this, ___campaignName, method) (( Object_t * (*) (HitBuilder_1_t53 *, String_t*, const MethodInfo*))HitBuilder_1_SetCampaignName_m25427_gshared)(__this, ___campaignName, method)
// System.String HitBuilder`1<System.Object>::GetCampaignSource()
extern "C" String_t* HitBuilder_1_GetCampaignSource_m25428_gshared (HitBuilder_1_t53 * __this, const MethodInfo* method);
#define HitBuilder_1_GetCampaignSource_m25428(__this, method) (( String_t* (*) (HitBuilder_1_t53 *, const MethodInfo*))HitBuilder_1_GetCampaignSource_m25428_gshared)(__this, method)
// T HitBuilder`1<System.Object>::SetCampaignSource(System.String)
extern "C" Object_t * HitBuilder_1_SetCampaignSource_m25429_gshared (HitBuilder_1_t53 * __this, String_t* ___campaignSource, const MethodInfo* method);
#define HitBuilder_1_SetCampaignSource_m25429(__this, ___campaignSource, method) (( Object_t * (*) (HitBuilder_1_t53 *, String_t*, const MethodInfo*))HitBuilder_1_SetCampaignSource_m25429_gshared)(__this, ___campaignSource, method)
// System.String HitBuilder`1<System.Object>::GetCampaignMedium()
extern "C" String_t* HitBuilder_1_GetCampaignMedium_m25430_gshared (HitBuilder_1_t53 * __this, const MethodInfo* method);
#define HitBuilder_1_GetCampaignMedium_m25430(__this, method) (( String_t* (*) (HitBuilder_1_t53 *, const MethodInfo*))HitBuilder_1_GetCampaignMedium_m25430_gshared)(__this, method)
// T HitBuilder`1<System.Object>::SetCampaignMedium(System.String)
extern "C" Object_t * HitBuilder_1_SetCampaignMedium_m25431_gshared (HitBuilder_1_t53 * __this, String_t* ___campaignMedium, const MethodInfo* method);
#define HitBuilder_1_SetCampaignMedium_m25431(__this, ___campaignMedium, method) (( Object_t * (*) (HitBuilder_1_t53 *, String_t*, const MethodInfo*))HitBuilder_1_SetCampaignMedium_m25431_gshared)(__this, ___campaignMedium, method)
// System.String HitBuilder`1<System.Object>::GetCampaignKeyword()
extern "C" String_t* HitBuilder_1_GetCampaignKeyword_m25432_gshared (HitBuilder_1_t53 * __this, const MethodInfo* method);
#define HitBuilder_1_GetCampaignKeyword_m25432(__this, method) (( String_t* (*) (HitBuilder_1_t53 *, const MethodInfo*))HitBuilder_1_GetCampaignKeyword_m25432_gshared)(__this, method)
// T HitBuilder`1<System.Object>::SetCampaignKeyword(System.String)
extern "C" Object_t * HitBuilder_1_SetCampaignKeyword_m25433_gshared (HitBuilder_1_t53 * __this, String_t* ___campaignKeyword, const MethodInfo* method);
#define HitBuilder_1_SetCampaignKeyword_m25433(__this, ___campaignKeyword, method) (( Object_t * (*) (HitBuilder_1_t53 *, String_t*, const MethodInfo*))HitBuilder_1_SetCampaignKeyword_m25433_gshared)(__this, ___campaignKeyword, method)
// System.String HitBuilder`1<System.Object>::GetCampaignContent()
extern "C" String_t* HitBuilder_1_GetCampaignContent_m25434_gshared (HitBuilder_1_t53 * __this, const MethodInfo* method);
#define HitBuilder_1_GetCampaignContent_m25434(__this, method) (( String_t* (*) (HitBuilder_1_t53 *, const MethodInfo*))HitBuilder_1_GetCampaignContent_m25434_gshared)(__this, method)
// T HitBuilder`1<System.Object>::SetCampaignContent(System.String)
extern "C" Object_t * HitBuilder_1_SetCampaignContent_m25435_gshared (HitBuilder_1_t53 * __this, String_t* ___campaignContent, const MethodInfo* method);
#define HitBuilder_1_SetCampaignContent_m25435(__this, ___campaignContent, method) (( Object_t * (*) (HitBuilder_1_t53 *, String_t*, const MethodInfo*))HitBuilder_1_SetCampaignContent_m25435_gshared)(__this, ___campaignContent, method)
// System.String HitBuilder`1<System.Object>::GetCampaignID()
extern "C" String_t* HitBuilder_1_GetCampaignID_m25436_gshared (HitBuilder_1_t53 * __this, const MethodInfo* method);
#define HitBuilder_1_GetCampaignID_m25436(__this, method) (( String_t* (*) (HitBuilder_1_t53 *, const MethodInfo*))HitBuilder_1_GetCampaignID_m25436_gshared)(__this, method)
// T HitBuilder`1<System.Object>::SetCampaignID(System.String)
extern "C" Object_t * HitBuilder_1_SetCampaignID_m25437_gshared (HitBuilder_1_t53 * __this, String_t* ___campaignID, const MethodInfo* method);
#define HitBuilder_1_SetCampaignID_m25437(__this, ___campaignID, method) (( Object_t * (*) (HitBuilder_1_t53 *, String_t*, const MethodInfo*))HitBuilder_1_SetCampaignID_m25437_gshared)(__this, ___campaignID, method)
// System.String HitBuilder`1<System.Object>::GetGclid()
extern "C" String_t* HitBuilder_1_GetGclid_m25438_gshared (HitBuilder_1_t53 * __this, const MethodInfo* method);
#define HitBuilder_1_GetGclid_m25438(__this, method) (( String_t* (*) (HitBuilder_1_t53 *, const MethodInfo*))HitBuilder_1_GetGclid_m25438_gshared)(__this, method)
// T HitBuilder`1<System.Object>::SetGclid(System.String)
extern "C" Object_t * HitBuilder_1_SetGclid_m25439_gshared (HitBuilder_1_t53 * __this, String_t* ___gclid, const MethodInfo* method);
#define HitBuilder_1_SetGclid_m25439(__this, ___gclid, method) (( Object_t * (*) (HitBuilder_1_t53 *, String_t*, const MethodInfo*))HitBuilder_1_SetGclid_m25439_gshared)(__this, ___gclid, method)
// System.String HitBuilder`1<System.Object>::GetDclid()
extern "C" String_t* HitBuilder_1_GetDclid_m25440_gshared (HitBuilder_1_t53 * __this, const MethodInfo* method);
#define HitBuilder_1_GetDclid_m25440(__this, method) (( String_t* (*) (HitBuilder_1_t53 *, const MethodInfo*))HitBuilder_1_GetDclid_m25440_gshared)(__this, method)
// T HitBuilder`1<System.Object>::SetDclid(System.String)
extern "C" Object_t * HitBuilder_1_SetDclid_m25441_gshared (HitBuilder_1_t53 * __this, String_t* ___dclid, const MethodInfo* method);
#define HitBuilder_1_SetDclid_m25441(__this, ___dclid, method) (( Object_t * (*) (HitBuilder_1_t53 *, String_t*, const MethodInfo*))HitBuilder_1_SetDclid_m25441_gshared)(__this, ___dclid, method)
