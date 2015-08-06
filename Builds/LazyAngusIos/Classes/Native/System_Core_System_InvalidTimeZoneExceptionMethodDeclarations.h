#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.InvalidTimeZoneException
struct InvalidTimeZoneException_t3305;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2869;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.InvalidTimeZoneException::.ctor()
extern "C" void InvalidTimeZoneException__ctor_m11497 (InvalidTimeZoneException_t3305 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.InvalidTimeZoneException::.ctor(System.String)
extern "C" void InvalidTimeZoneException__ctor_m11498 (InvalidTimeZoneException_t3305 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.InvalidTimeZoneException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void InvalidTimeZoneException__ctor_m11499 (InvalidTimeZoneException_t3305 * __this, SerializationInfo_t2869 * ___info, StreamingContext_t2870  ___sc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
