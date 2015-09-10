#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.ParseInstallation
struct ParseInstallation_t1316;
// Parse.ParseQuery`1<Parse.ParseInstallation>
struct ParseQuery_1_t1320;
// System.String
struct String_t;
// System.Version
struct Version_t1412;
// System.Collections.Generic.IList`1<System.String>
struct IList_1_t718;
// System.Threading.Tasks.Task
struct Task_t1238;
// System.Threading.Tasks.Task`1<System.String>
struct Task_1_t1399;
// System.Byte[]
struct ByteU5BU5D_t66;
// System.Guid
#include "mscorlib_System_Guid.h"
// System.Threading.CancellationToken
#include "Parse_Unity_System_Threading_CancellationToken.h"

// System.Void Parse.ParseInstallation::.ctor()
extern "C" void ParseInstallation__ctor_m7136 (ParseInstallation_t1316 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseInstallation Parse.ParseInstallation::get_CurrentInstallation()
extern "C" ParseInstallation_t1316 * ParseInstallation_get_CurrentInstallation_m7137 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseInstallation::SaveCurrentInstallation()
extern "C" void ParseInstallation_SaveCurrentInstallation_m7138 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseInstallation::ClearInMemoryInstallation()
extern "C" void ParseInstallation_ClearInMemoryInstallation_m7139 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<Parse.ParseInstallation> Parse.ParseInstallation::get_Query()
extern "C" ParseQuery_1_t1320 * ParseInstallation_get_Query_m7140 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Guid Parse.ParseInstallation::get_InstallationId()
extern "C" Guid_t74  ParseInstallation_get_InstallationId_m7141 (ParseInstallation_t1316 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseInstallation::set_InstallationId(System.Guid)
extern "C" void ParseInstallation_set_InstallationId_m7142 (ParseInstallation_t1316 * __this, Guid_t74  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Guid Parse.ParseInstallation::getInstallationId()
extern "C" Guid_t74  ParseInstallation_getInstallationId_m7143 (ParseInstallation_t1316 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseInstallation::get_DeviceType()
extern "C" String_t* ParseInstallation_get_DeviceType_m7144 (ParseInstallation_t1316 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseInstallation::set_DeviceType(System.String)
extern "C" void ParseInstallation_set_DeviceType_m7145 (ParseInstallation_t1316 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseInstallation::get_AppName()
extern "C" String_t* ParseInstallation_get_AppName_m7146 (ParseInstallation_t1316 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseInstallation::set_AppName(System.String)
extern "C" void ParseInstallation_set_AppName_m7147 (ParseInstallation_t1316 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseInstallation::get_AppVersion()
extern "C" String_t* ParseInstallation_get_AppVersion_m7148 (ParseInstallation_t1316 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseInstallation::set_AppVersion(System.String)
extern "C" void ParseInstallation_set_AppVersion_m7149 (ParseInstallation_t1316 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseInstallation::get_AppIdentifier()
extern "C" String_t* ParseInstallation_get_AppIdentifier_m7150 (ParseInstallation_t1316 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseInstallation::set_AppIdentifier(System.String)
extern "C" void ParseInstallation_set_AppIdentifier_m7151 (ParseInstallation_t1316 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseInstallation::get_TimeZone()
extern "C" String_t* ParseInstallation_get_TimeZone_m7152 (ParseInstallation_t1316 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseInstallation::set_TimeZone(System.String)
extern "C" void ParseInstallation_set_TimeZone_m7153 (ParseInstallation_t1316 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Version Parse.ParseInstallation::get_ParseVersion()
extern "C" Version_t1412 * ParseInstallation_get_ParseVersion_m7154 (ParseInstallation_t1316 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseInstallation::set_ParseVersion(System.Version)
extern "C" void ParseInstallation_set_ParseVersion_m7155 (ParseInstallation_t1316 * __this, Version_t1412 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Version Parse.ParseInstallation::getParseVersion()
extern "C" Version_t1412 * ParseInstallation_getParseVersion_m7156 (ParseInstallation_t1316 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.String> Parse.ParseInstallation::get_Channels()
extern "C" Object_t* ParseInstallation_get_Channels_m7157 (ParseInstallation_t1316 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseInstallation::set_Channels(System.Collections.Generic.IList`1<System.String>)
extern "C" void ParseInstallation_set_Channels_m7158 (ParseInstallation_t1316 * __this, Object_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseInstallation::IsKeyMutable(System.String)
extern "C" bool ParseInstallation_IsKeyMutable_m7159 (ParseInstallation_t1316 * __this, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseInstallation::SetAutomaticValues()
extern "C" Task_t1238 * ParseInstallation_SetAutomaticValues_m7160 (ParseInstallation_t1316 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseInstallation::SaveAsync(System.Threading.Tasks.Task,System.Threading.CancellationToken)
extern "C" Task_t1238 * ParseInstallation_SaveAsync_m7161 (ParseInstallation_t1316 * __this, Task_t1238 * ___toAwait, CancellationToken_t1192  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseInstallation::getDeviceType()
extern "C" String_t* ParseInstallation_getDeviceType_m7162 (ParseInstallation_t1316 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<System.String> Parse.ParseInstallation::getAppNameAsync()
extern "C" Task_1_t1399 * ParseInstallation_getAppNameAsync_m7163 (ParseInstallation_t1316 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseInstallation::getAppIdentifier()
extern "C" String_t* ParseInstallation_getAppIdentifier_m7164 (ParseInstallation_t1316 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseInstallation::getAppVersion()
extern "C" String_t* ParseInstallation_getAppVersion_m7165 (ParseInstallation_t1316 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseInstallation::getTimeZone()
extern "C" String_t* ParseInstallation_getTimeZone_m7166 (ParseInstallation_t1316 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseInstallation::get_DeviceToken()
extern "C" String_t* ParseInstallation_get_DeviceToken_m7167 (ParseInstallation_t1316 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseInstallation::set_DeviceToken(System.String)
extern "C" void ParseInstallation_set_DeviceToken_m7168 (ParseInstallation_t1316 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseInstallation::SetDeviceTokenFromData(System.Byte[])
extern "C" void ParseInstallation_SetDeviceTokenFromData_m7169 (ParseInstallation_t1316 * __this, ByteU5BU5D_t66* ___deviceToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Parse.ParseInstallation::get_Badge()
extern "C" int32_t ParseInstallation_get_Badge_m7170 (ParseInstallation_t1316 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseInstallation::set_Badge(System.Int32)
extern "C" void ParseInstallation_set_Badge_m7171 (ParseInstallation_t1316 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseInstallation::SetPlatformAutomaticValue()
extern "C" void ParseInstallation_SetPlatformAutomaticValue_m7172 (ParseInstallation_t1316 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseInstallation::<SetAutomaticValues>b__8d(System.Threading.Tasks.Task`1<System.String>)
extern "C" void ParseInstallation_U3CSetAutomaticValuesU3Eb__8d_m7173 (ParseInstallation_t1316 * __this, Task_1_t1399 * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseInstallation::<>n__FabricatedMethod96(System.Threading.Tasks.Task,System.Threading.CancellationToken)
extern "C" Task_t1238 * ParseInstallation_U3CU3En__FabricatedMethod96_m7174 (ParseInstallation_t1316 * __this, Task_t1238 * p0, CancellationToken_t1192  p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseInstallation::<SaveAsync>b__8e(System.Threading.Tasks.Task)
extern "C" Task_t1238 * ParseInstallation_U3CSaveAsyncU3Eb__8e_m7175 (ParseInstallation_t1316 * __this, Task_t1238 * ____, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseInstallation::<SaveAsync>b__91(System.Threading.Tasks.Task)
extern "C" void ParseInstallation_U3CSaveAsyncU3Eb__91_m7176 (Object_t * __this /* static, unused */, Task_t1238 * ____, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseInstallation::<SaveAsync>b__8f(System.Threading.Tasks.Task&)
extern "C" void ParseInstallation_U3CSaveAsyncU3Eb__8f_m7177 (Object_t * __this /* static, unused */, Task_t1238 ** ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseInstallation::.cctor()
extern "C" void ParseInstallation__cctor_m7178 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
