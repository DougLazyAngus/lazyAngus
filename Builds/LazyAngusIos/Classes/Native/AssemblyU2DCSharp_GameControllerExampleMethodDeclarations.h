#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GameControllerExample
struct GameControllerExample_t377;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t312;

// System.Void GameControllerExample::.ctor()
extern "C" void GameControllerExample__ctor_m2076 (GameControllerExample_t377 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameControllerExample::Start()
extern "C" void GameControllerExample_Start_m2077 (GameControllerExample_t377 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameControllerExample::HandleNotification(System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>,System.Boolean)
extern "C" void GameControllerExample_HandleNotification_m2078 (Object_t * __this /* static, unused */, String_t* ___message, Dictionary_2_t312 * ___additionalData, bool ___isActive, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameControllerExample::OnGUI()
extern "C" void GameControllerExample_OnGUI_m2079 (GameControllerExample_t377 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameControllerExample::<OnGUI>m__49(System.String,System.String)
extern "C" void GameControllerExample_U3COnGUIU3Em__49_m2080 (Object_t * __this /* static, unused */, String_t* ___userId, String_t* ___pushToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
