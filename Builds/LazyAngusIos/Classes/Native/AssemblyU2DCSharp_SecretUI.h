#pragma once
#include <stdint.h>
// SecretUI
struct SecretUI_t658;
// UnityEngine.GameObject
struct GameObject_t352;
// UnityEngine.UI.InputField
struct InputField_t659;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// SecretUI
struct  SecretUI_t658  : public MonoBehaviour_t13
{
	// UnityEngine.GameObject SecretUI::inputs
	GameObject_t352 * ___inputs_3;
	// UnityEngine.UI.InputField SecretUI::levelInputField
	InputField_t659 * ___levelInputField_4;
	// UnityEngine.UI.InputField SecretUI::debugFlagsInputField
	InputField_t659 * ___debugFlagsInputField_5;
};
struct SecretUI_t658_StaticFields{
	// SecretUI SecretUI::instance
	SecretUI_t658 * ___instance_2;
};
