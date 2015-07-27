#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GP_SnapshotConflict
struct GP_SnapshotConflict_t203;
// GP_Snapshot
struct GP_Snapshot_t202;

// System.Void GP_SnapshotConflict::.ctor(GP_Snapshot,GP_Snapshot)
extern "C" void GP_SnapshotConflict__ctor_m1116 (GP_SnapshotConflict_t203 * __this, GP_Snapshot_t202 * ___s1, GP_Snapshot_t202 * ___s2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GP_Snapshot GP_SnapshotConflict::get_Snapshot()
extern "C" GP_Snapshot_t202 * GP_SnapshotConflict_get_Snapshot_m1117 (GP_SnapshotConflict_t203 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GP_Snapshot GP_SnapshotConflict::get_ConflictingSnapshot()
extern "C" GP_Snapshot_t202 * GP_SnapshotConflict_get_ConflictingSnapshot_m1118 (GP_SnapshotConflict_t203 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GP_SnapshotConflict::Resolve(GP_Snapshot)
extern "C" void GP_SnapshotConflict_Resolve_m1119 (GP_SnapshotConflict_t203 * __this, GP_Snapshot_t202 * ___snapshot, const MethodInfo* method) IL2CPP_METHOD_ATTR;
