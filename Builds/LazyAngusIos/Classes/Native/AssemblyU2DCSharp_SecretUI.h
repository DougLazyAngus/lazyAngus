﻿#pragma once
#include <stdint.h>
// SecretUI
struct SecretUI_t640;
// UnityEngine.GameObject
struct GameObject_t352;
// UnityEngine.UI.InputField
struct InputField_t641;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// SecretUI
struct  SecretUI_t640  : public MonoBehaviour_t13
{
	// UnityEngine.GameObject SecretUI::inputs
	GameObject_t352 * ___inputs_3;
	// UnityEngine.UI.InputField SecretUI::levelInputField
	InputField_t641 * ___levelInputField_4;
	// UnityEngine.UI.InputField SecretUI::debugFlagsInputField
	InputField_t641 * ___debugFlagsInputField_5;
};
struct SecretUI_t640_StaticFields{
	// SecretUI SecretUI::instance
	SecretUI_t640 * ___instance_2;
};
