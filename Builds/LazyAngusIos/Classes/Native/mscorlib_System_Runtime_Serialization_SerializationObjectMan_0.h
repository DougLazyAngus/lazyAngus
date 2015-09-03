#pragma once
#include <stdint.h>
// System.Collections.Hashtable
struct Hashtable_t710;
// System.Runtime.Serialization.SerializationCallbacks/CallbackHandler
struct CallbackHandler_t5198;
// System.Object
#include "mscorlib_System_Object.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Runtime.Serialization.SerializationObjectManager
struct  SerializationObjectManager_t5204  : public Object_t
{
	// System.Runtime.Serialization.StreamingContext System.Runtime.Serialization.SerializationObjectManager::context
	StreamingContext_t2937  ___context_0;
	// System.Collections.Hashtable System.Runtime.Serialization.SerializationObjectManager::seen
	Hashtable_t710 * ___seen_1;
	// System.Runtime.Serialization.SerializationCallbacks/CallbackHandler System.Runtime.Serialization.SerializationObjectManager::callbacks
	CallbackHandler_t5198 * ___callbacks_2;
};
