#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GameGroupsConsole
struct GameGroupsConsole_t111;
// FBResult
struct FBResult_t281;

// System.Void GameGroupsConsole::.ctor()
extern "C" void GameGroupsConsole__ctor_m545 (GameGroupsConsole_t111 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameGroupsConsole::GroupCreateCB(FBResult)
extern "C" void GameGroupsConsole_GroupCreateCB_m546 (GameGroupsConsole_t111 * __this, FBResult_t281 * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameGroupsConsole::GroupDeleteCB(FBResult)
extern "C" void GameGroupsConsole_GroupDeleteCB_m547 (GameGroupsConsole_t111 * __this, FBResult_t281 * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameGroupsConsole::GetAllGroupsCB(FBResult)
extern "C" void GameGroupsConsole_GetAllGroupsCB_m548 (GameGroupsConsole_t111 * __this, FBResult_t281 * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameGroupsConsole::CallFbGetAllOwnedGroups()
extern "C" void GameGroupsConsole_CallFbGetAllOwnedGroups_m549 (GameGroupsConsole_t111 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameGroupsConsole::CallFbGetUserGroups()
extern "C" void GameGroupsConsole_CallFbGetUserGroups_m550 (GameGroupsConsole_t111 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameGroupsConsole::CallCreateGroupDialog()
extern "C" void GameGroupsConsole_CallCreateGroupDialog_m551 (GameGroupsConsole_t111 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameGroupsConsole::CallJoinGroupDialog()
extern "C" void GameGroupsConsole_CallJoinGroupDialog_m552 (GameGroupsConsole_t111 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameGroupsConsole::CallFbPostToGamerGroup()
extern "C" void GameGroupsConsole_CallFbPostToGamerGroup_m553 (GameGroupsConsole_t111 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameGroupsConsole::OnGUI()
extern "C" void GameGroupsConsole_OnGUI_m554 (GameGroupsConsole_t111 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
