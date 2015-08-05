#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.RankException
struct RankException_t4789;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2870;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.RankException::.ctor()
extern "C" void RankException__ctor_m19764 (RankException_t4789 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.RankException::.ctor(System.String)
extern "C" void RankException__ctor_m19765 (RankException_t4789 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.RankException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void RankException__ctor_m19766 (RankException_t4789 * __this, SerializationInfo_t2870 * ___info, StreamingContext_t2871  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
