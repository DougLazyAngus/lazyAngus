#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// MSPTwitterUseExample
struct MSPTwitterUseExample_t317;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// UnionAssets.FLE.CEvent
struct CEvent_t93;

// System.Void MSPTwitterUseExample::.ctor()
extern "C" void MSPTwitterUseExample__ctor_m1588 (MSPTwitterUseExample_t317 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MSPTwitterUseExample::.cctor()
extern "C" void MSPTwitterUseExample__cctor_m1589 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MSPTwitterUseExample::Awake()
extern "C" void MSPTwitterUseExample_Awake_m1590 (MSPTwitterUseExample_t317 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MSPTwitterUseExample::FixedUpdate()
extern "C" void MSPTwitterUseExample_FixedUpdate_m1591 (MSPTwitterUseExample_t317 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MSPTwitterUseExample::Connect()
extern "C" void MSPTwitterUseExample_Connect_m1592 (MSPTwitterUseExample_t317 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MSPTwitterUseExample::PostWithAuthCheck()
extern "C" void MSPTwitterUseExample_PostWithAuthCheck_m1593 (MSPTwitterUseExample_t317 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MSPTwitterUseExample::PostNativeScreenshot()
extern "C" void MSPTwitterUseExample_PostNativeScreenshot_m1594 (MSPTwitterUseExample_t317 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MSPTwitterUseExample::PostMSG()
extern "C" void MSPTwitterUseExample_PostMSG_m1595 (MSPTwitterUseExample_t317 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MSPTwitterUseExample::PostImage()
extern "C" void MSPTwitterUseExample_PostImage_m1596 (MSPTwitterUseExample_t317 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator MSPTwitterUseExample::PostTWScreenshot()
extern "C" Object_t * MSPTwitterUseExample_PostTWScreenshot_m1597 (MSPTwitterUseExample_t317 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MSPTwitterUseExample::LoadUserData()
extern "C" void MSPTwitterUseExample_LoadUserData_m1598 (MSPTwitterUseExample_t317 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MSPTwitterUseExample::PostMessage()
extern "C" void MSPTwitterUseExample_PostMessage_m1599 (MSPTwitterUseExample_t317 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MSPTwitterUseExample::PostScreehShot()
extern "C" void MSPTwitterUseExample_PostScreehShot_m1600 (MSPTwitterUseExample_t317 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MSPTwitterUseExample::OnUserDataLoadFailed()
extern "C" void MSPTwitterUseExample_OnUserDataLoadFailed_m1601 (MSPTwitterUseExample_t317 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MSPTwitterUseExample::OnUserDataLoaded()
extern "C" void MSPTwitterUseExample_OnUserDataLoaded_m1602 (MSPTwitterUseExample_t317 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MSPTwitterUseExample::OnPost()
extern "C" void MSPTwitterUseExample_OnPost_m1603 (MSPTwitterUseExample_t317 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MSPTwitterUseExample::OnPostFailed()
extern "C" void MSPTwitterUseExample_OnPostFailed_m1604 (MSPTwitterUseExample_t317 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MSPTwitterUseExample::OnInit()
extern "C" void MSPTwitterUseExample_OnInit_m1605 (MSPTwitterUseExample_t317 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MSPTwitterUseExample::OnAuth()
extern "C" void MSPTwitterUseExample_OnAuth_m1606 (MSPTwitterUseExample_t317 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MSPTwitterUseExample::RetrieveTimeLine()
extern "C" void MSPTwitterUseExample_RetrieveTimeLine_m1607 (MSPTwitterUseExample_t317 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MSPTwitterUseExample::UserLookUpRequest()
extern "C" void MSPTwitterUseExample_UserLookUpRequest_m1608 (MSPTwitterUseExample_t317 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MSPTwitterUseExample::FriedsidsRequest()
extern "C" void MSPTwitterUseExample_FriedsidsRequest_m1609 (MSPTwitterUseExample_t317 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MSPTwitterUseExample::FollowersidsRequest()
extern "C" void MSPTwitterUseExample_FollowersidsRequest_m1610 (MSPTwitterUseExample_t317 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MSPTwitterUseExample::TweetSearch()
extern "C" void MSPTwitterUseExample_TweetSearch_m1611 (MSPTwitterUseExample_t317 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MSPTwitterUseExample::OnIdsLoaded(UnionAssets.FLE.CEvent)
extern "C" void MSPTwitterUseExample_OnIdsLoaded_m1612 (MSPTwitterUseExample_t317 * __this, CEvent_t93 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MSPTwitterUseExample::OnLookUpRequestComplete(UnionAssets.FLE.CEvent)
extern "C" void MSPTwitterUseExample_OnLookUpRequestComplete_m1613 (MSPTwitterUseExample_t317 * __this, CEvent_t93 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MSPTwitterUseExample::OnSearchRequestComplete(UnionAssets.FLE.CEvent)
extern "C" void MSPTwitterUseExample_OnSearchRequestComplete_m1614 (MSPTwitterUseExample_t317 * __this, CEvent_t93 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MSPTwitterUseExample::OnTimeLineRequestComplete(UnionAssets.FLE.CEvent)
extern "C" void MSPTwitterUseExample_OnTimeLineRequestComplete_m1615 (MSPTwitterUseExample_t317 * __this, CEvent_t93 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator MSPTwitterUseExample::PostScreenshot()
extern "C" Object_t * MSPTwitterUseExample_PostScreenshot_m1616 (MSPTwitterUseExample_t317 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MSPTwitterUseExample::LogOut()
extern "C" void MSPTwitterUseExample_LogOut_m1617 (MSPTwitterUseExample_t317 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
