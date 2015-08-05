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
extern "C" void HitBuilder_1__ctor_m20821_gshared (HitBuilder_1_t53 * __this, const MethodInfo* method);
#define HitBuilder_1__ctor_m20821(__this, method) (( void (*) (HitBuilder_1_t53 *, const MethodInfo*))HitBuilder_1__ctor_m20821_gshared)(__this, method)
// T HitBuilder`1<System.Object>::GetThis()
// T HitBuilder`1<System.Object>::Validate()
// T HitBuilder`1<System.Object>::SetCustomDimension(System.Int32,System.String)
extern "C" Object_t * HitBuilder_1_SetCustomDimension_m20822_gshared (HitBuilder_1_t53 * __this, int32_t ___dimensionNumber, String_t* ___value, const MethodInfo* method);
#define HitBuilder_1_SetCustomDimension_m20822(__this, ___dimensionNumber, ___value, method) (( Object_t * (*) (HitBuilder_1_t53 *, int32_t, String_t*, const MethodInfo*))HitBuilder_1_SetCustomDimension_m20822_gshared)(__this, ___dimensionNumber, ___value, method)
// System.Collections.Generic.Dictionary`2<System.Int32,System.String> HitBuilder`1<System.Object>::GetCustomDimensions()
extern "C" Dictionary_2_t103 * HitBuilder_1_GetCustomDimensions_m20823_gshared (HitBuilder_1_t53 * __this, const MethodInfo* method);
#define HitBuilder_1_GetCustomDimensions_m20823(__this, method) (( Dictionary_2_t103 * (*) (HitBuilder_1_t53 *, const MethodInfo*))HitBuilder_1_GetCustomDimensions_m20823_gshared)(__this, method)
// T HitBuilder`1<System.Object>::SetCustomMetric(System.Int32,System.String)
extern "C" Object_t * HitBuilder_1_SetCustomMetric_m20824_gshared (HitBuilder_1_t53 * __this, int32_t ___metricNumber, String_t* ___value, const MethodInfo* method);
#define HitBuilder_1_SetCustomMetric_m20824(__this, ___metricNumber, ___value, method) (( Object_t * (*) (HitBuilder_1_t53 *, int32_t, String_t*, const MethodInfo*))HitBuilder_1_SetCustomMetric_m20824_gshared)(__this, ___metricNumber, ___value, method)
// System.Collections.Generic.Dictionary`2<System.Int32,System.String> HitBuilder`1<System.Object>::GetCustomMetrics()
extern "C" Dictionary_2_t103 * HitBuilder_1_GetCustomMetrics_m20825_gshared (HitBuilder_1_t53 * __this, const MethodInfo* method);
#define HitBuilder_1_GetCustomMetrics_m20825(__this, method) (( Dictionary_2_t103 * (*) (HitBuilder_1_t53 *, const MethodInfo*))HitBuilder_1_GetCustomMetrics_m20825_gshared)(__this, method)
// System.String HitBuilder`1<System.Object>::GetCampaignName()
extern "C" String_t* HitBuilder_1_GetCampaignName_m20826_gshared (HitBuilder_1_t53 * __this, const MethodInfo* method);
#define HitBuilder_1_GetCampaignName_m20826(__this, method) (( String_t* (*) (HitBuilder_1_t53 *, const MethodInfo*))HitBuilder_1_GetCampaignName_m20826_gshared)(__this, method)
// T HitBuilder`1<System.Object>::SetCampaignName(System.String)
extern "C" Object_t * HitBuilder_1_SetCampaignName_m20827_gshared (HitBuilder_1_t53 * __this, String_t* ___campaignName, const MethodInfo* method);
#define HitBuilder_1_SetCampaignName_m20827(__this, ___campaignName, method) (( Object_t * (*) (HitBuilder_1_t53 *, String_t*, const MethodInfo*))HitBuilder_1_SetCampaignName_m20827_gshared)(__this, ___campaignName, method)
// System.String HitBuilder`1<System.Object>::GetCampaignSource()
extern "C" String_t* HitBuilder_1_GetCampaignSource_m20828_gshared (HitBuilder_1_t53 * __this, const MethodInfo* method);
#define HitBuilder_1_GetCampaignSource_m20828(__this, method) (( String_t* (*) (HitBuilder_1_t53 *, const MethodInfo*))HitBuilder_1_GetCampaignSource_m20828_gshared)(__this, method)
// T HitBuilder`1<System.Object>::SetCampaignSource(System.String)
extern "C" Object_t * HitBuilder_1_SetCampaignSource_m20829_gshared (HitBuilder_1_t53 * __this, String_t* ___campaignSource, const MethodInfo* method);
#define HitBuilder_1_SetCampaignSource_m20829(__this, ___campaignSource, method) (( Object_t * (*) (HitBuilder_1_t53 *, String_t*, const MethodInfo*))HitBuilder_1_SetCampaignSource_m20829_gshared)(__this, ___campaignSource, method)
// System.String HitBuilder`1<System.Object>::GetCampaignMedium()
extern "C" String_t* HitBuilder_1_GetCampaignMedium_m20830_gshared (HitBuilder_1_t53 * __this, const MethodInfo* method);
#define HitBuilder_1_GetCampaignMedium_m20830(__this, method) (( String_t* (*) (HitBuilder_1_t53 *, const MethodInfo*))HitBuilder_1_GetCampaignMedium_m20830_gshared)(__this, method)
// T HitBuilder`1<System.Object>::SetCampaignMedium(System.String)
extern "C" Object_t * HitBuilder_1_SetCampaignMedium_m20831_gshared (HitBuilder_1_t53 * __this, String_t* ___campaignMedium, const MethodInfo* method);
#define HitBuilder_1_SetCampaignMedium_m20831(__this, ___campaignMedium, method) (( Object_t * (*) (HitBuilder_1_t53 *, String_t*, const MethodInfo*))HitBuilder_1_SetCampaignMedium_m20831_gshared)(__this, ___campaignMedium, method)
// System.String HitBuilder`1<System.Object>::GetCampaignKeyword()
extern "C" String_t* HitBuilder_1_GetCampaignKeyword_m20832_gshared (HitBuilder_1_t53 * __this, const MethodInfo* method);
#define HitBuilder_1_GetCampaignKeyword_m20832(__this, method) (( String_t* (*) (HitBuilder_1_t53 *, const MethodInfo*))HitBuilder_1_GetCampaignKeyword_m20832_gshared)(__this, method)
// T HitBuilder`1<System.Object>::SetCampaignKeyword(System.String)
extern "C" Object_t * HitBuilder_1_SetCampaignKeyword_m20833_gshared (HitBuilder_1_t53 * __this, String_t* ___campaignKeyword, const MethodInfo* method);
#define HitBuilder_1_SetCampaignKeyword_m20833(__this, ___campaignKeyword, method) (( Object_t * (*) (HitBuilder_1_t53 *, String_t*, const MethodInfo*))HitBuilder_1_SetCampaignKeyword_m20833_gshared)(__this, ___campaignKeyword, method)
// System.String HitBuilder`1<System.Object>::GetCampaignContent()
extern "C" String_t* HitBuilder_1_GetCampaignContent_m20834_gshared (HitBuilder_1_t53 * __this, const MethodInfo* method);
#define HitBuilder_1_GetCampaignContent_m20834(__this, method) (( String_t* (*) (HitBuilder_1_t53 *, const MethodInfo*))HitBuilder_1_GetCampaignContent_m20834_gshared)(__this, method)
// T HitBuilder`1<System.Object>::SetCampaignContent(System.String)
extern "C" Object_t * HitBuilder_1_SetCampaignContent_m20835_gshared (HitBuilder_1_t53 * __this, String_t* ___campaignContent, const MethodInfo* method);
#define HitBuilder_1_SetCampaignContent_m20835(__this, ___campaignContent, method) (( Object_t * (*) (HitBuilder_1_t53 *, String_t*, const MethodInfo*))HitBuilder_1_SetCampaignContent_m20835_gshared)(__this, ___campaignContent, method)
// System.String HitBuilder`1<System.Object>::GetCampaignID()
extern "C" String_t* HitBuilder_1_GetCampaignID_m20836_gshared (HitBuilder_1_t53 * __this, const MethodInfo* method);
#define HitBuilder_1_GetCampaignID_m20836(__this, method) (( String_t* (*) (HitBuilder_1_t53 *, const MethodInfo*))HitBuilder_1_GetCampaignID_m20836_gshared)(__this, method)
// T HitBuilder`1<System.Object>::SetCampaignID(System.String)
extern "C" Object_t * HitBuilder_1_SetCampaignID_m20837_gshared (HitBuilder_1_t53 * __this, String_t* ___campaignID, const MethodInfo* method);
#define HitBuilder_1_SetCampaignID_m20837(__this, ___campaignID, method) (( Object_t * (*) (HitBuilder_1_t53 *, String_t*, const MethodInfo*))HitBuilder_1_SetCampaignID_m20837_gshared)(__this, ___campaignID, method)
// System.String HitBuilder`1<System.Object>::GetGclid()
extern "C" String_t* HitBuilder_1_GetGclid_m20838_gshared (HitBuilder_1_t53 * __this, const MethodInfo* method);
#define HitBuilder_1_GetGclid_m20838(__this, method) (( String_t* (*) (HitBuilder_1_t53 *, const MethodInfo*))HitBuilder_1_GetGclid_m20838_gshared)(__this, method)
// T HitBuilder`1<System.Object>::SetGclid(System.String)
extern "C" Object_t * HitBuilder_1_SetGclid_m20839_gshared (HitBuilder_1_t53 * __this, String_t* ___gclid, const MethodInfo* method);
#define HitBuilder_1_SetGclid_m20839(__this, ___gclid, method) (( Object_t * (*) (HitBuilder_1_t53 *, String_t*, const MethodInfo*))HitBuilder_1_SetGclid_m20839_gshared)(__this, ___gclid, method)
// System.String HitBuilder`1<System.Object>::GetDclid()
extern "C" String_t* HitBuilder_1_GetDclid_m20840_gshared (HitBuilder_1_t53 * __this, const MethodInfo* method);
#define HitBuilder_1_GetDclid_m20840(__this, method) (( String_t* (*) (HitBuilder_1_t53 *, const MethodInfo*))HitBuilder_1_GetDclid_m20840_gshared)(__this, method)
// T HitBuilder`1<System.Object>::SetDclid(System.String)
extern "C" Object_t * HitBuilder_1_SetDclid_m20841_gshared (HitBuilder_1_t53 * __this, String_t* ___dclid, const MethodInfo* method);
#define HitBuilder_1_SetDclid_m20841(__this, ___dclid, method) (( Object_t * (*) (HitBuilder_1_t53 *, String_t*, const MethodInfo*))HitBuilder_1_SetDclid_m20841_gshared)(__this, ___dclid, method)
