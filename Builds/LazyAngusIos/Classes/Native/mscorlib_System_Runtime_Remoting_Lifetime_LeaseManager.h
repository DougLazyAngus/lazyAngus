#pragma once
#include <stdint.h>
// System.Collections.ArrayList
struct ArrayList_t723;
// System.Threading.Timer
struct Timer_t2185;
// System.Object
#include "mscorlib_System_Object.h"
// System.Runtime.Remoting.Lifetime.LeaseManager
struct  LeaseManager_t5158  : public Object_t
{
	// System.Collections.ArrayList System.Runtime.Remoting.Lifetime.LeaseManager::_objects
	ArrayList_t723 * ____objects_0;
	// System.Threading.Timer System.Runtime.Remoting.Lifetime.LeaseManager::_timer
	Timer_t2185 * ____timer_1;
};
