#pragma once
#include <stdint.h>
// SecretUI
struct SecretUI_t599;
// UnityEngine.GameObject
struct GameObject_t352;
// UnityEngine.UI.InputField
struct InputField_t600;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// SecretUI
struct  SecretUI_t599  : public MonoBehaviour_t13
{
	// UnityEngine.GameObject SecretUI::inputs
	GameObject_t352 * ___inputs_3;
	// UnityEngine.UI.InputField SecretUI::levelInputField
	InputField_t600 * ___levelInputField_4;
	// UnityEngine.UI.InputField SecretUI::debugFlagsInputField
	InputField_t600 * ___debugFlagsInputField_5;
};
struct SecretUI_t599_StaticFields{
	// SecretUI SecretUI::instance
	SecretUI_t599 * ___instance_2;
};
