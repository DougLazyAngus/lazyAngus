#pragma once
#include <stdint.h>
// System.Collections.Hashtable
struct Hashtable_t721;
// System.Runtime.Serialization.SerializationCallbacks/CallbackHandler
struct CallbackHandler_t5209;
// System.Object
#include "mscorlib_System_Object.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Runtime.Serialization.SerializationObjectManager
struct  SerializationObjectManager_t5215  : public Object_t
{
	// System.Runtime.Serialization.StreamingContext System.Runtime.Serialization.SerializationObjectManager::context
	StreamingContext_t2948  ___context_0;
	// System.Collections.Hashtable System.Runtime.Serialization.SerializationObjectManager::seen
	Hashtable_t721 * ___seen_1;
	// System.Runtime.Serialization.SerializationCallbacks/CallbackHandler System.Runtime.Serialization.SerializationObjectManager::callbacks
	CallbackHandler_t5209 * ___callbacks_2;
};
