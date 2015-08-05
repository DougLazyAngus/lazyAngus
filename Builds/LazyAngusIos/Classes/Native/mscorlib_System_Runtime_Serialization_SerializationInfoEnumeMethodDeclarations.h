#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Serialization.SerializationInfoEnumerator
struct SerializationInfoEnumerator_t4634;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.ArrayList
struct ArrayList_t3112;
// System.Runtime.Serialization.SerializationEntry
#include "mscorlib_System_Runtime_Serialization_SerializationEntry.h"

// System.Void System.Runtime.Serialization.SerializationInfoEnumerator::.ctor(System.Collections.ArrayList)
extern "C" void SerializationInfoEnumerator__ctor_m18314 (SerializationInfoEnumerator_t4634 * __this, ArrayList_t3112 * ___list, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Serialization.SerializationInfoEnumerator::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * SerializationInfoEnumerator_System_Collections_IEnumerator_get_Current_m18315 (SerializationInfoEnumerator_t4634 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Serialization.SerializationEntry System.Runtime.Serialization.SerializationInfoEnumerator::get_Current()
extern "C" SerializationEntry_t4632  SerializationInfoEnumerator_get_Current_m18316 (SerializationInfoEnumerator_t4634 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Serialization.SerializationInfoEnumerator::get_Name()
extern "C" String_t* SerializationInfoEnumerator_get_Name_m18317 (SerializationInfoEnumerator_t4634 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Serialization.SerializationInfoEnumerator::get_Value()
extern "C" Object_t * SerializationInfoEnumerator_get_Value_m18318 (SerializationInfoEnumerator_t4634 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Serialization.SerializationInfoEnumerator::MoveNext()
extern "C" bool SerializationInfoEnumerator_MoveNext_m18319 (SerializationInfoEnumerator_t4634 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.SerializationInfoEnumerator::Reset()
extern "C" void SerializationInfoEnumerator_Reset_m18320 (SerializationInfoEnumerator_t4634 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
