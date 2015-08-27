﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.ParseClient
struct ParseClient_t1231;
// System.Uri
struct Uri_t758;
// System.String
struct String_t;
// System.Version
struct Version_t1385;
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>
struct List_1_t1386;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t823;
// System.Type
struct Type_t;
// System.Object
struct Object_t;
// System.Collections.Generic.IList`1<System.Object>
struct IList_1_t1376;
// System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>
struct Task_1_t1373;
// System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>
struct IList_1_t1387;
// System.IO.Stream
struct Stream_t51;
// System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>
struct Task_1_t1388;
// System.IProgress`1<Parse.ParseUploadProgressEventArgs>
struct IProgress_1_t1244;
// System.Collections.Generic.IDictionary`2<System.String,System.String>
struct IDictionary_2_t693;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t711;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1224;
// <>f__AnonymousType2`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>,System.String>
struct U3CU3Ef__AnonymousType2_2_t1389;
// System.Nullable`1<System.Guid>
#include "mscorlib_System_Nullable_1_gen_1.h"
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.Threading.CancellationToken
#include "Parse_Unity_System_Threading_CancellationToken.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"

// System.Uri Parse.ParseClient::get_HostName()
extern "C" Uri_t758 * ParseClient_get_HostName_m6673 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseClient::set_HostName(System.Uri)
extern "C" void ParseClient_set_HostName_m6674 (Object_t * __this /* static, unused */, Uri_t758 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseClient::get_MasterKey()
extern "C" String_t* ParseClient_get_MasterKey_m6675 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseClient::set_MasterKey(System.String)
extern "C" void ParseClient_set_MasterKey_m6676 (Object_t * __this /* static, unused */, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseClient::get_ApplicationId()
extern "C" String_t* ParseClient_get_ApplicationId_m6677 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseClient::set_ApplicationId(System.String)
extern "C" void ParseClient_set_ApplicationId_m6678 (Object_t * __this /* static, unused */, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseClient::get_WindowsKey()
extern "C" String_t* ParseClient_get_WindowsKey_m6679 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseClient::set_WindowsKey(System.String)
extern "C" void ParseClient_set_WindowsKey_m6680 (Object_t * __this /* static, unused */, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseClient::.cctor()
extern "C" void ParseClient__cctor_m6681 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type Parse.ParseClient::GetParseType(System.String)
extern "C" Type_t * ParseClient_GetParseType_m6682 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Version Parse.ParseClient::get_Version()
extern "C" Version_t1385 * ParseClient_get_Version_m6683 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseClient::Initialize(System.String,System.String)
extern "C" void ParseClient_Initialize_m6684 (Object_t * __this /* static, unused */, String_t* ___applicationId, String_t* ___dotnetKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.Guid> Parse.ParseClient::get_InstallationId()
extern "C" Nullable_1_t1232  ParseClient_get_InstallationId_m6685 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseClient::set_InstallationId(System.Nullable`1<System.Guid>)
extern "C" void ParseClient_set_InstallationId_m6686 (Object_t * __this /* static, unused */, Nullable_1_t1232  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Parse.ParseClient::Decode(System.Object)
extern "C" Object_t * ParseClient_Decode_m6687 (Object_t * __this /* static, unused */, Object_t * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Parse.ParseClient::ParseDate(System.String)
extern "C" DateTime_t287  ParseClient_ParseDate_m6688 (Object_t * __this /* static, unused */, String_t* ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseClient::IsContainerObject(System.Object)
extern "C" bool ParseClient_IsContainerObject_m6689 (Object_t * __this /* static, unused */, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Parse.ParseClient::MaybeEncodeJSONObject(System.Object,System.Boolean)
extern "C" Object_t * ParseClient_MaybeEncodeJSONObject_m6690 (Object_t * __this /* static, unused */, Object_t * ___value, bool ___allowParseObjects, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseClient::EncodeJSONObject(System.Object,System.Boolean)
extern "C" Object_t* ParseClient_EncodeJSONObject_m6691 (Object_t * __this /* static, unused */, Object_t * ___value, bool ___allowParseObjects, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Parse.ParseClient::EncodeJSONArray(System.Collections.Generic.IList`1<System.Object>,System.Boolean)
extern "C" Object_t * ParseClient_EncodeJSONArray_m6692 (Object_t * __this /* static, unused */, Object_t* ___list, bool ___allowParseObjects, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>> Parse.ParseClient::RequestAsync(System.Uri,System.String,System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>,System.IO.Stream,System.String,System.Threading.CancellationToken)
extern "C" Task_1_t1373 * ParseClient_RequestAsync_m6693 (Object_t * __this /* static, unused */, Uri_t758 * ___uri, String_t* ___method, Object_t* ___headers, Stream_t51 * ___data, String_t* ___contentType, CancellationToken_t1165  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>> Parse.ParseClient::RequestAsync(System.String,System.String,System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>,System.Threading.CancellationToken)
extern "C" Task_1_t1388 * ParseClient_RequestAsync_m6694 (Object_t * __this /* static, unused */, String_t* ___method, String_t* ___relativeUri, String_t* ___sessionToken, Object_t* ___data, CancellationToken_t1165  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>> Parse.ParseClient::RequestAsync(System.String,System.Uri,System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>,System.Threading.CancellationToken)
extern "C" Task_1_t1388 * ParseClient_RequestAsync_m6695 (Object_t * __this /* static, unused */, String_t* ___method, Uri_t758 * ___relativeUri, String_t* ___sessionToken, Object_t* ___data, CancellationToken_t1165  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>> Parse.ParseClient::UploadAsync(System.Uri,System.String,System.String,System.IO.Stream,System.IProgress`1<Parse.ParseUploadProgressEventArgs>,System.Threading.CancellationToken)
extern "C" Task_1_t1388 * ParseClient_UploadAsync_m6696 (Object_t * __this /* static, unused */, Uri_t758 * ___relativeUri, String_t* ___sessionToken, String_t* ___contentType, Stream_t51 * ___data, Object_t* ___progress, CancellationToken_t1165  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>> Parse.ParseClient::get_DefaultParseHeaders()
extern "C" List_1_t1386 * ParseClient_get_DefaultParseHeaders_m6697 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type Parse.ParseClient::GetInterfaceType(System.Type,System.Type)
extern "C" Type_t * ParseClient_GetInterfaceType_m6698 (Object_t * __this /* static, unused */, Type_t * ___objType, Type_t * ___genericInterfaceType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseClient::BuildQueryString(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C" String_t* ParseClient_BuildQueryString_m6699 (Object_t * __this /* static, unused */, Object_t* ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,System.String> Parse.ParseClient::DecodeQueryString(System.String)
extern "C" Object_t* ParseClient_DecodeQueryString_m6700 (Object_t * __this /* static, unused */, String_t* ___queryString, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseClient::IsValidType(System.Object)
extern "C" bool ParseClient_IsValidType_m6701 (Object_t * __this /* static, unused */, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseClient::DeserializeJsonString(System.String)
extern "C" Object_t* ParseClient_DeserializeJsonString_m6702 (Object_t * __this /* static, unused */, String_t* ___jsonData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseClient::SerializeJsonString(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C" String_t* ParseClient_SerializeJsonString_m6703 (Object_t * __this /* static, unused */, Object_t* ___jsonData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseClient::get_ApplicationSettings()
extern "C" Object_t* ParseClient_get_ApplicationSettings_m6704 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseClient::ClearInMemoryInstallation()
extern "C" void ParseClient_ClearInMemoryInstallation_m6705 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<System.Object> Parse.ParseClient::DeepTraversal(System.Object,System.Boolean,System.Boolean)
extern "C" Object_t* ParseClient_DeepTraversal_m6706 (Object_t * __this /* static, unused */, Object_t * ___root, bool ___traverseParseObjects, bool ___yieldRoot, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<System.Object> Parse.ParseClient::DeepTraversalInternal(System.Object,System.Boolean,System.Collections.Generic.ICollection`1<System.Object>)
extern "C" Object_t* ParseClient_DeepTraversalInternal_m6707 (Object_t * __this /* static, unused */, Object_t * ___root, bool ___traverseParseObjects, Object_t* ___seen, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Parse.ParseClient::<Decode>b__0(System.Object)
extern "C" Object_t * ParseClient_U3CDecodeU3Eb__0_m6708 (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// <>f__AnonymousType2`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>,System.String> Parse.ParseClient::<BuildQueryString>b__e(System.Collections.Generic.KeyValuePair`2<System.String,System.Object>)
extern "C" U3CU3Ef__AnonymousType2_2_t1389 * ParseClient_U3CBuildQueryStringU3Eb__e_m6709 (Object_t * __this /* static, unused */, KeyValuePair_2_t778  ___pair, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseClient::<BuildQueryString>b__f(<>f__AnonymousType2`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>,System.String>)
extern "C" String_t* ParseClient_U3CBuildQueryStringU3Eb__f_m6710 (Object_t * __this /* static, unused */, U3CU3Ef__AnonymousType2_2_t1389 * ___U3CU3Eh__TransparentIdentifierd, const MethodInfo* method) IL2CPP_METHOD_ATTR;
