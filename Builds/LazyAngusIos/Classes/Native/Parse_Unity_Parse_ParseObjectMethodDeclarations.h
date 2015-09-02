#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.ParseObject
struct ParseObject_t1238;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>
struct IDictionary_2_t1269;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1230;
// Parse.ParseACL
struct ParseACL_t1233;
// System.Collections.Generic.IDictionary`2<System.String,System.String>
struct IDictionary_2_t706;
// System.Type
struct Type_t;
// System.Func`1<Parse.ParseObject>
struct Func_1_t1412;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t836;
// System.Collections.Generic.IEnumerable`1<Parse.ParseObject>
struct IEnumerable_1_t1284;
// System.Collections.Generic.IDictionary`2<System.String,Parse.ParseObject>
struct IDictionary_2_t1413;
// System.Threading.Tasks.Task
struct Task_t1227;
// System.Threading.Tasks.Task`1<Parse.ParseObject>
struct Task_1_t1411;
// System.Collections.Generic.IList`1<Parse.ParseObject>
struct IList_1_t1414;
// System.Collections.Generic.ICollection`1<Parse.ParseObject>
struct ICollection_1_t1415;
// Parse.Internal.IParseFieldOperation
struct IParseFieldOperation_t1393;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
struct IEnumerator_1_t1416;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// Parse.ParseQuery`1<Parse.ParseObject>
struct ParseQuery_1_t1417;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t723;
// System.ComponentModel.PropertyChangedEventHandler
struct PropertyChangedEventHandler_t1418;
// System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>
struct Task_1_t1404;
// Parse.ParseFile
struct ParseFile_t1259;
// System.Nullable`1<System.DateTime>
#include "mscorlib_System_Nullable_1_gen_2.h"
// System.Threading.CancellationToken
#include "Parse_Unity_System_Threading_CancellationToken.h"
// System.Collections.Generic.KeyValuePair`2<System.String,Parse.Internal.IParseFieldOperation>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_12.h"

