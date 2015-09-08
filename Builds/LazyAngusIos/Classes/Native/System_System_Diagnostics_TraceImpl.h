#pragma once
#include <stdint.h>
// System.Object
struct Object_t;
// System.Diagnostics.TraceListenerCollection
struct TraceListenerCollection_t4290;
// System.Diagnostics.CorrelationManager
struct CorrelationManager_t4282;
// System.Object
#include "mscorlib_System_Object.h"
// System.Diagnostics.TraceImpl
struct  TraceImpl_t4291  : public Object_t
{
};
struct TraceImpl_t4291_StaticFields{
	// System.Object System.Diagnostics.TraceImpl::initLock
	Object_t * ___initLock_0;
	// System.Boolean System.Diagnostics.TraceImpl::autoFlush
	bool ___autoFlush_1;
	// System.Diagnostics.TraceListenerCollection System.Diagnostics.TraceImpl::listeners
	TraceListenerCollection_t4290 * ___listeners_4;
	// System.Diagnostics.CorrelationManager System.Diagnostics.TraceImpl::correlation_manager
	CorrelationManager_t4282 * ___correlation_manager_5;
};
struct TraceImpl_t4291_ThreadStaticFields{
	// System.Int32 System.Diagnostics.TraceImpl::indentLevel
	int32_t ___indentLevel_2;
	// System.Int32 System.Diagnostics.TraceImpl::indentSize
	int32_t ___indentSize_3;
};
