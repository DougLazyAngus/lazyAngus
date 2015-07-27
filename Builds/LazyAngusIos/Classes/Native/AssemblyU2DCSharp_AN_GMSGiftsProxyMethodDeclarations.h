﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// AN_GMSGiftsProxy
struct AN_GMSGiftsProxy_t127;
// System.String
struct String_t;
// System.Object[]
struct ObjectU5BU5D_t582;

// System.Void AN_GMSGiftsProxy::.ctor()
extern "C" void AN_GMSGiftsProxy__ctor_m843 (AN_GMSGiftsProxy_t127 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GMSGiftsProxy::CallActivityFunction(System.String,System.Object[])
extern "C" void AN_GMSGiftsProxy_CallActivityFunction_m844 (Object_t * __this /* static, unused */, String_t* ___methodName, ObjectU5BU5D_t582* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GMSGiftsProxy::sendGiftRequest(System.Int32,System.String,System.Int32,System.String,System.String)
extern "C" void AN_GMSGiftsProxy_sendGiftRequest_m845 (Object_t * __this /* static, unused */, int32_t ___type, String_t* ___playload, int32_t ___requestLifetimeDays, String_t* ___icon, String_t* ___description, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GMSGiftsProxy::showRequestAccepDialog()
extern "C" void AN_GMSGiftsProxy_showRequestAccepDialog_m846 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GMSGiftsProxy::acceptRequests(System.String)
extern "C" void AN_GMSGiftsProxy_acceptRequests_m847 (Object_t * __this /* static, unused */, String_t* ___ids, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GMSGiftsProxy::dismissRequest(System.String)
extern "C" void AN_GMSGiftsProxy_dismissRequest_m848 (Object_t * __this /* static, unused */, String_t* ___ids, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GMSGiftsProxy::leaveRoom()
extern "C" void AN_GMSGiftsProxy_leaveRoom_m849 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GMSGiftsProxy::showInvitationBox()
extern "C" void AN_GMSGiftsProxy_showInvitationBox_m850 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
