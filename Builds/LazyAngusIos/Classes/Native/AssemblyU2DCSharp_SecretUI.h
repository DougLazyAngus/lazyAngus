#pragma once
#include <stdint.h>
// SecretUI
struct SecretUI_t638;
// UnityEngine.GameObject
struct GameObject_t352;
// UnityEngine.UI.InputField
struct InputField_t639;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// SecretUI
struct  SecretUI_t638  : public MonoBehaviour_t13
{
	// UnityEngine.GameObject SecretUI::inputs
	GameObject_t352 * ___inputs_3;
	// UnityEngine.UI.InputField SecretUI::levelInputField
	InputField_t639 * ___levelInputField_4;
	// UnityEngine.UI.InputField SecretUI::debugFlagsInputField
	InputField_t639 * ___debugFlagsInputField_5;
};
struct SecretUI_t638_StaticFields{
	// SecretUI SecretUI::instance
	SecretUI_t638 * ___instance_2;
};
