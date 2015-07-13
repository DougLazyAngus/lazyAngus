﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GP_DeleteSnapshotResult
struct GP_DeleteSnapshotResult_t177;
// System.String
struct String_t;

// System.Void GP_DeleteSnapshotResult::.ctor(System.String)
extern "C" void GP_DeleteSnapshotResult__ctor_m723 (GP_DeleteSnapshotResult_t177 * __this, String_t* ___code, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GP_DeleteSnapshotResult::SetId(System.String)
extern "C" void GP_DeleteSnapshotResult_SetId_m724 (GP_DeleteSnapshotResult_t177 * __this, String_t* ___sid, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GP_DeleteSnapshotResult::get_SnapshotId()
extern "C" String_t* GP_DeleteSnapshotResult_get_SnapshotId_m725 (GP_DeleteSnapshotResult_t177 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;