// System.Void Parse.ParseObject::.ctor()
extern "C" void ParseObject__ctor_m6957 (ParseObject_t1238 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::.ctor(System.String)
extern "C" void ParseObject__ctor_m6958 (ParseObject_t1238 * __this, String_t* ___className, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseObject Parse.ParseObject::Create(System.String)
extern "C" ParseObject_t1238 * ParseObject_Create_m6959 (Object_t * __this /* static, unused */, String_t* ___className, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseObject Parse.ParseObject::CreateWithoutData(System.String,System.String)
extern "C" ParseObject_t1238 * ParseObject_CreateWithoutData_m6960 (Object_t * __this /* static, unused */, String_t* ___className, String_t* ___objectId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseObject::GetFieldForPropertyName(System.Type,System.String)
extern "C" String_t* ParseObject_GetFieldForPropertyName_m6961 (Object_t * __this /* static, unused */, Type_t * ___type, String_t* ___propertyName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::SetDefaultValues()
extern "C" void ParseObject_SetDefaultValues_m6962 (ParseObject_t1238 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseObject::GetClassName(System.Type)
extern "C" String_t* ParseObject_GetClassName_m6963 (Object_t * __this /* static, unused */, Type_t * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Func`1<Parse.ParseObject> Parse.ParseObject::GetFactory(System.String)
extern "C" Func_1_t1412 * ParseObject_GetFactory_m6964 (Object_t * __this /* static, unused */, String_t* ___className, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::UnregisterSubclass(System.String)
extern "C" void ParseObject_UnregisterSubclass_m6965 (Object_t * __this /* static, unused */, String_t* ___className, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type Parse.ParseObject::GetType(System.String)
extern "C" Type_t * ParseObject_GetType_m6966 (Object_t * __this /* static, unused */, String_t* ___className, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::Revert()
extern "C" void ParseObject_Revert_m6967 (ParseObject_t1238 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::MergeAfterFetch(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C" void ParseObject_MergeAfterFetch_m6968 (ParseObject_t1238 * __this, Object_t* ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::MergeAfterFailedSave(System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>)
extern "C" void ParseObject_MergeAfterFailedSave_m6969 (ParseObject_t1238 * __this, Object_t* ___operationsBeforeSave, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::MergeAfterSave(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C" void ParseObject_MergeAfterSave_m6970 (ParseObject_t1238 * __this, Object_t* ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::MergeMagicFields(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C" void ParseObject_MergeMagicFields_m6971 (ParseObject_t1238 * __this, Object_t* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::MergeFromServer(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C" void ParseObject_MergeFromServer_m6972 (ParseObject_t1238 * __this, Object_t* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::MergeFromObject(Parse.ParseObject)
extern "C" void ParseObject_MergeFromObject_m6973 (ParseObject_t1238 * __this, ParseObject_t1238 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseObject::get_HasDirtyChildren()
extern "C" bool ParseObject_get_HasDirtyChildren_m6974 (ParseObject_t1238 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::CheckpointMutableContainer(System.Object)
extern "C" void ParseObject_CheckpointMutableContainer_m6975 (ParseObject_t1238 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::CheckForChangesToMutableContainer(System.String,System.Object)
extern "C" void ParseObject_CheckForChangesToMutableContainer_m6976 (ParseObject_t1238 * __this, String_t* ___key, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::CheckForChangesToMutableContainers()
extern "C" void ParseObject_CheckForChangesToMutableContainers_m6977 (ParseObject_t1238 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Parse.ParseObject> Parse.ParseObject::FindUnsavedChildren()
extern "C" Object_t* ParseObject_FindUnsavedChildren_m6978 (ParseObject_t1238 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,Parse.ParseObject> Parse.ParseObject::CollectFetchedObjects()
extern "C" Object_t* ParseObject_CollectFetchedObjects_m6979 (ParseObject_t1238 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseObject::ToJSONObjectForSaving(System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>)
extern "C" Object_t* ParseObject_ToJSONObjectForSaving_m6980 (ParseObject_t1238 * __this, Object_t* ___operations, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseObject::ServerDataToJSONObjectForSerialization()
extern "C" Object_t* ParseObject_ServerDataToJSONObjectForSerialization_m6981 (ParseObject_t1238 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation> Parse.ParseObject::StartSave()
extern "C" Object_t* ParseObject_StartSave_m6982 (ParseObject_t1238 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseObject::SaveAsync(System.Threading.Tasks.Task,System.Threading.CancellationToken)
extern "C" Task_t1227 * ParseObject_SaveAsync_m6983 (ParseObject_t1238 * __this, Task_t1227 * ___toAwait, CancellationToken_t1181  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseObject::SaveAsync()
extern "C" Task_t1227 * ParseObject_SaveAsync_m6984 (ParseObject_t1238 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseObject::SaveAsync(System.Threading.CancellationToken)
extern "C" Task_t1227 * ParseObject_SaveAsync_m6985 (ParseObject_t1238 * __this, CancellationToken_t1181  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<Parse.ParseObject> Parse.ParseObject::FetchAsyncInternal(System.Threading.Tasks.Task,System.Threading.CancellationToken)
extern "C" Task_1_t1411 * ParseObject_FetchAsyncInternal_m6986 (ParseObject_t1238 * __this, Task_t1227 * ___toAwait, CancellationToken_t1181  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseObject::DeepSaveAsync(System.Object,System.String,System.Threading.CancellationToken)
extern "C" Task_t1227 * ParseObject_DeepSaveAsync_m6987 (Object_t * __this /* static, unused */, Object_t * ___obj, String_t* ___sessionToken, CancellationToken_t1181  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<Parse.ParseObject> Parse.ParseObject::FetchAsyncInternal(System.Threading.CancellationToken)
extern "C" Task_1_t1411 * ParseObject_FetchAsyncInternal_m6988 (ParseObject_t1238 * __this, CancellationToken_t1181  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<Parse.ParseObject> Parse.ParseObject::FetchIfNeededAsyncInternal(System.Threading.Tasks.Task,System.Threading.CancellationToken)
extern "C" Task_1_t1411 * ParseObject_FetchIfNeededAsyncInternal_m6989 (ParseObject_t1238 * __this, Task_t1227 * ___toAwait, CancellationToken_t1181  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<Parse.ParseObject> Parse.ParseObject::FetchIfNeededAsyncInternal(System.Threading.CancellationToken)
extern "C" Task_1_t1411 * ParseObject_FetchIfNeededAsyncInternal_m6990 (ParseObject_t1238 * __this, CancellationToken_t1181  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseObject::DeleteAsync(System.Threading.Tasks.Task,System.Threading.CancellationToken)
extern "C" Task_t1227 * ParseObject_DeleteAsync_m6991 (ParseObject_t1238 * __this, Task_t1227 * ___toAwait, CancellationToken_t1181  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseObject::DeleteAsync()
extern "C" Task_t1227 * ParseObject_DeleteAsync_m6992 (ParseObject_t1238 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseObject::DeleteAsync(System.Threading.CancellationToken)
extern "C" Task_t1227 * ParseObject_DeleteAsync_m6993 (ParseObject_t1238 * __this, CancellationToken_t1181  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::CollectDirtyChildren(System.Object,System.Collections.Generic.IList`1<Parse.ParseObject>,System.Collections.Generic.ICollection`1<Parse.ParseObject>,System.Collections.Generic.ICollection`1<Parse.ParseObject>)
extern "C" void ParseObject_CollectDirtyChildren_m6994 (Object_t * __this /* static, unused */, Object_t * ___node, Object_t* ___dirtyChildren, Object_t* ___seen, Object_t* ___seenNew, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::CollectDirtyChildren(System.Object,System.Collections.Generic.IList`1<Parse.ParseObject>)
extern "C" void ParseObject_CollectDirtyChildren_m6995 (Object_t * __this /* static, unused */, Object_t * ___node, Object_t* ___dirtyChildren, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseObject::CanBeSerializedAsValue(System.Object)
extern "C" bool ParseObject_CanBeSerializedAsValue_m6996 (Object_t * __this /* static, unused */, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseObject::get_CanBeSerialized()
extern "C" bool ParseObject_get_CanBeSerialized_m6997 (ParseObject_t1238 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::Remove(System.String)
extern "C" void ParseObject_Remove_m6998 (ParseObject_t1238 * __this, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::ApplyOperations(System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C" void ParseObject_ApplyOperations_m6999 (ParseObject_t1238 * __this, Object_t* ___operations, Object_t* ___map, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::RebuildEstimatedData()
extern "C" void ParseObject_RebuildEstimatedData_m7000 (ParseObject_t1238 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::PerformOperation(System.String,Parse.Internal.IParseFieldOperation)
extern "C" void ParseObject_PerformOperation_m7001 (ParseObject_t1238 * __this, String_t* ___key, Object_t * ___operation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::OnSettingValue(System.String&,System.Object&)
extern "C" void ParseObject_OnSettingValue_m7002 (ParseObject_t1238 * __this, String_t** ___key, Object_t ** ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Parse.ParseObject::get_Item(System.String)
extern "C" Object_t * ParseObject_get_Item_m7003 (ParseObject_t1238 * __this, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::set_Item(System.String,System.Object)
extern "C" void ParseObject_set_Item_m7004 (ParseObject_t1238 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::Set(System.String,System.Object)
extern "C" void ParseObject_Set_m7005 (ParseObject_t1238 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::Increment(System.String)
extern "C" void ParseObject_Increment_m7006 (ParseObject_t1238 * __this, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::Increment(System.String,System.Int64)
extern "C" void ParseObject_Increment_m7007 (ParseObject_t1238 * __this, String_t* ___key, int64_t ___amount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::Increment(System.String,System.Double)
extern "C" void ParseObject_Increment_m7008 (ParseObject_t1238 * __this, String_t* ___key, double ___amount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::AddToList(System.String,System.Object)
extern "C" void ParseObject_AddToList_m7009 (ParseObject_t1238 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::AddUniqueToList(System.String,System.Object)
extern "C" void ParseObject_AddUniqueToList_m7010 (ParseObject_t1238 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseObject::ContainsKey(System.String)
extern "C" bool ParseObject_ContainsKey_m7011 (ParseObject_t1238 * __this, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseObject::get_IsDataAvailable()
extern "C" bool ParseObject_get_IsDataAvailable_m7012 (ParseObject_t1238 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseObject::CheckIsDataAvailable(System.String)
extern "C" bool ParseObject_CheckIsDataAvailable_m7013 (ParseObject_t1238 * __this, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::CheckGetAccess(System.String)
extern "C" void ParseObject_CheckGetAccess_m7014 (ParseObject_t1238 * __this, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::CheckKeyIsMutable(System.String)
extern "C" void ParseObject_CheckKeyIsMutable_m7015 (ParseObject_t1238 * __this, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseObject::IsKeyMutable(System.String)
extern "C" bool ParseObject_IsKeyMutable_m7016 (ParseObject_t1238 * __this, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseObject::HasSameId(Parse.ParseObject)
extern "C" bool ParseObject_HasSameId_m7017 (ParseObject_t1238 * __this, ParseObject_t1238 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation> Parse.ParseObject::get_CurrentOperations()
extern "C" Object_t* ParseObject_get_CurrentOperations_m7018 (ParseObject_t1238 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.ICollection`1<System.String> Parse.ParseObject::get_Keys()
extern "C" Object_t* ParseObject_get_Keys_m7019 (ParseObject_t1238 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::AddToHashedObjects(System.Object)
extern "C" void ParseObject_AddToHashedObjects_m7020 (ParseObject_t1238 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseACL Parse.ParseObject::get_ACL()
extern "C" ParseACL_t1233 * ParseObject_get_ACL_m7021 (ParseObject_t1238 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::set_ACL(Parse.ParseACL)
extern "C" void ParseObject_set_ACL_m7022 (ParseObject_t1238 * __this, ParseACL_t1233 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseObject::get_IsNew()
extern "C" bool ParseObject_get_IsNew_m7023 (ParseObject_t1238 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::set_IsNew(System.Boolean)
extern "C" void ParseObject_set_IsNew_m7024 (ParseObject_t1238 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.DateTime> Parse.ParseObject::get_UpdatedAt()
extern "C" Nullable_1_t1304  ParseObject_get_UpdatedAt_m7025 (ParseObject_t1238 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::set_UpdatedAt(System.Nullable`1<System.DateTime>)
extern "C" void ParseObject_set_UpdatedAt_m7026 (ParseObject_t1238 * __this, Nullable_1_t1304  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.DateTime> Parse.ParseObject::get_CreatedAt()
extern "C" Nullable_1_t1304  ParseObject_get_CreatedAt_m7027 (ParseObject_t1238 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::set_CreatedAt(System.Nullable`1<System.DateTime>)
extern "C" void ParseObject_set_CreatedAt_m7028 (ParseObject_t1238 * __this, Nullable_1_t1304  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseObject::get_IsDirty()
extern "C" bool ParseObject_get_IsDirty_m7029 (ParseObject_t1238 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::set_IsDirty(System.Boolean)
extern "C" void ParseObject_set_IsDirty_m7030 (ParseObject_t1238 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseObject::IsKeyDirty(System.String)
extern "C" bool ParseObject_IsKeyDirty_m7031 (ParseObject_t1238 * __this, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseObject::CheckIsDirty(System.Boolean)
extern "C" bool ParseObject_CheckIsDirty_m7032 (ParseObject_t1238 * __this, bool ___considerChildren, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseObject::get_ObjectId()
extern "C" String_t* ParseObject_get_ObjectId_m7033 (ParseObject_t1238 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::set_ObjectId(System.String)
extern "C" void ParseObject_set_ObjectId_m7034 (ParseObject_t1238 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::SetObjectIdInternal(System.String)
extern "C" void ParseObject_SetObjectIdInternal_m7035 (ParseObject_t1238 * __this, String_t* ___objectId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseObject::get_ClassName()
extern "C" String_t* ParseObject_get_ClassName_m7036 (ParseObject_t1238 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::set_ClassName(System.String)
extern "C" void ParseObject_set_ClassName_m7037 (ParseObject_t1238 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::Add(System.String,System.Object)
extern "C" void ParseObject_Add_m7038 (ParseObject_t1238 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>> Parse.ParseObject::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<System.String,System.Object>>.GetEnumerator()
extern "C" Object_t* ParseObject_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CSystem_StringU2CSystem_ObjectU3EU3E_GetEnumerator_m7039 (ParseObject_t1238 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Parse.ParseObject::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ParseObject_System_Collections_IEnumerable_GetEnumerator_m7040 (ParseObject_t1238 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<Parse.ParseObject> Parse.ParseObject::GetQuery(System.String)
extern "C" ParseQuery_1_t1417 * ParseObject_GetQuery_m7041 (Object_t * __this /* static, unused */, String_t* ___className, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,System.String> Parse.ParseObject::get_PropertyMappings()
extern "C" Object_t* ParseObject_get_PropertyMappings_m7042 (ParseObject_t1238 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::OnFieldsChanged(System.Collections.Generic.IEnumerable`1<System.String>)
extern "C" void ParseObject_OnFieldsChanged_m7043 (ParseObject_t1238 * __this, Object_t* ___fieldNames, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::OnPropertyChanged(System.String)
extern "C" void ParseObject_OnPropertyChanged_m7044 (ParseObject_t1238 * __this, String_t* ___propertyName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::add_PropertyChanged(System.ComponentModel.PropertyChangedEventHandler)
extern "C" void ParseObject_add_PropertyChanged_m7045 (ParseObject_t1238 * __this, PropertyChangedEventHandler_t1418 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::remove_PropertyChanged(System.ComponentModel.PropertyChangedEventHandler)
extern "C" void ParseObject_remove_PropertyChanged_m7046 (ParseObject_t1238 * __this, PropertyChangedEventHandler_t1418 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseObject::<MergeFromObject>b__5(System.Collections.Generic.KeyValuePair`2<System.String,Parse.Internal.IParseFieldOperation>)
extern "C" String_t* ParseObject_U3CMergeFromObjectU3Eb__5_m7047 (Object_t * __this /* static, unused */, KeyValuePair_2_t1419  ___entry, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.Internal.IParseFieldOperation Parse.ParseObject::<MergeFromObject>b__6(System.Collections.Generic.KeyValuePair`2<System.String,Parse.Internal.IParseFieldOperation>)
extern "C" Object_t * ParseObject_U3CMergeFromObjectU3Eb__6_m7048 (Object_t * __this /* static, unused */, KeyValuePair_2_t1419  ___entry, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseObject::<FindUnsavedChildren>b__9(Parse.ParseObject)
extern "C" bool ParseObject_U3CFindUnsavedChildrenU3Eb__9_m7049 (Object_t * __this /* static, unused */, ParseObject_t1238 * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseObject::<CollectFetchedObjects>b__b(Parse.ParseObject)
extern "C" bool ParseObject_U3CCollectFetchedObjectsU3Eb__b_m7050 (Object_t * __this /* static, unused */, ParseObject_t1238 * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseObject::<CollectFetchedObjects>b__c(Parse.ParseObject)
extern "C" String_t* ParseObject_U3CCollectFetchedObjectsU3Eb__c_m7051 (Object_t * __this /* static, unused */, ParseObject_t1238 * ___pair, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseObject Parse.ParseObject::<CollectFetchedObjects>b__d(Parse.ParseObject)
extern "C" ParseObject_t1238 * ParseObject_U3CCollectFetchedObjectsU3Eb__d_m7052 (Object_t * __this /* static, unused */, ParseObject_t1238 * ___pair, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseObject Parse.ParseObject::<FetchAsyncInternal>b__1b(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
extern "C" ParseObject_t1238 * ParseObject_U3CFetchAsyncInternalU3Eb__1b_m7053 (ParseObject_t1238 * __this, Task_1_t1404 * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseObject::<DeepSaveAsync>b__20(Parse.ParseFile)
extern "C" bool ParseObject_U3CDeepSaveAsyncU3Eb__20_m7054 (Object_t * __this /* static, unused */, ParseFile_t1259 * ___f, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseObject::<DeleteAsync>b__7a(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
extern "C" bool ParseObject_U3CDeleteAsyncU3Eb__7a_m7055 (ParseObject_t1238 * __this, Task_1_t1404 * ____, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseObject::<CanBeSerializedAsValue>b__80(Parse.ParseObject)
extern "C" bool ParseObject_U3CCanBeSerializedAsValueU3Eb__80_m7056 (Object_t * __this /* static, unused */, ParseObject_t1238 * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::.cctor()
extern "C" void ParseObject__cctor_m7057 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseObject::<.cctor>b__8b()
extern "C" bool ParseObject_U3C_cctorU3Eb__8b_m7058 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
