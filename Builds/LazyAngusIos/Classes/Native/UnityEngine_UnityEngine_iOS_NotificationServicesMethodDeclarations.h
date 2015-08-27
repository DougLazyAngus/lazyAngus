#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.iOS.NotificationServices
struct NotificationServices_t2765;
// UnityEngine.iOS.LocalNotification[]
struct LocalNotificationU5BU5D_t2907;
// UnityEngine.iOS.RemoteNotification[]
struct RemoteNotificationU5BU5D_t2908;
// System.Byte[]
struct ByteU5BU5D_t66;
// System.String
struct String_t;
// UnityEngine.iOS.LocalNotification
struct LocalNotification_t2762;
// UnityEngine.iOS.RemoteNotification
struct RemoteNotification_t2763;
// UnityEngine.iOS.NotificationType
#include "UnityEngine_UnityEngine_iOS_NotificationType.h"

// System.Void UnityEngine.iOS.NotificationServices::.ctor()
extern "C" void NotificationServices__ctor_m9466 (NotificationServices_t2765 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.iOS.NotificationServices::get_localNotificationCount()
extern "C" int32_t NotificationServices_get_localNotificationCount_m9467 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.iOS.LocalNotification UnityEngine.iOS.NotificationServices::GetLocalNotification(System.Int32)
extern "C" LocalNotification_t2762 * NotificationServices_GetLocalNotification_m9468 (Object_t * __this /* static, unused */, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.iOS.LocalNotification[] UnityEngine.iOS.NotificationServices::get_localNotifications()
extern "C" LocalNotificationU5BU5D_t2907* NotificationServices_get_localNotifications_m9469 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.iOS.NotificationServices::ScheduleLocalNotification(UnityEngine.iOS.LocalNotification)
extern "C" void NotificationServices_ScheduleLocalNotification_m9470 (Object_t * __this /* static, unused */, LocalNotification_t2762 * ___notification, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.iOS.NotificationServices::PresentLocalNotificationNow(UnityEngine.iOS.LocalNotification)
extern "C" void NotificationServices_PresentLocalNotificationNow_m9471 (Object_t * __this /* static, unused */, LocalNotification_t2762 * ___notification, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.iOS.NotificationServices::CancelLocalNotification(UnityEngine.iOS.LocalNotification)
extern "C" void NotificationServices_CancelLocalNotification_m9472 (Object_t * __this /* static, unused */, LocalNotification_t2762 * ___notification, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.iOS.NotificationServices::CancelAllLocalNotifications()
extern "C" void NotificationServices_CancelAllLocalNotifications_m9473 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.iOS.LocalNotification[] UnityEngine.iOS.NotificationServices::get_scheduledLocalNotifications()
extern "C" LocalNotificationU5BU5D_t2907* NotificationServices_get_scheduledLocalNotifications_m9474 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.iOS.NotificationServices::get_remoteNotificationCount()
extern "C" int32_t NotificationServices_get_remoteNotificationCount_m9475 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.iOS.RemoteNotification UnityEngine.iOS.NotificationServices::GetRemoteNotification(System.Int32)
extern "C" RemoteNotification_t2763 * NotificationServices_GetRemoteNotification_m9476 (Object_t * __this /* static, unused */, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.iOS.RemoteNotification[] UnityEngine.iOS.NotificationServices::get_remoteNotifications()
extern "C" RemoteNotificationU5BU5D_t2908* NotificationServices_get_remoteNotifications_m9477 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.iOS.NotificationServices::ClearLocalNotifications()
extern "C" void NotificationServices_ClearLocalNotifications_m9478 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.iOS.NotificationServices::ClearRemoteNotifications()
extern "C" void NotificationServices_ClearRemoteNotifications_m9479 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.iOS.NotificationServices::RegisterForNotifications(UnityEngine.iOS.NotificationType)
extern "C" void NotificationServices_RegisterForNotifications_m9480 (Object_t * __this /* static, unused */, int32_t ___notificationTypes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.iOS.NotificationServices::RegisterForNotifications(UnityEngine.iOS.NotificationType,System.Boolean)
extern "C" void NotificationServices_RegisterForNotifications_m9481 (Object_t * __this /* static, unused */, int32_t ___notificationTypes, bool ___registerForRemote, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.iOS.NotificationServices::UnregisterForRemoteNotifications()
extern "C" void NotificationServices_UnregisterForRemoteNotifications_m9482 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.iOS.NotificationType UnityEngine.iOS.NotificationServices::get_enabledNotificationTypes()
extern "C" int32_t NotificationServices_get_enabledNotificationTypes_m9483 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] UnityEngine.iOS.NotificationServices::get_deviceToken()
extern "C" ByteU5BU5D_t66* NotificationServices_get_deviceToken_m9484 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.iOS.NotificationServices::get_registrationError()
extern "C" String_t* NotificationServices_get_registrationError_m9485 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
