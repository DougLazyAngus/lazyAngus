#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.iOS.NotificationServices
struct NotificationServices_t2712;
// UnityEngine.iOS.LocalNotification[]
struct LocalNotificationU5BU5D_t2854;
// UnityEngine.iOS.RemoteNotification[]
struct RemoteNotificationU5BU5D_t2855;
// System.Byte[]
struct ByteU5BU5D_t66;
// System.String
struct String_t;
// UnityEngine.iOS.LocalNotification
struct LocalNotification_t2709;
// UnityEngine.iOS.RemoteNotification
struct RemoteNotification_t2710;
// UnityEngine.iOS.NotificationType
#include "UnityEngine_UnityEngine_iOS_NotificationType.h"

// System.Void UnityEngine.iOS.NotificationServices::.ctor()
extern "C" void NotificationServices__ctor_m9168 (NotificationServices_t2712 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.iOS.NotificationServices::get_localNotificationCount()
extern "C" int32_t NotificationServices_get_localNotificationCount_m9169 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.iOS.LocalNotification UnityEngine.iOS.NotificationServices::GetLocalNotification(System.Int32)
extern "C" LocalNotification_t2709 * NotificationServices_GetLocalNotification_m9170 (Object_t * __this /* static, unused */, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.iOS.LocalNotification[] UnityEngine.iOS.NotificationServices::get_localNotifications()
extern "C" LocalNotificationU5BU5D_t2854* NotificationServices_get_localNotifications_m9171 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.iOS.NotificationServices::ScheduleLocalNotification(UnityEngine.iOS.LocalNotification)
extern "C" void NotificationServices_ScheduleLocalNotification_m9172 (Object_t * __this /* static, unused */, LocalNotification_t2709 * ___notification, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.iOS.NotificationServices::PresentLocalNotificationNow(UnityEngine.iOS.LocalNotification)
extern "C" void NotificationServices_PresentLocalNotificationNow_m9173 (Object_t * __this /* static, unused */, LocalNotification_t2709 * ___notification, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.iOS.NotificationServices::CancelLocalNotification(UnityEngine.iOS.LocalNotification)
extern "C" void NotificationServices_CancelLocalNotification_m9174 (Object_t * __this /* static, unused */, LocalNotification_t2709 * ___notification, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.iOS.NotificationServices::CancelAllLocalNotifications()
extern "C" void NotificationServices_CancelAllLocalNotifications_m9175 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.iOS.LocalNotification[] UnityEngine.iOS.NotificationServices::get_scheduledLocalNotifications()
extern "C" LocalNotificationU5BU5D_t2854* NotificationServices_get_scheduledLocalNotifications_m9176 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.iOS.NotificationServices::get_remoteNotificationCount()
extern "C" int32_t NotificationServices_get_remoteNotificationCount_m9177 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.iOS.RemoteNotification UnityEngine.iOS.NotificationServices::GetRemoteNotification(System.Int32)
extern "C" RemoteNotification_t2710 * NotificationServices_GetRemoteNotification_m9178 (Object_t * __this /* static, unused */, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.iOS.RemoteNotification[] UnityEngine.iOS.NotificationServices::get_remoteNotifications()
extern "C" RemoteNotificationU5BU5D_t2855* NotificationServices_get_remoteNotifications_m9179 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.iOS.NotificationServices::ClearLocalNotifications()
extern "C" void NotificationServices_ClearLocalNotifications_m9180 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.iOS.NotificationServices::ClearRemoteNotifications()
extern "C" void NotificationServices_ClearRemoteNotifications_m9181 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.iOS.NotificationServices::RegisterForNotifications(UnityEngine.iOS.NotificationType)
extern "C" void NotificationServices_RegisterForNotifications_m9182 (Object_t * __this /* static, unused */, int32_t ___notificationTypes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.iOS.NotificationServices::RegisterForNotifications(UnityEngine.iOS.NotificationType,System.Boolean)
extern "C" void NotificationServices_RegisterForNotifications_m9183 (Object_t * __this /* static, unused */, int32_t ___notificationTypes, bool ___registerForRemote, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.iOS.NotificationServices::UnregisterForRemoteNotifications()
extern "C" void NotificationServices_UnregisterForRemoteNotifications_m9184 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.iOS.NotificationType UnityEngine.iOS.NotificationServices::get_enabledNotificationTypes()
extern "C" int32_t NotificationServices_get_enabledNotificationTypes_m9185 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] UnityEngine.iOS.NotificationServices::get_deviceToken()
extern "C" ByteU5BU5D_t66* NotificationServices_get_deviceToken_m9186 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.iOS.NotificationServices::get_registrationError()
extern "C" String_t* NotificationServices_get_registrationError_m9187 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
