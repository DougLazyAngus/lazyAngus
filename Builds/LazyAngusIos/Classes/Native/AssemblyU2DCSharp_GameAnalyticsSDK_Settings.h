#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t75;
// System.Int32[]
struct Int32U5BU5D_t484;
// System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>
struct List_1_t485;
// System.Collections.Generic.List`1<System.String>
struct List_1_t115;
// System.Collections.Generic.List`1<GameAnalyticsSDK.Settings/HelpTypes>
struct List_1_t486;
// UnityEngine.Texture2D
struct Texture2D_t108;
// UnityEngine.GUIStyle
struct GUIStyle_t107;
// System.Boolean[]
struct BooleanU5BU5D_t487;
// UnityEngine.ScriptableObject
#include "UnityEngine_UnityEngine_ScriptableObject.h"
// GameAnalyticsSDK.GAPlatform
#include "AssemblyU2DCSharp_GameAnalyticsSDK_GAPlatform.h"
// GameAnalyticsSDK.Settings/InspectorStates
#include "AssemblyU2DCSharp_GameAnalyticsSDK_Settings_InspectorStates.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// GameAnalyticsSDK.Settings
struct  Settings_t478  : public ScriptableObject_t148
{
	// System.Int32 GameAnalyticsSDK.Settings::TotalMessagesSubmitted
	int32_t ___TotalMessagesSubmitted_4;
	// System.Int32 GameAnalyticsSDK.Settings::TotalMessagesFailed
	int32_t ___TotalMessagesFailed_5;
	// System.Int32 GameAnalyticsSDK.Settings::DesignMessagesSubmitted
	int32_t ___DesignMessagesSubmitted_6;
	// System.Int32 GameAnalyticsSDK.Settings::DesignMessagesFailed
	int32_t ___DesignMessagesFailed_7;
	// System.Int32 GameAnalyticsSDK.Settings::QualityMessagesSubmitted
	int32_t ___QualityMessagesSubmitted_8;
	// System.Int32 GameAnalyticsSDK.Settings::QualityMessagesFailed
	int32_t ___QualityMessagesFailed_9;
	// System.Int32 GameAnalyticsSDK.Settings::ErrorMessagesSubmitted
	int32_t ___ErrorMessagesSubmitted_10;
	// System.Int32 GameAnalyticsSDK.Settings::ErrorMessagesFailed
	int32_t ___ErrorMessagesFailed_11;
	// System.Int32 GameAnalyticsSDK.Settings::BusinessMessagesSubmitted
	int32_t ___BusinessMessagesSubmitted_12;
	// System.Int32 GameAnalyticsSDK.Settings::BusinessMessagesFailed
	int32_t ___BusinessMessagesFailed_13;
	// System.Int32 GameAnalyticsSDK.Settings::UserMessagesSubmitted
	int32_t ___UserMessagesSubmitted_14;
	// System.Int32 GameAnalyticsSDK.Settings::UserMessagesFailed
	int32_t ___UserMessagesFailed_15;
	// System.String GameAnalyticsSDK.Settings::CustomArea
	String_t* ___CustomArea_16;
	// System.String[] GameAnalyticsSDK.Settings::gameKey
	StringU5BU5D_t75* ___gameKey_17;
	// System.String[] GameAnalyticsSDK.Settings::secretKey
	StringU5BU5D_t75* ___secretKey_18;
	// System.String[] GameAnalyticsSDK.Settings::Build
	StringU5BU5D_t75* ___Build_19;
	// System.String[] GameAnalyticsSDK.Settings::SelectedPlatformStudio
	StringU5BU5D_t75* ___SelectedPlatformStudio_20;
	// System.String[] GameAnalyticsSDK.Settings::SelectedPlatformGame
	StringU5BU5D_t75* ___SelectedPlatformGame_21;
	// System.Int32[] GameAnalyticsSDK.Settings::SelectedPlatformGameID
	Int32U5BU5D_t484* ___SelectedPlatformGameID_22;
	// System.Int32[] GameAnalyticsSDK.Settings::SelectedStudio
	Int32U5BU5D_t484* ___SelectedStudio_23;
	// System.Int32[] GameAnalyticsSDK.Settings::SelectedGame
	Int32U5BU5D_t484* ___SelectedGame_24;
	// System.String GameAnalyticsSDK.Settings::NewVersion
	String_t* ___NewVersion_25;
	// System.String GameAnalyticsSDK.Settings::Changes
	String_t* ___Changes_26;
	// System.Boolean GameAnalyticsSDK.Settings::SignUpOpen
	bool ___SignUpOpen_27;
	// System.String GameAnalyticsSDK.Settings::FirstName
	String_t* ___FirstName_28;
	// System.String GameAnalyticsSDK.Settings::LastName
	String_t* ___LastName_29;
	// System.String GameAnalyticsSDK.Settings::StudioName
	String_t* ___StudioName_30;
	// System.String GameAnalyticsSDK.Settings::GameName
	String_t* ___GameName_31;
	// System.String GameAnalyticsSDK.Settings::PasswordConfirm
	String_t* ___PasswordConfirm_32;
	// System.Boolean GameAnalyticsSDK.Settings::EmailOptIn
	bool ___EmailOptIn_33;
	// System.String GameAnalyticsSDK.Settings::EmailGA
	String_t* ___EmailGA_34;
	// System.String GameAnalyticsSDK.Settings::PasswordGA
	String_t* ___PasswordGA_35;
	// System.String GameAnalyticsSDK.Settings::TokenGA
	String_t* ___TokenGA_36;
	// System.String GameAnalyticsSDK.Settings::ExpireTime
	String_t* ___ExpireTime_37;
	// System.String GameAnalyticsSDK.Settings::LoginStatus
	String_t* ___LoginStatus_38;
	// System.Boolean GameAnalyticsSDK.Settings::JustSignedUp
	bool ___JustSignedUp_39;
	// System.Boolean GameAnalyticsSDK.Settings::HideSignupWarning
	bool ___HideSignupWarning_40;
	// System.Boolean GameAnalyticsSDK.Settings::IntroScreen
	bool ___IntroScreen_41;
	// System.Collections.Generic.List`1<GameAnalyticsSDK.Studio> GameAnalyticsSDK.Settings::Studios
	List_1_t485 * ___Studios_42;
	// System.Boolean GameAnalyticsSDK.Settings::InfoLogEditor
	bool ___InfoLogEditor_43;
	// System.Boolean GameAnalyticsSDK.Settings::InfoLogBuild
	bool ___InfoLogBuild_44;
	// System.Boolean GameAnalyticsSDK.Settings::VerboseLogBuild
	bool ___VerboseLogBuild_45;
	// System.Boolean GameAnalyticsSDK.Settings::SendExampleGameDataToMyGame
	bool ___SendExampleGameDataToMyGame_46;
	// System.Boolean GameAnalyticsSDK.Settings::InternetConnectivity
	bool ___InternetConnectivity_47;
	// System.Collections.Generic.List`1<System.String> GameAnalyticsSDK.Settings::CustomDimensions01
	List_1_t115 * ___CustomDimensions01_48;
	// System.Collections.Generic.List`1<System.String> GameAnalyticsSDK.Settings::CustomDimensions02
	List_1_t115 * ___CustomDimensions02_49;
	// System.Collections.Generic.List`1<System.String> GameAnalyticsSDK.Settings::CustomDimensions03
	List_1_t115 * ___CustomDimensions03_50;
	// System.Collections.Generic.List`1<System.String> GameAnalyticsSDK.Settings::ResourceItemTypes
	List_1_t115 * ___ResourceItemTypes_51;
	// System.Collections.Generic.List`1<System.String> GameAnalyticsSDK.Settings::ResourceCurrencies
	List_1_t115 * ___ResourceCurrencies_52;
	// GameAnalyticsSDK.GAPlatform GameAnalyticsSDK.Settings::LastCreatedGamePlatform
	int32_t ___LastCreatedGamePlatform_53;
	// GameAnalyticsSDK.Settings/InspectorStates GameAnalyticsSDK.Settings::CurrentInspectorState
	int32_t ___CurrentInspectorState_54;
	// System.Collections.Generic.List`1<GameAnalyticsSDK.Settings/HelpTypes> GameAnalyticsSDK.Settings::ClosedHints
	List_1_t486 * ___ClosedHints_55;
	// System.Boolean GameAnalyticsSDK.Settings::DisplayHints
	bool ___DisplayHints_56;
	// UnityEngine.Vector2 GameAnalyticsSDK.Settings::DisplayHintsScrollState
	Vector2_t110  ___DisplayHintsScrollState_57;
	// UnityEngine.Texture2D GameAnalyticsSDK.Settings::Logo
	Texture2D_t108 * ___Logo_58;
	// UnityEngine.Texture2D GameAnalyticsSDK.Settings::UpdateIcon
	Texture2D_t108 * ___UpdateIcon_59;
	// UnityEngine.Texture2D GameAnalyticsSDK.Settings::InfoIcon
	Texture2D_t108 * ___InfoIcon_60;
	// UnityEngine.Texture2D GameAnalyticsSDK.Settings::DeleteIcon
	Texture2D_t108 * ___DeleteIcon_61;
	// UnityEngine.Texture2D GameAnalyticsSDK.Settings::GameIcon
	Texture2D_t108 * ___GameIcon_62;
	// UnityEngine.Texture2D GameAnalyticsSDK.Settings::HomeIcon
	Texture2D_t108 * ___HomeIcon_63;
	// UnityEngine.Texture2D GameAnalyticsSDK.Settings::InstrumentIcon
	Texture2D_t108 * ___InstrumentIcon_64;
	// UnityEngine.Texture2D GameAnalyticsSDK.Settings::QuestionIcon
	Texture2D_t108 * ___QuestionIcon_65;
	// UnityEngine.Texture2D GameAnalyticsSDK.Settings::UserIcon
	Texture2D_t108 * ___UserIcon_66;
	// UnityEngine.Texture2D GameAnalyticsSDK.Settings::AmazonIcon
	Texture2D_t108 * ___AmazonIcon_67;
	// UnityEngine.Texture2D GameAnalyticsSDK.Settings::GooglePlayIcon
	Texture2D_t108 * ___GooglePlayIcon_68;
	// UnityEngine.Texture2D GameAnalyticsSDK.Settings::iosIcon
	Texture2D_t108 * ___iosIcon_69;
	// UnityEngine.Texture2D GameAnalyticsSDK.Settings::macIcon
	Texture2D_t108 * ___macIcon_70;
	// UnityEngine.Texture2D GameAnalyticsSDK.Settings::windowsPhoneIcon
	Texture2D_t108 * ___windowsPhoneIcon_71;
	// UnityEngine.GUIStyle GameAnalyticsSDK.Settings::SignupButton
	GUIStyle_t107 * ___SignupButton_72;
	// System.Boolean GameAnalyticsSDK.Settings::SubmitErrors
	bool ___SubmitErrors_73;
	// System.Int32 GameAnalyticsSDK.Settings::MaxErrorCount
	int32_t ___MaxErrorCount_74;
	// System.Boolean GameAnalyticsSDK.Settings::SubmitFpsAverage
	bool ___SubmitFpsAverage_75;
	// System.Boolean GameAnalyticsSDK.Settings::SubmitFpsCritical
	bool ___SubmitFpsCritical_76;
	// System.Int32 GameAnalyticsSDK.Settings::FpsCriticalThreshold
	int32_t ___FpsCriticalThreshold_77;
	// System.Int32 GameAnalyticsSDK.Settings::FpsCirticalSubmitInterval
	int32_t ___FpsCirticalSubmitInterval_78;
	// System.Boolean[] GameAnalyticsSDK.Settings::PlatformFoldOut
	BooleanU5BU5D_t487* ___PlatformFoldOut_79;
	// System.Boolean GameAnalyticsSDK.Settings::CustomDimensions01FoldOut
	bool ___CustomDimensions01FoldOut_80;
	// System.Boolean GameAnalyticsSDK.Settings::CustomDimensions02FoldOut
	bool ___CustomDimensions02FoldOut_81;
	// System.Boolean GameAnalyticsSDK.Settings::CustomDimensions03FoldOut
	bool ___CustomDimensions03FoldOut_82;
	// System.Boolean GameAnalyticsSDK.Settings::ResourceItemTypesFoldOut
	bool ___ResourceItemTypesFoldOut_83;
	// System.Boolean GameAnalyticsSDK.Settings::ResourceCurrenciesFoldOut
	bool ___ResourceCurrenciesFoldOut_84;
};
struct Settings_t478_StaticFields{
	// System.String GameAnalyticsSDK.Settings::VERSION
	String_t* ___VERSION_3;
};
