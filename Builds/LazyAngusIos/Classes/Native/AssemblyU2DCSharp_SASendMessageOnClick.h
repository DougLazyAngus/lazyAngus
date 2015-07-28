#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t352;
// System.String
struct String_t;
// SAOnClickAction
#include "AssemblyU2DCSharp_SAOnClickAction.h"
// SASendMessageOnClick
struct  SASendMessageOnClick_t401  : public SAOnClickAction_t399
{
	// UnityEngine.GameObject SASendMessageOnClick::Reciver
	GameObject_t352 * ___Reciver_2;
	// System.String SASendMessageOnClick::MethodName
	String_t* ___MethodName_3;
};
