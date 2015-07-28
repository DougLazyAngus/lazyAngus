#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GP_SnapshotConflict
struct GP_SnapshotConflict_t243;
// GP_Snapshot
struct GP_Snapshot_t242;

// System.Void GP_SnapshotConflict::.ctor(GP_Snapshot,GP_Snapshot)
extern "C" void GP_SnapshotConflict__ctor_m1387 (GP_SnapshotConflict_t243 * __this, GP_Snapshot_t242 * ___s1, GP_Snapshot_t242 * ___s2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GP_Snapshot GP_SnapshotConflict::get_Snapshot()
extern "C" GP_Snapshot_t242 * GP_SnapshotConflict_get_Snapshot_m1388 (GP_SnapshotConflict_t243 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GP_Snapshot GP_SnapshotConflict::get_ConflictingSnapshot()
extern "C" GP_Snapshot_t242 * GP_SnapshotConflict_get_ConflictingSnapshot_m1389 (GP_SnapshotConflict_t243 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GP_SnapshotConflict::Resolve(GP_Snapshot)
extern "C" void GP_SnapshotConflict_Resolve_m1390 (GP_SnapshotConflict_t243 * __this, GP_Snapshot_t242 * ___snapshot, const MethodInfo* method) IL2CPP_METHOD_ATTR;
