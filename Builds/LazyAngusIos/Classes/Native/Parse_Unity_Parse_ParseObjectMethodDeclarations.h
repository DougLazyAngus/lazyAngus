﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.ParseObject
struct ParseObject_t1222;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>
struct IDictionary_2_t1253;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1214;
// Parse.ParseACL
struct ParseACL_t1217;
// System.Collections.Generic.IDictionary`2<System.String,System.String>
struct IDictionary_2_t693;
// System.Type
struct Type_t;
// System.Func`1<Parse.ParseObject>
struct Func_1_t1396;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t823;
// System.Collections.Generic.IEnumerable`1<Parse.ParseObject>
struct IEnumerable_1_t1268;
// System.Collections.Generic.IDictionary`2<System.String,Parse.ParseObject>
struct IDictionary_2_t1397;
// System.Threading.Tasks.Task
struct Task_t1211;
// System.Threading.Tasks.Task`1<Parse.ParseObject>
struct Task_1_t1395;
// System.Collections.Generic.IList`1<Parse.ParseObject>
struct IList_1_t1398;
// System.Collections.Generic.ICollection`1<Parse.ParseObject>
struct ICollection_1_t1399;
// Parse.Internal.IParseFieldOperation
struct IParseFieldOperation_t1377;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
struct IEnumerator_1_t1400;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// Parse.ParseQuery`1<Parse.ParseObject>
struct ParseQuery_1_t1401;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t710;
// System.ComponentModel.PropertyChangedEventHandler
struct PropertyChangedEventHandler_t1402;
// System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>
struct Task_1_t1388;
// Parse.ParseFile
struct ParseFile_t1243;
// System.Nullable`1<System.DateTime>
#include "mscorlib_System_Nullable_1_gen_2.h"
// System.Threading.CancellationToken
#include "Parse_Unity_System_Threading_CancellationToken.h"
// System.Collections.Generic.KeyValuePair`2<System.String,Parse.Internal.IParseFieldOperation>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_12.h"

