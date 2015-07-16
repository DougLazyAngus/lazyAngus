﻿#pragma once
#include <stdint.h>
// System.String
struct String_t;
// UnityEngine.GUIStyle
struct GUIStyle_t64;
// UnityEngine.Texture2D
struct Texture2D_t65;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// ConsoleBase
struct  ConsoleBase_t66  : public MonoBehaviour_t67
{
	// System.String ConsoleBase::status
	String_t* ___status_2;
	// System.String ConsoleBase::lastResponse
	String_t* ___lastResponse_3;
	// UnityEngine.GUIStyle ConsoleBase::textStyle
	GUIStyle_t64 * ___textStyle_4;
	// UnityEngine.Texture2D ConsoleBase::lastResponseTexture
	Texture2D_t65 * ___lastResponseTexture_5;
	// UnityEngine.Vector2 ConsoleBase::scrollPosition
	Vector2_t68  ___scrollPosition_6;
	// System.Int32 ConsoleBase::buttonHeight
	int32_t ___buttonHeight_7;
	// System.Int32 ConsoleBase::mainWindowWidth
	int32_t ___mainWindowWidth_8;
	// System.Int32 ConsoleBase::mainWindowFullWidth
	int32_t ___mainWindowFullWidth_9;
};
