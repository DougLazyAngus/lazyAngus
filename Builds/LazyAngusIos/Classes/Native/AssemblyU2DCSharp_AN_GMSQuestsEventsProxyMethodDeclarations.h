#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// AN_GMSQuestsEventsProxy
struct AN_GMSQuestsEventsProxy_t100;
// System.String
struct String_t;
// System.Object[]
struct ObjectU5BU5D_t531;

// System.Void AN_GMSQuestsEventsProxy::.ctor()
extern "C" void AN_GMSQuestsEventsProxy__ctor_m497 (AN_GMSQuestsEventsProxy_t100 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GMSQuestsEventsProxy::CallActivityFunction(System.String,System.Object[])
extern "C" void AN_GMSQuestsEventsProxy_CallActivityFunction_m498 (Object_t * __this /* static, unused */, String_t* ___methodName, ObjectU5BU5D_t531* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GMSQuestsEventsProxy::sumbitEvent(System.String,System.Int32)
extern "C" void AN_GMSQuestsEventsProxy_sumbitEvent_m499 (Object_t * __this /* static, unused */, String_t* ___eventId, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GMSQuestsEventsProxy::loadEvents()
extern "C" void AN_GMSQuestsEventsProxy_loadEvents_m500 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GMSQuestsEventsProxy::showSelectedQuests(System.String)
extern "C" void AN_GMSQuestsEventsProxy_showSelectedQuests_m501 (Object_t * __this /* static, unused */, String_t* ___questSelectors, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GMSQuestsEventsProxy::acceptQuest(System.String)
extern "C" void AN_GMSQuestsEventsProxy_acceptQuest_m502 (Object_t * __this /* static, unused */, String_t* ___questId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GMSQuestsEventsProxy::loadQuests(System.String,System.Int32)
extern "C" void AN_GMSQuestsEventsProxy_loadQuests_m503 (Object_t * __this /* static, unused */, String_t* ___questSelectors, int32_t ___sortOrder, const MethodInfo* method) IL2CPP_METHOD_ATTR;
