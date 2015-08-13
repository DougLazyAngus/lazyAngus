#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.FieldAccessException
struct FieldAccessException_t4812;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2919;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.FieldAccessException::.ctor()
extern "C" void FieldAccessException__ctor_m19751 (FieldAccessException_t4812 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.FieldAccessException::.ctor(System.String)
extern "C" void FieldAccessException__ctor_m19752 (FieldAccessException_t4812 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.FieldAccessException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void FieldAccessException__ctor_m19753 (FieldAccessException_t4812 * __this, SerializationInfo_t2919 * ___info, StreamingContext_t2920  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
