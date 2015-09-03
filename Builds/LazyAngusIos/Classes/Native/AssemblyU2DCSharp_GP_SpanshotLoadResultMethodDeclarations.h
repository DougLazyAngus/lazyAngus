#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GP_SpanshotLoadResult
struct GP_SpanshotLoadResult_t244;
// GP_Snapshot
struct GP_Snapshot_t242;
// System.String
struct String_t;

// System.Void GP_SpanshotLoadResult::.ctor(System.String)
extern "C" void GP_SpanshotLoadResult__ctor_m1393 (GP_SpanshotLoadResult_t244 * __this, String_t* ___code, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GP_SpanshotLoadResult::SetSnapShot(GP_Snapshot)
extern "C" void GP_SpanshotLoadResult_SetSnapShot_m1394 (GP_SpanshotLoadResult_t244 * __this, GP_Snapshot_t242 * ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GP_Snapshot GP_SpanshotLoadResult::get_Snapshot()
extern "C" GP_Snapshot_t242 * GP_SpanshotLoadResult_get_Snapshot_m1395 (GP_SpanshotLoadResult_t244 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
