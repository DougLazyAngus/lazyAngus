#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// MSPTwitterUseExample
struct MSPTwitterUseExample_t357;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// UnionAssets.FLE.CEvent
struct CEvent_t133;

// System.Void MSPTwitterUseExample::.ctor()
extern "C" void MSPTwitterUseExample__ctor_m1859 (MSPTwitterUseExample_t357 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MSPTwitterUseExample::.cctor()
extern "C" void MSPTwitterUseExample__cctor_m1860 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MSPTwitterUseExample::Awake()
extern "C" void MSPTwitterUseExample_Awake_m1861 (MSPTwitterUseExample_t357 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MSPTwitterUseExample::FixedUpdate()
extern "C" void MSPTwitterUseExample_FixedUpdate_m1862 (MSPTwitterUseExample_t357 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MSPTwitterUseExample::Connect()
extern "C" void MSPTwitterUseExample_Connect_m1863 (MSPTwitterUseExample_t357 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MSPTwitterUseExample::PostWithAuthCheck()
extern "C" void MSPTwitterUseExample_PostWithAuthCheck_m1864 (MSPTwitterUseExample_t357 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MSPTwitterUseExample::PostNativeScreenshot()
extern "C" void MSPTwitterUseExample_PostNativeScreenshot_m1865 (MSPTwitterUseExample_t357 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MSPTwitterUseExample::PostMSG()
extern "C" void MSPTwitterUseExample_PostMSG_m1866 (MSPTwitterUseExample_t357 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MSPTwitterUseExample::PostImage()
extern "C" void MSPTwitterUseExample_PostImage_m1867 (MSPTwitterUseExample_t357 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator MSPTwitterUseExample::PostTWScreenshot()
extern "C" Object_t * MSPTwitterUseExample_PostTWScreenshot_m1868 (MSPTwitterUseExample_t357 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MSPTwitterUseExample::LoadUserData()
extern "C" void MSPTwitterUseExample_LoadUserData_m1869 (MSPTwitterUseExample_t357 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MSPTwitterUseExample::PostMessage()
extern "C" void MSPTwitterUseExample_PostMessage_m1870 (MSPTwitterUseExample_t357 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MSPTwitterUseExample::PostScreehShot()
extern "C" void MSPTwitterUseExample_PostScreehShot_m1871 (MSPTwitterUseExample_t357 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MSPTwitterUseExample::OnUserDataLoadFailed()
extern "C" void MSPTwitterUseExample_OnUserDataLoadFailed_m1872 (MSPTwitterUseExample_t357 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MSPTwitterUseExample::OnUserDataLoaded()
extern "C" void MSPTwitterUseExample_OnUserDataLoaded_m1873 (MSPTwitterUseExample_t357 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MSPTwitterUseExample::OnPost()
extern "C" void MSPTwitterUseExample_OnPost_m1874 (MSPTwitterUseExample_t357 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MSPTwitterUseExample::OnPostFailed()
extern "C" void MSPTwitterUseExample_OnPostFailed_m1875 (MSPTwitterUseExample_t357 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MSPTwitterUseExample::OnInit()
extern "C" void MSPTwitterUseExample_OnInit_m1876 (MSPTwitterUseExample_t357 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MSPTwitterUseExample::OnAuth()
extern "C" void MSPTwitterUseExample_OnAuth_m1877 (MSPTwitterUseExample_t357 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MSPTwitterUseExample::RetrieveTimeLine()
extern "C" void MSPTwitterUseExample_RetrieveTimeLine_m1878 (MSPTwitterUseExample_t357 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MSPTwitterUseExample::UserLookUpRequest()
extern "C" void MSPTwitterUseExample_UserLookUpRequest_m1879 (MSPTwitterUseExample_t357 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MSPTwitterUseExample::FriedsidsRequest()
extern "C" void MSPTwitterUseExample_FriedsidsRequest_m1880 (MSPTwitterUseExample_t357 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MSPTwitterUseExample::FollowersidsRequest()
extern "C" void MSPTwitterUseExample_FollowersidsRequest_m1881 (MSPTwitterUseExample_t357 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MSPTwitterUseExample::TweetSearch()
extern "C" void MSPTwitterUseExample_TweetSearch_m1882 (MSPTwitterUseExample_t357 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MSPTwitterUseExample::OnIdsLoaded(UnionAssets.FLE.CEvent)
extern "C" void MSPTwitterUseExample_OnIdsLoaded_m1883 (MSPTwitterUseExample_t357 * __this, CEvent_t133 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MSPTwitterUseExample::OnLookUpRequestComplete(UnionAssets.FLE.CEvent)
extern "C" void MSPTwitterUseExample_OnLookUpRequestComplete_m1884 (MSPTwitterUseExample_t357 * __this, CEvent_t133 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MSPTwitterUseExample::OnSearchRequestComplete(UnionAssets.FLE.CEvent)
extern "C" void MSPTwitterUseExample_OnSearchRequestComplete_m1885 (MSPTwitterUseExample_t357 * __this, CEvent_t133 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MSPTwitterUseExample::OnTimeLineRequestComplete(UnionAssets.FLE.CEvent)
extern "C" void MSPTwitterUseExample_OnTimeLineRequestComplete_m1886 (MSPTwitterUseExample_t357 * __this, CEvent_t133 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator MSPTwitterUseExample::PostScreenshot()
extern "C" Object_t * MSPTwitterUseExample_PostScreenshot_m1887 (MSPTwitterUseExample_t357 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MSPTwitterUseExample::LogOut()
extern "C" void MSPTwitterUseExample_LogOut_m1888 (MSPTwitterUseExample_t357 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
