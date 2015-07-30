#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.InvalidTimeZoneException
struct InvalidTimeZoneException_t3303;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2867;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.InvalidTimeZoneException::.ctor()
extern "C" void InvalidTimeZoneException__ctor_m11481 (InvalidTimeZoneException_t3303 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.InvalidTimeZoneException::.ctor(System.String)
extern "C" void InvalidTimeZoneException__ctor_m11482 (InvalidTimeZoneException_t3303 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.InvalidTimeZoneException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void InvalidTimeZoneException__ctor_m11483 (InvalidTimeZoneException_t3303 * __this, SerializationInfo_t2867 * ___info, StreamingContext_t2868  ___sc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
