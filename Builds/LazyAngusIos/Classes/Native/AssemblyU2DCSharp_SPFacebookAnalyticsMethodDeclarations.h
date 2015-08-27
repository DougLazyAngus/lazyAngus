﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// SPFacebookAnalytics
struct SPFacebookAnalytics_t284;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t312;
// System.Nullable`1<System.Single>
#include "mscorlib_System_Nullable_1_gen_0.h"

// System.Void SPFacebookAnalytics::ActivateApp()
extern "C" void SPFacebookAnalytics_ActivateApp_m1536 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebookAnalytics::AchievedLevel(System.Int32)
extern "C" void SPFacebookAnalytics_AchievedLevel_m1537 (Object_t * __this /* static, unused */, int32_t ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebookAnalytics::AddedPaymentInfo(System.Boolean)
extern "C" void SPFacebookAnalytics_AddedPaymentInfo_m1538 (Object_t * __this /* static, unused */, bool ___IsPaymentInfoAvailable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebookAnalytics::AddedToCart(System.Single,System.String,System.String,System.String)
extern "C" void SPFacebookAnalytics_AddedToCart_m1539 (Object_t * __this /* static, unused */, float ___price, String_t* ___id, String_t* ___type, String_t* ___currency, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebookAnalytics::AddedToWishlist(System.Single,System.String,System.String,System.String)
extern "C" void SPFacebookAnalytics_AddedToWishlist_m1540 (Object_t * __this /* static, unused */, float ___price, String_t* ___id, String_t* ___type, String_t* ___currency, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebookAnalytics::CompletedRegistration(System.String)
extern "C" void SPFacebookAnalytics_CompletedRegistration_m1541 (Object_t * __this /* static, unused */, String_t* ___RegistrationMethod, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebookAnalytics::CompletedTutorial(System.Boolean,System.String)
extern "C" void SPFacebookAnalytics_CompletedTutorial_m1542 (Object_t * __this /* static, unused */, bool ___IsIsSuccsessed, String_t* ___ContentId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebookAnalytics::InitiatedCheckout(System.Single,System.Int32,System.String,System.String,System.Boolean,System.String)
extern "C" void SPFacebookAnalytics_InitiatedCheckout_m1543 (Object_t * __this /* static, unused */, float ___price, int32_t ___itemsCount, String_t* ___ContentType, String_t* ___ContentId, bool ___IsPaymentInfoAvailable, String_t* ___Currency, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebookAnalytics::Purchased(System.Single,System.Int32,System.String,System.String,System.String)
extern "C" void SPFacebookAnalytics_Purchased_m1544 (Object_t * __this /* static, unused */, float ___price, int32_t ___itemsCount, String_t* ___ContentType, String_t* ___ContentId, String_t* ___Currency, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebookAnalytics::Rated(System.Int32,System.String,System.String,System.Int32)
extern "C" void SPFacebookAnalytics_Rated_m1545 (Object_t * __this /* static, unused */, int32_t ___Rating, String_t* ___ContentType, String_t* ___ContentId, int32_t ___MaxRating, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebookAnalytics::Searched(System.String,System.String,System.Boolean)
extern "C" void SPFacebookAnalytics_Searched_m1546 (Object_t * __this /* static, unused */, String_t* ___ContentType, String_t* ___SearchString, bool ___IsIsSuccsessed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebookAnalytics::SpentCredits(System.Single,System.String,System.String)
extern "C" void SPFacebookAnalytics_SpentCredits_m1547 (Object_t * __this /* static, unused */, float ___credit, String_t* ___ContentType, String_t* ___ContentId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebookAnalytics::UnlockedAchievement(System.String)
extern "C" void SPFacebookAnalytics_UnlockedAchievement_m1548 (Object_t * __this /* static, unused */, String_t* ___Describtion, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebookAnalytics::LogEvent(System.String,System.Nullable`1<System.Single>,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C" void SPFacebookAnalytics_LogEvent_m1549 (Object_t * __this /* static, unused */, String_t* ___logEvent, Nullable_1_t692  ___valueToSum, Dictionary_2_t312 * ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebookAnalytics::ViewedContent(System.Single,System.String,System.String,System.String)
extern "C" void SPFacebookAnalytics_ViewedContent_m1550 (Object_t * __this /* static, unused */, float ___price, String_t* ___ContentType, String_t* ___ContentId, String_t* ___Currency, const MethodInfo* method) IL2CPP_METHOD_ATTR;
