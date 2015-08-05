#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// HitBuilder`1<EventHitBuilder>
struct HitBuilder_1_t17;
// EventHitBuilder
struct EventHitBuilder_t16;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.String>
struct Dictionary_2_t103;

// System.Void HitBuilder`1<EventHitBuilder>::.ctor()
// HitBuilder`1<System.Object>
#include "AssemblyU2DCSharpU2Dfirstpass_HitBuilder_1_gen_6MethodDeclarations.h"
#define HitBuilder_1__ctor_m388(__this, method) (( void (*) (HitBuilder_1_t17 *, const MethodInfo*))HitBuilder_1__ctor_m20829_gshared)(__this, method)
// T HitBuilder`1<EventHitBuilder>::GetThis()
// T HitBuilder`1<EventHitBuilder>::Validate()
// T HitBuilder`1<EventHitBuilder>::SetCustomDimension(System.Int32,System.String)
#define HitBuilder_1_SetCustomDimension_m21166(__this, ___dimensionNumber, ___value, method) (( EventHitBuilder_t16 * (*) (HitBuilder_1_t17 *, int32_t, String_t*, const MethodInfo*))HitBuilder_1_SetCustomDimension_m20830_gshared)(__this, ___dimensionNumber, ___value, method)
// System.Collections.Generic.Dictionary`2<System.Int32,System.String> HitBuilder`1<EventHitBuilder>::GetCustomDimensions()
#define HitBuilder_1_GetCustomDimensions_m21167(__this, method) (( Dictionary_2_t103 * (*) (HitBuilder_1_t17 *, const MethodInfo*))HitBuilder_1_GetCustomDimensions_m20831_gshared)(__this, method)
// T HitBuilder`1<EventHitBuilder>::SetCustomMetric(System.Int32,System.String)
#define HitBuilder_1_SetCustomMetric_m21168(__this, ___metricNumber, ___value, method) (( EventHitBuilder_t16 * (*) (HitBuilder_1_t17 *, int32_t, String_t*, const MethodInfo*))HitBuilder_1_SetCustomMetric_m20832_gshared)(__this, ___metricNumber, ___value, method)
// System.Collections.Generic.Dictionary`2<System.Int32,System.String> HitBuilder`1<EventHitBuilder>::GetCustomMetrics()
#define HitBuilder_1_GetCustomMetrics_m21169(__this, method) (( Dictionary_2_t103 * (*) (HitBuilder_1_t17 *, const MethodInfo*))HitBuilder_1_GetCustomMetrics_m20833_gshared)(__this, method)
// System.String HitBuilder`1<EventHitBuilder>::GetCampaignName()
#define HitBuilder_1_GetCampaignName_m21170(__this, method) (( String_t* (*) (HitBuilder_1_t17 *, const MethodInfo*))HitBuilder_1_GetCampaignName_m20834_gshared)(__this, method)
// T HitBuilder`1<EventHitBuilder>::SetCampaignName(System.String)
#define HitBuilder_1_SetCampaignName_m21171(__this, ___campaignName, method) (( EventHitBuilder_t16 * (*) (HitBuilder_1_t17 *, String_t*, const MethodInfo*))HitBuilder_1_SetCampaignName_m20835_gshared)(__this, ___campaignName, method)
// System.String HitBuilder`1<EventHitBuilder>::GetCampaignSource()
#define HitBuilder_1_GetCampaignSource_m21172(__this, method) (( String_t* (*) (HitBuilder_1_t17 *, const MethodInfo*))HitBuilder_1_GetCampaignSource_m20836_gshared)(__this, method)
// T HitBuilder`1<EventHitBuilder>::SetCampaignSource(System.String)
#define HitBuilder_1_SetCampaignSource_m21173(__this, ___campaignSource, method) (( EventHitBuilder_t16 * (*) (HitBuilder_1_t17 *, String_t*, const MethodInfo*))HitBuilder_1_SetCampaignSource_m20837_gshared)(__this, ___campaignSource, method)
// System.String HitBuilder`1<EventHitBuilder>::GetCampaignMedium()
#define HitBuilder_1_GetCampaignMedium_m21174(__this, method) (( String_t* (*) (HitBuilder_1_t17 *, const MethodInfo*))HitBuilder_1_GetCampaignMedium_m20838_gshared)(__this, method)
// T HitBuilder`1<EventHitBuilder>::SetCampaignMedium(System.String)
#define HitBuilder_1_SetCampaignMedium_m21175(__this, ___campaignMedium, method) (( EventHitBuilder_t16 * (*) (HitBuilder_1_t17 *, String_t*, const MethodInfo*))HitBuilder_1_SetCampaignMedium_m20839_gshared)(__this, ___campaignMedium, method)
// System.String HitBuilder`1<EventHitBuilder>::GetCampaignKeyword()
#define HitBuilder_1_GetCampaignKeyword_m21176(__this, method) (( String_t* (*) (HitBuilder_1_t17 *, const MethodInfo*))HitBuilder_1_GetCampaignKeyword_m20840_gshared)(__this, method)
// T HitBuilder`1<EventHitBuilder>::SetCampaignKeyword(System.String)
#define HitBuilder_1_SetCampaignKeyword_m21177(__this, ___campaignKeyword, method) (( EventHitBuilder_t16 * (*) (HitBuilder_1_t17 *, String_t*, const MethodInfo*))HitBuilder_1_SetCampaignKeyword_m20841_gshared)(__this, ___campaignKeyword, method)
// System.String HitBuilder`1<EventHitBuilder>::GetCampaignContent()
#define HitBuilder_1_GetCampaignContent_m21178(__this, method) (( String_t* (*) (HitBuilder_1_t17 *, const MethodInfo*))HitBuilder_1_GetCampaignContent_m20842_gshared)(__this, method)
// T HitBuilder`1<EventHitBuilder>::SetCampaignContent(System.String)
#define HitBuilder_1_SetCampaignContent_m21179(__this, ___campaignContent, method) (( EventHitBuilder_t16 * (*) (HitBuilder_1_t17 *, String_t*, const MethodInfo*))HitBuilder_1_SetCampaignContent_m20843_gshared)(__this, ___campaignContent, method)
// System.String HitBuilder`1<EventHitBuilder>::GetCampaignID()
#define HitBuilder_1_GetCampaignID_m21180(__this, method) (( String_t* (*) (HitBuilder_1_t17 *, const MethodInfo*))HitBuilder_1_GetCampaignID_m20844_gshared)(__this, method)
// T HitBuilder`1<EventHitBuilder>::SetCampaignID(System.String)
#define HitBuilder_1_SetCampaignID_m21181(__this, ___campaignID, method) (( EventHitBuilder_t16 * (*) (HitBuilder_1_t17 *, String_t*, const MethodInfo*))HitBuilder_1_SetCampaignID_m20845_gshared)(__this, ___campaignID, method)
// System.String HitBuilder`1<EventHitBuilder>::GetGclid()
#define HitBuilder_1_GetGclid_m21182(__this, method) (( String_t* (*) (HitBuilder_1_t17 *, const MethodInfo*))HitBuilder_1_GetGclid_m20846_gshared)(__this, method)
// T HitBuilder`1<EventHitBuilder>::SetGclid(System.String)
#define HitBuilder_1_SetGclid_m21183(__this, ___gclid, method) (( EventHitBuilder_t16 * (*) (HitBuilder_1_t17 *, String_t*, const MethodInfo*))HitBuilder_1_SetGclid_m20847_gshared)(__this, ___gclid, method)
// System.String HitBuilder`1<EventHitBuilder>::GetDclid()
#define HitBuilder_1_GetDclid_m21184(__this, method) (( String_t* (*) (HitBuilder_1_t17 *, const MethodInfo*))HitBuilder_1_GetDclid_m20848_gshared)(__this, method)
// T HitBuilder`1<EventHitBuilder>::SetDclid(System.String)
#define HitBuilder_1_SetDclid_m21185(__this, ___dclid, method) (( EventHitBuilder_t16 * (*) (HitBuilder_1_t17 *, String_t*, const MethodInfo*))HitBuilder_1_SetDclid_m20849_gshared)(__this, ___dclid, method)