// System.Void Parse.ParseObject::.ctor()
extern "C" void ParseObject__ctor_m6825 (ParseObject_t1222 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::.ctor(System.String)
extern "C" void ParseObject__ctor_m6826 (ParseObject_t1222 * __this, String_t* ___className, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseObject Parse.ParseObject::Create(System.String)
extern "C" ParseObject_t1222 * ParseObject_Create_m6827 (Object_t * __this /* static, unused */, String_t* ___className, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseObject Parse.ParseObject::CreateWithoutData(System.String,System.String)
extern "C" ParseObject_t1222 * ParseObject_CreateWithoutData_m6828 (Object_t * __this /* static, unused */, String_t* ___className, String_t* ___objectId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseObject::GetFieldForPropertyName(System.Type,System.String)
extern "C" String_t* ParseObject_GetFieldForPropertyName_m6829 (Object_t * __this /* static, unused */, Type_t * ___type, String_t* ___propertyName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::SetDefaultValues()
extern "C" void ParseObject_SetDefaultValues_m6830 (ParseObject_t1222 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseObject::GetClassName(System.Type)
extern "C" String_t* ParseObject_GetClassName_m6831 (Object_t * __this /* static, unused */, Type_t * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Func`1<Parse.ParseObject> Parse.ParseObject::GetFactory(System.String)
extern "C" Func_1_t1396 * ParseObject_GetFactory_m6832 (Object_t * __this /* static, unused */, String_t* ___className, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::UnregisterSubclass(System.String)
extern "C" void ParseObject_UnregisterSubclass_m6833 (Object_t * __this /* static, unused */, String_t* ___className, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type Parse.ParseObject::GetType(System.String)
extern "C" Type_t * ParseObject_GetType_m6834 (Object_t * __this /* static, unused */, String_t* ___className, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::Revert()
extern "C" void ParseObject_Revert_m6835 (ParseObject_t1222 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::MergeAfterFetch(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C" void ParseObject_MergeAfterFetch_m6836 (ParseObject_t1222 * __this, Object_t* ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::MergeAfterFailedSave(System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>)
extern "C" void ParseObject_MergeAfterFailedSave_m6837 (ParseObject_t1222 * __this, Object_t* ___operationsBeforeSave, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::MergeAfterSave(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C" void ParseObject_MergeAfterSave_m6838 (ParseObject_t1222 * __this, Object_t* ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::MergeMagicFields(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C" void ParseObject_MergeMagicFields_m6839 (ParseObject_t1222 * __this, Object_t* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::MergeFromServer(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C" void ParseObject_MergeFromServer_m6840 (ParseObject_t1222 * __this, Object_t* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::MergeFromObject(Parse.ParseObject)
extern "C" void ParseObject_MergeFromObject_m6841 (ParseObject_t1222 * __this, ParseObject_t1222 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseObject::get_HasDirtyChildren()
extern "C" bool ParseObject_get_HasDirtyChildren_m6842 (ParseObject_t1222 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::CheckpointMutableContainer(System.Object)
extern "C" void ParseObject_CheckpointMutableContainer_m6843 (ParseObject_t1222 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::CheckForChangesToMutableContainer(System.String,System.Object)
extern "C" void ParseObject_CheckForChangesToMutableContainer_m6844 (ParseObject_t1222 * __this, String_t* ___key, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::CheckForChangesToMutableContainers()
extern "C" void ParseObject_CheckForChangesToMutableContainers_m6845 (ParseObject_t1222 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Parse.ParseObject> Parse.ParseObject::FindUnsavedChildren()
extern "C" Object_t* ParseObject_FindUnsavedChildren_m6846 (ParseObject_t1222 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,Parse.ParseObject> Parse.ParseObject::CollectFetchedObjects()
extern "C" Object_t* ParseObject_CollectFetchedObjects_m6847 (ParseObject_t1222 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseObject::ToJSONObjectForSaving(System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>)
extern "C" Object_t* ParseObject_ToJSONObjectForSaving_m6848 (ParseObject_t1222 * __this, Object_t* ___operations, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseObject::ServerDataToJSONObjectForSerialization()
extern "C" Object_t* ParseObject_ServerDataToJSONObjectForSerialization_m6849 (ParseObject_t1222 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation> Parse.ParseObject::StartSave()
extern "C" Object_t* ParseObject_StartSave_m6850 (ParseObject_t1222 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseObject::SaveAsync(System.Threading.Tasks.Task,System.Threading.CancellationToken)
extern "C" Task_t1211 * ParseObject_SaveAsync_m6851 (ParseObject_t1222 * __this, Task_t1211 * ___toAwait, CancellationToken_t1165  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseObject::SaveAsync()
extern "C" Task_t1211 * ParseObject_SaveAsync_m6852 (ParseObject_t1222 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseObject::SaveAsync(System.Threading.CancellationToken)
extern "C" Task_t1211 * ParseObject_SaveAsync_m6853 (ParseObject_t1222 * __this, CancellationToken_t1165  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<Parse.ParseObject> Parse.ParseObject::FetchAsyncInternal(System.Threading.Tasks.Task,System.Threading.CancellationToken)
extern "C" Task_1_t1395 * ParseObject_FetchAsyncInternal_m6854 (ParseObject_t1222 * __this, Task_t1211 * ___toAwait, CancellationToken_t1165  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseObject::DeepSaveAsync(System.Object,System.String,System.Threading.CancellationToken)
extern "C" Task_t1211 * ParseObject_DeepSaveAsync_m6855 (Object_t * __this /* static, unused */, Object_t * ___obj, String_t* ___sessionToken, CancellationToken_t1165  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<Parse.ParseObject> Parse.ParseObject::FetchAsyncInternal(System.Threading.CancellationToken)
extern "C" Task_1_t1395 * ParseObject_FetchAsyncInternal_m6856 (ParseObject_t1222 * __this, CancellationToken_t1165  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<Parse.ParseObject> Parse.ParseObject::FetchIfNeededAsyncInternal(System.Threading.Tasks.Task,System.Threading.CancellationToken)
extern "C" Task_1_t1395 * ParseObject_FetchIfNeededAsyncInternal_m6857 (ParseObject_t1222 * __this, Task_t1211 * ___toAwait, CancellationToken_t1165  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<Parse.ParseObject> Parse.ParseObject::FetchIfNeededAsyncInternal(System.Threading.CancellationToken)
extern "C" Task_1_t1395 * ParseObject_FetchIfNeededAsyncInternal_m6858 (ParseObject_t1222 * __this, CancellationToken_t1165  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseObject::DeleteAsync(System.Threading.Tasks.Task,System.Threading.CancellationToken)
extern "C" Task_t1211 * ParseObject_DeleteAsync_m6859 (ParseObject_t1222 * __this, Task_t1211 * ___toAwait, CancellationToken_t1165  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseObject::DeleteAsync()
extern "C" Task_t1211 * ParseObject_DeleteAsync_m6860 (ParseObject_t1222 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseObject::DeleteAsync(System.Threading.CancellationToken)
extern "C" Task_t1211 * ParseObject_DeleteAsync_m6861 (ParseObject_t1222 * __this, CancellationToken_t1165  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::CollectDirtyChildren(System.Object,System.Collections.Generic.IList`1<Parse.ParseObject>,System.Collections.Generic.ICollection`1<Parse.ParseObject>,System.Collections.Generic.ICollection`1<Parse.ParseObject>)
extern "C" void ParseObject_CollectDirtyChildren_m6862 (Object_t * __this /* static, unused */, Object_t * ___node, Object_t* ___dirtyChildren, Object_t* ___seen, Object_t* ___seenNew, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::CollectDirtyChildren(System.Object,System.Collections.Generic.IList`1<Parse.ParseObject>)
extern "C" void ParseObject_CollectDirtyChildren_m6863 (Object_t * __this /* static, unused */, Object_t * ___node, Object_t* ___dirtyChildren, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseObject::CanBeSerializedAsValue(System.Object)
extern "C" bool ParseObject_CanBeSerializedAsValue_m6864 (Object_t * __this /* static, unused */, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseObject::get_CanBeSerialized()
extern "C" bool ParseObject_get_CanBeSerialized_m6865 (ParseObject_t1222 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::Remove(System.String)
extern "C" void ParseObject_Remove_m6866 (ParseObject_t1222 * __this, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::ApplyOperations(System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C" void ParseObject_ApplyOperations_m6867 (ParseObject_t1222 * __this, Object_t* ___operations, Object_t* ___map, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::RebuildEstimatedData()
extern "C" void ParseObject_RebuildEstimatedData_m6868 (ParseObject_t1222 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::PerformOperation(System.String,Parse.Internal.IParseFieldOperation)
extern "C" void ParseObject_PerformOperation_m6869 (ParseObject_t1222 * __this, String_t* ___key, Object_t * ___operation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::OnSettingValue(System.String&,System.Object&)
extern "C" void ParseObject_OnSettingValue_m6870 (ParseObject_t1222 * __this, String_t** ___key, Object_t ** ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Parse.ParseObject::get_Item(System.String)
extern "C" Object_t * ParseObject_get_Item_m6871 (ParseObject_t1222 * __this, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::set_Item(System.String,System.Object)
extern "C" void ParseObject_set_Item_m6872 (ParseObject_t1222 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::Set(System.String,System.Object)
extern "C" void ParseObject_Set_m6873 (ParseObject_t1222 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::Increment(System.String)
extern "C" void ParseObject_Increment_m6874 (ParseObject_t1222 * __this, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::Increment(System.String,System.Int64)
extern "C" void ParseObject_Increment_m6875 (ParseObject_t1222 * __this, String_t* ___key, int64_t ___amount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::Increment(System.String,System.Double)
extern "C" void ParseObject_Increment_m6876 (ParseObject_t1222 * __this, String_t* ___key, double ___amount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::AddToList(System.String,System.Object)
extern "C" void ParseObject_AddToList_m6877 (ParseObject_t1222 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::AddUniqueToList(System.String,System.Object)
extern "C" void ParseObject_AddUniqueToList_m6878 (ParseObject_t1222 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseObject::ContainsKey(System.String)
extern "C" bool ParseObject_ContainsKey_m6879 (ParseObject_t1222 * __this, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseObject::get_IsDataAvailable()
extern "C" bool ParseObject_get_IsDataAvailable_m6880 (ParseObject_t1222 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseObject::CheckIsDataAvailable(System.String)
extern "C" bool ParseObject_CheckIsDataAvailable_m6881 (ParseObject_t1222 * __this, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::CheckGetAccess(System.String)
extern "C" void ParseObject_CheckGetAccess_m6882 (ParseObject_t1222 * __this, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::CheckKeyIsMutable(System.String)
extern "C" void ParseObject_CheckKeyIsMutable_m6883 (ParseObject_t1222 * __this, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseObject::IsKeyMutable(System.String)
extern "C" bool ParseObject_IsKeyMutable_m6884 (ParseObject_t1222 * __this, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseObject::HasSameId(Parse.ParseObject)
extern "C" bool ParseObject_HasSameId_m6885 (ParseObject_t1222 * __this, ParseObject_t1222 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation> Parse.ParseObject::get_CurrentOperations()
extern "C" Object_t* ParseObject_get_CurrentOperations_m6886 (ParseObject_t1222 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.ICollection`1<System.String> Parse.ParseObject::get_Keys()
extern "C" Object_t* ParseObject_get_Keys_m6887 (ParseObject_t1222 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::AddToHashedObjects(System.Object)
extern "C" void ParseObject_AddToHashedObjects_m6888 (ParseObject_t1222 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseACL Parse.ParseObject::get_ACL()
extern "C" ParseACL_t1217 * ParseObject_get_ACL_m6889 (ParseObject_t1222 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::set_ACL(Parse.ParseACL)
extern "C" void ParseObject_set_ACL_m6890 (ParseObject_t1222 * __this, ParseACL_t1217 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseObject::get_IsNew()
extern "C" bool ParseObject_get_IsNew_m6891 (ParseObject_t1222 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::set_IsNew(System.Boolean)
extern "C" void ParseObject_set_IsNew_m6892 (ParseObject_t1222 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.DateTime> Parse.ParseObject::get_UpdatedAt()
extern "C" Nullable_1_t1288  ParseObject_get_UpdatedAt_m6893 (ParseObject_t1222 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::set_UpdatedAt(System.Nullable`1<System.DateTime>)
extern "C" void ParseObject_set_UpdatedAt_m6894 (ParseObject_t1222 * __this, Nullable_1_t1288  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.DateTime> Parse.ParseObject::get_CreatedAt()
extern "C" Nullable_1_t1288  ParseObject_get_CreatedAt_m6895 (ParseObject_t1222 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::set_CreatedAt(System.Nullable`1<System.DateTime>)
extern "C" void ParseObject_set_CreatedAt_m6896 (ParseObject_t1222 * __this, Nullable_1_t1288  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseObject::get_IsDirty()
extern "C" bool ParseObject_get_IsDirty_m6897 (ParseObject_t1222 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::set_IsDirty(System.Boolean)
extern "C" void ParseObject_set_IsDirty_m6898 (ParseObject_t1222 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseObject::IsKeyDirty(System.String)
extern "C" bool ParseObject_IsKeyDirty_m6899 (ParseObject_t1222 * __this, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseObject::CheckIsDirty(System.Boolean)
extern "C" bool ParseObject_CheckIsDirty_m6900 (ParseObject_t1222 * __this, bool ___considerChildren, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseObject::get_ObjectId()
extern "C" String_t* ParseObject_get_ObjectId_m6901 (ParseObject_t1222 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::set_ObjectId(System.String)
extern "C" void ParseObject_set_ObjectId_m6902 (ParseObject_t1222 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::SetObjectIdInternal(System.String)
extern "C" void ParseObject_SetObjectIdInternal_m6903 (ParseObject_t1222 * __this, String_t* ___objectId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseObject::get_ClassName()
extern "C" String_t* ParseObject_get_ClassName_m6904 (ParseObject_t1222 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::set_ClassName(System.String)
extern "C" void ParseObject_set_ClassName_m6905 (ParseObject_t1222 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::Add(System.String,System.Object)
extern "C" void ParseObject_Add_m6906 (ParseObject_t1222 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>> Parse.ParseObject::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<System.String,System.Object>>.GetEnumerator()
extern "C" Object_t* ParseObject_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CSystem_StringU2CSystem_ObjectU3EU3E_GetEnumerator_m6907 (ParseObject_t1222 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Parse.ParseObject::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ParseObject_System_Collections_IEnumerable_GetEnumerator_m6908 (ParseObject_t1222 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<Parse.ParseObject> Parse.ParseObject::GetQuery(System.String)
extern "C" ParseQuery_1_t1401 * ParseObject_GetQuery_m6909 (Object_t * __this /* static, unused */, String_t* ___className, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,System.String> Parse.ParseObject::get_PropertyMappings()
extern "C" Object_t* ParseObject_get_PropertyMappings_m6910 (ParseObject_t1222 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::OnFieldsChanged(System.Collections.Generic.IEnumerable`1<System.String>)
extern "C" void ParseObject_OnFieldsChanged_m6911 (ParseObject_t1222 * __this, Object_t* ___fieldNames, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::OnPropertyChanged(System.String)
extern "C" void ParseObject_OnPropertyChanged_m6912 (ParseObject_t1222 * __this, String_t* ___propertyName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::add_PropertyChanged(System.ComponentModel.PropertyChangedEventHandler)
extern "C" void ParseObject_add_PropertyChanged_m6913 (ParseObject_t1222 * __this, PropertyChangedEventHandler_t1402 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::remove_PropertyChanged(System.ComponentModel.PropertyChangedEventHandler)
extern "C" void ParseObject_remove_PropertyChanged_m6914 (ParseObject_t1222 * __this, PropertyChangedEventHandler_t1402 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseObject::<MergeFromObject>b__5(System.Collections.Generic.KeyValuePair`2<System.String,Parse.Internal.IParseFieldOperation>)
extern "C" String_t* ParseObject_U3CMergeFromObjectU3Eb__5_m6915 (Object_t * __this /* static, unused */, KeyValuePair_2_t1403  ___entry, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.Internal.IParseFieldOperation Parse.ParseObject::<MergeFromObject>b__6(System.Collections.Generic.KeyValuePair`2<System.String,Parse.Internal.IParseFieldOperation>)
extern "C" Object_t * ParseObject_U3CMergeFromObjectU3Eb__6_m6916 (Object_t * __this /* static, unused */, KeyValuePair_2_t1403  ___entry, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseObject::<FindUnsavedChildren>b__9(Parse.ParseObject)
extern "C" bool ParseObject_U3CFindUnsavedChildrenU3Eb__9_m6917 (Object_t * __this /* static, unused */, ParseObject_t1222 * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseObject::<CollectFetchedObjects>b__b(Parse.ParseObject)
extern "C" bool ParseObject_U3CCollectFetchedObjectsU3Eb__b_m6918 (Object_t * __this /* static, unused */, ParseObject_t1222 * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseObject::<CollectFetchedObjects>b__c(Parse.ParseObject)
extern "C" String_t* ParseObject_U3CCollectFetchedObjectsU3Eb__c_m6919 (Object_t * __this /* static, unused */, ParseObject_t1222 * ___pair, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseObject Parse.ParseObject::<CollectFetchedObjects>b__d(Parse.ParseObject)
extern "C" ParseObject_t1222 * ParseObject_U3CCollectFetchedObjectsU3Eb__d_m6920 (Object_t * __this /* static, unused */, ParseObject_t1222 * ___pair, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseObject Parse.ParseObject::<FetchAsyncInternal>b__1b(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
extern "C" ParseObject_t1222 * ParseObject_U3CFetchAsyncInternalU3Eb__1b_m6921 (ParseObject_t1222 * __this, Task_1_t1388 * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseObject::<DeepSaveAsync>b__20(Parse.ParseFile)
extern "C" bool ParseObject_U3CDeepSaveAsyncU3Eb__20_m6922 (Object_t * __this /* static, unused */, ParseFile_t1243 * ___f, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseObject::<DeleteAsync>b__7a(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
extern "C" bool ParseObject_U3CDeleteAsyncU3Eb__7a_m6923 (ParseObject_t1222 * __this, Task_1_t1388 * ____, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseObject::<CanBeSerializedAsValue>b__80(Parse.ParseObject)
extern "C" bool ParseObject_U3CCanBeSerializedAsValueU3Eb__80_m6924 (Object_t * __this /* static, unused */, ParseObject_t1222 * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::.cctor()
extern "C" void ParseObject__cctor_m6925 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseObject::<.cctor>b__8b()
extern "C" bool ParseObject_U3C_cctorU3Eb__8b_m6926 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
