#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// HitBuilder`1<TransactionHitBuilder>
struct HitBuilder_1_t27;
// TransactionHitBuilder
struct TransactionHitBuilder_t26;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.String>
struct Dictionary_2_t103;

// System.Void HitBuilder`1<TransactionHitBuilder>::.ctor()
// HitBuilder`1<System.Object>
#include "AssemblyU2DCSharpU2Dfirstpass_HitBuilder_1_gen_6MethodDeclarations.h"
#define HitBuilder_1__ctor_m395(__this, method) (( void (*) (HitBuilder_1_t27 *, const MethodInfo*))HitBuilder_1__ctor_m21092_gshared)(__this, method)
// T HitBuilder`1<TransactionHitBuilder>::GetThis()
// T HitBuilder`1<TransactionHitBuilder>::Validate()
// T HitBuilder`1<TransactionHitBuilder>::SetCustomDimension(System.Int32,System.String)
#define HitBuilder_1_SetCustomDimension_m21449(__this, ___dimensionNumber, ___value, method) (( TransactionHitBuilder_t26 * (*) (HitBuilder_1_t27 *, int32_t, String_t*, const MethodInfo*))HitBuilder_1_SetCustomDimension_m21093_gshared)(__this, ___dimensionNumber, ___value, method)
// System.Collections.Generic.Dictionary`2<System.Int32,System.String> HitBuilder`1<TransactionHitBuilder>::GetCustomDimensions()
#define HitBuilder_1_GetCustomDimensions_m21450(__this, method) (( Dictionary_2_t103 * (*) (HitBuilder_1_t27 *, const MethodInfo*))HitBuilder_1_GetCustomDimensions_m21094_gshared)(__this, method)
// T HitBuilder`1<TransactionHitBuilder>::SetCustomMetric(System.Int32,System.String)
#define HitBuilder_1_SetCustomMetric_m21451(__this, ___metricNumber, ___value, method) (( TransactionHitBuilder_t26 * (*) (HitBuilder_1_t27 *, int32_t, String_t*, const MethodInfo*))HitBuilder_1_SetCustomMetric_m21095_gshared)(__this, ___metricNumber, ___value, method)
// System.Collections.Generic.Dictionary`2<System.Int32,System.String> HitBuilder`1<TransactionHitBuilder>::GetCustomMetrics()
#define HitBuilder_1_GetCustomMetrics_m21452(__this, method) (( Dictionary_2_t103 * (*) (HitBuilder_1_t27 *, const MethodInfo*))HitBuilder_1_GetCustomMetrics_m21096_gshared)(__this, method)
// System.String HitBuilder`1<TransactionHitBuilder>::GetCampaignName()
#define HitBuilder_1_GetCampaignName_m21453(__this, method) (( String_t* (*) (HitBuilder_1_t27 *, const MethodInfo*))HitBuilder_1_GetCampaignName_m21097_gshared)(__this, method)
// T HitBuilder`1<TransactionHitBuilder>::SetCampaignName(System.String)
#define HitBuilder_1_SetCampaignName_m21454(__this, ___campaignName, method) (( TransactionHitBuilder_t26 * (*) (HitBuilder_1_t27 *, String_t*, const MethodInfo*))HitBuilder_1_SetCampaignName_m21098_gshared)(__this, ___campaignName, method)
// System.String HitBuilder`1<TransactionHitBuilder>::GetCampaignSource()
#define HitBuilder_1_GetCampaignSource_m21455(__this, method) (( String_t* (*) (HitBuilder_1_t27 *, const MethodInfo*))HitBuilder_1_GetCampaignSource_m21099_gshared)(__this, method)
// T HitBuilder`1<TransactionHitBuilder>::SetCampaignSource(System.String)
#define HitBuilder_1_SetCampaignSource_m21456(__this, ___campaignSource, method) (( TransactionHitBuilder_t26 * (*) (HitBuilder_1_t27 *, String_t*, const MethodInfo*))HitBuilder_1_SetCampaignSource_m21100_gshared)(__this, ___campaignSource, method)
// System.String HitBuilder`1<TransactionHitBuilder>::GetCampaignMedium()
#define HitBuilder_1_GetCampaignMedium_m21457(__this, method) (( String_t* (*) (HitBuilder_1_t27 *, const MethodInfo*))HitBuilder_1_GetCampaignMedium_m21101_gshared)(__this, method)
// T HitBuilder`1<TransactionHitBuilder>::SetCampaignMedium(System.String)
#define HitBuilder_1_SetCampaignMedium_m21458(__this, ___campaignMedium, method) (( TransactionHitBuilder_t26 * (*) (HitBuilder_1_t27 *, String_t*, const MethodInfo*))HitBuilder_1_SetCampaignMedium_m21102_gshared)(__this, ___campaignMedium, method)
// System.String HitBuilder`1<TransactionHitBuilder>::GetCampaignKeyword()
#define HitBuilder_1_GetCampaignKeyword_m21459(__this, method) (( String_t* (*) (HitBuilder_1_t27 *, const MethodInfo*))HitBuilder_1_GetCampaignKeyword_m21103_gshared)(__this, method)
// T HitBuilder`1<TransactionHitBuilder>::SetCampaignKeyword(System.String)
#define HitBuilder_1_SetCampaignKeyword_m21460(__this, ___campaignKeyword, method) (( TransactionHitBuilder_t26 * (*) (HitBuilder_1_t27 *, String_t*, const MethodInfo*))HitBuilder_1_SetCampaignKeyword_m21104_gshared)(__this, ___campaignKeyword, method)
// System.String HitBuilder`1<TransactionHitBuilder>::GetCampaignContent()
#define HitBuilder_1_GetCampaignContent_m21461(__this, method) (( String_t* (*) (HitBuilder_1_t27 *, const MethodInfo*))HitBuilder_1_GetCampaignContent_m21105_gshared)(__this, method)
// T HitBuilder`1<TransactionHitBuilder>::SetCampaignContent(System.String)
#define HitBuilder_1_SetCampaignContent_m21462(__this, ___campaignContent, method) (( TransactionHitBuilder_t26 * (*) (HitBuilder_1_t27 *, String_t*, const MethodInfo*))HitBuilder_1_SetCampaignContent_m21106_gshared)(__this, ___campaignContent, method)
// System.String HitBuilder`1<TransactionHitBuilder>::GetCampaignID()
#define HitBuilder_1_GetCampaignID_m21463(__this, method) (( String_t* (*) (HitBuilder_1_t27 *, const MethodInfo*))HitBuilder_1_GetCampaignID_m21107_gshared)(__this, method)
// T HitBuilder`1<TransactionHitBuilder>::SetCampaignID(System.String)
#define HitBuilder_1_SetCampaignID_m21464(__this, ___campaignID, method) (( TransactionHitBuilder_t26 * (*) (HitBuilder_1_t27 *, String_t*, const MethodInfo*))HitBuilder_1_SetCampaignID_m21108_gshared)(__this, ___campaignID, method)
// System.String HitBuilder`1<TransactionHitBuilder>::GetGclid()
#define HitBuilder_1_GetGclid_m21465(__this, method) (( String_t* (*) (HitBuilder_1_t27 *, const MethodInfo*))HitBuilder_1_GetGclid_m21109_gshared)(__this, method)
// T HitBuilder`1<TransactionHitBuilder>::SetGclid(System.String)
#define HitBuilder_1_SetGclid_m21466(__this, ___gclid, method) (( TransactionHitBuilder_t26 * (*) (HitBuilder_1_t27 *, String_t*, const MethodInfo*))HitBuilder_1_SetGclid_m21110_gshared)(__this, ___gclid, method)
// System.String HitBuilder`1<TransactionHitBuilder>::GetDclid()
#define HitBuilder_1_GetDclid_m21467(__this, method) (( String_t* (*) (HitBuilder_1_t27 *, const MethodInfo*))HitBuilder_1_GetDclid_m21111_gshared)(__this, method)
// T HitBuilder`1<TransactionHitBuilder>::SetDclid(System.String)
#define HitBuilder_1_SetDclid_m21468(__this, ___dclid, method) (( TransactionHitBuilder_t26 * (*) (HitBuilder_1_t27 *, String_t*, const MethodInfo*))HitBuilder_1_SetDclid_m21112_gshared)(__this, ___dclid, method)
