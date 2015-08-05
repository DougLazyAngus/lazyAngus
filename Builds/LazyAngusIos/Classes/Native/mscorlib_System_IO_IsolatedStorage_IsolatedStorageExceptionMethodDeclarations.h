#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.IsolatedStorage.IsolatedStorageException
struct IsolatedStorageException_t4432;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2870;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.IO.IsolatedStorage.IsolatedStorageException::.ctor()
extern "C" void IsolatedStorageException__ctor_m17050 (IsolatedStorageException_t4432 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.IsolatedStorage.IsolatedStorageException::.ctor(System.String)
extern "C" void IsolatedStorageException__ctor_m17051 (IsolatedStorageException_t4432 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.IsolatedStorage.IsolatedStorageException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void IsolatedStorageException__ctor_m17052 (IsolatedStorageException_t4432 * __this, SerializationInfo_t2870 * ___info, StreamingContext_t2871  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
