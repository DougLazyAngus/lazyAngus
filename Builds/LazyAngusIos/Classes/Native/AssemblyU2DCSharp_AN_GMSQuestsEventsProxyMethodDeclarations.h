#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// AN_GMSQuestsEventsProxy
struct AN_GMSQuestsEventsProxy_t169;
// System.String
struct String_t;
// System.Object[]
struct ObjectU5BU5D_t637;

// System.Void AN_GMSQuestsEventsProxy::.ctor()
extern "C" void AN_GMSQuestsEventsProxy__ctor_m1126 (AN_GMSQuestsEventsProxy_t169 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GMSQuestsEventsProxy::CallActivityFunction(System.String,System.Object[])
extern "C" void AN_GMSQuestsEventsProxy_CallActivityFunction_m1127 (Object_t * __this /* static, unused */, String_t* ___methodName, ObjectU5BU5D_t637* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GMSQuestsEventsProxy::sumbitEvent(System.String,System.Int32)
extern "C" void AN_GMSQuestsEventsProxy_sumbitEvent_m1128 (Object_t * __this /* static, unused */, String_t* ___eventId, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GMSQuestsEventsProxy::loadEvents()
extern "C" void AN_GMSQuestsEventsProxy_loadEvents_m1129 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GMSQuestsEventsProxy::showSelectedQuests(System.String)
extern "C" void AN_GMSQuestsEventsProxy_showSelectedQuests_m1130 (Object_t * __this /* static, unused */, String_t* ___questSelectors, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GMSQuestsEventsProxy::acceptQuest(System.String)
extern "C" void AN_GMSQuestsEventsProxy_acceptQuest_m1131 (Object_t * __this /* static, unused */, String_t* ___questId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GMSQuestsEventsProxy::loadQuests(System.String,System.Int32)
extern "C" void AN_GMSQuestsEventsProxy_loadQuests_m1132 (Object_t * __this /* static, unused */, String_t* ___questSelectors, int32_t ___sortOrder, const MethodInfo* method) IL2CPP_METHOD_ATTR;
