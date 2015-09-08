#pragma once
#include <stdint.h>
// System.Collections.Hashtable
struct Hashtable_t714;
// System.Runtime.Serialization.SerializationCallbacks/CallbackHandler
struct CallbackHandler_t5202;
// System.Object
#include "mscorlib_System_Object.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Runtime.Serialization.SerializationObjectManager
struct  SerializationObjectManager_t5208  : public Object_t
{
	// System.Runtime.Serialization.StreamingContext System.Runtime.Serialization.SerializationObjectManager::context
	StreamingContext_t2941  ___context_0;
	// System.Collections.Hashtable System.Runtime.Serialization.SerializationObjectManager::seen
	Hashtable_t714 * ___seen_1;
	// System.Runtime.Serialization.SerializationCallbacks/CallbackHandler System.Runtime.Serialization.SerializationObjectManager::callbacks
	CallbackHandler_t5202 * ___callbacks_2;
};
