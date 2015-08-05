#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.ParseInitializeBehaviour
struct ParseInitializeBehaviour_t1198;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t66;

// System.Void Parse.ParseInitializeBehaviour::Awake()
extern "C" void ParseInitializeBehaviour_Awake_m6515 (ParseInitializeBehaviour_t1198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseInitializeBehaviour::Initialize()
extern "C" void ParseInitializeBehaviour_Initialize_m6516 (ParseInitializeBehaviour_t1198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseInitializeBehaviour::OnPushNotificationReceived(System.String)
extern "C" void ParseInitializeBehaviour_OnPushNotificationReceived_m6517 (ParseInitializeBehaviour_t1198 * __this, String_t* ___pushPayloadString, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseInitializeBehaviour::OnGcmRegistrationReceived(System.String)
extern "C" void ParseInitializeBehaviour_OnGcmRegistrationReceived_m6518 (ParseInitializeBehaviour_t1198 * __this, String_t* ___registrationId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseInitializeBehaviour::.ctor()
extern "C" void ParseInitializeBehaviour__ctor_m6519 (ParseInitializeBehaviour_t1198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseInitializeBehaviour::<Awake>b__0(System.Byte[])
extern "C" void ParseInitializeBehaviour_U3CAwakeU3Eb__0_m6520 (Object_t * __this /* static, unused */, ByteU5BU5D_t66* ___deviceToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseInitializeBehaviour::.cctor()
extern "C" void ParseInitializeBehaviour__cctor_m6521 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
