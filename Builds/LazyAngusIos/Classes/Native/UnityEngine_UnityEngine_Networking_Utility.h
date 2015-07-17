#pragma once
#include <stdint.h>
// System.Random
struct Random_t1186;
// System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>
struct Dictionary_2_t1187;
// System.Object
#include "mscorlib_System_Object.h"
// UnityEngine.Networking.Types.AppID
#include "UnityEngine_UnityEngine_Networking_Types_AppID.h"
// UnityEngine.Networking.Utility
struct  Utility_t1188  : public Object_t
{
};
struct Utility_t1188_StaticFields{
	// System.Random UnityEngine.Networking.Utility::s_randomGenerator
	Random_t1186 * ___s_randomGenerator_0;
	// System.Boolean UnityEngine.Networking.Utility::s_useRandomSourceID
	bool ___s_useRandomSourceID_1;
	// System.Int32 UnityEngine.Networking.Utility::s_randomSourceComponent
	int32_t ___s_randomSourceComponent_2;
	// UnityEngine.Networking.Types.AppID UnityEngine.Networking.Utility::s_programAppID
	uint64_t ___s_programAppID_3;
	// System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken> UnityEngine.Networking.Utility::s_dictTokens
	Dictionary_2_t1187 * ___s_dictTokens_4;
};
