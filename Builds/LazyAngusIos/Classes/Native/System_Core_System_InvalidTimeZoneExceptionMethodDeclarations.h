#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.InvalidTimeZoneException
struct InvalidTimeZoneException_t3354;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2920;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.InvalidTimeZoneException::.ctor()
extern "C" void InvalidTimeZoneException__ctor_m11776 (InvalidTimeZoneException_t3354 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.InvalidTimeZoneException::.ctor(System.String)
extern "C" void InvalidTimeZoneException__ctor_m11777 (InvalidTimeZoneException_t3354 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.InvalidTimeZoneException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void InvalidTimeZoneException__ctor_m11778 (InvalidTimeZoneException_t3354 * __this, SerializationInfo_t2920 * ___info, StreamingContext_t2921  ___sc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
