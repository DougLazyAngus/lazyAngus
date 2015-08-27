﻿#pragma once
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
extern "C" void HitBuilder_1__ctor_m21092_gshared (HitBuilder_1_t53 * __this, const MethodInfo* method);
#define HitBuilder_1__ctor_m21092(__this, method) (( void (*) (HitBuilder_1_t53 *, const MethodInfo*))HitBuilder_1__ctor_m21092_gshared)(__this, method)
// T HitBuilder`1<System.Object>::GetThis()
// T HitBuilder`1<System.Object>::Validate()
// T HitBuilder`1<System.Object>::SetCustomDimension(System.Int32,System.String)
extern "C" Object_t * HitBuilder_1_SetCustomDimension_m21093_gshared (HitBuilder_1_t53 * __this, int32_t ___dimensionNumber, String_t* ___value, const MethodInfo* method);
#define HitBuilder_1_SetCustomDimension_m21093(__this, ___dimensionNumber, ___value, method) (( Object_t * (*) (HitBuilder_1_t53 *, int32_t, String_t*, const MethodInfo*))HitBuilder_1_SetCustomDimension_m21093_gshared)(__this, ___dimensionNumber, ___value, method)
// System.Collections.Generic.Dictionary`2<System.Int32,System.String> HitBuilder`1<System.Object>::GetCustomDimensions()
extern "C" Dictionary_2_t103 * HitBuilder_1_GetCustomDimensions_m21094_gshared (HitBuilder_1_t53 * __this, const MethodInfo* method);
#define HitBuilder_1_GetCustomDimensions_m21094(__this, method) (( Dictionary_2_t103 * (*) (HitBuilder_1_t53 *, const MethodInfo*))HitBuilder_1_GetCustomDimensions_m21094_gshared)(__this, method)
// T HitBuilder`1<System.Object>::SetCustomMetric(System.Int32,System.String)
extern "C" Object_t * HitBuilder_1_SetCustomMetric_m21095_gshared (HitBuilder_1_t53 * __this, int32_t ___metricNumber, String_t* ___value, const MethodInfo* method);
#define HitBuilder_1_SetCustomMetric_m21095(__this, ___metricNumber, ___value, method) (( Object_t * (*) (HitBuilder_1_t53 *, int32_t, String_t*, const MethodInfo*))HitBuilder_1_SetCustomMetric_m21095_gshared)(__this, ___metricNumber, ___value, method)
// System.Collections.Generic.Dictionary`2<System.Int32,System.String> HitBuilder`1<System.Object>::GetCustomMetrics()
extern "C" Dictionary_2_t103 * HitBuilder_1_GetCustomMetrics_m21096_gshared (HitBuilder_1_t53 * __this, const MethodInfo* method);
#define HitBuilder_1_GetCustomMetrics_m21096(__this, method) (( Dictionary_2_t103 * (*) (HitBuilder_1_t53 *, const MethodInfo*))HitBuilder_1_GetCustomMetrics_m21096_gshared)(__this, method)
// System.String HitBuilder`1<System.Object>::GetCampaignName()
extern "C" String_t* HitBuilder_1_GetCampaignName_m21097_gshared (HitBuilder_1_t53 * __this, const MethodInfo* method);
#define HitBuilder_1_GetCampaignName_m21097(__this, method) (( String_t* (*) (HitBuilder_1_t53 *, const MethodInfo*))HitBuilder_1_GetCampaignName_m21097_gshared)(__this, method)
// T HitBuilder`1<System.Object>::SetCampaignName(System.String)
extern "C" Object_t * HitBuilder_1_SetCampaignName_m21098_gshared (HitBuilder_1_t53 * __this, String_t* ___campaignName, const MethodInfo* method);
#define HitBuilder_1_SetCampaignName_m21098(__this, ___campaignName, method) (( Object_t * (*) (HitBuilder_1_t53 *, String_t*, const MethodInfo*))HitBuilder_1_SetCampaignName_m21098_gshared)(__this, ___campaignName, method)
// System.String HitBuilder`1<System.Object>::GetCampaignSource()
extern "C" String_t* HitBuilder_1_GetCampaignSource_m21099_gshared (HitBuilder_1_t53 * __this, const MethodInfo* method);
#define HitBuilder_1_GetCampaignSource_m21099(__this, method) (( String_t* (*) (HitBuilder_1_t53 *, const MethodInfo*))HitBuilder_1_GetCampaignSource_m21099_gshared)(__this, method)
// T HitBuilder`1<System.Object>::SetCampaignSource(System.String)
extern "C" Object_t * HitBuilder_1_SetCampaignSource_m21100_gshared (HitBuilder_1_t53 * __this, String_t* ___campaignSource, const MethodInfo* method);
#define HitBuilder_1_SetCampaignSource_m21100(__this, ___campaignSource, method) (( Object_t * (*) (HitBuilder_1_t53 *, String_t*, const MethodInfo*))HitBuilder_1_SetCampaignSource_m21100_gshared)(__this, ___campaignSource, method)
// System.String HitBuilder`1<System.Object>::GetCampaignMedium()
extern "C" String_t* HitBuilder_1_GetCampaignMedium_m21101_gshared (HitBuilder_1_t53 * __this, const MethodInfo* method);
#define HitBuilder_1_GetCampaignMedium_m21101(__this, method) (( String_t* (*) (HitBuilder_1_t53 *, const MethodInfo*))HitBuilder_1_GetCampaignMedium_m21101_gshared)(__this, method)
// T HitBuilder`1<System.Object>::SetCampaignMedium(System.String)
extern "C" Object_t * HitBuilder_1_SetCampaignMedium_m21102_gshared (HitBuilder_1_t53 * __this, String_t* ___campaignMedium, const MethodInfo* method);
#define HitBuilder_1_SetCampaignMedium_m21102(__this, ___campaignMedium, method) (( Object_t * (*) (HitBuilder_1_t53 *, String_t*, const MethodInfo*))HitBuilder_1_SetCampaignMedium_m21102_gshared)(__this, ___campaignMedium, method)
// System.String HitBuilder`1<System.Object>::GetCampaignKeyword()
extern "C" String_t* HitBuilder_1_GetCampaignKeyword_m21103_gshared (HitBuilder_1_t53 * __this, const MethodInfo* method);
#define HitBuilder_1_GetCampaignKeyword_m21103(__this, method) (( String_t* (*) (HitBuilder_1_t53 *, const MethodInfo*))HitBuilder_1_GetCampaignKeyword_m21103_gshared)(__this, method)
// T HitBuilder`1<System.Object>::SetCampaignKeyword(System.String)
extern "C" Object_t * HitBuilder_1_SetCampaignKeyword_m21104_gshared (HitBuilder_1_t53 * __this, String_t* ___campaignKeyword, const MethodInfo* method);
#define HitBuilder_1_SetCampaignKeyword_m21104(__this, ___campaignKeyword, method) (( Object_t * (*) (HitBuilder_1_t53 *, String_t*, const MethodInfo*))HitBuilder_1_SetCampaignKeyword_m21104_gshared)(__this, ___campaignKeyword, method)
// System.String HitBuilder`1<System.Object>::GetCampaignContent()
extern "C" String_t* HitBuilder_1_GetCampaignContent_m21105_gshared (HitBuilder_1_t53 * __this, const MethodInfo* method);
#define HitBuilder_1_GetCampaignContent_m21105(__this, method) (( String_t* (*) (HitBuilder_1_t53 *, const MethodInfo*))HitBuilder_1_GetCampaignContent_m21105_gshared)(__this, method)
// T HitBuilder`1<System.Object>::SetCampaignContent(System.String)
extern "C" Object_t * HitBuilder_1_SetCampaignContent_m21106_gshared (HitBuilder_1_t53 * __this, String_t* ___campaignContent, const MethodInfo* method);
#define HitBuilder_1_SetCampaignContent_m21106(__this, ___campaignContent, method) (( Object_t * (*) (HitBuilder_1_t53 *, String_t*, const MethodInfo*))HitBuilder_1_SetCampaignContent_m21106_gshared)(__this, ___campaignContent, method)
// System.String HitBuilder`1<System.Object>::GetCampaignID()
extern "C" String_t* HitBuilder_1_GetCampaignID_m21107_gshared (HitBuilder_1_t53 * __this, const MethodInfo* method);
#define HitBuilder_1_GetCampaignID_m21107(__this, method) (( String_t* (*) (HitBuilder_1_t53 *, const MethodInfo*))HitBuilder_1_GetCampaignID_m21107_gshared)(__this, method)
// T HitBuilder`1<System.Object>::SetCampaignID(System.String)
extern "C" Object_t * HitBuilder_1_SetCampaignID_m21108_gshared (HitBuilder_1_t53 * __this, String_t* ___campaignID, const MethodInfo* method);
#define HitBuilder_1_SetCampaignID_m21108(__this, ___campaignID, method) (( Object_t * (*) (HitBuilder_1_t53 *, String_t*, const MethodInfo*))HitBuilder_1_SetCampaignID_m21108_gshared)(__this, ___campaignID, method)
// System.String HitBuilder`1<System.Object>::GetGclid()
extern "C" String_t* HitBuilder_1_GetGclid_m21109_gshared (HitBuilder_1_t53 * __this, const MethodInfo* method);
#define HitBuilder_1_GetGclid_m21109(__this, method) (( String_t* (*) (HitBuilder_1_t53 *, const MethodInfo*))HitBuilder_1_GetGclid_m21109_gshared)(__this, method)
// T HitBuilder`1<System.Object>::SetGclid(System.String)
extern "C" Object_t * HitBuilder_1_SetGclid_m21110_gshared (HitBuilder_1_t53 * __this, String_t* ___gclid, const MethodInfo* method);
#define HitBuilder_1_SetGclid_m21110(__this, ___gclid, method) (( Object_t * (*) (HitBuilder_1_t53 *, String_t*, const MethodInfo*))HitBuilder_1_SetGclid_m21110_gshared)(__this, ___gclid, method)
// System.String HitBuilder`1<System.Object>::GetDclid()
extern "C" String_t* HitBuilder_1_GetDclid_m21111_gshared (HitBuilder_1_t53 * __this, const MethodInfo* method);
#define HitBuilder_1_GetDclid_m21111(__this, method) (( String_t* (*) (HitBuilder_1_t53 *, const MethodInfo*))HitBuilder_1_GetDclid_m21111_gshared)(__this, method)
// T HitBuilder`1<System.Object>::SetDclid(System.String)
extern "C" Object_t * HitBuilder_1_SetDclid_m21112_gshared (HitBuilder_1_t53 * __this, String_t* ___dclid, const MethodInfo* method);
#define HitBuilder_1_SetDclid_m21112(__this, ___dclid, method) (( Object_t * (*) (HitBuilder_1_t53 *, String_t*, const MethodInfo*))HitBuilder_1_SetDclid_m21112_gshared)(__this, ___dclid, method)
