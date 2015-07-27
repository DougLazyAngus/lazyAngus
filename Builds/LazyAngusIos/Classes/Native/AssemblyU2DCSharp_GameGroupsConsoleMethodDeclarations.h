#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GameGroupsConsole
struct GameGroupsConsole_t71;
// FBResult
struct FBResult_t241;

// System.Void GameGroupsConsole::.ctor()
extern "C" void GameGroupsConsole__ctor_m272 (GameGroupsConsole_t71 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameGroupsConsole::GroupCreateCB(FBResult)
extern "C" void GameGroupsConsole_GroupCreateCB_m273 (GameGroupsConsole_t71 * __this, FBResult_t241 * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameGroupsConsole::GroupDeleteCB(FBResult)
extern "C" void GameGroupsConsole_GroupDeleteCB_m274 (GameGroupsConsole_t71 * __this, FBResult_t241 * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameGroupsConsole::GetAllGroupsCB(FBResult)
extern "C" void GameGroupsConsole_GetAllGroupsCB_m275 (GameGroupsConsole_t71 * __this, FBResult_t241 * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameGroupsConsole::CallFbGetAllOwnedGroups()
extern "C" void GameGroupsConsole_CallFbGetAllOwnedGroups_m276 (GameGroupsConsole_t71 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameGroupsConsole::CallFbGetUserGroups()
extern "C" void GameGroupsConsole_CallFbGetUserGroups_m277 (GameGroupsConsole_t71 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameGroupsConsole::CallCreateGroupDialog()
extern "C" void GameGroupsConsole_CallCreateGroupDialog_m278 (GameGroupsConsole_t71 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameGroupsConsole::CallJoinGroupDialog()
extern "C" void GameGroupsConsole_CallJoinGroupDialog_m279 (GameGroupsConsole_t71 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameGroupsConsole::CallFbPostToGamerGroup()
extern "C" void GameGroupsConsole_CallFbPostToGamerGroup_m280 (GameGroupsConsole_t71 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameGroupsConsole::OnGUI()
extern "C" void GameGroupsConsole_OnGUI_m281 (GameGroupsConsole_t71 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
