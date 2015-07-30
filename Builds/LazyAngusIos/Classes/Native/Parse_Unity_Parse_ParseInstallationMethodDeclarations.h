#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.ParseInstallation
struct ParseInstallation_t1234;
// Parse.ParseQuery`1<Parse.ParseInstallation>
struct ParseQuery_1_t1238;
// System.String
struct String_t;
// System.Version
struct Version_t1331;
// System.Collections.Generic.IList`1<System.String>
struct IList_1_t645;
// System.Threading.Tasks.Task
struct Task_t1155;
// System.Threading.Tasks.Task`1<System.String>
struct Task_1_t1318;
// System.Byte[]
struct ByteU5BU5D_t66;
// System.Guid
#include "mscorlib_System_Guid.h"
// System.Threading.CancellationToken
#include "Parse_Unity_System_Threading_CancellationToken.h"

// System.Void Parse.ParseInstallation::.ctor()
extern "C" void ParseInstallation__ctor_m6636 (ParseInstallation_t1234 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseInstallation Parse.ParseInstallation::get_CurrentInstallation()
extern "C" ParseInstallation_t1234 * ParseInstallation_get_CurrentInstallation_m6637 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseInstallation::SaveCurrentInstallation()
extern "C" void ParseInstallation_SaveCurrentInstallation_m6638 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseInstallation::ClearInMemoryInstallation()
extern "C" void ParseInstallation_ClearInMemoryInstallation_m6639 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<Parse.ParseInstallation> Parse.ParseInstallation::get_Query()
extern "C" ParseQuery_1_t1238 * ParseInstallation_get_Query_m6640 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Guid Parse.ParseInstallation::get_InstallationId()
extern "C" Guid_t74  ParseInstallation_get_InstallationId_m6641 (ParseInstallation_t1234 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseInstallation::set_InstallationId(System.Guid)
extern "C" void ParseInstallation_set_InstallationId_m6642 (ParseInstallation_t1234 * __this, Guid_t74  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Guid Parse.ParseInstallation::getInstallationId()
extern "C" Guid_t74  ParseInstallation_getInstallationId_m6643 (ParseInstallation_t1234 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseInstallation::get_DeviceType()
extern "C" String_t* ParseInstallation_get_DeviceType_m6644 (ParseInstallation_t1234 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseInstallation::set_DeviceType(System.String)
extern "C" void ParseInstallation_set_DeviceType_m6645 (ParseInstallation_t1234 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseInstallation::get_AppName()
extern "C" String_t* ParseInstallation_get_AppName_m6646 (ParseInstallation_t1234 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseInstallation::set_AppName(System.String)
extern "C" void ParseInstallation_set_AppName_m6647 (ParseInstallation_t1234 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseInstallation::get_AppVersion()
extern "C" String_t* ParseInstallation_get_AppVersion_m6648 (ParseInstallation_t1234 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseInstallation::set_AppVersion(System.String)
extern "C" void ParseInstallation_set_AppVersion_m6649 (ParseInstallation_t1234 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseInstallation::get_AppIdentifier()
extern "C" String_t* ParseInstallation_get_AppIdentifier_m6650 (ParseInstallation_t1234 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseInstallation::set_AppIdentifier(System.String)
extern "C" void ParseInstallation_set_AppIdentifier_m6651 (ParseInstallation_t1234 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseInstallation::get_TimeZone()
extern "C" String_t* ParseInstallation_get_TimeZone_m6652 (ParseInstallation_t1234 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseInstallation::set_TimeZone(System.String)
extern "C" void ParseInstallation_set_TimeZone_m6653 (ParseInstallation_t1234 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Version Parse.ParseInstallation::get_ParseVersion()
extern "C" Version_t1331 * ParseInstallation_get_ParseVersion_m6654 (ParseInstallation_t1234 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseInstallation::set_ParseVersion(System.Version)
extern "C" void ParseInstallation_set_ParseVersion_m6655 (ParseInstallation_t1234 * __this, Version_t1331 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Version Parse.ParseInstallation::getParseVersion()
extern "C" Version_t1331 * ParseInstallation_getParseVersion_m6656 (ParseInstallation_t1234 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.String> Parse.ParseInstallation::get_Channels()
extern "C" Object_t* ParseInstallation_get_Channels_m6657 (ParseInstallation_t1234 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseInstallation::set_Channels(System.Collections.Generic.IList`1<System.String>)
extern "C" void ParseInstallation_set_Channels_m6658 (ParseInstallation_t1234 * __this, Object_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseInstallation::IsKeyMutable(System.String)
extern "C" bool ParseInstallation_IsKeyMutable_m6659 (ParseInstallation_t1234 * __this, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseInstallation::SetAutomaticValues()
extern "C" Task_t1155 * ParseInstallation_SetAutomaticValues_m6660 (ParseInstallation_t1234 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseInstallation::SaveAsync(System.Threading.Tasks.Task,System.Threading.CancellationToken)
extern "C" Task_t1155 * ParseInstallation_SaveAsync_m6661 (ParseInstallation_t1234 * __this, Task_t1155 * ___toAwait, CancellationToken_t1108  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseInstallation::getDeviceType()
extern "C" String_t* ParseInstallation_getDeviceType_m6662 (ParseInstallation_t1234 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<System.String> Parse.ParseInstallation::getAppNameAsync()
extern "C" Task_1_t1318 * ParseInstallation_getAppNameAsync_m6663 (ParseInstallation_t1234 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseInstallation::getAppIdentifier()
extern "C" String_t* ParseInstallation_getAppIdentifier_m6664 (ParseInstallation_t1234 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseInstallation::getAppVersion()
extern "C" String_t* ParseInstallation_getAppVersion_m6665 (ParseInstallation_t1234 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseInstallation::getTimeZone()
extern "C" String_t* ParseInstallation_getTimeZone_m6666 (ParseInstallation_t1234 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseInstallation::get_DeviceToken()
extern "C" String_t* ParseInstallation_get_DeviceToken_m6667 (ParseInstallation_t1234 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseInstallation::set_DeviceToken(System.String)
extern "C" void ParseInstallation_set_DeviceToken_m6668 (ParseInstallation_t1234 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseInstallation::SetDeviceTokenFromData(System.Byte[])
extern "C" void ParseInstallation_SetDeviceTokenFromData_m6669 (ParseInstallation_t1234 * __this, ByteU5BU5D_t66* ___deviceToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Parse.ParseInstallation::get_Badge()
extern "C" int32_t ParseInstallation_get_Badge_m6670 (ParseInstallation_t1234 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseInstallation::set_Badge(System.Int32)
extern "C" void ParseInstallation_set_Badge_m6671 (ParseInstallation_t1234 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseInstallation::SetPlatformAutomaticValue()
extern "C" void ParseInstallation_SetPlatformAutomaticValue_m6672 (ParseInstallation_t1234 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseInstallation::<SetAutomaticValues>b__8d(System.Threading.Tasks.Task`1<System.String>)
extern "C" void ParseInstallation_U3CSetAutomaticValuesU3Eb__8d_m6673 (ParseInstallation_t1234 * __this, Task_1_t1318 * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseInstallation::<>n__FabricatedMethod96(System.Threading.Tasks.Task,System.Threading.CancellationToken)
extern "C" Task_t1155 * ParseInstallation_U3CU3En__FabricatedMethod96_m6674 (ParseInstallation_t1234 * __this, Task_t1155 * p0, CancellationToken_t1108  p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseInstallation::<SaveAsync>b__8e(System.Threading.Tasks.Task)
extern "C" Task_t1155 * ParseInstallation_U3CSaveAsyncU3Eb__8e_m6675 (ParseInstallation_t1234 * __this, Task_t1155 * ____, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseInstallation::<SaveAsync>b__91(System.Threading.Tasks.Task)
extern "C" void ParseInstallation_U3CSaveAsyncU3Eb__91_m6676 (Object_t * __this /* static, unused */, Task_t1155 * ____, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseInstallation::<SaveAsync>b__8f(System.Threading.Tasks.Task&)
extern "C" void ParseInstallation_U3CSaveAsyncU3Eb__8f_m6677 (Object_t * __this /* static, unused */, Task_t1155 ** ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseInstallation::.cctor()
extern "C" void ParseInstallation__cctor_m6678 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
