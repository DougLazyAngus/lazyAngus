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
extern "C" void HitBuilder_1__ctor_m21221_gshared (HitBuilder_1_t53 * __this, const MethodInfo* method);
#define HitBuilder_1__ctor_m21221(__this, method) (( void (*) (HitBuilder_1_t53 *, const MethodInfo*))HitBuilder_1__ctor_m21221_gshared)(__this, method)
// T HitBuilder`1<System.Object>::GetThis()
// T HitBuilder`1<System.Object>::Validate()
// T HitBuilder`1<System.Object>::SetCustomDimension(System.Int32,System.String)
extern "C" Object_t * HitBuilder_1_SetCustomDimension_m21222_gshared (HitBuilder_1_t53 * __this, int32_t ___dimensionNumber, String_t* ___value, const MethodInfo* method);
#define HitBuilder_1_SetCustomDimension_m21222(__this, ___dimensionNumber, ___value, method) (( Object_t * (*) (HitBuilder_1_t53 *, int32_t, String_t*, const MethodInfo*))HitBuilder_1_SetCustomDimension_m21222_gshared)(__this, ___dimensionNumber, ___value, method)
// System.Collections.Generic.Dictionary`2<System.Int32,System.String> HitBuilder`1<System.Object>::GetCustomDimensions()
extern "C" Dictionary_2_t103 * HitBuilder_1_GetCustomDimensions_m21223_gshared (HitBuilder_1_t53 * __this, const MethodInfo* method);
#define HitBuilder_1_GetCustomDimensions_m21223(__this, method) (( Dictionary_2_t103 * (*) (HitBuilder_1_t53 *, const MethodInfo*))HitBuilder_1_GetCustomDimensions_m21223_gshared)(__this, method)
// T HitBuilder`1<System.Object>::SetCustomMetric(System.Int32,System.String)
extern "C" Object_t * HitBuilder_1_SetCustomMetric_m21224_gshared (HitBuilder_1_t53 * __this, int32_t ___metricNumber, String_t* ___value, const MethodInfo* method);
#define HitBuilder_1_SetCustomMetric_m21224(__this, ___metricNumber, ___value, method) (( Object_t * (*) (HitBuilder_1_t53 *, int32_t, String_t*, const MethodInfo*))HitBuilder_1_SetCustomMetric_m21224_gshared)(__this, ___metricNumber, ___value, method)
// System.Collections.Generic.Dictionary`2<System.Int32,System.String> HitBuilder`1<System.Object>::GetCustomMetrics()
extern "C" Dictionary_2_t103 * HitBuilder_1_GetCustomMetrics_m21225_gshared (HitBuilder_1_t53 * __this, const MethodInfo* method);
#define HitBuilder_1_GetCustomMetrics_m21225(__this, method) (( Dictionary_2_t103 * (*) (HitBuilder_1_t53 *, const MethodInfo*))HitBuilder_1_GetCustomMetrics_m21225_gshared)(__this, method)
// System.String HitBuilder`1<System.Object>::GetCampaignName()
extern "C" String_t* HitBuilder_1_GetCampaignName_m21226_gshared (HitBuilder_1_t53 * __this, const MethodInfo* method);
#define HitBuilder_1_GetCampaignName_m21226(__this, method) (( String_t* (*) (HitBuilder_1_t53 *, const MethodInfo*))HitBuilder_1_GetCampaignName_m21226_gshared)(__this, method)
// T HitBuilder`1<System.Object>::SetCampaignName(System.String)
extern "C" Object_t * HitBuilder_1_SetCampaignName_m21227_gshared (HitBuilder_1_t53 * __this, String_t* ___campaignName, const MethodInfo* method);
#define HitBuilder_1_SetCampaignName_m21227(__this, ___campaignName, method) (( Object_t * (*) (HitBuilder_1_t53 *, String_t*, const MethodInfo*))HitBuilder_1_SetCampaignName_m21227_gshared)(__this, ___campaignName, method)
// System.String HitBuilder`1<System.Object>::GetCampaignSource()
extern "C" String_t* HitBuilder_1_GetCampaignSource_m21228_gshared (HitBuilder_1_t53 * __this, const MethodInfo* method);
#define HitBuilder_1_GetCampaignSource_m21228(__this, method) (( String_t* (*) (HitBuilder_1_t53 *, const MethodInfo*))HitBuilder_1_GetCampaignSource_m21228_gshared)(__this, method)
// T HitBuilder`1<System.Object>::SetCampaignSource(System.String)
extern "C" Object_t * HitBuilder_1_SetCampaignSource_m21229_gshared (HitBuilder_1_t53 * __this, String_t* ___campaignSource, const MethodInfo* method);
#define HitBuilder_1_SetCampaignSource_m21229(__this, ___campaignSource, method) (( Object_t * (*) (HitBuilder_1_t53 *, String_t*, const MethodInfo*))HitBuilder_1_SetCampaignSource_m21229_gshared)(__this, ___campaignSource, method)
// System.String HitBuilder`1<System.Object>::GetCampaignMedium()
extern "C" String_t* HitBuilder_1_GetCampaignMedium_m21230_gshared (HitBuilder_1_t53 * __this, const MethodInfo* method);
#define HitBuilder_1_GetCampaignMedium_m21230(__this, method) (( String_t* (*) (HitBuilder_1_t53 *, const MethodInfo*))HitBuilder_1_GetCampaignMedium_m21230_gshared)(__this, method)
// T HitBuilder`1<System.Object>::SetCampaignMedium(System.String)
extern "C" Object_t * HitBuilder_1_SetCampaignMedium_m21231_gshared (HitBuilder_1_t53 * __this, String_t* ___campaignMedium, const MethodInfo* method);
#define HitBuilder_1_SetCampaignMedium_m21231(__this, ___campaignMedium, method) (( Object_t * (*) (HitBuilder_1_t53 *, String_t*, const MethodInfo*))HitBuilder_1_SetCampaignMedium_m21231_gshared)(__this, ___campaignMedium, method)
// System.String HitBuilder`1<System.Object>::GetCampaignKeyword()
extern "C" String_t* HitBuilder_1_GetCampaignKeyword_m21232_gshared (HitBuilder_1_t53 * __this, const MethodInfo* method);
#define HitBuilder_1_GetCampaignKeyword_m21232(__this, method) (( String_t* (*) (HitBuilder_1_t53 *, const MethodInfo*))HitBuilder_1_GetCampaignKeyword_m21232_gshared)(__this, method)
// T HitBuilder`1<System.Object>::SetCampaignKeyword(System.String)
extern "C" Object_t * HitBuilder_1_SetCampaignKeyword_m21233_gshared (HitBuilder_1_t53 * __this, String_t* ___campaignKeyword, const MethodInfo* method);
#define HitBuilder_1_SetCampaignKeyword_m21233(__this, ___campaignKeyword, method) (( Object_t * (*) (HitBuilder_1_t53 *, String_t*, const MethodInfo*))HitBuilder_1_SetCampaignKeyword_m21233_gshared)(__this, ___campaignKeyword, method)
// System.String HitBuilder`1<System.Object>::GetCampaignContent()
extern "C" String_t* HitBuilder_1_GetCampaignContent_m21234_gshared (HitBuilder_1_t53 * __this, const MethodInfo* method);
#define HitBuilder_1_GetCampaignContent_m21234(__this, method) (( String_t* (*) (HitBuilder_1_t53 *, const MethodInfo*))HitBuilder_1_GetCampaignContent_m21234_gshared)(__this, method)
// T HitBuilder`1<System.Object>::SetCampaignContent(System.String)
extern "C" Object_t * HitBuilder_1_SetCampaignContent_m21235_gshared (HitBuilder_1_t53 * __this, String_t* ___campaignContent, const MethodInfo* method);
#define HitBuilder_1_SetCampaignContent_m21235(__this, ___campaignContent, method) (( Object_t * (*) (HitBuilder_1_t53 *, String_t*, const MethodInfo*))HitBuilder_1_SetCampaignContent_m21235_gshared)(__this, ___campaignContent, method)
// System.String HitBuilder`1<System.Object>::GetCampaignID()
extern "C" String_t* HitBuilder_1_GetCampaignID_m21236_gshared (HitBuilder_1_t53 * __this, const MethodInfo* method);
#define HitBuilder_1_GetCampaignID_m21236(__this, method) (( String_t* (*) (HitBuilder_1_t53 *, const MethodInfo*))HitBuilder_1_GetCampaignID_m21236_gshared)(__this, method)
// T HitBuilder`1<System.Object>::SetCampaignID(System.String)
extern "C" Object_t * HitBuilder_1_SetCampaignID_m21237_gshared (HitBuilder_1_t53 * __this, String_t* ___campaignID, const MethodInfo* method);
#define HitBuilder_1_SetCampaignID_m21237(__this, ___campaignID, method) (( Object_t * (*) (HitBuilder_1_t53 *, String_t*, const MethodInfo*))HitBuilder_1_SetCampaignID_m21237_gshared)(__this, ___campaignID, method)
// System.String HitBuilder`1<System.Object>::GetGclid()
extern "C" String_t* HitBuilder_1_GetGclid_m21238_gshared (HitBuilder_1_t53 * __this, const MethodInfo* method);
#define HitBuilder_1_GetGclid_m21238(__this, method) (( String_t* (*) (HitBuilder_1_t53 *, const MethodInfo*))HitBuilder_1_GetGclid_m21238_gshared)(__this, method)
// T HitBuilder`1<System.Object>::SetGclid(System.String)
extern "C" Object_t * HitBuilder_1_SetGclid_m21239_gshared (HitBuilder_1_t53 * __this, String_t* ___gclid, const MethodInfo* method);
#define HitBuilder_1_SetGclid_m21239(__this, ___gclid, method) (( Object_t * (*) (HitBuilder_1_t53 *, String_t*, const MethodInfo*))HitBuilder_1_SetGclid_m21239_gshared)(__this, ___gclid, method)
// System.String HitBuilder`1<System.Object>::GetDclid()
extern "C" String_t* HitBuilder_1_GetDclid_m21240_gshared (HitBuilder_1_t53 * __this, const MethodInfo* method);
#define HitBuilder_1_GetDclid_m21240(__this, method) (( String_t* (*) (HitBuilder_1_t53 *, const MethodInfo*))HitBuilder_1_GetDclid_m21240_gshared)(__this, method)
// T HitBuilder`1<System.Object>::SetDclid(System.String)
extern "C" Object_t * HitBuilder_1_SetDclid_m21241_gshared (HitBuilder_1_t53 * __this, String_t* ___dclid, const MethodInfo* method);
#define HitBuilder_1_SetDclid_m21241(__this, ___dclid, method) (( Object_t * (*) (HitBuilder_1_t53 *, String_t*, const MethodInfo*))HitBuilder_1_SetDclid_m21241_gshared)(__this, ___dclid, method)
