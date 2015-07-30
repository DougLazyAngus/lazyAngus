#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.ParseClient
struct ParseClient_t1175;
// System.Uri
struct Uri_t707;
// System.String
struct String_t;
// System.Version
struct Version_t1331;
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>
struct List_1_t1332;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t764;
// System.Type
struct Type_t;
// System.Object
struct Object_t;
// System.Collections.Generic.IList`1<System.Object>
struct IList_1_t1322;
// System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>
struct Task_1_t1319;
// System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>
struct IList_1_t1333;
// System.IO.Stream
struct Stream_t51;
// System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>
struct Task_1_t1334;
// System.IProgress`1<Parse.ParseUploadProgressEventArgs>
struct IProgress_1_t1188;
// System.Collections.Generic.IDictionary`2<System.String,System.String>
struct IDictionary_2_t644;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t659;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1168;
// <>f__AnonymousType2`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>,System.String>
struct U3CU3Ef__AnonymousType2_2_t1335;
// System.Nullable`1<System.Guid>
#include "mscorlib_System_Nullable_1_gen_1.h"
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.Threading.CancellationToken
#include "Parse_Unity_System_Threading_CancellationToken.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"

// System.Uri Parse.ParseClient::get_HostName()
extern "C" Uri_t707 * ParseClient_get_HostName_m6380 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseClient::set_HostName(System.Uri)
extern "C" void ParseClient_set_HostName_m6381 (Object_t * __this /* static, unused */, Uri_t707 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseClient::get_MasterKey()
extern "C" String_t* ParseClient_get_MasterKey_m6382 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseClient::set_MasterKey(System.String)
extern "C" void ParseClient_set_MasterKey_m6383 (Object_t * __this /* static, unused */, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseClient::get_ApplicationId()
extern "C" String_t* ParseClient_get_ApplicationId_m6384 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseClient::set_ApplicationId(System.String)
extern "C" void ParseClient_set_ApplicationId_m6385 (Object_t * __this /* static, unused */, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseClient::get_WindowsKey()
extern "C" String_t* ParseClient_get_WindowsKey_m6386 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseClient::set_WindowsKey(System.String)
extern "C" void ParseClient_set_WindowsKey_m6387 (Object_t * __this /* static, unused */, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseClient::.cctor()
extern "C" void ParseClient__cctor_m6388 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type Parse.ParseClient::GetParseType(System.String)
extern "C" Type_t * ParseClient_GetParseType_m6389 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Version Parse.ParseClient::get_Version()
extern "C" Version_t1331 * ParseClient_get_Version_m6390 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseClient::Initialize(System.String,System.String)
extern "C" void ParseClient_Initialize_m6391 (Object_t * __this /* static, unused */, String_t* ___applicationId, String_t* ___dotnetKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.Guid> Parse.ParseClient::get_InstallationId()
extern "C" Nullable_1_t1176  ParseClient_get_InstallationId_m6392 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseClient::set_InstallationId(System.Nullable`1<System.Guid>)
extern "C" void ParseClient_set_InstallationId_m6393 (Object_t * __this /* static, unused */, Nullable_1_t1176  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Parse.ParseClient::Decode(System.Object)
extern "C" Object_t * ParseClient_Decode_m6394 (Object_t * __this /* static, unused */, Object_t * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Parse.ParseClient::ParseDate(System.String)
extern "C" DateTime_t287  ParseClient_ParseDate_m6395 (Object_t * __this /* static, unused */, String_t* ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseClient::IsContainerObject(System.Object)
extern "C" bool ParseClient_IsContainerObject_m6396 (Object_t * __this /* static, unused */, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Parse.ParseClient::MaybeEncodeJSONObject(System.Object,System.Boolean)
extern "C" Object_t * ParseClient_MaybeEncodeJSONObject_m6397 (Object_t * __this /* static, unused */, Object_t * ___value, bool ___allowParseObjects, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseClient::EncodeJSONObject(System.Object,System.Boolean)
extern "C" Object_t* ParseClient_EncodeJSONObject_m6398 (Object_t * __this /* static, unused */, Object_t * ___value, bool ___allowParseObjects, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Parse.ParseClient::EncodeJSONArray(System.Collections.Generic.IList`1<System.Object>,System.Boolean)
extern "C" Object_t * ParseClient_EncodeJSONArray_m6399 (Object_t * __this /* static, unused */, Object_t* ___list, bool ___allowParseObjects, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>> Parse.ParseClient::RequestAsync(System.Uri,System.String,System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>,System.IO.Stream,System.String,System.Threading.CancellationToken)
extern "C" Task_1_t1319 * ParseClient_RequestAsync_m6400 (Object_t * __this /* static, unused */, Uri_t707 * ___uri, String_t* ___method, Object_t* ___headers, Stream_t51 * ___data, String_t* ___contentType, CancellationToken_t1108  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>> Parse.ParseClient::RequestAsync(System.String,System.String,System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>,System.Threading.CancellationToken)
extern "C" Task_1_t1334 * ParseClient_RequestAsync_m6401 (Object_t * __this /* static, unused */, String_t* ___method, String_t* ___relativeUri, String_t* ___sessionToken, Object_t* ___data, CancellationToken_t1108  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>> Parse.ParseClient::RequestAsync(System.String,System.Uri,System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>,System.Threading.CancellationToken)
extern "C" Task_1_t1334 * ParseClient_RequestAsync_m6402 (Object_t * __this /* static, unused */, String_t* ___method, Uri_t707 * ___relativeUri, String_t* ___sessionToken, Object_t* ___data, CancellationToken_t1108  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>> Parse.ParseClient::UploadAsync(System.Uri,System.String,System.String,System.IO.Stream,System.IProgress`1<Parse.ParseUploadProgressEventArgs>,System.Threading.CancellationToken)
extern "C" Task_1_t1334 * ParseClient_UploadAsync_m6403 (Object_t * __this /* static, unused */, Uri_t707 * ___relativeUri, String_t* ___sessionToken, String_t* ___contentType, Stream_t51 * ___data, Object_t* ___progress, CancellationToken_t1108  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>> Parse.ParseClient::get_DefaultParseHeaders()
extern "C" List_1_t1332 * ParseClient_get_DefaultParseHeaders_m6404 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type Parse.ParseClient::GetInterfaceType(System.Type,System.Type)
extern "C" Type_t * ParseClient_GetInterfaceType_m6405 (Object_t * __this /* static, unused */, Type_t * ___objType, Type_t * ___genericInterfaceType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseClient::BuildQueryString(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C" String_t* ParseClient_BuildQueryString_m6406 (Object_t * __this /* static, unused */, Object_t* ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,System.String> Parse.ParseClient::DecodeQueryString(System.String)
extern "C" Object_t* ParseClient_DecodeQueryString_m6407 (Object_t * __this /* static, unused */, String_t* ___queryString, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseClient::IsValidType(System.Object)
extern "C" bool ParseClient_IsValidType_m6408 (Object_t * __this /* static, unused */, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseClient::DeserializeJsonString(System.String)
extern "C" Object_t* ParseClient_DeserializeJsonString_m6409 (Object_t * __this /* static, unused */, String_t* ___jsonData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseClient::SerializeJsonString(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C" String_t* ParseClient_SerializeJsonString_m6410 (Object_t * __this /* static, unused */, Object_t* ___jsonData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseClient::get_ApplicationSettings()
extern "C" Object_t* ParseClient_get_ApplicationSettings_m6411 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseClient::ClearInMemoryInstallation()
extern "C" void ParseClient_ClearInMemoryInstallation_m6412 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<System.Object> Parse.ParseClient::DeepTraversal(System.Object,System.Boolean,System.Boolean)
extern "C" Object_t* ParseClient_DeepTraversal_m6413 (Object_t * __this /* static, unused */, Object_t * ___root, bool ___traverseParseObjects, bool ___yieldRoot, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<System.Object> Parse.ParseClient::DeepTraversalInternal(System.Object,System.Boolean,System.Collections.Generic.ICollection`1<System.Object>)
extern "C" Object_t* ParseClient_DeepTraversalInternal_m6414 (Object_t * __this /* static, unused */, Object_t * ___root, bool ___traverseParseObjects, Object_t* ___seen, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Parse.ParseClient::<Decode>b__0(System.Object)
extern "C" Object_t * ParseClient_U3CDecodeU3Eb__0_m6415 (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// <>f__AnonymousType2`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>,System.String> Parse.ParseClient::<BuildQueryString>b__e(System.Collections.Generic.KeyValuePair`2<System.String,System.Object>)
extern "C" U3CU3Ef__AnonymousType2_2_t1335 * ParseClient_U3CBuildQueryStringU3Eb__e_m6416 (Object_t * __this /* static, unused */, KeyValuePair_2_t727  ___pair, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseClient::<BuildQueryString>b__f(<>f__AnonymousType2`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>,System.String>)
extern "C" String_t* ParseClient_U3CBuildQueryStringU3Eb__f_m6417 (Object_t * __this /* static, unused */, U3CU3Ef__AnonymousType2_2_t1335 * ___U3CU3Eh__TransparentIdentifierd, const MethodInfo* method) IL2CPP_METHOD_ATTR;
