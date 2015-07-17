#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t310;
// System.String
struct String_t;
// SAOnClickAction
#include "AssemblyU2DCSharp_SAOnClickAction.h"
// SASendMessageOnClick
struct  SASendMessageOnClick_t359  : public SAOnClickAction_t357
{
	// UnityEngine.GameObject SASendMessageOnClick::Reciver
	GameObject_t310 * ___Reciver_2;
	// System.String SASendMessageOnClick::MethodName
	String_t* ___MethodName_3;
};
