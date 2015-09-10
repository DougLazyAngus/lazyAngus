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
#define HitBuilder_1__ctor_m388(__this, method) (( void (*) (HitBuilder_1_t17 *, const MethodInfo*))HitBuilder_1__ctor_m25478_gshared)(__this, method)
// T HitBuilder`1<EventHitBuilder>::GetThis()
// T HitBuilder`1<EventHitBuilder>::Validate()
// T HitBuilder`1<EventHitBuilder>::SetCustomDimension(System.Int32,System.String)
#define HitBuilder_1_SetCustomDimension_m25817(__this, ___dimensionNumber, ___value, method) (( EventHitBuilder_t16 * (*) (HitBuilder_1_t17 *, int32_t, String_t*, const MethodInfo*))HitBuilder_1_SetCustomDimension_m25479_gshared)(__this, ___dimensionNumber, ___value, method)
// System.Collections.Generic.Dictionary`2<System.Int32,System.String> HitBuilder`1<EventHitBuilder>::GetCustomDimensions()
#define HitBuilder_1_GetCustomDimensions_m25818(__this, method) (( Dictionary_2_t103 * (*) (HitBuilder_1_t17 *, const MethodInfo*))HitBuilder_1_GetCustomDimensions_m25480_gshared)(__this, method)
// T HitBuilder`1<EventHitBuilder>::SetCustomMetric(System.Int32,System.String)
#define HitBuilder_1_SetCustomMetric_m25819(__this, ___metricNumber, ___value, method) (( EventHitBuilder_t16 * (*) (HitBuilder_1_t17 *, int32_t, String_t*, const MethodInfo*))HitBuilder_1_SetCustomMetric_m25481_gshared)(__this, ___metricNumber, ___value, method)
// System.Collections.Generic.Dictionary`2<System.Int32,System.String> HitBuilder`1<EventHitBuilder>::GetCustomMetrics()
#define HitBuilder_1_GetCustomMetrics_m25820(__this, method) (( Dictionary_2_t103 * (*) (HitBuilder_1_t17 *, const MethodInfo*))HitBuilder_1_GetCustomMetrics_m25482_gshared)(__this, method)
// System.String HitBuilder`1<EventHitBuilder>::GetCampaignName()
#define HitBuilder_1_GetCampaignName_m25821(__this, method) (( String_t* (*) (HitBuilder_1_t17 *, const MethodInfo*))HitBuilder_1_GetCampaignName_m25483_gshared)(__this, method)
// T HitBuilder`1<EventHitBuilder>::SetCampaignName(System.String)
#define HitBuilder_1_SetCampaignName_m25822(__this, ___campaignName, method) (( EventHitBuilder_t16 * (*) (HitBuilder_1_t17 *, String_t*, const MethodInfo*))HitBuilder_1_SetCampaignName_m25484_gshared)(__this, ___campaignName, method)
// System.String HitBuilder`1<EventHitBuilder>::GetCampaignSource()
#define HitBuilder_1_GetCampaignSource_m25823(__this, method) (( String_t* (*) (HitBuilder_1_t17 *, const MethodInfo*))HitBuilder_1_GetCampaignSource_m25485_gshared)(__this, method)
// T HitBuilder`1<EventHitBuilder>::SetCampaignSource(System.String)
#define HitBuilder_1_SetCampaignSource_m25824(__this, ___campaignSource, method) (( EventHitBuilder_t16 * (*) (HitBuilder_1_t17 *, String_t*, const MethodInfo*))HitBuilder_1_SetCampaignSource_m25486_gshared)(__this, ___campaignSource, method)
// System.String HitBuilder`1<EventHitBuilder>::GetCampaignMedium()
#define HitBuilder_1_GetCampaignMedium_m25825(__this, method) (( String_t* (*) (HitBuilder_1_t17 *, const MethodInfo*))HitBuilder_1_GetCampaignMedium_m25487_gshared)(__this, method)
// T HitBuilder`1<EventHitBuilder>::SetCampaignMedium(System.String)
#define HitBuilder_1_SetCampaignMedium_m25826(__this, ___campaignMedium, method) (( EventHitBuilder_t16 * (*) (HitBuilder_1_t17 *, String_t*, const MethodInfo*))HitBuilder_1_SetCampaignMedium_m25488_gshared)(__this, ___campaignMedium, method)
// System.String HitBuilder`1<EventHitBuilder>::GetCampaignKeyword()
#define HitBuilder_1_GetCampaignKeyword_m25827(__this, method) (( String_t* (*) (HitBuilder_1_t17 *, const MethodInfo*))HitBuilder_1_GetCampaignKeyword_m25489_gshared)(__this, method)
// T HitBuilder`1<EventHitBuilder>::SetCampaignKeyword(System.String)
#define HitBuilder_1_SetCampaignKeyword_m25828(__this, ___campaignKeyword, method) (( EventHitBuilder_t16 * (*) (HitBuilder_1_t17 *, String_t*, const MethodInfo*))HitBuilder_1_SetCampaignKeyword_m25490_gshared)(__this, ___campaignKeyword, method)
// System.String HitBuilder`1<EventHitBuilder>::GetCampaignContent()
#define HitBuilder_1_GetCampaignContent_m25829(__this, method) (( String_t* (*) (HitBuilder_1_t17 *, const MethodInfo*))HitBuilder_1_GetCampaignContent_m25491_gshared)(__this, method)
// T HitBuilder`1<EventHitBuilder>::SetCampaignContent(System.String)
#define HitBuilder_1_SetCampaignContent_m25830(__this, ___campaignContent, method) (( EventHitBuilder_t16 * (*) (HitBuilder_1_t17 *, String_t*, const MethodInfo*))HitBuilder_1_SetCampaignContent_m25492_gshared)(__this, ___campaignContent, method)
// System.String HitBuilder`1<EventHitBuilder>::GetCampaignID()
#define HitBuilder_1_GetCampaignID_m25831(__this, method) (( String_t* (*) (HitBuilder_1_t17 *, const MethodInfo*))HitBuilder_1_GetCampaignID_m25493_gshared)(__this, method)
// T HitBuilder`1<EventHitBuilder>::SetCampaignID(System.String)
#define HitBuilder_1_SetCampaignID_m25832(__this, ___campaignID, method) (( EventHitBuilder_t16 * (*) (HitBuilder_1_t17 *, String_t*, const MethodInfo*))HitBuilder_1_SetCampaignID_m25494_gshared)(__this, ___campaignID, method)
// System.String HitBuilder`1<EventHitBuilder>::GetGclid()
#define HitBuilder_1_GetGclid_m25833(__this, method) (( String_t* (*) (HitBuilder_1_t17 *, const MethodInfo*))HitBuilder_1_GetGclid_m25495_gshared)(__this, method)
// T HitBuilder`1<EventHitBuilder>::SetGclid(System.String)
#define HitBuilder_1_SetGclid_m25834(__this, ___gclid, method) (( EventHitBuilder_t16 * (*) (HitBuilder_1_t17 *, String_t*, const MethodInfo*))HitBuilder_1_SetGclid_m25496_gshared)(__this, ___gclid, method)
// System.String HitBuilder`1<EventHitBuilder>::GetDclid()
#define HitBuilder_1_GetDclid_m25835(__this, method) (( String_t* (*) (HitBuilder_1_t17 *, const MethodInfo*))HitBuilder_1_GetDclid_m25497_gshared)(__this, method)
// T HitBuilder`1<EventHitBuilder>::SetDclid(System.String)
#define HitBuilder_1_SetDclid_m25836(__this, ___dclid, method) (( EventHitBuilder_t16 * (*) (HitBuilder_1_t17 *, String_t*, const MethodInfo*))HitBuilder_1_SetDclid_m25498_gshared)(__this, ___dclid, method)
