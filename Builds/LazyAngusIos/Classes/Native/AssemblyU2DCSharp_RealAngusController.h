#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t352;
// RealAngusTextWidget
struct RealAngusTextWidget_t641;
// RealAngusSelectedButtonParent
struct RealAngusSelectedButtonParent_t642;
// UnityEngine.RectTransform
struct RectTransform_t545;
// RealAngusElementButton
struct RealAngusElementButton_t643;
// System.Collections.Generic.List`1<RealAngusElementButton>
struct List_1_t644;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// RealAngusController
struct  RealAngusController_t645  : public MonoBehaviour_t13
{
	// UnityEngine.GameObject RealAngusController::realAngusElementButtonPrototype
	GameObject_t352 * ___realAngusElementButtonPrototype_2;
	// UnityEngine.GameObject RealAngusController::parentScreen
	GameObject_t352 * ___parentScreen_3;
	// RealAngusTextWidget RealAngusController::realAngusTextWidget
	RealAngusTextWidget_t641 * ___realAngusTextWidget_4;
	// RealAngusSelectedButtonParent RealAngusController::realAngusSelectedButtonParent
	RealAngusSelectedButtonParent_t642 * ___realAngusSelectedButtonParent_5;
	// UnityEngine.GameObject RealAngusController::tipDialogPrototype
	GameObject_t352 * ___tipDialogPrototype_6;
	// System.Int32 RealAngusController::numColumns
	int32_t ___numColumns_7;
	// System.Single RealAngusController::buttonRotationDeg
	float ___buttonRotationDeg_8;
	// System.Single RealAngusController::buttonWigglePix
	float ___buttonWigglePix_9;
	// System.Single RealAngusController::buttonPanelTopMargin
	float ___buttonPanelTopMargin_10;
	// System.Single RealAngusController::buttonPanelBottomMargin
	float ___buttonPanelBottomMargin_11;
	// System.Single RealAngusController::buttonPanelSideMargin
	float ___buttonPanelSideMargin_12;
	// System.Boolean RealAngusController::registeredForEvents
	bool ___registeredForEvents_13;
	// System.Int32 RealAngusController::numRows
	int32_t ___numRows_14;
	// UnityEngine.RectTransform RealAngusController::parentScreenRectTransform
	RectTransform_t545 * ___parentScreenRectTransform_15;
	// RealAngusElementButton RealAngusController::selectedButton
	RealAngusElementButton_t643 * ___selectedButton_16;
	// UnityEngine.Vector2 RealAngusController::selectedButtonLocation
	Vector2_t110  ___selectedButtonLocation_17;
	// System.Single RealAngusController::selectedButtonScale
	float ___selectedButtonScale_18;
	// System.Single RealAngusController::selectedButtonTopMargin
	float ___selectedButtonTopMargin_19;
	// System.Single RealAngusController::textWidgetOverlap
	float ___textWidgetOverlap_20;
	// System.Single RealAngusController::buttonPanelWidth
	float ___buttonPanelWidth_21;
	// System.Single RealAngusController::buttonPanelHeight
	float ___buttonPanelHeight_22;
	// System.Collections.Generic.List`1<RealAngusElementButton> RealAngusController::buttons
	List_1_t644 * ___buttons_23;
	// System.Single RealAngusController::columnWidth
	float ___columnWidth_24;
	// System.Single RealAngusController::rowHeight
	float ___rowHeight_25;
	// UnityEngine.Vector2 RealAngusController::textWidgetLocation
	Vector2_t110  ___textWidgetLocation_26;
	// UnityEngine.Vector2 RealAngusController::textWidgetOffscreenLocation
	Vector2_t110  ___textWidgetOffscreenLocation_27;
	// System.Single RealAngusController::textToButtonXRatio
	float ___textToButtonXRatio_28;
	// System.Single RealAngusController::textToButtonYRatio
	float ___textToButtonYRatio_29;
	// System.Single RealAngusController::screenWidth
	float ___screenWidth_30;
	// System.Single RealAngusController::screenHeight
	float ___screenHeight_31;
};
