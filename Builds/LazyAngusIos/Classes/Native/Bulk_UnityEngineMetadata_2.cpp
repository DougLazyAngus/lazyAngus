#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "stringLiterals.h"
// SimpleJson.SimpleJson
#include "UnityEngine_SimpleJson_SimpleJson.h"
// Metadata Definition SimpleJson.SimpleJson
extern TypeInfo SimpleJson_t1194_il2cpp_TypeInfo;
// SimpleJson.SimpleJson
#include "UnityEngine_SimpleJson_SimpleJsonMethodDeclarations.h"
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType Object_t_1_0_2;
extern const Il2CppType Object_t_1_0_0;
static const ParameterInfo SimpleJson_t1194_SimpleJson_TryDeserializeObject_m6825_ParameterInfos[] = 
{
	{"json", 0, 134219544, 0, &String_t_0_0_0},
	{"obj", 1, 134219545, 0, &Object_t_1_0_2},
};
extern const Il2CppType Boolean_t29_0_0_0;
extern void* RuntimeInvoker_Boolean_t29_Object_t_ObjectU26_t1422 (const MethodInfo* method, void* obj, void** args);
// System.Boolean SimpleJson.SimpleJson::TryDeserializeObject(System.String,System.Object&)
extern const MethodInfo SimpleJson_TryDeserializeObject_m6825_MethodInfo = 
{
	"TryDeserializeObject"/* name */
	, (methodPointerType)&SimpleJson_TryDeserializeObject_m6825/* method */
	, &SimpleJson_t1194_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t29_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t29_Object_t_ObjectU26_t1422/* invoker_method */
	, SimpleJson_t1194_SimpleJson_TryDeserializeObject_m6825_ParameterInfos/* parameters */
	, 708/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1589/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType IJsonSerializerStrategy_t1192_0_0_0;
extern const Il2CppType IJsonSerializerStrategy_t1192_0_0_0;
static const ParameterInfo SimpleJson_t1194_SimpleJson_SerializeObject_m6826_ParameterInfos[] = 
{
	{"json", 0, 134219546, 0, &Object_t_0_0_0},
	{"jsonSerializerStrategy", 1, 134219547, 0, &IJsonSerializerStrategy_t1192_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String SimpleJson.SimpleJson::SerializeObject(System.Object,SimpleJson.IJsonSerializerStrategy)
extern const MethodInfo SimpleJson_SerializeObject_m6826_MethodInfo = 
{
	"SerializeObject"/* name */
	, (methodPointerType)&SimpleJson_SerializeObject_m6826/* method */
	, &SimpleJson_t1194_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t/* invoker_method */
	, SimpleJson_t1194_SimpleJson_SerializeObject_m6826_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1590/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo SimpleJson_t1194_SimpleJson_SerializeObject_m6827_ParameterInfos[] = 
{
	{"json", 0, 134219548, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String SimpleJson.SimpleJson::SerializeObject(System.Object)
extern const MethodInfo SimpleJson_SerializeObject_m6827_MethodInfo = 
{
	"SerializeObject"/* name */
	, (methodPointerType)&SimpleJson_SerializeObject_m6827/* method */
	, &SimpleJson_t1194_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, SimpleJson_t1194_SimpleJson_SerializeObject_m6827_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1591/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType CharU5BU5D_t606_0_0_0;
extern const Il2CppType CharU5BU5D_t606_0_0_0;
extern const Il2CppType Int32_t50_1_0_0;
extern const Il2CppType Int32_t50_1_0_0;
extern const Il2CppType Boolean_t29_1_0_0;
extern const Il2CppType Boolean_t29_1_0_0;
static const ParameterInfo SimpleJson_t1194_SimpleJson_ParseObject_m6828_ParameterInfos[] = 
{
	{"json", 0, 134219549, 0, &CharU5BU5D_t606_0_0_0},
	{"index", 1, 134219550, 0, &Int32_t50_1_0_0},
	{"success", 2, 134219551, 0, &Boolean_t29_1_0_0},
};
extern const Il2CppType IDictionary_2_t714_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Int32U26_t1034_BooleanU26_t1027 (const MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IDictionary`2<System.String,System.Object> SimpleJson.SimpleJson::ParseObject(System.Char[],System.Int32&,System.Boolean&)
extern const MethodInfo SimpleJson_ParseObject_m6828_MethodInfo = 
{
	"ParseObject"/* name */
	, (methodPointerType)&SimpleJson_ParseObject_m6828/* method */
	, &SimpleJson_t1194_il2cpp_TypeInfo/* declaring_type */
	, &IDictionary_2_t714_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Int32U26_t1034_BooleanU26_t1027/* invoker_method */
	, SimpleJson_t1194_SimpleJson_ParseObject_m6828_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1592/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType CharU5BU5D_t606_0_0_0;
extern const Il2CppType Int32_t50_1_0_0;
extern const Il2CppType Boolean_t29_1_0_0;
static const ParameterInfo SimpleJson_t1194_SimpleJson_ParseArray_m6829_ParameterInfos[] = 
{
	{"json", 0, 134219552, 0, &CharU5BU5D_t606_0_0_0},
	{"index", 1, 134219553, 0, &Int32_t50_1_0_0},
	{"success", 2, 134219554, 0, &Boolean_t29_1_0_0},
};
extern const Il2CppType JsonArray_t1190_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Int32U26_t1034_BooleanU26_t1027 (const MethodInfo* method, void* obj, void** args);
// SimpleJson.JsonArray SimpleJson.SimpleJson::ParseArray(System.Char[],System.Int32&,System.Boolean&)
extern const MethodInfo SimpleJson_ParseArray_m6829_MethodInfo = 
{
	"ParseArray"/* name */
	, (methodPointerType)&SimpleJson_ParseArray_m6829/* method */
	, &SimpleJson_t1194_il2cpp_TypeInfo/* declaring_type */
	, &JsonArray_t1190_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Int32U26_t1034_BooleanU26_t1027/* invoker_method */
	, SimpleJson_t1194_SimpleJson_ParseArray_m6829_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1593/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType CharU5BU5D_t606_0_0_0;
extern const Il2CppType Int32_t50_1_0_0;
extern const Il2CppType Boolean_t29_1_0_0;
static const ParameterInfo SimpleJson_t1194_SimpleJson_ParseValue_m6830_ParameterInfos[] = 
{
	{"json", 0, 134219555, 0, &CharU5BU5D_t606_0_0_0},
	{"index", 1, 134219556, 0, &Int32_t50_1_0_0},
	{"success", 2, 134219557, 0, &Boolean_t29_1_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t_Int32U26_t1034_BooleanU26_t1027 (const MethodInfo* method, void* obj, void** args);
// System.Object SimpleJson.SimpleJson::ParseValue(System.Char[],System.Int32&,System.Boolean&)
extern const MethodInfo SimpleJson_ParseValue_m6830_MethodInfo = 
{
	"ParseValue"/* name */
	, (methodPointerType)&SimpleJson_ParseValue_m6830/* method */
	, &SimpleJson_t1194_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Int32U26_t1034_BooleanU26_t1027/* invoker_method */
	, SimpleJson_t1194_SimpleJson_ParseValue_m6830_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1594/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType CharU5BU5D_t606_0_0_0;
extern const Il2CppType Int32_t50_1_0_0;
extern const Il2CppType Boolean_t29_1_0_0;
static const ParameterInfo SimpleJson_t1194_SimpleJson_ParseString_m6831_ParameterInfos[] = 
{
	{"json", 0, 134219558, 0, &CharU5BU5D_t606_0_0_0},
	{"index", 1, 134219559, 0, &Int32_t50_1_0_0},
	{"success", 2, 134219560, 0, &Boolean_t29_1_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t_Int32U26_t1034_BooleanU26_t1027 (const MethodInfo* method, void* obj, void** args);
// System.String SimpleJson.SimpleJson::ParseString(System.Char[],System.Int32&,System.Boolean&)
extern const MethodInfo SimpleJson_ParseString_m6831_MethodInfo = 
{
	"ParseString"/* name */
	, (methodPointerType)&SimpleJson_ParseString_m6831/* method */
	, &SimpleJson_t1194_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Int32U26_t1034_BooleanU26_t1027/* invoker_method */
	, SimpleJson_t1194_SimpleJson_ParseString_m6831_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1595/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t50_0_0_0;
extern const Il2CppType Int32_t50_0_0_0;
static const ParameterInfo SimpleJson_t1194_SimpleJson_ConvertFromUtf32_m6832_ParameterInfos[] = 
{
	{"utf32", 0, 134219561, 0, &Int32_t50_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Int32_t50 (const MethodInfo* method, void* obj, void** args);
// System.String SimpleJson.SimpleJson::ConvertFromUtf32(System.Int32)
extern const MethodInfo SimpleJson_ConvertFromUtf32_m6832_MethodInfo = 
{
	"ConvertFromUtf32"/* name */
	, (methodPointerType)&SimpleJson_ConvertFromUtf32_m6832/* method */
	, &SimpleJson_t1194_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t50/* invoker_method */
	, SimpleJson_t1194_SimpleJson_ConvertFromUtf32_m6832_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1596/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType CharU5BU5D_t606_0_0_0;
extern const Il2CppType Int32_t50_1_0_0;
extern const Il2CppType Boolean_t29_1_0_0;
static const ParameterInfo SimpleJson_t1194_SimpleJson_ParseNumber_m6833_ParameterInfos[] = 
{
	{"json", 0, 134219562, 0, &CharU5BU5D_t606_0_0_0},
	{"index", 1, 134219563, 0, &Int32_t50_1_0_0},
	{"success", 2, 134219564, 0, &Boolean_t29_1_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t_Int32U26_t1034_BooleanU26_t1027 (const MethodInfo* method, void* obj, void** args);
// System.Object SimpleJson.SimpleJson::ParseNumber(System.Char[],System.Int32&,System.Boolean&)
extern const MethodInfo SimpleJson_ParseNumber_m6833_MethodInfo = 
{
	"ParseNumber"/* name */
	, (methodPointerType)&SimpleJson_ParseNumber_m6833/* method */
	, &SimpleJson_t1194_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Int32U26_t1034_BooleanU26_t1027/* invoker_method */
	, SimpleJson_t1194_SimpleJson_ParseNumber_m6833_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1597/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType CharU5BU5D_t606_0_0_0;
extern const Il2CppType Int32_t50_0_0_0;
static const ParameterInfo SimpleJson_t1194_SimpleJson_GetLastIndexOfNumber_m6834_ParameterInfos[] = 
{
	{"json", 0, 134219565, 0, &CharU5BU5D_t606_0_0_0},
	{"index", 1, 134219566, 0, &Int32_t50_0_0_0},
};
extern void* RuntimeInvoker_Int32_t50_Object_t_Int32_t50 (const MethodInfo* method, void* obj, void** args);
// System.Int32 SimpleJson.SimpleJson::GetLastIndexOfNumber(System.Char[],System.Int32)
extern const MethodInfo SimpleJson_GetLastIndexOfNumber_m6834_MethodInfo = 
{
	"GetLastIndexOfNumber"/* name */
	, (methodPointerType)&SimpleJson_GetLastIndexOfNumber_m6834/* method */
	, &SimpleJson_t1194_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t50_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t50_Object_t_Int32_t50/* invoker_method */
	, SimpleJson_t1194_SimpleJson_GetLastIndexOfNumber_m6834_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1598/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType CharU5BU5D_t606_0_0_0;
extern const Il2CppType Int32_t50_1_0_0;
static const ParameterInfo SimpleJson_t1194_SimpleJson_EatWhitespace_m6835_ParameterInfos[] = 
{
	{"json", 0, 134219567, 0, &CharU5BU5D_t606_0_0_0},
	{"index", 1, 134219568, 0, &Int32_t50_1_0_0},
};
extern const Il2CppType Void_t57_0_0_0;
extern void* RuntimeInvoker_Void_t57_Object_t_Int32U26_t1034 (const MethodInfo* method, void* obj, void** args);
// System.Void SimpleJson.SimpleJson::EatWhitespace(System.Char[],System.Int32&)
extern const MethodInfo SimpleJson_EatWhitespace_m6835_MethodInfo = 
{
	"EatWhitespace"/* name */
	, (methodPointerType)&SimpleJson_EatWhitespace_m6835/* method */
	, &SimpleJson_t1194_il2cpp_TypeInfo/* declaring_type */
	, &Void_t57_0_0_0/* return_type */
	, RuntimeInvoker_Void_t57_Object_t_Int32U26_t1034/* invoker_method */
	, SimpleJson_t1194_SimpleJson_EatWhitespace_m6835_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1599/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType CharU5BU5D_t606_0_0_0;
extern const Il2CppType Int32_t50_0_0_0;
static const ParameterInfo SimpleJson_t1194_SimpleJson_LookAhead_m6836_ParameterInfos[] = 
{
	{"json", 0, 134219569, 0, &CharU5BU5D_t606_0_0_0},
	{"index", 1, 134219570, 0, &Int32_t50_0_0_0},
};
extern void* RuntimeInvoker_Int32_t50_Object_t_Int32_t50 (const MethodInfo* method, void* obj, void** args);
// System.Int32 SimpleJson.SimpleJson::LookAhead(System.Char[],System.Int32)
extern const MethodInfo SimpleJson_LookAhead_m6836_MethodInfo = 
{
	"LookAhead"/* name */
	, (methodPointerType)&SimpleJson_LookAhead_m6836/* method */
	, &SimpleJson_t1194_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t50_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t50_Object_t_Int32_t50/* invoker_method */
	, SimpleJson_t1194_SimpleJson_LookAhead_m6836_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1600/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType CharU5BU5D_t606_0_0_0;
extern const Il2CppType Int32_t50_1_0_0;
static const ParameterInfo SimpleJson_t1194_SimpleJson_NextToken_m6837_ParameterInfos[] = 
{
	{"json", 0, 134219571, 0, &CharU5BU5D_t606_0_0_0},
	{"index", 1, 134219572, 0, &Int32_t50_1_0_0},
};
extern void* RuntimeInvoker_Int32_t50_Object_t_Int32U26_t1034 (const MethodInfo* method, void* obj, void** args);
// System.Int32 SimpleJson.SimpleJson::NextToken(System.Char[],System.Int32&)
extern const MethodInfo SimpleJson_NextToken_m6837_MethodInfo = 
{
	"NextToken"/* name */
	, (methodPointerType)&SimpleJson_NextToken_m6837/* method */
	, &SimpleJson_t1194_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t50_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t50_Object_t_Int32U26_t1034/* invoker_method */
	, SimpleJson_t1194_SimpleJson_NextToken_m6837_ParameterInfos/* parameters */
	, 709/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1601/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType IJsonSerializerStrategy_t1192_0_0_0;
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType StringBuilder_t219_0_0_0;
extern const Il2CppType StringBuilder_t219_0_0_0;
static const ParameterInfo SimpleJson_t1194_SimpleJson_SerializeValue_m6838_ParameterInfos[] = 
{
	{"jsonSerializerStrategy", 0, 134219573, 0, &IJsonSerializerStrategy_t1192_0_0_0},
	{"value", 1, 134219574, 0, &Object_t_0_0_0},
	{"builder", 2, 134219575, 0, &StringBuilder_t219_0_0_0},
};
extern void* RuntimeInvoker_Boolean_t29_Object_t_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Boolean SimpleJson.SimpleJson::SerializeValue(SimpleJson.IJsonSerializerStrategy,System.Object,System.Text.StringBuilder)
extern const MethodInfo SimpleJson_SerializeValue_m6838_MethodInfo = 
{
	"SerializeValue"/* name */
	, (methodPointerType)&SimpleJson_SerializeValue_m6838/* method */
	, &SimpleJson_t1194_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t29_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t29_Object_t_Object_t_Object_t/* invoker_method */
	, SimpleJson_t1194_SimpleJson_SerializeValue_m6838_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1602/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType IJsonSerializerStrategy_t1192_0_0_0;
extern const Il2CppType IEnumerable_t58_0_0_0;
extern const Il2CppType IEnumerable_t58_0_0_0;
extern const Il2CppType IEnumerable_t58_0_0_0;
extern const Il2CppType StringBuilder_t219_0_0_0;
static const ParameterInfo SimpleJson_t1194_SimpleJson_SerializeObject_m6839_ParameterInfos[] = 
{
	{"jsonSerializerStrategy", 0, 134219576, 0, &IJsonSerializerStrategy_t1192_0_0_0},
	{"keys", 1, 134219577, 0, &IEnumerable_t58_0_0_0},
	{"values", 2, 134219578, 0, &IEnumerable_t58_0_0_0},
	{"builder", 3, 134219579, 0, &StringBuilder_t219_0_0_0},
};
extern void* RuntimeInvoker_Boolean_t29_Object_t_Object_t_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Boolean SimpleJson.SimpleJson::SerializeObject(SimpleJson.IJsonSerializerStrategy,System.Collections.IEnumerable,System.Collections.IEnumerable,System.Text.StringBuilder)
extern const MethodInfo SimpleJson_SerializeObject_m6839_MethodInfo = 
{
	"SerializeObject"/* name */
	, (methodPointerType)&SimpleJson_SerializeObject_m6839/* method */
	, &SimpleJson_t1194_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t29_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t29_Object_t_Object_t_Object_t_Object_t/* invoker_method */
	, SimpleJson_t1194_SimpleJson_SerializeObject_m6839_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 4/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1603/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType IJsonSerializerStrategy_t1192_0_0_0;
extern const Il2CppType IEnumerable_t58_0_0_0;
extern const Il2CppType StringBuilder_t219_0_0_0;
static const ParameterInfo SimpleJson_t1194_SimpleJson_SerializeArray_m6840_ParameterInfos[] = 
{
	{"jsonSerializerStrategy", 0, 134219580, 0, &IJsonSerializerStrategy_t1192_0_0_0},
	{"anArray", 1, 134219581, 0, &IEnumerable_t58_0_0_0},
	{"builder", 2, 134219582, 0, &StringBuilder_t219_0_0_0},
};
extern void* RuntimeInvoker_Boolean_t29_Object_t_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Boolean SimpleJson.SimpleJson::SerializeArray(SimpleJson.IJsonSerializerStrategy,System.Collections.IEnumerable,System.Text.StringBuilder)
extern const MethodInfo SimpleJson_SerializeArray_m6840_MethodInfo = 
{
	"SerializeArray"/* name */
	, (methodPointerType)&SimpleJson_SerializeArray_m6840/* method */
	, &SimpleJson_t1194_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t29_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t29_Object_t_Object_t_Object_t/* invoker_method */
	, SimpleJson_t1194_SimpleJson_SerializeArray_m6840_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1604/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType StringBuilder_t219_0_0_0;
static const ParameterInfo SimpleJson_t1194_SimpleJson_SerializeString_m6841_ParameterInfos[] = 
{
	{"aString", 0, 134219583, 0, &String_t_0_0_0},
	{"builder", 1, 134219584, 0, &StringBuilder_t219_0_0_0},
};
extern void* RuntimeInvoker_Boolean_t29_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Boolean SimpleJson.SimpleJson::SerializeString(System.String,System.Text.StringBuilder)
extern const MethodInfo SimpleJson_SerializeString_m6841_MethodInfo = 
{
	"SerializeString"/* name */
	, (methodPointerType)&SimpleJson_SerializeString_m6841/* method */
	, &SimpleJson_t1194_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t29_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t29_Object_t_Object_t/* invoker_method */
	, SimpleJson_t1194_SimpleJson_SerializeString_m6841_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1605/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType StringBuilder_t219_0_0_0;
static const ParameterInfo SimpleJson_t1194_SimpleJson_SerializeNumber_m6842_ParameterInfos[] = 
{
	{"number", 0, 134219585, 0, &Object_t_0_0_0},
	{"builder", 1, 134219586, 0, &StringBuilder_t219_0_0_0},
};
extern void* RuntimeInvoker_Boolean_t29_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Boolean SimpleJson.SimpleJson::SerializeNumber(System.Object,System.Text.StringBuilder)
extern const MethodInfo SimpleJson_SerializeNumber_m6842_MethodInfo = 
{
	"SerializeNumber"/* name */
	, (methodPointerType)&SimpleJson_SerializeNumber_m6842/* method */
	, &SimpleJson_t1194_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t29_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t29_Object_t_Object_t/* invoker_method */
	, SimpleJson_t1194_SimpleJson_SerializeNumber_m6842_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1606/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo SimpleJson_t1194_SimpleJson_IsNumeric_m6843_ParameterInfos[] = 
{
	{"value", 0, 134219587, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Boolean_t29_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Boolean SimpleJson.SimpleJson::IsNumeric(System.Object)
extern const MethodInfo SimpleJson_IsNumeric_m6843_MethodInfo = 
{
	"IsNumeric"/* name */
	, (methodPointerType)&SimpleJson_IsNumeric_m6843/* method */
	, &SimpleJson_t1194_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t29_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t29_Object_t/* invoker_method */
	, SimpleJson_t1194_SimpleJson_IsNumeric_m6843_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1607/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// SimpleJson.IJsonSerializerStrategy SimpleJson.SimpleJson::get_CurrentJsonSerializerStrategy()
extern const MethodInfo SimpleJson_get_CurrentJsonSerializerStrategy_m6844_MethodInfo = 
{
	"get_CurrentJsonSerializerStrategy"/* name */
	, (methodPointerType)&SimpleJson_get_CurrentJsonSerializerStrategy_m6844/* method */
	, &SimpleJson_t1194_il2cpp_TypeInfo/* declaring_type */
	, &IJsonSerializerStrategy_t1192_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2198/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1608/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType PocoJsonSerializerStrategy_t1193_0_0_0;
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// SimpleJson.PocoJsonSerializerStrategy SimpleJson.SimpleJson::get_PocoJsonSerializerStrategy()
extern const MethodInfo SimpleJson_get_PocoJsonSerializerStrategy_m6845_MethodInfo = 
{
	"get_PocoJsonSerializerStrategy"/* name */
	, (methodPointerType)&SimpleJson_get_PocoJsonSerializerStrategy_m6845/* method */
	, &SimpleJson_t1194_il2cpp_TypeInfo/* declaring_type */
	, &PocoJsonSerializerStrategy_t1193_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2198/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1609/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* SimpleJson_t1194_MethodInfos[] =
{
	&SimpleJson_TryDeserializeObject_m6825_MethodInfo,
	&SimpleJson_SerializeObject_m6826_MethodInfo,
	&SimpleJson_SerializeObject_m6827_MethodInfo,
	&SimpleJson_ParseObject_m6828_MethodInfo,
	&SimpleJson_ParseArray_m6829_MethodInfo,
	&SimpleJson_ParseValue_m6830_MethodInfo,
	&SimpleJson_ParseString_m6831_MethodInfo,
	&SimpleJson_ConvertFromUtf32_m6832_MethodInfo,
	&SimpleJson_ParseNumber_m6833_MethodInfo,
	&SimpleJson_GetLastIndexOfNumber_m6834_MethodInfo,
	&SimpleJson_EatWhitespace_m6835_MethodInfo,
	&SimpleJson_LookAhead_m6836_MethodInfo,
	&SimpleJson_NextToken_m6837_MethodInfo,
	&SimpleJson_SerializeValue_m6838_MethodInfo,
	&SimpleJson_SerializeObject_m6839_MethodInfo,
	&SimpleJson_SerializeArray_m6840_MethodInfo,
	&SimpleJson_SerializeString_m6841_MethodInfo,
	&SimpleJson_SerializeNumber_m6842_MethodInfo,
	&SimpleJson_IsNumeric_m6843_MethodInfo,
	&SimpleJson_get_CurrentJsonSerializerStrategy_m6844_MethodInfo,
	&SimpleJson_get_PocoJsonSerializerStrategy_m6845_MethodInfo,
	NULL
};
extern const MethodInfo SimpleJson_get_CurrentJsonSerializerStrategy_m6844_MethodInfo;
static const PropertyInfo SimpleJson_t1194____CurrentJsonSerializerStrategy_PropertyInfo = 
{
	&SimpleJson_t1194_il2cpp_TypeInfo/* parent */
	, "CurrentJsonSerializerStrategy"/* name */
	, &SimpleJson_get_CurrentJsonSerializerStrategy_m6844_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo SimpleJson_get_PocoJsonSerializerStrategy_m6845_MethodInfo;
static const PropertyInfo SimpleJson_t1194____PocoJsonSerializerStrategy_PropertyInfo = 
{
	&SimpleJson_t1194_il2cpp_TypeInfo/* parent */
	, "PocoJsonSerializerStrategy"/* name */
	, &SimpleJson_get_PocoJsonSerializerStrategy_m6845_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 710/* custom_attributes_cache */

};
static const PropertyInfo* SimpleJson_t1194_PropertyInfos[] =
{
	&SimpleJson_t1194____CurrentJsonSerializerStrategy_PropertyInfo,
	&SimpleJson_t1194____PocoJsonSerializerStrategy_PropertyInfo,
	NULL
};
extern const MethodInfo Object_Equals_m252_MethodInfo;
extern const MethodInfo Object_Finalize_m230_MethodInfo;
extern const MethodInfo Object_GetHashCode_m172_MethodInfo;
extern const MethodInfo Object_ToString_m253_MethodInfo;
static const Il2CppMethodReference SimpleJson_t1194_VTable[] =
{
	&Object_Equals_m252_MethodInfo,
	&Object_Finalize_m230_MethodInfo,
	&Object_GetHashCode_m172_MethodInfo,
	&Object_ToString_m253_MethodInfo,
};
static bool SimpleJson_t1194_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType SimpleJson_t1194_0_0_0;
extern const Il2CppType SimpleJson_t1194_1_0_0;
struct SimpleJson_t1194;
const Il2CppTypeDefinitionMetadata SimpleJson_t1194_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, SimpleJson_t1194_VTable/* vtableMethods */
	, SimpleJson_t1194_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 1016/* fieldStart */

};
TypeInfo SimpleJson_t1194_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "SimpleJson"/* name */
	, "SimpleJson"/* namespaze */
	, SimpleJson_t1194_MethodInfos/* methods */
	, SimpleJson_t1194_PropertyInfos/* properties */
	, NULL/* events */
	, &SimpleJson_t1194_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 707/* custom_attributes_cache */
	, &SimpleJson_t1194_0_0_0/* byval_arg */
	, &SimpleJson_t1194_1_0_0/* this_arg */
	, &SimpleJson_t1194_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (SimpleJson_t1194)/* instance_size */
	, sizeof (SimpleJson_t1194)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, sizeof(SimpleJson_t1194_StaticFields)/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048960/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 21/* method_count */
	, 2/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// Metadata Definition SimpleJson.IJsonSerializerStrategy
extern TypeInfo IJsonSerializerStrategy_t1192_il2cpp_TypeInfo;
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType Object_t_1_0_2;
static const ParameterInfo IJsonSerializerStrategy_t1192_IJsonSerializerStrategy_TrySerializeNonPrimitiveObject_m7285_ParameterInfos[] = 
{
	{"input", 0, 134219588, 0, &Object_t_0_0_0},
	{"output", 1, 134219589, 0, &Object_t_1_0_2},
};
extern void* RuntimeInvoker_Boolean_t29_Object_t_ObjectU26_t1422 (const MethodInfo* method, void* obj, void** args);
// System.Boolean SimpleJson.IJsonSerializerStrategy::TrySerializeNonPrimitiveObject(System.Object,System.Object&)
extern const MethodInfo IJsonSerializerStrategy_TrySerializeNonPrimitiveObject_m7285_MethodInfo = 
{
	"TrySerializeNonPrimitiveObject"/* name */
	, NULL/* method */
	, &IJsonSerializerStrategy_t1192_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t29_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t29_Object_t_ObjectU26_t1422/* invoker_method */
	, IJsonSerializerStrategy_t1192_IJsonSerializerStrategy_TrySerializeNonPrimitiveObject_m7285_ParameterInfos/* parameters */
	, 712/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1610/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* IJsonSerializerStrategy_t1192_MethodInfos[] =
{
	&IJsonSerializerStrategy_TrySerializeNonPrimitiveObject_m7285_MethodInfo,
	NULL
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType IJsonSerializerStrategy_t1192_1_0_0;
struct IJsonSerializerStrategy_t1192;
const Il2CppTypeDefinitionMetadata IJsonSerializerStrategy_t1192_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, NULL/* parent */
	, NULL/* vtableMethods */
	, NULL/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo IJsonSerializerStrategy_t1192_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "IJsonSerializerStrategy"/* name */
	, "SimpleJson"/* namespaze */
	, IJsonSerializerStrategy_t1192_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &IJsonSerializerStrategy_t1192_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 711/* custom_attributes_cache */
	, &IJsonSerializerStrategy_t1192_0_0_0/* byval_arg */
	, &IJsonSerializerStrategy_t1192_1_0_0/* this_arg */
	, &IJsonSerializerStrategy_t1192_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 160/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 1/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// SimpleJson.PocoJsonSerializerStrategy
#include "UnityEngine_SimpleJson_PocoJsonSerializerStrategy.h"
// Metadata Definition SimpleJson.PocoJsonSerializerStrategy
extern TypeInfo PocoJsonSerializerStrategy_t1193_il2cpp_TypeInfo;
// SimpleJson.PocoJsonSerializerStrategy
#include "UnityEngine_SimpleJson_PocoJsonSerializerStrategyMethodDeclarations.h"
extern void* RuntimeInvoker_Void_t57 (const MethodInfo* method, void* obj, void** args);
// System.Void SimpleJson.PocoJsonSerializerStrategy::.ctor()
extern const MethodInfo PocoJsonSerializerStrategy__ctor_m6846_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&PocoJsonSerializerStrategy__ctor_m6846/* method */
	, &PocoJsonSerializerStrategy_t1193_il2cpp_TypeInfo/* declaring_type */
	, &Void_t57_0_0_0/* return_type */
	, RuntimeInvoker_Void_t57/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1611/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Void_t57 (const MethodInfo* method, void* obj, void** args);
// System.Void SimpleJson.PocoJsonSerializerStrategy::.cctor()
extern const MethodInfo PocoJsonSerializerStrategy__cctor_m6847_MethodInfo = 
{
	".cctor"/* name */
	, (methodPointerType)&PocoJsonSerializerStrategy__cctor_m6847/* method */
	, &PocoJsonSerializerStrategy_t1193_il2cpp_TypeInfo/* declaring_type */
	, &Void_t57_0_0_0/* return_type */
	, RuntimeInvoker_Void_t57/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 6161/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1612/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
static const ParameterInfo PocoJsonSerializerStrategy_t1193_PocoJsonSerializerStrategy_MapClrMemberNameToJsonFieldName_m6848_ParameterInfos[] = 
{
	{"clrPropertyName", 0, 134219590, 0, &String_t_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String SimpleJson.PocoJsonSerializerStrategy::MapClrMemberNameToJsonFieldName(System.String)
extern const MethodInfo PocoJsonSerializerStrategy_MapClrMemberNameToJsonFieldName_m6848_MethodInfo = 
{
	"MapClrMemberNameToJsonFieldName"/* name */
	, (methodPointerType)&PocoJsonSerializerStrategy_MapClrMemberNameToJsonFieldName_m6848/* method */
	, &PocoJsonSerializerStrategy_t1193_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, PocoJsonSerializerStrategy_t1193_PocoJsonSerializerStrategy_MapClrMemberNameToJsonFieldName_m6848_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 452/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1613/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Type_t_0_0_0;
extern const Il2CppType Type_t_0_0_0;
static const ParameterInfo PocoJsonSerializerStrategy_t1193_PocoJsonSerializerStrategy_ContructorDelegateFactory_m6849_ParameterInfos[] = 
{
	{"key", 0, 134219591, 0, &Type_t_0_0_0},
};
extern const Il2CppType ConstructorDelegate_t1201_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate SimpleJson.PocoJsonSerializerStrategy::ContructorDelegateFactory(System.Type)
extern const MethodInfo PocoJsonSerializerStrategy_ContructorDelegateFactory_m6849_MethodInfo = 
{
	"ContructorDelegateFactory"/* name */
	, (methodPointerType)&PocoJsonSerializerStrategy_ContructorDelegateFactory_m6849/* method */
	, &PocoJsonSerializerStrategy_t1193_il2cpp_TypeInfo/* declaring_type */
	, &ConstructorDelegate_t1201_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, PocoJsonSerializerStrategy_t1193_PocoJsonSerializerStrategy_ContructorDelegateFactory_m6849_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 451/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1614/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Type_t_0_0_0;
static const ParameterInfo PocoJsonSerializerStrategy_t1193_PocoJsonSerializerStrategy_GetterValueFactory_m6850_ParameterInfos[] = 
{
	{"type", 0, 134219592, 0, &Type_t_0_0_0},
};
extern const Il2CppType IDictionary_2_t1293_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate> SimpleJson.PocoJsonSerializerStrategy::GetterValueFactory(System.Type)
extern const MethodInfo PocoJsonSerializerStrategy_GetterValueFactory_m6850_MethodInfo = 
{
	"GetterValueFactory"/* name */
	, (methodPointerType)&PocoJsonSerializerStrategy_GetterValueFactory_m6850/* method */
	, &PocoJsonSerializerStrategy_t1193_il2cpp_TypeInfo/* declaring_type */
	, &IDictionary_2_t1293_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, PocoJsonSerializerStrategy_t1193_PocoJsonSerializerStrategy_GetterValueFactory_m6850_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 451/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1615/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Type_t_0_0_0;
static const ParameterInfo PocoJsonSerializerStrategy_t1193_PocoJsonSerializerStrategy_SetterValueFactory_m6851_ParameterInfos[] = 
{
	{"type", 0, 134219593, 0, &Type_t_0_0_0},
};
extern const Il2CppType IDictionary_2_t1294_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>> SimpleJson.PocoJsonSerializerStrategy::SetterValueFactory(System.Type)
extern const MethodInfo PocoJsonSerializerStrategy_SetterValueFactory_m6851_MethodInfo = 
{
	"SetterValueFactory"/* name */
	, (methodPointerType)&PocoJsonSerializerStrategy_SetterValueFactory_m6851/* method */
	, &PocoJsonSerializerStrategy_t1193_il2cpp_TypeInfo/* declaring_type */
	, &IDictionary_2_t1294_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, PocoJsonSerializerStrategy_t1193_PocoJsonSerializerStrategy_SetterValueFactory_m6851_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 451/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1616/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType Object_t_1_0_2;
static const ParameterInfo PocoJsonSerializerStrategy_t1193_PocoJsonSerializerStrategy_TrySerializeNonPrimitiveObject_m6852_ParameterInfos[] = 
{
	{"input", 0, 134219594, 0, &Object_t_0_0_0},
	{"output", 1, 134219595, 0, &Object_t_1_0_2},
};
extern void* RuntimeInvoker_Boolean_t29_Object_t_ObjectU26_t1422 (const MethodInfo* method, void* obj, void** args);
// System.Boolean SimpleJson.PocoJsonSerializerStrategy::TrySerializeNonPrimitiveObject(System.Object,System.Object&)
extern const MethodInfo PocoJsonSerializerStrategy_TrySerializeNonPrimitiveObject_m6852_MethodInfo = 
{
	"TrySerializeNonPrimitiveObject"/* name */
	, (methodPointerType)&PocoJsonSerializerStrategy_TrySerializeNonPrimitiveObject_m6852/* method */
	, &PocoJsonSerializerStrategy_t1193_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t29_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t29_Object_t_ObjectU26_t1422/* invoker_method */
	, PocoJsonSerializerStrategy_t1193_PocoJsonSerializerStrategy_TrySerializeNonPrimitiveObject_m6852_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 0/* iflags */
	, 9/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1617/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Enum_t56_0_0_0;
extern const Il2CppType Enum_t56_0_0_0;
static const ParameterInfo PocoJsonSerializerStrategy_t1193_PocoJsonSerializerStrategy_SerializeEnum_m6853_ParameterInfos[] = 
{
	{"p", 0, 134219596, 0, &Enum_t56_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Object SimpleJson.PocoJsonSerializerStrategy::SerializeEnum(System.Enum)
extern const MethodInfo PocoJsonSerializerStrategy_SerializeEnum_m6853_MethodInfo = 
{
	"SerializeEnum"/* name */
	, (methodPointerType)&PocoJsonSerializerStrategy_SerializeEnum_m6853/* method */
	, &PocoJsonSerializerStrategy_t1193_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, PocoJsonSerializerStrategy_t1193_PocoJsonSerializerStrategy_SerializeEnum_m6853_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 452/* flags */
	, 0/* iflags */
	, 10/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1618/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType Object_t_1_0_2;
static const ParameterInfo PocoJsonSerializerStrategy_t1193_PocoJsonSerializerStrategy_TrySerializeKnownTypes_m6854_ParameterInfos[] = 
{
	{"input", 0, 134219597, 0, &Object_t_0_0_0},
	{"output", 1, 134219598, 0, &Object_t_1_0_2},
};
extern void* RuntimeInvoker_Boolean_t29_Object_t_ObjectU26_t1422 (const MethodInfo* method, void* obj, void** args);
// System.Boolean SimpleJson.PocoJsonSerializerStrategy::TrySerializeKnownTypes(System.Object,System.Object&)
extern const MethodInfo PocoJsonSerializerStrategy_TrySerializeKnownTypes_m6854_MethodInfo = 
{
	"TrySerializeKnownTypes"/* name */
	, (methodPointerType)&PocoJsonSerializerStrategy_TrySerializeKnownTypes_m6854/* method */
	, &PocoJsonSerializerStrategy_t1193_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t29_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t29_Object_t_ObjectU26_t1422/* invoker_method */
	, PocoJsonSerializerStrategy_t1193_PocoJsonSerializerStrategy_TrySerializeKnownTypes_m6854_ParameterInfos/* parameters */
	, 714/* custom_attributes_cache */
	, 452/* flags */
	, 0/* iflags */
	, 11/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1619/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType Object_t_1_0_2;
static const ParameterInfo PocoJsonSerializerStrategy_t1193_PocoJsonSerializerStrategy_TrySerializeUnknownTypes_m6855_ParameterInfos[] = 
{
	{"input", 0, 134219599, 0, &Object_t_0_0_0},
	{"output", 1, 134219600, 0, &Object_t_1_0_2},
};
extern void* RuntimeInvoker_Boolean_t29_Object_t_ObjectU26_t1422 (const MethodInfo* method, void* obj, void** args);
// System.Boolean SimpleJson.PocoJsonSerializerStrategy::TrySerializeUnknownTypes(System.Object,System.Object&)
extern const MethodInfo PocoJsonSerializerStrategy_TrySerializeUnknownTypes_m6855_MethodInfo = 
{
	"TrySerializeUnknownTypes"/* name */
	, (methodPointerType)&PocoJsonSerializerStrategy_TrySerializeUnknownTypes_m6855/* method */
	, &PocoJsonSerializerStrategy_t1193_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t29_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t29_Object_t_ObjectU26_t1422/* invoker_method */
	, PocoJsonSerializerStrategy_t1193_PocoJsonSerializerStrategy_TrySerializeUnknownTypes_m6855_ParameterInfos/* parameters */
	, 715/* custom_attributes_cache */
	, 452/* flags */
	, 0/* iflags */
	, 12/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1620/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* PocoJsonSerializerStrategy_t1193_MethodInfos[] =
{
	&PocoJsonSerializerStrategy__ctor_m6846_MethodInfo,
	&PocoJsonSerializerStrategy__cctor_m6847_MethodInfo,
	&PocoJsonSerializerStrategy_MapClrMemberNameToJsonFieldName_m6848_MethodInfo,
	&PocoJsonSerializerStrategy_ContructorDelegateFactory_m6849_MethodInfo,
	&PocoJsonSerializerStrategy_GetterValueFactory_m6850_MethodInfo,
	&PocoJsonSerializerStrategy_SetterValueFactory_m6851_MethodInfo,
	&PocoJsonSerializerStrategy_TrySerializeNonPrimitiveObject_m6852_MethodInfo,
	&PocoJsonSerializerStrategy_SerializeEnum_m6853_MethodInfo,
	&PocoJsonSerializerStrategy_TrySerializeKnownTypes_m6854_MethodInfo,
	&PocoJsonSerializerStrategy_TrySerializeUnknownTypes_m6855_MethodInfo,
	NULL
};
extern const MethodInfo PocoJsonSerializerStrategy_TrySerializeNonPrimitiveObject_m6852_MethodInfo;
extern const MethodInfo PocoJsonSerializerStrategy_MapClrMemberNameToJsonFieldName_m6848_MethodInfo;
extern const MethodInfo PocoJsonSerializerStrategy_ContructorDelegateFactory_m6849_MethodInfo;
extern const MethodInfo PocoJsonSerializerStrategy_GetterValueFactory_m6850_MethodInfo;
extern const MethodInfo PocoJsonSerializerStrategy_SetterValueFactory_m6851_MethodInfo;
extern const MethodInfo PocoJsonSerializerStrategy_SerializeEnum_m6853_MethodInfo;
extern const MethodInfo PocoJsonSerializerStrategy_TrySerializeKnownTypes_m6854_MethodInfo;
extern const MethodInfo PocoJsonSerializerStrategy_TrySerializeUnknownTypes_m6855_MethodInfo;
static const Il2CppMethodReference PocoJsonSerializerStrategy_t1193_VTable[] =
{
	&Object_Equals_m252_MethodInfo,
	&Object_Finalize_m230_MethodInfo,
	&Object_GetHashCode_m172_MethodInfo,
	&Object_ToString_m253_MethodInfo,
	&PocoJsonSerializerStrategy_TrySerializeNonPrimitiveObject_m6852_MethodInfo,
	&PocoJsonSerializerStrategy_MapClrMemberNameToJsonFieldName_m6848_MethodInfo,
	&PocoJsonSerializerStrategy_ContructorDelegateFactory_m6849_MethodInfo,
	&PocoJsonSerializerStrategy_GetterValueFactory_m6850_MethodInfo,
	&PocoJsonSerializerStrategy_SetterValueFactory_m6851_MethodInfo,
	&PocoJsonSerializerStrategy_TrySerializeNonPrimitiveObject_m6852_MethodInfo,
	&PocoJsonSerializerStrategy_SerializeEnum_m6853_MethodInfo,
	&PocoJsonSerializerStrategy_TrySerializeKnownTypes_m6854_MethodInfo,
	&PocoJsonSerializerStrategy_TrySerializeUnknownTypes_m6855_MethodInfo,
};
static bool PocoJsonSerializerStrategy_t1193_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static const Il2CppType* PocoJsonSerializerStrategy_t1193_InterfacesTypeInfos[] = 
{
	&IJsonSerializerStrategy_t1192_0_0_0,
};
static Il2CppInterfaceOffsetPair PocoJsonSerializerStrategy_t1193_InterfacesOffsets[] = 
{
	{ &IJsonSerializerStrategy_t1192_0_0_0, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType PocoJsonSerializerStrategy_t1193_1_0_0;
struct PocoJsonSerializerStrategy_t1193;
const Il2CppTypeDefinitionMetadata PocoJsonSerializerStrategy_t1193_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, PocoJsonSerializerStrategy_t1193_InterfacesTypeInfos/* implementedInterfaces */
	, PocoJsonSerializerStrategy_t1193_InterfacesOffsets/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, PocoJsonSerializerStrategy_t1193_VTable/* vtableMethods */
	, PocoJsonSerializerStrategy_t1193_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 1018/* fieldStart */

};
TypeInfo PocoJsonSerializerStrategy_t1193_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "PocoJsonSerializerStrategy"/* name */
	, "SimpleJson"/* namespaze */
	, PocoJsonSerializerStrategy_t1193_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &PocoJsonSerializerStrategy_t1193_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 713/* custom_attributes_cache */
	, &PocoJsonSerializerStrategy_t1193_0_0_0/* byval_arg */
	, &PocoJsonSerializerStrategy_t1193_1_0_0/* this_arg */
	, &PocoJsonSerializerStrategy_t1193_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (PocoJsonSerializerStrategy_t1193)/* instance_size */
	, sizeof (PocoJsonSerializerStrategy_t1193)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, sizeof(PocoJsonSerializerStrategy_t1193_StaticFields)/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, true/* has_cctor */
	, false/* is_blittable */
	, 10/* method_count */
	, 0/* property_count */
	, 6/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 13/* vtable_count */
	, 1/* interfaces_count */
	, 1/* interface_offsets_count */

};
// Metadata Definition SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2
extern TypeInfo ThreadSafeDictionary_2_t1360_il2cpp_TypeInfo;
extern const Il2CppGenericContainer ThreadSafeDictionary_2_t1360_Il2CppGenericContainer;
extern TypeInfo ThreadSafeDictionary_2_t1360_gp_TKey_0_il2cpp_TypeInfo;
extern const Il2CppGenericParameter ThreadSafeDictionary_2_t1360_gp_TKey_0_il2cpp_TypeInfo_GenericParamFull = { &ThreadSafeDictionary_2_t1360_Il2CppGenericContainer, NULL, "TKey", 0, 0 };
extern TypeInfo ThreadSafeDictionary_2_t1360_gp_TValue_1_il2cpp_TypeInfo;
extern const Il2CppGenericParameter ThreadSafeDictionary_2_t1360_gp_TValue_1_il2cpp_TypeInfo_GenericParamFull = { &ThreadSafeDictionary_2_t1360_Il2CppGenericContainer, NULL, "TValue", 1, 0 };
static const Il2CppGenericParameter* ThreadSafeDictionary_2_t1360_Il2CppGenericParametersArray[2] = 
{
	&ThreadSafeDictionary_2_t1360_gp_TKey_0_il2cpp_TypeInfo_GenericParamFull,
	&ThreadSafeDictionary_2_t1360_gp_TValue_1_il2cpp_TypeInfo_GenericParamFull,
};
extern const Il2CppGenericContainer ThreadSafeDictionary_2_t1360_Il2CppGenericContainer = { { NULL, NULL }, NULL, (void*)&ThreadSafeDictionary_2_t1360_il2cpp_TypeInfo, 2, 0, ThreadSafeDictionary_2_t1360_Il2CppGenericParametersArray };
extern const Il2CppType ThreadSafeDictionaryValueFactory_2_t1425_0_0_0;
extern const Il2CppType ThreadSafeDictionaryValueFactory_2_t1425_0_0_0;
static const ParameterInfo ThreadSafeDictionary_2_t1360_ThreadSafeDictionary_2__ctor_m7286_ParameterInfos[] = 
{
	{"valueFactory", 0, 134219621, 0, &ThreadSafeDictionaryValueFactory_2_t1425_0_0_0},
};
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2::.ctor(SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<TKey,TValue>)
extern const MethodInfo ThreadSafeDictionary_2__ctor_m7286_MethodInfo = 
{
	".ctor"/* name */
	, NULL/* method */
	, &ThreadSafeDictionary_2_t1360_il2cpp_TypeInfo/* declaring_type */
	, &Void_t57_0_0_0/* return_type */
	, NULL/* invoker_method */
	, ThreadSafeDictionary_2_t1360_ThreadSafeDictionary_2__ctor_m7286_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1639/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType IEnumerator_t21_0_0_0;
// System.Collections.IEnumerator SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2::System.Collections.IEnumerable.GetEnumerator()
extern const MethodInfo ThreadSafeDictionary_2_System_Collections_IEnumerable_GetEnumerator_m7287_MethodInfo = 
{
	"System.Collections.IEnumerable.GetEnumerator"/* name */
	, NULL/* method */
	, &ThreadSafeDictionary_2_t1360_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_t21_0_0_0/* return_type */
	, NULL/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 481/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1640/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType ThreadSafeDictionary_2_t1360_gp_0_0_0_0;
extern const Il2CppType ThreadSafeDictionary_2_t1360_gp_0_0_0_0;
static const ParameterInfo ThreadSafeDictionary_2_t1360_ThreadSafeDictionary_2_Get_m7288_ParameterInfos[] = 
{
	{"key", 0, 134219622, 0, &ThreadSafeDictionary_2_t1360_gp_0_0_0_0},
};
extern const Il2CppType ThreadSafeDictionary_2_t1360_gp_1_0_0_0;
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2::Get(TKey)
extern const MethodInfo ThreadSafeDictionary_2_Get_m7288_MethodInfo = 
{
	"Get"/* name */
	, NULL/* method */
	, &ThreadSafeDictionary_2_t1360_il2cpp_TypeInfo/* declaring_type */
	, &ThreadSafeDictionary_2_t1360_gp_1_0_0_0/* return_type */
	, NULL/* invoker_method */
	, ThreadSafeDictionary_2_t1360_ThreadSafeDictionary_2_Get_m7288_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1641/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType ThreadSafeDictionary_2_t1360_gp_0_0_0_0;
static const ParameterInfo ThreadSafeDictionary_2_t1360_ThreadSafeDictionary_2_AddValue_m7289_ParameterInfos[] = 
{
	{"key", 0, 134219623, 0, &ThreadSafeDictionary_2_t1360_gp_0_0_0_0},
};
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2::AddValue(TKey)
extern const MethodInfo ThreadSafeDictionary_2_AddValue_m7289_MethodInfo = 
{
	"AddValue"/* name */
	, NULL/* method */
	, &ThreadSafeDictionary_2_t1360_il2cpp_TypeInfo/* declaring_type */
	, &ThreadSafeDictionary_2_t1360_gp_1_0_0_0/* return_type */
	, NULL/* invoker_method */
	, ThreadSafeDictionary_2_t1360_ThreadSafeDictionary_2_AddValue_m7289_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1642/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType ThreadSafeDictionary_2_t1360_gp_0_0_0_0;
extern const Il2CppType ThreadSafeDictionary_2_t1360_gp_1_0_0_0;
static const ParameterInfo ThreadSafeDictionary_2_t1360_ThreadSafeDictionary_2_Add_m7290_ParameterInfos[] = 
{
	{"key", 0, 134219624, 0, &ThreadSafeDictionary_2_t1360_gp_0_0_0_0},
	{"value", 1, 134219625, 0, &ThreadSafeDictionary_2_t1360_gp_1_0_0_0},
};
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2::Add(TKey,TValue)
extern const MethodInfo ThreadSafeDictionary_2_Add_m7290_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ThreadSafeDictionary_2_t1360_il2cpp_TypeInfo/* declaring_type */
	, &Void_t57_0_0_0/* return_type */
	, NULL/* invoker_method */
	, ThreadSafeDictionary_2_t1360_ThreadSafeDictionary_2_Add_m7290_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1643/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType ICollection_1_t1426_0_0_0;
// System.Collections.Generic.ICollection`1<TKey> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2::get_Keys()
extern const MethodInfo ThreadSafeDictionary_2_get_Keys_m7291_MethodInfo = 
{
	"get_Keys"/* name */
	, NULL/* method */
	, &ThreadSafeDictionary_2_t1360_il2cpp_TypeInfo/* declaring_type */
	, &ICollection_1_t1426_0_0_0/* return_type */
	, NULL/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 10/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1644/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType ThreadSafeDictionary_2_t1360_gp_0_0_0_0;
static const ParameterInfo ThreadSafeDictionary_2_t1360_ThreadSafeDictionary_2_Remove_m7292_ParameterInfos[] = 
{
	{"key", 0, 134219626, 0, &ThreadSafeDictionary_2_t1360_gp_0_0_0_0},
};
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2::Remove(TKey)
extern const MethodInfo ThreadSafeDictionary_2_Remove_m7292_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ThreadSafeDictionary_2_t1360_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t29_0_0_0/* return_type */
	, NULL/* invoker_method */
	, ThreadSafeDictionary_2_t1360_ThreadSafeDictionary_2_Remove_m7292_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1645/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType ThreadSafeDictionary_2_t1360_gp_0_0_0_0;
extern const Il2CppType ThreadSafeDictionary_2_t1360_gp_1_1_0_2;
extern const Il2CppType ThreadSafeDictionary_2_t1360_gp_1_1_0_0;
static const ParameterInfo ThreadSafeDictionary_2_t1360_ThreadSafeDictionary_2_TryGetValue_m7293_ParameterInfos[] = 
{
	{"key", 0, 134219627, 0, &ThreadSafeDictionary_2_t1360_gp_0_0_0_0},
	{"value", 1, 134219628, 0, &ThreadSafeDictionary_2_t1360_gp_1_1_0_2},
};
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2::TryGetValue(TKey,TValue&)
extern const MethodInfo ThreadSafeDictionary_2_TryGetValue_m7293_MethodInfo = 
{
	"TryGetValue"/* name */
	, NULL/* method */
	, &ThreadSafeDictionary_2_t1360_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t29_0_0_0/* return_type */
	, NULL/* invoker_method */
	, ThreadSafeDictionary_2_t1360_ThreadSafeDictionary_2_TryGetValue_m7293_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1646/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType ICollection_1_t1427_0_0_0;
// System.Collections.Generic.ICollection`1<TValue> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2::get_Values()
extern const MethodInfo ThreadSafeDictionary_2_get_Values_m7294_MethodInfo = 
{
	"get_Values"/* name */
	, NULL/* method */
	, &ThreadSafeDictionary_2_t1360_il2cpp_TypeInfo/* declaring_type */
	, &ICollection_1_t1427_0_0_0/* return_type */
	, NULL/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 11/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1647/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType ThreadSafeDictionary_2_t1360_gp_0_0_0_0;
static const ParameterInfo ThreadSafeDictionary_2_t1360_ThreadSafeDictionary_2_get_Item_m7295_ParameterInfos[] = 
{
	{"key", 0, 134219629, 0, &ThreadSafeDictionary_2_t1360_gp_0_0_0_0},
};
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2::get_Item(TKey)
extern const MethodInfo ThreadSafeDictionary_2_get_Item_m7295_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &ThreadSafeDictionary_2_t1360_il2cpp_TypeInfo/* declaring_type */
	, &ThreadSafeDictionary_2_t1360_gp_1_0_0_0/* return_type */
	, NULL/* invoker_method */
	, ThreadSafeDictionary_2_t1360_ThreadSafeDictionary_2_get_Item_m7295_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1648/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType ThreadSafeDictionary_2_t1360_gp_0_0_0_0;
extern const Il2CppType ThreadSafeDictionary_2_t1360_gp_1_0_0_0;
static const ParameterInfo ThreadSafeDictionary_2_t1360_ThreadSafeDictionary_2_set_Item_m7296_ParameterInfos[] = 
{
	{"key", 0, 134219630, 0, &ThreadSafeDictionary_2_t1360_gp_0_0_0_0},
	{"value", 1, 134219631, 0, &ThreadSafeDictionary_2_t1360_gp_1_0_0_0},
};
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2::set_Item(TKey,TValue)
extern const MethodInfo ThreadSafeDictionary_2_set_Item_m7296_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &ThreadSafeDictionary_2_t1360_il2cpp_TypeInfo/* declaring_type */
	, &Void_t57_0_0_0/* return_type */
	, NULL/* invoker_method */
	, ThreadSafeDictionary_2_t1360_ThreadSafeDictionary_2_set_Item_m7296_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 9/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1649/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType KeyValuePair_2_t1428_0_0_0;
extern const Il2CppType KeyValuePair_2_t1428_0_0_0;
static const ParameterInfo ThreadSafeDictionary_2_t1360_ThreadSafeDictionary_2_Add_m7297_ParameterInfos[] = 
{
	{"item", 0, 134219632, 0, &KeyValuePair_2_t1428_0_0_0},
};
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2::Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern const MethodInfo ThreadSafeDictionary_2_Add_m7297_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ThreadSafeDictionary_2_t1360_il2cpp_TypeInfo/* declaring_type */
	, &Void_t57_0_0_0/* return_type */
	, NULL/* invoker_method */
	, ThreadSafeDictionary_2_t1360_ThreadSafeDictionary_2_Add_m7297_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 14/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1650/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2::Clear()
extern const MethodInfo ThreadSafeDictionary_2_Clear_m7298_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ThreadSafeDictionary_2_t1360_il2cpp_TypeInfo/* declaring_type */
	, &Void_t57_0_0_0/* return_type */
	, NULL/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 15/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1651/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType KeyValuePair_2_t1428_0_0_0;
static const ParameterInfo ThreadSafeDictionary_2_t1360_ThreadSafeDictionary_2_Contains_m7299_ParameterInfos[] = 
{
	{"item", 0, 134219633, 0, &KeyValuePair_2_t1428_0_0_0},
};
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2::Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern const MethodInfo ThreadSafeDictionary_2_Contains_m7299_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ThreadSafeDictionary_2_t1360_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t29_0_0_0/* return_type */
	, NULL/* invoker_method */
	, ThreadSafeDictionary_2_t1360_ThreadSafeDictionary_2_Contains_m7299_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 16/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1652/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType KeyValuePair_2U5BU5D_t1429_0_0_0;
extern const Il2CppType KeyValuePair_2U5BU5D_t1429_0_0_0;
extern const Il2CppType Int32_t50_0_0_0;
static const ParameterInfo ThreadSafeDictionary_2_t1360_ThreadSafeDictionary_2_CopyTo_m7300_ParameterInfos[] = 
{
	{"array", 0, 134219634, 0, &KeyValuePair_2U5BU5D_t1429_0_0_0},
	{"arrayIndex", 1, 134219635, 0, &Int32_t50_0_0_0},
};
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern const MethodInfo ThreadSafeDictionary_2_CopyTo_m7300_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ThreadSafeDictionary_2_t1360_il2cpp_TypeInfo/* declaring_type */
	, &Void_t57_0_0_0/* return_type */
	, NULL/* invoker_method */
	, ThreadSafeDictionary_2_t1360_ThreadSafeDictionary_2_CopyTo_m7300_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 17/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1653/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
// System.Int32 SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2::get_Count()
extern const MethodInfo ThreadSafeDictionary_2_get_Count_m7301_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ThreadSafeDictionary_2_t1360_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t50_0_0_0/* return_type */
	, NULL/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 12/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1654/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2::get_IsReadOnly()
extern const MethodInfo ThreadSafeDictionary_2_get_IsReadOnly_m7302_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ThreadSafeDictionary_2_t1360_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t29_0_0_0/* return_type */
	, NULL/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 13/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1655/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType KeyValuePair_2_t1428_0_0_0;
static const ParameterInfo ThreadSafeDictionary_2_t1360_ThreadSafeDictionary_2_Remove_m7303_ParameterInfos[] = 
{
	{"item", 0, 134219636, 0, &KeyValuePair_2_t1428_0_0_0},
};
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2::Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern const MethodInfo ThreadSafeDictionary_2_Remove_m7303_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ThreadSafeDictionary_2_t1360_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t29_0_0_0/* return_type */
	, NULL/* invoker_method */
	, ThreadSafeDictionary_2_t1360_ThreadSafeDictionary_2_Remove_m7303_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 18/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1656/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType IEnumerator_1_t1430_0_0_0;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2::GetEnumerator()
extern const MethodInfo ThreadSafeDictionary_2_GetEnumerator_m7304_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &ThreadSafeDictionary_2_t1360_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t1430_0_0_0/* return_type */
	, NULL/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 19/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1657/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* ThreadSafeDictionary_2_t1360_MethodInfos[] =
{
	&ThreadSafeDictionary_2__ctor_m7286_MethodInfo,
	&ThreadSafeDictionary_2_System_Collections_IEnumerable_GetEnumerator_m7287_MethodInfo,
	&ThreadSafeDictionary_2_Get_m7288_MethodInfo,
	&ThreadSafeDictionary_2_AddValue_m7289_MethodInfo,
	&ThreadSafeDictionary_2_Add_m7290_MethodInfo,
	&ThreadSafeDictionary_2_get_Keys_m7291_MethodInfo,
	&ThreadSafeDictionary_2_Remove_m7292_MethodInfo,
	&ThreadSafeDictionary_2_TryGetValue_m7293_MethodInfo,
	&ThreadSafeDictionary_2_get_Values_m7294_MethodInfo,
	&ThreadSafeDictionary_2_get_Item_m7295_MethodInfo,
	&ThreadSafeDictionary_2_set_Item_m7296_MethodInfo,
	&ThreadSafeDictionary_2_Add_m7297_MethodInfo,
	&ThreadSafeDictionary_2_Clear_m7298_MethodInfo,
	&ThreadSafeDictionary_2_Contains_m7299_MethodInfo,
	&ThreadSafeDictionary_2_CopyTo_m7300_MethodInfo,
	&ThreadSafeDictionary_2_get_Count_m7301_MethodInfo,
	&ThreadSafeDictionary_2_get_IsReadOnly_m7302_MethodInfo,
	&ThreadSafeDictionary_2_Remove_m7303_MethodInfo,
	&ThreadSafeDictionary_2_GetEnumerator_m7304_MethodInfo,
	NULL
};
extern const MethodInfo ThreadSafeDictionary_2_get_Keys_m7291_MethodInfo;
static const PropertyInfo ThreadSafeDictionary_2_t1360____Keys_PropertyInfo = 
{
	&ThreadSafeDictionary_2_t1360_il2cpp_TypeInfo/* parent */
	, "Keys"/* name */
	, &ThreadSafeDictionary_2_get_Keys_m7291_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo ThreadSafeDictionary_2_get_Values_m7294_MethodInfo;
static const PropertyInfo ThreadSafeDictionary_2_t1360____Values_PropertyInfo = 
{
	&ThreadSafeDictionary_2_t1360_il2cpp_TypeInfo/* parent */
	, "Values"/* name */
	, &ThreadSafeDictionary_2_get_Values_m7294_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo ThreadSafeDictionary_2_get_Item_m7295_MethodInfo;
extern const MethodInfo ThreadSafeDictionary_2_set_Item_m7296_MethodInfo;
static const PropertyInfo ThreadSafeDictionary_2_t1360____Item_PropertyInfo = 
{
	&ThreadSafeDictionary_2_t1360_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &ThreadSafeDictionary_2_get_Item_m7295_MethodInfo/* get */
	, &ThreadSafeDictionary_2_set_Item_m7296_MethodInfo/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo ThreadSafeDictionary_2_get_Count_m7301_MethodInfo;
static const PropertyInfo ThreadSafeDictionary_2_t1360____Count_PropertyInfo = 
{
	&ThreadSafeDictionary_2_t1360_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ThreadSafeDictionary_2_get_Count_m7301_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo ThreadSafeDictionary_2_get_IsReadOnly_m7302_MethodInfo;
static const PropertyInfo ThreadSafeDictionary_2_t1360____IsReadOnly_PropertyInfo = 
{
	&ThreadSafeDictionary_2_t1360_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ThreadSafeDictionary_2_get_IsReadOnly_m7302_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
static const PropertyInfo* ThreadSafeDictionary_2_t1360_PropertyInfos[] =
{
	&ThreadSafeDictionary_2_t1360____Keys_PropertyInfo,
	&ThreadSafeDictionary_2_t1360____Values_PropertyInfo,
	&ThreadSafeDictionary_2_t1360____Item_PropertyInfo,
	&ThreadSafeDictionary_2_t1360____Count_PropertyInfo,
	&ThreadSafeDictionary_2_t1360____IsReadOnly_PropertyInfo,
	NULL
};
extern const MethodInfo ThreadSafeDictionary_2_System_Collections_IEnumerable_GetEnumerator_m7287_MethodInfo;
extern const MethodInfo ThreadSafeDictionary_2_Add_m7290_MethodInfo;
extern const MethodInfo ThreadSafeDictionary_2_Remove_m7292_MethodInfo;
extern const MethodInfo ThreadSafeDictionary_2_TryGetValue_m7293_MethodInfo;
extern const MethodInfo ThreadSafeDictionary_2_Add_m7297_MethodInfo;
extern const MethodInfo ThreadSafeDictionary_2_Clear_m7298_MethodInfo;
extern const MethodInfo ThreadSafeDictionary_2_Contains_m7299_MethodInfo;
extern const MethodInfo ThreadSafeDictionary_2_CopyTo_m7300_MethodInfo;
extern const MethodInfo ThreadSafeDictionary_2_Remove_m7303_MethodInfo;
extern const MethodInfo ThreadSafeDictionary_2_GetEnumerator_m7304_MethodInfo;
static const Il2CppMethodReference ThreadSafeDictionary_2_t1360_VTable[] =
{
	&Object_Equals_m252_MethodInfo,
	&Object_Finalize_m230_MethodInfo,
	&Object_GetHashCode_m172_MethodInfo,
	&Object_ToString_m253_MethodInfo,
	&ThreadSafeDictionary_2_System_Collections_IEnumerable_GetEnumerator_m7287_MethodInfo,
	&ThreadSafeDictionary_2_Add_m7290_MethodInfo,
	&ThreadSafeDictionary_2_Remove_m7292_MethodInfo,
	&ThreadSafeDictionary_2_TryGetValue_m7293_MethodInfo,
	&ThreadSafeDictionary_2_get_Item_m7295_MethodInfo,
	&ThreadSafeDictionary_2_set_Item_m7296_MethodInfo,
	&ThreadSafeDictionary_2_get_Keys_m7291_MethodInfo,
	&ThreadSafeDictionary_2_get_Values_m7294_MethodInfo,
	&ThreadSafeDictionary_2_get_Count_m7301_MethodInfo,
	&ThreadSafeDictionary_2_get_IsReadOnly_m7302_MethodInfo,
	&ThreadSafeDictionary_2_Add_m7297_MethodInfo,
	&ThreadSafeDictionary_2_Clear_m7298_MethodInfo,
	&ThreadSafeDictionary_2_Contains_m7299_MethodInfo,
	&ThreadSafeDictionary_2_CopyTo_m7300_MethodInfo,
	&ThreadSafeDictionary_2_Remove_m7303_MethodInfo,
	&ThreadSafeDictionary_2_GetEnumerator_m7304_MethodInfo,
};
static bool ThreadSafeDictionary_2_t1360_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
extern const Il2CppType IDictionary_2_t1431_0_0_0;
extern const Il2CppType ICollection_1_t1432_0_0_0;
extern const Il2CppType IEnumerable_1_t1433_0_0_0;
static const Il2CppType* ThreadSafeDictionary_2_t1360_InterfacesTypeInfos[] = 
{
	&IEnumerable_t58_0_0_0,
	&IDictionary_2_t1431_0_0_0,
	&ICollection_1_t1432_0_0_0,
	&IEnumerable_1_t1433_0_0_0,
};
static Il2CppInterfaceOffsetPair ThreadSafeDictionary_2_t1360_InterfacesOffsets[] = 
{
	{ &IEnumerable_t58_0_0_0, 4},
	{ &IDictionary_2_t1431_0_0_0, 5},
	{ &ICollection_1_t1432_0_0_0, 12},
	{ &IEnumerable_1_t1433_0_0_0, 19},
};
extern const Il2CppGenericMethod Dictionary_2_GetEnumerator_m7420_GenericMethod;
extern const Il2CppType Enumerator_t1434_0_0_0;
extern const Il2CppGenericMethod ThreadSafeDictionary_2_AddValue_m7421_GenericMethod;
extern const Il2CppGenericMethod Dictionary_2_TryGetValue_m7422_GenericMethod;
extern const Il2CppGenericMethod ThreadSafeDictionaryValueFactory_2_Invoke_m7423_GenericMethod;
extern const Il2CppType Dictionary_2_t1435_0_0_0;
extern const Il2CppGenericMethod Dictionary_2__ctor_m7424_GenericMethod;
extern const Il2CppGenericMethod Dictionary_2_set_Item_m7425_GenericMethod;
extern const Il2CppGenericMethod Dictionary_2__ctor_m7426_GenericMethod;
extern const Il2CppGenericMethod Dictionary_2_get_Keys_m7427_GenericMethod;
extern const Il2CppGenericMethod ThreadSafeDictionary_2_get_Item_m7428_GenericMethod;
extern const Il2CppGenericMethod Dictionary_2_get_Values_m7429_GenericMethod;
extern const Il2CppGenericMethod ThreadSafeDictionary_2_Get_m7430_GenericMethod;
extern const Il2CppGenericMethod Dictionary_2_get_Count_m7431_GenericMethod;
static Il2CppRGCTXDefinition ThreadSafeDictionary_2_t1360_RGCTXData[15] = 
{
	{ IL2CPP_RGCTX_DATA_METHOD, &Dictionary_2_GetEnumerator_m7420_GenericMethod }/* Method */,
	{ IL2CPP_RGCTX_DATA_CLASS, (void*)&Enumerator_t1434_0_0_0 }/* Class */,
	{ IL2CPP_RGCTX_DATA_METHOD, &ThreadSafeDictionary_2_AddValue_m7421_GenericMethod }/* Method */,
	{ IL2CPP_RGCTX_DATA_METHOD, &Dictionary_2_TryGetValue_m7422_GenericMethod }/* Method */,
	{ IL2CPP_RGCTX_DATA_METHOD, &ThreadSafeDictionaryValueFactory_2_Invoke_m7423_GenericMethod }/* Method */,
	{ IL2CPP_RGCTX_DATA_CLASS, (void*)&Dictionary_2_t1435_0_0_0 }/* Class */,
	{ IL2CPP_RGCTX_DATA_METHOD, &Dictionary_2__ctor_m7424_GenericMethod }/* Method */,
	{ IL2CPP_RGCTX_DATA_METHOD, &Dictionary_2_set_Item_m7425_GenericMethod }/* Method */,
	{ IL2CPP_RGCTX_DATA_METHOD, &Dictionary_2__ctor_m7426_GenericMethod }/* Method */,
	{ IL2CPP_RGCTX_DATA_METHOD, &Dictionary_2_get_Keys_m7427_GenericMethod }/* Method */,
	{ IL2CPP_RGCTX_DATA_METHOD, &ThreadSafeDictionary_2_get_Item_m7428_GenericMethod }/* Method */,
	{ IL2CPP_RGCTX_DATA_METHOD, &Dictionary_2_get_Values_m7429_GenericMethod }/* Method */,
	{ IL2CPP_RGCTX_DATA_METHOD, &ThreadSafeDictionary_2_Get_m7430_GenericMethod }/* Method */,
	{ IL2CPP_RGCTX_DATA_METHOD, &Dictionary_2_get_Count_m7431_GenericMethod }/* Method */,
	{IL2CPP_RGCTX_DATA_INVALID, NULL},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType ThreadSafeDictionary_2_t1360_0_0_0;
extern const Il2CppType ThreadSafeDictionary_2_t1360_1_0_0;
extern TypeInfo ReflectionUtils_t1208_il2cpp_TypeInfo;
extern const Il2CppType ReflectionUtils_t1208_0_0_0;
struct ThreadSafeDictionary_2_t1360;
const Il2CppTypeDefinitionMetadata ThreadSafeDictionary_2_t1360_DefinitionMetadata = 
{
	&ReflectionUtils_t1208_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, ThreadSafeDictionary_2_t1360_InterfacesTypeInfos/* implementedInterfaces */
	, ThreadSafeDictionary_2_t1360_InterfacesOffsets/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, ThreadSafeDictionary_2_t1360_VTable/* vtableMethods */
	, ThreadSafeDictionary_2_t1360_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, ThreadSafeDictionary_2_t1360_RGCTXData/* rgctxDefinition */
	, 1024/* fieldStart */

};
TypeInfo ThreadSafeDictionary_2_t1360_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "ThreadSafeDictionary`2"/* name */
	, ""/* namespaze */
	, ThreadSafeDictionary_2_t1360_MethodInfos/* methods */
	, ThreadSafeDictionary_2_t1360_PropertyInfos/* properties */
	, NULL/* events */
	, &ThreadSafeDictionary_2_t1360_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 720/* custom_attributes_cache */
	, &ThreadSafeDictionary_2_t1360_0_0_0/* byval_arg */
	, &ThreadSafeDictionary_2_t1360_1_0_0/* this_arg */
	, &ThreadSafeDictionary_2_t1360_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, &ThreadSafeDictionary_2_t1360_Il2CppGenericContainer/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* actualSize */
	, 0/* element_size */
	, 0/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048834/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 19/* method_count */
	, 5/* property_count */
	, 3/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 20/* vtable_count */
	, 4/* interfaces_count */
	, 4/* interface_offsets_count */

};
// SimpleJson.Reflection.ReflectionUtils/GetDelegate
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_GetDelegat.h"
// Metadata Definition SimpleJson.Reflection.ReflectionUtils/GetDelegate
extern TypeInfo GetDelegate_t1199_il2cpp_TypeInfo;
// SimpleJson.Reflection.ReflectionUtils/GetDelegate
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_GetDelegatMethodDeclarations.h"
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType IntPtr_t_0_0_0;
extern const Il2CppType IntPtr_t_0_0_0;
static const ParameterInfo GetDelegate_t1199_GetDelegate__ctor_m6856_ParameterInfos[] = 
{
	{"object", 0, 134219637, 0, &Object_t_0_0_0},
	{"method", 1, 134219638, 0, &IntPtr_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t57_Object_t_IntPtr_t (const MethodInfo* method, void* obj, void** args);
// System.Void SimpleJson.Reflection.ReflectionUtils/GetDelegate::.ctor(System.Object,System.IntPtr)
extern const MethodInfo GetDelegate__ctor_m6856_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&GetDelegate__ctor_m6856/* method */
	, &GetDelegate_t1199_il2cpp_TypeInfo/* declaring_type */
	, &Void_t57_0_0_0/* return_type */
	, RuntimeInvoker_Void_t57_Object_t_IntPtr_t/* invoker_method */
	, GetDelegate_t1199_GetDelegate__ctor_m6856_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 3/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1658/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo GetDelegate_t1199_GetDelegate_Invoke_m6857_ParameterInfos[] = 
{
	{"source", 0, 134219639, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Object SimpleJson.Reflection.ReflectionUtils/GetDelegate::Invoke(System.Object)
extern const MethodInfo GetDelegate_Invoke_m6857_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&GetDelegate_Invoke_m6857/* method */
	, &GetDelegate_t1199_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, GetDelegate_t1199_GetDelegate_Invoke_m6857_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 10/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1659/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType AsyncCallback_t344_0_0_0;
extern const Il2CppType AsyncCallback_t344_0_0_0;
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo GetDelegate_t1199_GetDelegate_BeginInvoke_m6858_ParameterInfos[] = 
{
	{"source", 0, 134219640, 0, &Object_t_0_0_0},
	{"callback", 1, 134219641, 0, &AsyncCallback_t344_0_0_0},
	{"object", 2, 134219642, 0, &Object_t_0_0_0},
};
extern const Il2CppType IAsyncResult_t343_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.IAsyncResult SimpleJson.Reflection.ReflectionUtils/GetDelegate::BeginInvoke(System.Object,System.AsyncCallback,System.Object)
extern const MethodInfo GetDelegate_BeginInvoke_m6858_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&GetDelegate_BeginInvoke_m6858/* method */
	, &GetDelegate_t1199_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t343_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t/* invoker_method */
	, GetDelegate_t1199_GetDelegate_BeginInvoke_m6858_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 11/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1660/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType IAsyncResult_t343_0_0_0;
static const ParameterInfo GetDelegate_t1199_GetDelegate_EndInvoke_m6859_ParameterInfos[] = 
{
	{"result", 0, 134219643, 0, &IAsyncResult_t343_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Object SimpleJson.Reflection.ReflectionUtils/GetDelegate::EndInvoke(System.IAsyncResult)
extern const MethodInfo GetDelegate_EndInvoke_m6859_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&GetDelegate_EndInvoke_m6859/* method */
	, &GetDelegate_t1199_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, GetDelegate_t1199_GetDelegate_EndInvoke_m6859_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 12/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1661/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* GetDelegate_t1199_MethodInfos[] =
{
	&GetDelegate__ctor_m6856_MethodInfo,
	&GetDelegate_Invoke_m6857_MethodInfo,
	&GetDelegate_BeginInvoke_m6858_MethodInfo,
	&GetDelegate_EndInvoke_m6859_MethodInfo,
	NULL
};
extern const MethodInfo MulticastDelegate_Equals_m3893_MethodInfo;
extern const MethodInfo MulticastDelegate_GetHashCode_m3894_MethodInfo;
extern const MethodInfo MulticastDelegate_GetObjectData_m3895_MethodInfo;
extern const MethodInfo Delegate_Clone_m3896_MethodInfo;
extern const MethodInfo MulticastDelegate_GetInvocationList_m3897_MethodInfo;
extern const MethodInfo MulticastDelegate_CombineImpl_m3898_MethodInfo;
extern const MethodInfo MulticastDelegate_RemoveImpl_m3899_MethodInfo;
extern const MethodInfo GetDelegate_Invoke_m6857_MethodInfo;
extern const MethodInfo GetDelegate_BeginInvoke_m6858_MethodInfo;
extern const MethodInfo GetDelegate_EndInvoke_m6859_MethodInfo;
static const Il2CppMethodReference GetDelegate_t1199_VTable[] =
{
	&MulticastDelegate_Equals_m3893_MethodInfo,
	&Object_Finalize_m230_MethodInfo,
	&MulticastDelegate_GetHashCode_m3894_MethodInfo,
	&Object_ToString_m253_MethodInfo,
	&MulticastDelegate_GetObjectData_m3895_MethodInfo,
	&Delegate_Clone_m3896_MethodInfo,
	&MulticastDelegate_GetObjectData_m3895_MethodInfo,
	&MulticastDelegate_GetInvocationList_m3897_MethodInfo,
	&MulticastDelegate_CombineImpl_m3898_MethodInfo,
	&MulticastDelegate_RemoveImpl_m3899_MethodInfo,
	&GetDelegate_Invoke_m6857_MethodInfo,
	&GetDelegate_BeginInvoke_m6858_MethodInfo,
	&GetDelegate_EndInvoke_m6859_MethodInfo,
};
static bool GetDelegate_t1199_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
extern const Il2CppType ICloneable_t710_0_0_0;
extern const Il2CppType ISerializable_t711_0_0_0;
static Il2CppInterfaceOffsetPair GetDelegate_t1199_InterfacesOffsets[] = 
{
	{ &ICloneable_t710_0_0_0, 4},
	{ &ISerializable_t711_0_0_0, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType GetDelegate_t1199_0_0_0;
extern const Il2CppType GetDelegate_t1199_1_0_0;
extern const Il2CppType MulticastDelegate_t346_0_0_0;
struct GetDelegate_t1199;
const Il2CppTypeDefinitionMetadata GetDelegate_t1199_DefinitionMetadata = 
{
	&ReflectionUtils_t1208_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, GetDelegate_t1199_InterfacesOffsets/* interfaceOffsets */
	, &MulticastDelegate_t346_0_0_0/* parent */
	, GetDelegate_t1199_VTable/* vtableMethods */
	, GetDelegate_t1199_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo GetDelegate_t1199_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "GetDelegate"/* name */
	, ""/* namespaze */
	, GetDelegate_t1199_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &GetDelegate_t1199_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &GetDelegate_t1199_0_0_0/* byval_arg */
	, &GetDelegate_t1199_1_0_0/* this_arg */
	, &GetDelegate_t1199_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)pinvoke_delegate_wrapper_GetDelegate_t1199/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (GetDelegate_t1199)/* instance_size */
	, sizeof (GetDelegate_t1199)/* actualSize */
	, 0/* element_size */
	, sizeof(methodPointerType)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 258/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 4/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 13/* vtable_count */
	, 0/* interfaces_count */
	, 2/* interface_offsets_count */

};
// SimpleJson.Reflection.ReflectionUtils/SetDelegate
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_SetDelegat.h"
// Metadata Definition SimpleJson.Reflection.ReflectionUtils/SetDelegate
extern TypeInfo SetDelegate_t1200_il2cpp_TypeInfo;
// SimpleJson.Reflection.ReflectionUtils/SetDelegate
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_SetDelegatMethodDeclarations.h"
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType IntPtr_t_0_0_0;
static const ParameterInfo SetDelegate_t1200_SetDelegate__ctor_m6860_ParameterInfos[] = 
{
	{"object", 0, 134219644, 0, &Object_t_0_0_0},
	{"method", 1, 134219645, 0, &IntPtr_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t57_Object_t_IntPtr_t (const MethodInfo* method, void* obj, void** args);
// System.Void SimpleJson.Reflection.ReflectionUtils/SetDelegate::.ctor(System.Object,System.IntPtr)
extern const MethodInfo SetDelegate__ctor_m6860_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&SetDelegate__ctor_m6860/* method */
	, &SetDelegate_t1200_il2cpp_TypeInfo/* declaring_type */
	, &Void_t57_0_0_0/* return_type */
	, RuntimeInvoker_Void_t57_Object_t_IntPtr_t/* invoker_method */
	, SetDelegate_t1200_SetDelegate__ctor_m6860_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 3/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1662/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo SetDelegate_t1200_SetDelegate_Invoke_m6861_ParameterInfos[] = 
{
	{"source", 0, 134219646, 0, &Object_t_0_0_0},
	{"value", 1, 134219647, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t57_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void SimpleJson.Reflection.ReflectionUtils/SetDelegate::Invoke(System.Object,System.Object)
extern const MethodInfo SetDelegate_Invoke_m6861_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&SetDelegate_Invoke_m6861/* method */
	, &SetDelegate_t1200_il2cpp_TypeInfo/* declaring_type */
	, &Void_t57_0_0_0/* return_type */
	, RuntimeInvoker_Void_t57_Object_t_Object_t/* invoker_method */
	, SetDelegate_t1200_SetDelegate_Invoke_m6861_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 10/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1663/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType AsyncCallback_t344_0_0_0;
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo SetDelegate_t1200_SetDelegate_BeginInvoke_m6862_ParameterInfos[] = 
{
	{"source", 0, 134219648, 0, &Object_t_0_0_0},
	{"value", 1, 134219649, 0, &Object_t_0_0_0},
	{"callback", 2, 134219650, 0, &AsyncCallback_t344_0_0_0},
	{"object", 3, 134219651, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.IAsyncResult SimpleJson.Reflection.ReflectionUtils/SetDelegate::BeginInvoke(System.Object,System.Object,System.AsyncCallback,System.Object)
extern const MethodInfo SetDelegate_BeginInvoke_m6862_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&SetDelegate_BeginInvoke_m6862/* method */
	, &SetDelegate_t1200_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t343_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t_Object_t/* invoker_method */
	, SetDelegate_t1200_SetDelegate_BeginInvoke_m6862_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 11/* slot */
	, 4/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1664/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType IAsyncResult_t343_0_0_0;
static const ParameterInfo SetDelegate_t1200_SetDelegate_EndInvoke_m6863_ParameterInfos[] = 
{
	{"result", 0, 134219652, 0, &IAsyncResult_t343_0_0_0},
};
extern void* RuntimeInvoker_Void_t57_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void SimpleJson.Reflection.ReflectionUtils/SetDelegate::EndInvoke(System.IAsyncResult)
extern const MethodInfo SetDelegate_EndInvoke_m6863_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&SetDelegate_EndInvoke_m6863/* method */
	, &SetDelegate_t1200_il2cpp_TypeInfo/* declaring_type */
	, &Void_t57_0_0_0/* return_type */
	, RuntimeInvoker_Void_t57_Object_t/* invoker_method */
	, SetDelegate_t1200_SetDelegate_EndInvoke_m6863_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 12/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1665/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* SetDelegate_t1200_MethodInfos[] =
{
	&SetDelegate__ctor_m6860_MethodInfo,
	&SetDelegate_Invoke_m6861_MethodInfo,
	&SetDelegate_BeginInvoke_m6862_MethodInfo,
	&SetDelegate_EndInvoke_m6863_MethodInfo,
	NULL
};
extern const MethodInfo SetDelegate_Invoke_m6861_MethodInfo;
extern const MethodInfo SetDelegate_BeginInvoke_m6862_MethodInfo;
extern const MethodInfo SetDelegate_EndInvoke_m6863_MethodInfo;
static const Il2CppMethodReference SetDelegate_t1200_VTable[] =
{
	&MulticastDelegate_Equals_m3893_MethodInfo,
	&Object_Finalize_m230_MethodInfo,
	&MulticastDelegate_GetHashCode_m3894_MethodInfo,
	&Object_ToString_m253_MethodInfo,
	&MulticastDelegate_GetObjectData_m3895_MethodInfo,
	&Delegate_Clone_m3896_MethodInfo,
	&MulticastDelegate_GetObjectData_m3895_MethodInfo,
	&MulticastDelegate_GetInvocationList_m3897_MethodInfo,
	&MulticastDelegate_CombineImpl_m3898_MethodInfo,
	&MulticastDelegate_RemoveImpl_m3899_MethodInfo,
	&SetDelegate_Invoke_m6861_MethodInfo,
	&SetDelegate_BeginInvoke_m6862_MethodInfo,
	&SetDelegate_EndInvoke_m6863_MethodInfo,
};
static bool SetDelegate_t1200_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair SetDelegate_t1200_InterfacesOffsets[] = 
{
	{ &ICloneable_t710_0_0_0, 4},
	{ &ISerializable_t711_0_0_0, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType SetDelegate_t1200_0_0_0;
extern const Il2CppType SetDelegate_t1200_1_0_0;
struct SetDelegate_t1200;
const Il2CppTypeDefinitionMetadata SetDelegate_t1200_DefinitionMetadata = 
{
	&ReflectionUtils_t1208_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, SetDelegate_t1200_InterfacesOffsets/* interfaceOffsets */
	, &MulticastDelegate_t346_0_0_0/* parent */
	, SetDelegate_t1200_VTable/* vtableMethods */
	, SetDelegate_t1200_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo SetDelegate_t1200_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "SetDelegate"/* name */
	, ""/* namespaze */
	, SetDelegate_t1200_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &SetDelegate_t1200_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &SetDelegate_t1200_0_0_0/* byval_arg */
	, &SetDelegate_t1200_1_0_0/* this_arg */
	, &SetDelegate_t1200_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)pinvoke_delegate_wrapper_SetDelegate_t1200/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (SetDelegate_t1200)/* instance_size */
	, sizeof (SetDelegate_t1200)/* actualSize */
	, 0/* element_size */
	, sizeof(methodPointerType)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 258/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 4/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 13/* vtable_count */
	, 0/* interfaces_count */
	, 2/* interface_offsets_count */

};
// SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_Constructo.h"
// Metadata Definition SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate
extern TypeInfo ConstructorDelegate_t1201_il2cpp_TypeInfo;
// SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_ConstructoMethodDeclarations.h"
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType IntPtr_t_0_0_0;
static const ParameterInfo ConstructorDelegate_t1201_ConstructorDelegate__ctor_m6864_ParameterInfos[] = 
{
	{"object", 0, 134219653, 0, &Object_t_0_0_0},
	{"method", 1, 134219654, 0, &IntPtr_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t57_Object_t_IntPtr_t (const MethodInfo* method, void* obj, void** args);
// System.Void SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate::.ctor(System.Object,System.IntPtr)
extern const MethodInfo ConstructorDelegate__ctor_m6864_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&ConstructorDelegate__ctor_m6864/* method */
	, &ConstructorDelegate_t1201_il2cpp_TypeInfo/* declaring_type */
	, &Void_t57_0_0_0/* return_type */
	, RuntimeInvoker_Void_t57_Object_t_IntPtr_t/* invoker_method */
	, ConstructorDelegate_t1201_ConstructorDelegate__ctor_m6864_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 3/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1666/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType ObjectU5BU5D_t580_0_0_0;
extern const Il2CppType ObjectU5BU5D_t580_0_0_0;
static const ParameterInfo ConstructorDelegate_t1201_ConstructorDelegate_Invoke_m6865_ParameterInfos[] = 
{
	{"args", 0, 134219655, 721, &ObjectU5BU5D_t580_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Object SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate::Invoke(System.Object[])
extern const MethodInfo ConstructorDelegate_Invoke_m6865_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&ConstructorDelegate_Invoke_m6865/* method */
	, &ConstructorDelegate_t1201_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, ConstructorDelegate_t1201_ConstructorDelegate_Invoke_m6865_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 10/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1667/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType ObjectU5BU5D_t580_0_0_0;
extern const Il2CppType AsyncCallback_t344_0_0_0;
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo ConstructorDelegate_t1201_ConstructorDelegate_BeginInvoke_m6866_ParameterInfos[] = 
{
	{"args", 0, 134219656, 722, &ObjectU5BU5D_t580_0_0_0},
	{"callback", 1, 134219657, 0, &AsyncCallback_t344_0_0_0},
	{"object", 2, 134219658, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.IAsyncResult SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate::BeginInvoke(System.Object[],System.AsyncCallback,System.Object)
extern const MethodInfo ConstructorDelegate_BeginInvoke_m6866_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&ConstructorDelegate_BeginInvoke_m6866/* method */
	, &ConstructorDelegate_t1201_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t343_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t/* invoker_method */
	, ConstructorDelegate_t1201_ConstructorDelegate_BeginInvoke_m6866_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 11/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1668/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType IAsyncResult_t343_0_0_0;
static const ParameterInfo ConstructorDelegate_t1201_ConstructorDelegate_EndInvoke_m6867_ParameterInfos[] = 
{
	{"result", 0, 134219659, 0, &IAsyncResult_t343_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Object SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate::EndInvoke(System.IAsyncResult)
extern const MethodInfo ConstructorDelegate_EndInvoke_m6867_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&ConstructorDelegate_EndInvoke_m6867/* method */
	, &ConstructorDelegate_t1201_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, ConstructorDelegate_t1201_ConstructorDelegate_EndInvoke_m6867_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 12/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1669/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* ConstructorDelegate_t1201_MethodInfos[] =
{
	&ConstructorDelegate__ctor_m6864_MethodInfo,
	&ConstructorDelegate_Invoke_m6865_MethodInfo,
	&ConstructorDelegate_BeginInvoke_m6866_MethodInfo,
	&ConstructorDelegate_EndInvoke_m6867_MethodInfo,
	NULL
};
extern const MethodInfo ConstructorDelegate_Invoke_m6865_MethodInfo;
extern const MethodInfo ConstructorDelegate_BeginInvoke_m6866_MethodInfo;
extern const MethodInfo ConstructorDelegate_EndInvoke_m6867_MethodInfo;
static const Il2CppMethodReference ConstructorDelegate_t1201_VTable[] =
{
	&MulticastDelegate_Equals_m3893_MethodInfo,
	&Object_Finalize_m230_MethodInfo,
	&MulticastDelegate_GetHashCode_m3894_MethodInfo,
	&Object_ToString_m253_MethodInfo,
	&MulticastDelegate_GetObjectData_m3895_MethodInfo,
	&Delegate_Clone_m3896_MethodInfo,
	&MulticastDelegate_GetObjectData_m3895_MethodInfo,
	&MulticastDelegate_GetInvocationList_m3897_MethodInfo,
	&MulticastDelegate_CombineImpl_m3898_MethodInfo,
	&MulticastDelegate_RemoveImpl_m3899_MethodInfo,
	&ConstructorDelegate_Invoke_m6865_MethodInfo,
	&ConstructorDelegate_BeginInvoke_m6866_MethodInfo,
	&ConstructorDelegate_EndInvoke_m6867_MethodInfo,
};
static bool ConstructorDelegate_t1201_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair ConstructorDelegate_t1201_InterfacesOffsets[] = 
{
	{ &ICloneable_t710_0_0_0, 4},
	{ &ISerializable_t711_0_0_0, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType ConstructorDelegate_t1201_1_0_0;
struct ConstructorDelegate_t1201;
const Il2CppTypeDefinitionMetadata ConstructorDelegate_t1201_DefinitionMetadata = 
{
	&ReflectionUtils_t1208_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, ConstructorDelegate_t1201_InterfacesOffsets/* interfaceOffsets */
	, &MulticastDelegate_t346_0_0_0/* parent */
	, ConstructorDelegate_t1201_VTable/* vtableMethods */
	, ConstructorDelegate_t1201_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo ConstructorDelegate_t1201_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "ConstructorDelegate"/* name */
	, ""/* namespaze */
	, ConstructorDelegate_t1201_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &ConstructorDelegate_t1201_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &ConstructorDelegate_t1201_0_0_0/* byval_arg */
	, &ConstructorDelegate_t1201_1_0_0/* this_arg */
	, &ConstructorDelegate_t1201_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)pinvoke_delegate_wrapper_ConstructorDelegate_t1201/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (ConstructorDelegate_t1201)/* instance_size */
	, sizeof (ConstructorDelegate_t1201)/* actualSize */
	, 0/* element_size */
	, sizeof(methodPointerType)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 258/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 4/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 13/* vtable_count */
	, 0/* interfaces_count */
	, 2/* interface_offsets_count */

};
// Metadata Definition SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2
extern TypeInfo ThreadSafeDictionaryValueFactory_2_t1361_il2cpp_TypeInfo;
extern const Il2CppGenericContainer ThreadSafeDictionaryValueFactory_2_t1361_Il2CppGenericContainer;
extern TypeInfo ThreadSafeDictionaryValueFactory_2_t1361_gp_TKey_0_il2cpp_TypeInfo;
extern const Il2CppGenericParameter ThreadSafeDictionaryValueFactory_2_t1361_gp_TKey_0_il2cpp_TypeInfo_GenericParamFull = { &ThreadSafeDictionaryValueFactory_2_t1361_Il2CppGenericContainer, NULL, "TKey", 0, 0 };
extern TypeInfo ThreadSafeDictionaryValueFactory_2_t1361_gp_TValue_1_il2cpp_TypeInfo;
extern const Il2CppGenericParameter ThreadSafeDictionaryValueFactory_2_t1361_gp_TValue_1_il2cpp_TypeInfo_GenericParamFull = { &ThreadSafeDictionaryValueFactory_2_t1361_Il2CppGenericContainer, NULL, "TValue", 1, 0 };
static const Il2CppGenericParameter* ThreadSafeDictionaryValueFactory_2_t1361_Il2CppGenericParametersArray[2] = 
{
	&ThreadSafeDictionaryValueFactory_2_t1361_gp_TKey_0_il2cpp_TypeInfo_GenericParamFull,
	&ThreadSafeDictionaryValueFactory_2_t1361_gp_TValue_1_il2cpp_TypeInfo_GenericParamFull,
};
extern const Il2CppGenericContainer ThreadSafeDictionaryValueFactory_2_t1361_Il2CppGenericContainer = { { NULL, NULL }, NULL, (void*)&ThreadSafeDictionaryValueFactory_2_t1361_il2cpp_TypeInfo, 2, 0, ThreadSafeDictionaryValueFactory_2_t1361_Il2CppGenericParametersArray };
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType IntPtr_t_0_0_0;
static const ParameterInfo ThreadSafeDictionaryValueFactory_2_t1361_ThreadSafeDictionaryValueFactory_2__ctor_m7305_ParameterInfos[] = 
{
	{"object", 0, 134219660, 0, &Object_t_0_0_0},
	{"method", 1, 134219661, 0, &IntPtr_t_0_0_0},
};
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2::.ctor(System.Object,System.IntPtr)
extern const MethodInfo ThreadSafeDictionaryValueFactory_2__ctor_m7305_MethodInfo = 
{
	".ctor"/* name */
	, NULL/* method */
	, &ThreadSafeDictionaryValueFactory_2_t1361_il2cpp_TypeInfo/* declaring_type */
	, &Void_t57_0_0_0/* return_type */
	, NULL/* invoker_method */
	, ThreadSafeDictionaryValueFactory_2_t1361_ThreadSafeDictionaryValueFactory_2__ctor_m7305_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 3/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1670/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType ThreadSafeDictionaryValueFactory_2_t1361_gp_0_0_0_0;
extern const Il2CppType ThreadSafeDictionaryValueFactory_2_t1361_gp_0_0_0_0;
static const ParameterInfo ThreadSafeDictionaryValueFactory_2_t1361_ThreadSafeDictionaryValueFactory_2_Invoke_m7306_ParameterInfos[] = 
{
	{"key", 0, 134219662, 0, &ThreadSafeDictionaryValueFactory_2_t1361_gp_0_0_0_0},
};
extern const Il2CppType ThreadSafeDictionaryValueFactory_2_t1361_gp_1_0_0_0;
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2::Invoke(TKey)
extern const MethodInfo ThreadSafeDictionaryValueFactory_2_Invoke_m7306_MethodInfo = 
{
	"Invoke"/* name */
	, NULL/* method */
	, &ThreadSafeDictionaryValueFactory_2_t1361_il2cpp_TypeInfo/* declaring_type */
	, &ThreadSafeDictionaryValueFactory_2_t1361_gp_1_0_0_0/* return_type */
	, NULL/* invoker_method */
	, ThreadSafeDictionaryValueFactory_2_t1361_ThreadSafeDictionaryValueFactory_2_Invoke_m7306_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 10/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1671/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType ThreadSafeDictionaryValueFactory_2_t1361_gp_0_0_0_0;
extern const Il2CppType AsyncCallback_t344_0_0_0;
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo ThreadSafeDictionaryValueFactory_2_t1361_ThreadSafeDictionaryValueFactory_2_BeginInvoke_m7307_ParameterInfos[] = 
{
	{"key", 0, 134219663, 0, &ThreadSafeDictionaryValueFactory_2_t1361_gp_0_0_0_0},
	{"callback", 1, 134219664, 0, &AsyncCallback_t344_0_0_0},
	{"object", 2, 134219665, 0, &Object_t_0_0_0},
};
// System.IAsyncResult SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2::BeginInvoke(TKey,System.AsyncCallback,System.Object)
extern const MethodInfo ThreadSafeDictionaryValueFactory_2_BeginInvoke_m7307_MethodInfo = 
{
	"BeginInvoke"/* name */
	, NULL/* method */
	, &ThreadSafeDictionaryValueFactory_2_t1361_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t343_0_0_0/* return_type */
	, NULL/* invoker_method */
	, ThreadSafeDictionaryValueFactory_2_t1361_ThreadSafeDictionaryValueFactory_2_BeginInvoke_m7307_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 11/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1672/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType IAsyncResult_t343_0_0_0;
static const ParameterInfo ThreadSafeDictionaryValueFactory_2_t1361_ThreadSafeDictionaryValueFactory_2_EndInvoke_m7308_ParameterInfos[] = 
{
	{"result", 0, 134219666, 0, &IAsyncResult_t343_0_0_0},
};
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2::EndInvoke(System.IAsyncResult)
extern const MethodInfo ThreadSafeDictionaryValueFactory_2_EndInvoke_m7308_MethodInfo = 
{
	"EndInvoke"/* name */
	, NULL/* method */
	, &ThreadSafeDictionaryValueFactory_2_t1361_il2cpp_TypeInfo/* declaring_type */
	, &ThreadSafeDictionaryValueFactory_2_t1361_gp_1_0_0_0/* return_type */
	, NULL/* invoker_method */
	, ThreadSafeDictionaryValueFactory_2_t1361_ThreadSafeDictionaryValueFactory_2_EndInvoke_m7308_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 12/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1673/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* ThreadSafeDictionaryValueFactory_2_t1361_MethodInfos[] =
{
	&ThreadSafeDictionaryValueFactory_2__ctor_m7305_MethodInfo,
	&ThreadSafeDictionaryValueFactory_2_Invoke_m7306_MethodInfo,
	&ThreadSafeDictionaryValueFactory_2_BeginInvoke_m7307_MethodInfo,
	&ThreadSafeDictionaryValueFactory_2_EndInvoke_m7308_MethodInfo,
	NULL
};
extern const MethodInfo ThreadSafeDictionaryValueFactory_2_Invoke_m7306_MethodInfo;
extern const MethodInfo ThreadSafeDictionaryValueFactory_2_BeginInvoke_m7307_MethodInfo;
extern const MethodInfo ThreadSafeDictionaryValueFactory_2_EndInvoke_m7308_MethodInfo;
static const Il2CppMethodReference ThreadSafeDictionaryValueFactory_2_t1361_VTable[] =
{
	&MulticastDelegate_Equals_m3893_MethodInfo,
	&Object_Finalize_m230_MethodInfo,
	&MulticastDelegate_GetHashCode_m3894_MethodInfo,
	&Object_ToString_m253_MethodInfo,
	&MulticastDelegate_GetObjectData_m3895_MethodInfo,
	&Delegate_Clone_m3896_MethodInfo,
	&MulticastDelegate_GetObjectData_m3895_MethodInfo,
	&MulticastDelegate_GetInvocationList_m3897_MethodInfo,
	&MulticastDelegate_CombineImpl_m3898_MethodInfo,
	&MulticastDelegate_RemoveImpl_m3899_MethodInfo,
	&ThreadSafeDictionaryValueFactory_2_Invoke_m7306_MethodInfo,
	&ThreadSafeDictionaryValueFactory_2_BeginInvoke_m7307_MethodInfo,
	&ThreadSafeDictionaryValueFactory_2_EndInvoke_m7308_MethodInfo,
};
static bool ThreadSafeDictionaryValueFactory_2_t1361_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair ThreadSafeDictionaryValueFactory_2_t1361_InterfacesOffsets[] = 
{
	{ &ICloneable_t710_0_0_0, 4},
	{ &ISerializable_t711_0_0_0, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType ThreadSafeDictionaryValueFactory_2_t1361_0_0_0;
extern const Il2CppType ThreadSafeDictionaryValueFactory_2_t1361_1_0_0;
struct ThreadSafeDictionaryValueFactory_2_t1361;
const Il2CppTypeDefinitionMetadata ThreadSafeDictionaryValueFactory_2_t1361_DefinitionMetadata = 
{
	&ReflectionUtils_t1208_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, ThreadSafeDictionaryValueFactory_2_t1361_InterfacesOffsets/* interfaceOffsets */
	, &MulticastDelegate_t346_0_0_0/* parent */
	, ThreadSafeDictionaryValueFactory_2_t1361_VTable/* vtableMethods */
	, ThreadSafeDictionaryValueFactory_2_t1361_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo ThreadSafeDictionaryValueFactory_2_t1361_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "ThreadSafeDictionaryValueFactory`2"/* name */
	, ""/* namespaze */
	, ThreadSafeDictionaryValueFactory_2_t1361_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &ThreadSafeDictionaryValueFactory_2_t1361_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &ThreadSafeDictionaryValueFactory_2_t1361_0_0_0/* byval_arg */
	, &ThreadSafeDictionaryValueFactory_2_t1361_1_0_0/* this_arg */
	, &ThreadSafeDictionaryValueFactory_2_t1361_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, &ThreadSafeDictionaryValueFactory_2_t1361_Il2CppGenericContainer/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* actualSize */
	, 0/* element_size */
	, 0/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 258/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 4/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 13/* vtable_count */
	, 0/* interfaces_count */
	, 2/* interface_offsets_count */

};
// SimpleJson.Reflection.ReflectionUtils/<GetConstructorByReflection>c__AnonStorey1
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_U3CGetCons.h"
// Metadata Definition SimpleJson.Reflection.ReflectionUtils/<GetConstructorByReflection>c__AnonStorey1
extern TypeInfo U3CGetConstructorByReflectionU3Ec__AnonStorey1_t1203_il2cpp_TypeInfo;
// SimpleJson.Reflection.ReflectionUtils/<GetConstructorByReflection>c__AnonStorey1
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_U3CGetConsMethodDeclarations.h"
extern void* RuntimeInvoker_Void_t57 (const MethodInfo* method, void* obj, void** args);
// System.Void SimpleJson.Reflection.ReflectionUtils/<GetConstructorByReflection>c__AnonStorey1::.ctor()
extern const MethodInfo U3CGetConstructorByReflectionU3Ec__AnonStorey1__ctor_m6868_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&U3CGetConstructorByReflectionU3Ec__AnonStorey1__ctor_m6868/* method */
	, &U3CGetConstructorByReflectionU3Ec__AnonStorey1_t1203_il2cpp_TypeInfo/* declaring_type */
	, &Void_t57_0_0_0/* return_type */
	, RuntimeInvoker_Void_t57/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1674/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType ObjectU5BU5D_t580_0_0_0;
static const ParameterInfo U3CGetConstructorByReflectionU3Ec__AnonStorey1_t1203_U3CGetConstructorByReflectionU3Ec__AnonStorey1_U3CU3Em__0_m6869_ParameterInfos[] = 
{
	{"args", 0, 134219667, 0, &ObjectU5BU5D_t580_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Object SimpleJson.Reflection.ReflectionUtils/<GetConstructorByReflection>c__AnonStorey1::<>m__0(System.Object[])
extern const MethodInfo U3CGetConstructorByReflectionU3Ec__AnonStorey1_U3CU3Em__0_m6869_MethodInfo = 
{
	"<>m__0"/* name */
	, (methodPointerType)&U3CGetConstructorByReflectionU3Ec__AnonStorey1_U3CU3Em__0_m6869/* method */
	, &U3CGetConstructorByReflectionU3Ec__AnonStorey1_t1203_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, U3CGetConstructorByReflectionU3Ec__AnonStorey1_t1203_U3CGetConstructorByReflectionU3Ec__AnonStorey1_U3CU3Em__0_m6869_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 131/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1675/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* U3CGetConstructorByReflectionU3Ec__AnonStorey1_t1203_MethodInfos[] =
{
	&U3CGetConstructorByReflectionU3Ec__AnonStorey1__ctor_m6868_MethodInfo,
	&U3CGetConstructorByReflectionU3Ec__AnonStorey1_U3CU3Em__0_m6869_MethodInfo,
	NULL
};
static const Il2CppMethodReference U3CGetConstructorByReflectionU3Ec__AnonStorey1_t1203_VTable[] =
{
	&Object_Equals_m252_MethodInfo,
	&Object_Finalize_m230_MethodInfo,
	&Object_GetHashCode_m172_MethodInfo,
	&Object_ToString_m253_MethodInfo,
};
static bool U3CGetConstructorByReflectionU3Ec__AnonStorey1_t1203_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType U3CGetConstructorByReflectionU3Ec__AnonStorey1_t1203_0_0_0;
extern const Il2CppType U3CGetConstructorByReflectionU3Ec__AnonStorey1_t1203_1_0_0;
struct U3CGetConstructorByReflectionU3Ec__AnonStorey1_t1203;
const Il2CppTypeDefinitionMetadata U3CGetConstructorByReflectionU3Ec__AnonStorey1_t1203_DefinitionMetadata = 
{
	&ReflectionUtils_t1208_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, U3CGetConstructorByReflectionU3Ec__AnonStorey1_t1203_VTable/* vtableMethods */
	, U3CGetConstructorByReflectionU3Ec__AnonStorey1_t1203_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 1027/* fieldStart */

};
TypeInfo U3CGetConstructorByReflectionU3Ec__AnonStorey1_t1203_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "<GetConstructorByReflection>c__AnonStorey1"/* name */
	, ""/* namespaze */
	, U3CGetConstructorByReflectionU3Ec__AnonStorey1_t1203_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &U3CGetConstructorByReflectionU3Ec__AnonStorey1_t1203_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 723/* custom_attributes_cache */
	, &U3CGetConstructorByReflectionU3Ec__AnonStorey1_t1203_0_0_0/* byval_arg */
	, &U3CGetConstructorByReflectionU3Ec__AnonStorey1_t1203_1_0_0/* this_arg */
	, &U3CGetConstructorByReflectionU3Ec__AnonStorey1_t1203_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (U3CGetConstructorByReflectionU3Ec__AnonStorey1_t1203)/* instance_size */
	, sizeof (U3CGetConstructorByReflectionU3Ec__AnonStorey1_t1203)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048835/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 2/* method_count */
	, 0/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// SimpleJson.Reflection.ReflectionUtils/<GetGetMethodByReflection>c__AnonStorey2
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_U3CGetGetM.h"
// Metadata Definition SimpleJson.Reflection.ReflectionUtils/<GetGetMethodByReflection>c__AnonStorey2
extern TypeInfo U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t1204_il2cpp_TypeInfo;
// SimpleJson.Reflection.ReflectionUtils/<GetGetMethodByReflection>c__AnonStorey2
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_U3CGetGetMMethodDeclarations.h"
extern void* RuntimeInvoker_Void_t57 (const MethodInfo* method, void* obj, void** args);
// System.Void SimpleJson.Reflection.ReflectionUtils/<GetGetMethodByReflection>c__AnonStorey2::.ctor()
extern const MethodInfo U3CGetGetMethodByReflectionU3Ec__AnonStorey2__ctor_m6870_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&U3CGetGetMethodByReflectionU3Ec__AnonStorey2__ctor_m6870/* method */
	, &U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t1204_il2cpp_TypeInfo/* declaring_type */
	, &Void_t57_0_0_0/* return_type */
	, RuntimeInvoker_Void_t57/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1676/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t1204_U3CGetGetMethodByReflectionU3Ec__AnonStorey2_U3CU3Em__1_m6871_ParameterInfos[] = 
{
	{"source", 0, 134219668, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Object SimpleJson.Reflection.ReflectionUtils/<GetGetMethodByReflection>c__AnonStorey2::<>m__1(System.Object)
extern const MethodInfo U3CGetGetMethodByReflectionU3Ec__AnonStorey2_U3CU3Em__1_m6871_MethodInfo = 
{
	"<>m__1"/* name */
	, (methodPointerType)&U3CGetGetMethodByReflectionU3Ec__AnonStorey2_U3CU3Em__1_m6871/* method */
	, &U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t1204_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t1204_U3CGetGetMethodByReflectionU3Ec__AnonStorey2_U3CU3Em__1_m6871_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 131/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1677/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t1204_MethodInfos[] =
{
	&U3CGetGetMethodByReflectionU3Ec__AnonStorey2__ctor_m6870_MethodInfo,
	&U3CGetGetMethodByReflectionU3Ec__AnonStorey2_U3CU3Em__1_m6871_MethodInfo,
	NULL
};
static const Il2CppMethodReference U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t1204_VTable[] =
{
	&Object_Equals_m252_MethodInfo,
	&Object_Finalize_m230_MethodInfo,
	&Object_GetHashCode_m172_MethodInfo,
	&Object_ToString_m253_MethodInfo,
};
static bool U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t1204_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t1204_0_0_0;
extern const Il2CppType U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t1204_1_0_0;
struct U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t1204;
const Il2CppTypeDefinitionMetadata U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t1204_DefinitionMetadata = 
{
	&ReflectionUtils_t1208_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t1204_VTable/* vtableMethods */
	, U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t1204_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 1028/* fieldStart */

};
TypeInfo U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t1204_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "<GetGetMethodByReflection>c__AnonStorey2"/* name */
	, ""/* namespaze */
	, U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t1204_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t1204_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 724/* custom_attributes_cache */
	, &U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t1204_0_0_0/* byval_arg */
	, &U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t1204_1_0_0/* this_arg */
	, &U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t1204_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t1204)/* instance_size */
	, sizeof (U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t1204)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048835/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 2/* method_count */
	, 0/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// SimpleJson.Reflection.ReflectionUtils/<GetGetMethodByReflection>c__AnonStorey3
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_U3CGetGetM_0.h"
// Metadata Definition SimpleJson.Reflection.ReflectionUtils/<GetGetMethodByReflection>c__AnonStorey3
extern TypeInfo U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t1205_il2cpp_TypeInfo;
// SimpleJson.Reflection.ReflectionUtils/<GetGetMethodByReflection>c__AnonStorey3
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_U3CGetGetM_0MethodDeclarations.h"
extern void* RuntimeInvoker_Void_t57 (const MethodInfo* method, void* obj, void** args);
// System.Void SimpleJson.Reflection.ReflectionUtils/<GetGetMethodByReflection>c__AnonStorey3::.ctor()
extern const MethodInfo U3CGetGetMethodByReflectionU3Ec__AnonStorey3__ctor_m6872_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&U3CGetGetMethodByReflectionU3Ec__AnonStorey3__ctor_m6872/* method */
	, &U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t1205_il2cpp_TypeInfo/* declaring_type */
	, &Void_t57_0_0_0/* return_type */
	, RuntimeInvoker_Void_t57/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1678/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t1205_U3CGetGetMethodByReflectionU3Ec__AnonStorey3_U3CU3Em__2_m6873_ParameterInfos[] = 
{
	{"source", 0, 134219669, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Object SimpleJson.Reflection.ReflectionUtils/<GetGetMethodByReflection>c__AnonStorey3::<>m__2(System.Object)
extern const MethodInfo U3CGetGetMethodByReflectionU3Ec__AnonStorey3_U3CU3Em__2_m6873_MethodInfo = 
{
	"<>m__2"/* name */
	, (methodPointerType)&U3CGetGetMethodByReflectionU3Ec__AnonStorey3_U3CU3Em__2_m6873/* method */
	, &U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t1205_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t1205_U3CGetGetMethodByReflectionU3Ec__AnonStorey3_U3CU3Em__2_m6873_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 131/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1679/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t1205_MethodInfos[] =
{
	&U3CGetGetMethodByReflectionU3Ec__AnonStorey3__ctor_m6872_MethodInfo,
	&U3CGetGetMethodByReflectionU3Ec__AnonStorey3_U3CU3Em__2_m6873_MethodInfo,
	NULL
};
static const Il2CppMethodReference U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t1205_VTable[] =
{
	&Object_Equals_m252_MethodInfo,
	&Object_Finalize_m230_MethodInfo,
	&Object_GetHashCode_m172_MethodInfo,
	&Object_ToString_m253_MethodInfo,
};
static bool U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t1205_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t1205_0_0_0;
extern const Il2CppType U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t1205_1_0_0;
struct U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t1205;
const Il2CppTypeDefinitionMetadata U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t1205_DefinitionMetadata = 
{
	&ReflectionUtils_t1208_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t1205_VTable/* vtableMethods */
	, U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t1205_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 1029/* fieldStart */

};
TypeInfo U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t1205_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "<GetGetMethodByReflection>c__AnonStorey3"/* name */
	, ""/* namespaze */
	, U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t1205_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t1205_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 725/* custom_attributes_cache */
	, &U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t1205_0_0_0/* byval_arg */
	, &U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t1205_1_0_0/* this_arg */
	, &U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t1205_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t1205)/* instance_size */
	, sizeof (U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t1205)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048835/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 2/* method_count */
	, 0/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// SimpleJson.Reflection.ReflectionUtils/<GetSetMethodByReflection>c__AnonStorey4
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_U3CGetSetM.h"
// Metadata Definition SimpleJson.Reflection.ReflectionUtils/<GetSetMethodByReflection>c__AnonStorey4
extern TypeInfo U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t1206_il2cpp_TypeInfo;
// SimpleJson.Reflection.ReflectionUtils/<GetSetMethodByReflection>c__AnonStorey4
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_U3CGetSetMMethodDeclarations.h"
extern void* RuntimeInvoker_Void_t57 (const MethodInfo* method, void* obj, void** args);
// System.Void SimpleJson.Reflection.ReflectionUtils/<GetSetMethodByReflection>c__AnonStorey4::.ctor()
extern const MethodInfo U3CGetSetMethodByReflectionU3Ec__AnonStorey4__ctor_m6874_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&U3CGetSetMethodByReflectionU3Ec__AnonStorey4__ctor_m6874/* method */
	, &U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t1206_il2cpp_TypeInfo/* declaring_type */
	, &Void_t57_0_0_0/* return_type */
	, RuntimeInvoker_Void_t57/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1680/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t1206_U3CGetSetMethodByReflectionU3Ec__AnonStorey4_U3CU3Em__3_m6875_ParameterInfos[] = 
{
	{"source", 0, 134219670, 0, &Object_t_0_0_0},
	{"value", 1, 134219671, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t57_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void SimpleJson.Reflection.ReflectionUtils/<GetSetMethodByReflection>c__AnonStorey4::<>m__3(System.Object,System.Object)
extern const MethodInfo U3CGetSetMethodByReflectionU3Ec__AnonStorey4_U3CU3Em__3_m6875_MethodInfo = 
{
	"<>m__3"/* name */
	, (methodPointerType)&U3CGetSetMethodByReflectionU3Ec__AnonStorey4_U3CU3Em__3_m6875/* method */
	, &U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t1206_il2cpp_TypeInfo/* declaring_type */
	, &Void_t57_0_0_0/* return_type */
	, RuntimeInvoker_Void_t57_Object_t_Object_t/* invoker_method */
	, U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t1206_U3CGetSetMethodByReflectionU3Ec__AnonStorey4_U3CU3Em__3_m6875_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 131/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1681/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t1206_MethodInfos[] =
{
	&U3CGetSetMethodByReflectionU3Ec__AnonStorey4__ctor_m6874_MethodInfo,
	&U3CGetSetMethodByReflectionU3Ec__AnonStorey4_U3CU3Em__3_m6875_MethodInfo,
	NULL
};
static const Il2CppMethodReference U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t1206_VTable[] =
{
	&Object_Equals_m252_MethodInfo,
	&Object_Finalize_m230_MethodInfo,
	&Object_GetHashCode_m172_MethodInfo,
	&Object_ToString_m253_MethodInfo,
};
static bool U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t1206_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t1206_0_0_0;
extern const Il2CppType U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t1206_1_0_0;
struct U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t1206;
const Il2CppTypeDefinitionMetadata U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t1206_DefinitionMetadata = 
{
	&ReflectionUtils_t1208_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t1206_VTable/* vtableMethods */
	, U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t1206_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 1030/* fieldStart */

};
TypeInfo U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t1206_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "<GetSetMethodByReflection>c__AnonStorey4"/* name */
	, ""/* namespaze */
	, U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t1206_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t1206_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 726/* custom_attributes_cache */
	, &U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t1206_0_0_0/* byval_arg */
	, &U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t1206_1_0_0/* this_arg */
	, &U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t1206_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t1206)/* instance_size */
	, sizeof (U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t1206)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048835/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 2/* method_count */
	, 0/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// SimpleJson.Reflection.ReflectionUtils/<GetSetMethodByReflection>c__AnonStorey5
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_U3CGetSetM_0.h"
// Metadata Definition SimpleJson.Reflection.ReflectionUtils/<GetSetMethodByReflection>c__AnonStorey5
extern TypeInfo U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t1207_il2cpp_TypeInfo;
// SimpleJson.Reflection.ReflectionUtils/<GetSetMethodByReflection>c__AnonStorey5
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_U3CGetSetM_0MethodDeclarations.h"
extern void* RuntimeInvoker_Void_t57 (const MethodInfo* method, void* obj, void** args);
// System.Void SimpleJson.Reflection.ReflectionUtils/<GetSetMethodByReflection>c__AnonStorey5::.ctor()
extern const MethodInfo U3CGetSetMethodByReflectionU3Ec__AnonStorey5__ctor_m6876_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&U3CGetSetMethodByReflectionU3Ec__AnonStorey5__ctor_m6876/* method */
	, &U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t1207_il2cpp_TypeInfo/* declaring_type */
	, &Void_t57_0_0_0/* return_type */
	, RuntimeInvoker_Void_t57/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1682/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t1207_U3CGetSetMethodByReflectionU3Ec__AnonStorey5_U3CU3Em__4_m6877_ParameterInfos[] = 
{
	{"source", 0, 134219672, 0, &Object_t_0_0_0},
	{"value", 1, 134219673, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t57_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void SimpleJson.Reflection.ReflectionUtils/<GetSetMethodByReflection>c__AnonStorey5::<>m__4(System.Object,System.Object)
extern const MethodInfo U3CGetSetMethodByReflectionU3Ec__AnonStorey5_U3CU3Em__4_m6877_MethodInfo = 
{
	"<>m__4"/* name */
	, (methodPointerType)&U3CGetSetMethodByReflectionU3Ec__AnonStorey5_U3CU3Em__4_m6877/* method */
	, &U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t1207_il2cpp_TypeInfo/* declaring_type */
	, &Void_t57_0_0_0/* return_type */
	, RuntimeInvoker_Void_t57_Object_t_Object_t/* invoker_method */
	, U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t1207_U3CGetSetMethodByReflectionU3Ec__AnonStorey5_U3CU3Em__4_m6877_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 131/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1683/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t1207_MethodInfos[] =
{
	&U3CGetSetMethodByReflectionU3Ec__AnonStorey5__ctor_m6876_MethodInfo,
	&U3CGetSetMethodByReflectionU3Ec__AnonStorey5_U3CU3Em__4_m6877_MethodInfo,
	NULL
};
static const Il2CppMethodReference U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t1207_VTable[] =
{
	&Object_Equals_m252_MethodInfo,
	&Object_Finalize_m230_MethodInfo,
	&Object_GetHashCode_m172_MethodInfo,
	&Object_ToString_m253_MethodInfo,
};
static bool U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t1207_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t1207_0_0_0;
extern const Il2CppType U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t1207_1_0_0;
struct U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t1207;
const Il2CppTypeDefinitionMetadata U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t1207_DefinitionMetadata = 
{
	&ReflectionUtils_t1208_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t1207_VTable/* vtableMethods */
	, U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t1207_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 1031/* fieldStart */

};
TypeInfo U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t1207_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "<GetSetMethodByReflection>c__AnonStorey5"/* name */
	, ""/* namespaze */
	, U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t1207_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t1207_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 727/* custom_attributes_cache */
	, &U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t1207_0_0_0/* byval_arg */
	, &U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t1207_1_0_0/* this_arg */
	, &U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t1207_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t1207)/* instance_size */
	, sizeof (U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t1207)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048835/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 2/* method_count */
	, 0/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// SimpleJson.Reflection.ReflectionUtils
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils.h"
// Metadata Definition SimpleJson.Reflection.ReflectionUtils
// SimpleJson.Reflection.ReflectionUtils
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtilsMethodDeclarations.h"
extern void* RuntimeInvoker_Void_t57 (const MethodInfo* method, void* obj, void** args);
// System.Void SimpleJson.Reflection.ReflectionUtils::.cctor()
extern const MethodInfo ReflectionUtils__cctor_m6878_MethodInfo = 
{
	".cctor"/* name */
	, (methodPointerType)&ReflectionUtils__cctor_m6878/* method */
	, &ReflectionUtils_t1208_il2cpp_TypeInfo/* declaring_type */
	, &Void_t57_0_0_0/* return_type */
	, RuntimeInvoker_Void_t57/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 6161/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1621/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Type_t_0_0_0;
static const ParameterInfo ReflectionUtils_t1208_ReflectionUtils_GetConstructors_m6879_ParameterInfos[] = 
{
	{"type", 0, 134219601, 0, &Type_t_0_0_0},
};
extern const Il2CppType IEnumerable_1_t1295_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerable`1<System.Reflection.ConstructorInfo> SimpleJson.Reflection.ReflectionUtils::GetConstructors(System.Type)
extern const MethodInfo ReflectionUtils_GetConstructors_m6879_MethodInfo = 
{
	"GetConstructors"/* name */
	, (methodPointerType)&ReflectionUtils_GetConstructors_m6879/* method */
	, &ReflectionUtils_t1208_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerable_1_t1295_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, ReflectionUtils_t1208_ReflectionUtils_GetConstructors_m6879_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1622/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Type_t_0_0_0;
extern const Il2CppType TypeU5BU5D_t1198_0_0_0;
extern const Il2CppType TypeU5BU5D_t1198_0_0_0;
static const ParameterInfo ReflectionUtils_t1208_ReflectionUtils_GetConstructorInfo_m6880_ParameterInfos[] = 
{
	{"type", 0, 134219602, 0, &Type_t_0_0_0},
	{"argsType", 1, 134219603, 717, &TypeU5BU5D_t1198_0_0_0},
};
extern const Il2CppType ConstructorInfo_t1202_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Reflection.ConstructorInfo SimpleJson.Reflection.ReflectionUtils::GetConstructorInfo(System.Type,System.Type[])
extern const MethodInfo ReflectionUtils_GetConstructorInfo_m6880_MethodInfo = 
{
	"GetConstructorInfo"/* name */
	, (methodPointerType)&ReflectionUtils_GetConstructorInfo_m6880/* method */
	, &ReflectionUtils_t1208_il2cpp_TypeInfo/* declaring_type */
	, &ConstructorInfo_t1202_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t/* invoker_method */
	, ReflectionUtils_t1208_ReflectionUtils_GetConstructorInfo_m6880_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1623/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Type_t_0_0_0;
static const ParameterInfo ReflectionUtils_t1208_ReflectionUtils_GetProperties_m6881_ParameterInfos[] = 
{
	{"type", 0, 134219604, 0, &Type_t_0_0_0},
};
extern const Il2CppType IEnumerable_1_t1296_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerable`1<System.Reflection.PropertyInfo> SimpleJson.Reflection.ReflectionUtils::GetProperties(System.Type)
extern const MethodInfo ReflectionUtils_GetProperties_m6881_MethodInfo = 
{
	"GetProperties"/* name */
	, (methodPointerType)&ReflectionUtils_GetProperties_m6881/* method */
	, &ReflectionUtils_t1208_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerable_1_t1296_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, ReflectionUtils_t1208_ReflectionUtils_GetProperties_m6881_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1624/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Type_t_0_0_0;
static const ParameterInfo ReflectionUtils_t1208_ReflectionUtils_GetFields_m6882_ParameterInfos[] = 
{
	{"type", 0, 134219605, 0, &Type_t_0_0_0},
};
extern const Il2CppType IEnumerable_1_t1297_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerable`1<System.Reflection.FieldInfo> SimpleJson.Reflection.ReflectionUtils::GetFields(System.Type)
extern const MethodInfo ReflectionUtils_GetFields_m6882_MethodInfo = 
{
	"GetFields"/* name */
	, (methodPointerType)&ReflectionUtils_GetFields_m6882/* method */
	, &ReflectionUtils_t1208_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerable_1_t1297_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, ReflectionUtils_t1208_ReflectionUtils_GetFields_m6882_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1625/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType PropertyInfo_t_0_0_0;
extern const Il2CppType PropertyInfo_t_0_0_0;
static const ParameterInfo ReflectionUtils_t1208_ReflectionUtils_GetGetterMethodInfo_m6883_ParameterInfos[] = 
{
	{"propertyInfo", 0, 134219606, 0, &PropertyInfo_t_0_0_0},
};
extern const Il2CppType MethodInfo_t_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Reflection.MethodInfo SimpleJson.Reflection.ReflectionUtils::GetGetterMethodInfo(System.Reflection.PropertyInfo)
extern const MethodInfo ReflectionUtils_GetGetterMethodInfo_m6883_MethodInfo = 
{
	"GetGetterMethodInfo"/* name */
	, (methodPointerType)&ReflectionUtils_GetGetterMethodInfo_m6883/* method */
	, &ReflectionUtils_t1208_il2cpp_TypeInfo/* declaring_type */
	, &MethodInfo_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, ReflectionUtils_t1208_ReflectionUtils_GetGetterMethodInfo_m6883_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1626/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType PropertyInfo_t_0_0_0;
static const ParameterInfo ReflectionUtils_t1208_ReflectionUtils_GetSetterMethodInfo_m6884_ParameterInfos[] = 
{
	{"propertyInfo", 0, 134219607, 0, &PropertyInfo_t_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Reflection.MethodInfo SimpleJson.Reflection.ReflectionUtils::GetSetterMethodInfo(System.Reflection.PropertyInfo)
extern const MethodInfo ReflectionUtils_GetSetterMethodInfo_m6884_MethodInfo = 
{
	"GetSetterMethodInfo"/* name */
	, (methodPointerType)&ReflectionUtils_GetSetterMethodInfo_m6884/* method */
	, &ReflectionUtils_t1208_il2cpp_TypeInfo/* declaring_type */
	, &MethodInfo_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, ReflectionUtils_t1208_ReflectionUtils_GetSetterMethodInfo_m6884_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1627/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Type_t_0_0_0;
extern const Il2CppType TypeU5BU5D_t1198_0_0_0;
static const ParameterInfo ReflectionUtils_t1208_ReflectionUtils_GetContructor_m6885_ParameterInfos[] = 
{
	{"type", 0, 134219608, 0, &Type_t_0_0_0},
	{"argsType", 1, 134219609, 718, &TypeU5BU5D_t1198_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate SimpleJson.Reflection.ReflectionUtils::GetContructor(System.Type,System.Type[])
extern const MethodInfo ReflectionUtils_GetContructor_m6885_MethodInfo = 
{
	"GetContructor"/* name */
	, (methodPointerType)&ReflectionUtils_GetContructor_m6885/* method */
	, &ReflectionUtils_t1208_il2cpp_TypeInfo/* declaring_type */
	, &ConstructorDelegate_t1201_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t/* invoker_method */
	, ReflectionUtils_t1208_ReflectionUtils_GetContructor_m6885_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1628/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType ConstructorInfo_t1202_0_0_0;
static const ParameterInfo ReflectionUtils_t1208_ReflectionUtils_GetConstructorByReflection_m6886_ParameterInfos[] = 
{
	{"constructorInfo", 0, 134219610, 0, &ConstructorInfo_t1202_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate SimpleJson.Reflection.ReflectionUtils::GetConstructorByReflection(System.Reflection.ConstructorInfo)
extern const MethodInfo ReflectionUtils_GetConstructorByReflection_m6886_MethodInfo = 
{
	"GetConstructorByReflection"/* name */
	, (methodPointerType)&ReflectionUtils_GetConstructorByReflection_m6886/* method */
	, &ReflectionUtils_t1208_il2cpp_TypeInfo/* declaring_type */
	, &ConstructorDelegate_t1201_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, ReflectionUtils_t1208_ReflectionUtils_GetConstructorByReflection_m6886_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1629/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Type_t_0_0_0;
extern const Il2CppType TypeU5BU5D_t1198_0_0_0;
static const ParameterInfo ReflectionUtils_t1208_ReflectionUtils_GetConstructorByReflection_m6887_ParameterInfos[] = 
{
	{"type", 0, 134219611, 0, &Type_t_0_0_0},
	{"argsType", 1, 134219612, 719, &TypeU5BU5D_t1198_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate SimpleJson.Reflection.ReflectionUtils::GetConstructorByReflection(System.Type,System.Type[])
extern const MethodInfo ReflectionUtils_GetConstructorByReflection_m6887_MethodInfo = 
{
	"GetConstructorByReflection"/* name */
	, (methodPointerType)&ReflectionUtils_GetConstructorByReflection_m6887/* method */
	, &ReflectionUtils_t1208_il2cpp_TypeInfo/* declaring_type */
	, &ConstructorDelegate_t1201_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t/* invoker_method */
	, ReflectionUtils_t1208_ReflectionUtils_GetConstructorByReflection_m6887_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1630/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType PropertyInfo_t_0_0_0;
static const ParameterInfo ReflectionUtils_t1208_ReflectionUtils_GetGetMethod_m6888_ParameterInfos[] = 
{
	{"propertyInfo", 0, 134219613, 0, &PropertyInfo_t_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// SimpleJson.Reflection.ReflectionUtils/GetDelegate SimpleJson.Reflection.ReflectionUtils::GetGetMethod(System.Reflection.PropertyInfo)
extern const MethodInfo ReflectionUtils_GetGetMethod_m6888_MethodInfo = 
{
	"GetGetMethod"/* name */
	, (methodPointerType)&ReflectionUtils_GetGetMethod_m6888/* method */
	, &ReflectionUtils_t1208_il2cpp_TypeInfo/* declaring_type */
	, &GetDelegate_t1199_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, ReflectionUtils_t1208_ReflectionUtils_GetGetMethod_m6888_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1631/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType FieldInfo_t_0_0_0;
extern const Il2CppType FieldInfo_t_0_0_0;
static const ParameterInfo ReflectionUtils_t1208_ReflectionUtils_GetGetMethod_m6889_ParameterInfos[] = 
{
	{"fieldInfo", 0, 134219614, 0, &FieldInfo_t_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// SimpleJson.Reflection.ReflectionUtils/GetDelegate SimpleJson.Reflection.ReflectionUtils::GetGetMethod(System.Reflection.FieldInfo)
extern const MethodInfo ReflectionUtils_GetGetMethod_m6889_MethodInfo = 
{
	"GetGetMethod"/* name */
	, (methodPointerType)&ReflectionUtils_GetGetMethod_m6889/* method */
	, &ReflectionUtils_t1208_il2cpp_TypeInfo/* declaring_type */
	, &GetDelegate_t1199_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, ReflectionUtils_t1208_ReflectionUtils_GetGetMethod_m6889_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1632/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType PropertyInfo_t_0_0_0;
static const ParameterInfo ReflectionUtils_t1208_ReflectionUtils_GetGetMethodByReflection_m6890_ParameterInfos[] = 
{
	{"propertyInfo", 0, 134219615, 0, &PropertyInfo_t_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// SimpleJson.Reflection.ReflectionUtils/GetDelegate SimpleJson.Reflection.ReflectionUtils::GetGetMethodByReflection(System.Reflection.PropertyInfo)
extern const MethodInfo ReflectionUtils_GetGetMethodByReflection_m6890_MethodInfo = 
{
	"GetGetMethodByReflection"/* name */
	, (methodPointerType)&ReflectionUtils_GetGetMethodByReflection_m6890/* method */
	, &ReflectionUtils_t1208_il2cpp_TypeInfo/* declaring_type */
	, &GetDelegate_t1199_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, ReflectionUtils_t1208_ReflectionUtils_GetGetMethodByReflection_m6890_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1633/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType FieldInfo_t_0_0_0;
static const ParameterInfo ReflectionUtils_t1208_ReflectionUtils_GetGetMethodByReflection_m6891_ParameterInfos[] = 
{
	{"fieldInfo", 0, 134219616, 0, &FieldInfo_t_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// SimpleJson.Reflection.ReflectionUtils/GetDelegate SimpleJson.Reflection.ReflectionUtils::GetGetMethodByReflection(System.Reflection.FieldInfo)
extern const MethodInfo ReflectionUtils_GetGetMethodByReflection_m6891_MethodInfo = 
{
	"GetGetMethodByReflection"/* name */
	, (methodPointerType)&ReflectionUtils_GetGetMethodByReflection_m6891/* method */
	, &ReflectionUtils_t1208_il2cpp_TypeInfo/* declaring_type */
	, &GetDelegate_t1199_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, ReflectionUtils_t1208_ReflectionUtils_GetGetMethodByReflection_m6891_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1634/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType PropertyInfo_t_0_0_0;
static const ParameterInfo ReflectionUtils_t1208_ReflectionUtils_GetSetMethod_m6892_ParameterInfos[] = 
{
	{"propertyInfo", 0, 134219617, 0, &PropertyInfo_t_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// SimpleJson.Reflection.ReflectionUtils/SetDelegate SimpleJson.Reflection.ReflectionUtils::GetSetMethod(System.Reflection.PropertyInfo)
extern const MethodInfo ReflectionUtils_GetSetMethod_m6892_MethodInfo = 
{
	"GetSetMethod"/* name */
	, (methodPointerType)&ReflectionUtils_GetSetMethod_m6892/* method */
	, &ReflectionUtils_t1208_il2cpp_TypeInfo/* declaring_type */
	, &SetDelegate_t1200_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, ReflectionUtils_t1208_ReflectionUtils_GetSetMethod_m6892_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1635/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType FieldInfo_t_0_0_0;
static const ParameterInfo ReflectionUtils_t1208_ReflectionUtils_GetSetMethod_m6893_ParameterInfos[] = 
{
	{"fieldInfo", 0, 134219618, 0, &FieldInfo_t_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// SimpleJson.Reflection.ReflectionUtils/SetDelegate SimpleJson.Reflection.ReflectionUtils::GetSetMethod(System.Reflection.FieldInfo)
extern const MethodInfo ReflectionUtils_GetSetMethod_m6893_MethodInfo = 
{
	"GetSetMethod"/* name */
	, (methodPointerType)&ReflectionUtils_GetSetMethod_m6893/* method */
	, &ReflectionUtils_t1208_il2cpp_TypeInfo/* declaring_type */
	, &SetDelegate_t1200_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, ReflectionUtils_t1208_ReflectionUtils_GetSetMethod_m6893_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1636/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType PropertyInfo_t_0_0_0;
static const ParameterInfo ReflectionUtils_t1208_ReflectionUtils_GetSetMethodByReflection_m6894_ParameterInfos[] = 
{
	{"propertyInfo", 0, 134219619, 0, &PropertyInfo_t_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// SimpleJson.Reflection.ReflectionUtils/SetDelegate SimpleJson.Reflection.ReflectionUtils::GetSetMethodByReflection(System.Reflection.PropertyInfo)
extern const MethodInfo ReflectionUtils_GetSetMethodByReflection_m6894_MethodInfo = 
{
	"GetSetMethodByReflection"/* name */
	, (methodPointerType)&ReflectionUtils_GetSetMethodByReflection_m6894/* method */
	, &ReflectionUtils_t1208_il2cpp_TypeInfo/* declaring_type */
	, &SetDelegate_t1200_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, ReflectionUtils_t1208_ReflectionUtils_GetSetMethodByReflection_m6894_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1637/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType FieldInfo_t_0_0_0;
static const ParameterInfo ReflectionUtils_t1208_ReflectionUtils_GetSetMethodByReflection_m6895_ParameterInfos[] = 
{
	{"fieldInfo", 0, 134219620, 0, &FieldInfo_t_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// SimpleJson.Reflection.ReflectionUtils/SetDelegate SimpleJson.Reflection.ReflectionUtils::GetSetMethodByReflection(System.Reflection.FieldInfo)
extern const MethodInfo ReflectionUtils_GetSetMethodByReflection_m6895_MethodInfo = 
{
	"GetSetMethodByReflection"/* name */
	, (methodPointerType)&ReflectionUtils_GetSetMethodByReflection_m6895/* method */
	, &ReflectionUtils_t1208_il2cpp_TypeInfo/* declaring_type */
	, &SetDelegate_t1200_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, ReflectionUtils_t1208_ReflectionUtils_GetSetMethodByReflection_m6895_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1638/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* ReflectionUtils_t1208_MethodInfos[] =
{
	&ReflectionUtils__cctor_m6878_MethodInfo,
	&ReflectionUtils_GetConstructors_m6879_MethodInfo,
	&ReflectionUtils_GetConstructorInfo_m6880_MethodInfo,
	&ReflectionUtils_GetProperties_m6881_MethodInfo,
	&ReflectionUtils_GetFields_m6882_MethodInfo,
	&ReflectionUtils_GetGetterMethodInfo_m6883_MethodInfo,
	&ReflectionUtils_GetSetterMethodInfo_m6884_MethodInfo,
	&ReflectionUtils_GetContructor_m6885_MethodInfo,
	&ReflectionUtils_GetConstructorByReflection_m6886_MethodInfo,
	&ReflectionUtils_GetConstructorByReflection_m6887_MethodInfo,
	&ReflectionUtils_GetGetMethod_m6888_MethodInfo,
	&ReflectionUtils_GetGetMethod_m6889_MethodInfo,
	&ReflectionUtils_GetGetMethodByReflection_m6890_MethodInfo,
	&ReflectionUtils_GetGetMethodByReflection_m6891_MethodInfo,
	&ReflectionUtils_GetSetMethod_m6892_MethodInfo,
	&ReflectionUtils_GetSetMethod_m6893_MethodInfo,
	&ReflectionUtils_GetSetMethodByReflection_m6894_MethodInfo,
	&ReflectionUtils_GetSetMethodByReflection_m6895_MethodInfo,
	NULL
};
static const Il2CppType* ReflectionUtils_t1208_il2cpp_TypeInfo__nestedTypes[10] =
{
	&ThreadSafeDictionary_2_t1360_0_0_0,
	&GetDelegate_t1199_0_0_0,
	&SetDelegate_t1200_0_0_0,
	&ConstructorDelegate_t1201_0_0_0,
	&ThreadSafeDictionaryValueFactory_2_t1361_0_0_0,
	&U3CGetConstructorByReflectionU3Ec__AnonStorey1_t1203_0_0_0,
	&U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t1204_0_0_0,
	&U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t1205_0_0_0,
	&U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t1206_0_0_0,
	&U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t1207_0_0_0,
};
static const Il2CppMethodReference ReflectionUtils_t1208_VTable[] =
{
	&Object_Equals_m252_MethodInfo,
	&Object_Finalize_m230_MethodInfo,
	&Object_GetHashCode_m172_MethodInfo,
	&Object_ToString_m253_MethodInfo,
};
static bool ReflectionUtils_t1208_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType ReflectionUtils_t1208_1_0_0;
struct ReflectionUtils_t1208;
const Il2CppTypeDefinitionMetadata ReflectionUtils_t1208_DefinitionMetadata = 
{
	NULL/* declaringType */
	, ReflectionUtils_t1208_il2cpp_TypeInfo__nestedTypes/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, ReflectionUtils_t1208_VTable/* vtableMethods */
	, ReflectionUtils_t1208_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 1032/* fieldStart */

};
TypeInfo ReflectionUtils_t1208_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "ReflectionUtils"/* name */
	, "SimpleJson.Reflection"/* namespaze */
	, ReflectionUtils_t1208_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &ReflectionUtils_t1208_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 716/* custom_attributes_cache */
	, &ReflectionUtils_t1208_0_0_0/* byval_arg */
	, &ReflectionUtils_t1208_1_0_0/* this_arg */
	, &ReflectionUtils_t1208_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (ReflectionUtils_t1208)/* instance_size */
	, sizeof (ReflectionUtils_t1208)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, sizeof(ReflectionUtils_t1208_StaticFields)/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, true/* has_cctor */
	, false/* is_blittable */
	, 18/* method_count */
	, 0/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 10/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// UnityEngine.WrapperlessIcall
#include "UnityEngine_UnityEngine_WrapperlessIcall.h"
// Metadata Definition UnityEngine.WrapperlessIcall
extern TypeInfo WrapperlessIcall_t1209_il2cpp_TypeInfo;
// UnityEngine.WrapperlessIcall
#include "UnityEngine_UnityEngine_WrapperlessIcallMethodDeclarations.h"
extern void* RuntimeInvoker_Void_t57 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.WrapperlessIcall::.ctor()
extern const MethodInfo WrapperlessIcall__ctor_m6896_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&WrapperlessIcall__ctor_m6896/* method */
	, &WrapperlessIcall_t1209_il2cpp_TypeInfo/* declaring_type */
	, &Void_t57_0_0_0/* return_type */
	, RuntimeInvoker_Void_t57/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1684/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* WrapperlessIcall_t1209_MethodInfos[] =
{
	&WrapperlessIcall__ctor_m6896_MethodInfo,
	NULL
};
extern const MethodInfo Attribute_Equals_m3933_MethodInfo;
extern const MethodInfo Attribute_GetHashCode_m3934_MethodInfo;
static const Il2CppMethodReference WrapperlessIcall_t1209_VTable[] =
{
	&Attribute_Equals_m3933_MethodInfo,
	&Object_Finalize_m230_MethodInfo,
	&Attribute_GetHashCode_m3934_MethodInfo,
	&Object_ToString_m253_MethodInfo,
};
static bool WrapperlessIcall_t1209_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern const Il2CppType _Attribute_t716_0_0_0;
static Il2CppInterfaceOffsetPair WrapperlessIcall_t1209_InterfacesOffsets[] = 
{
	{ &_Attribute_t716_0_0_0, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType WrapperlessIcall_t1209_0_0_0;
extern const Il2CppType WrapperlessIcall_t1209_1_0_0;
extern const Il2CppType Attribute_t384_0_0_0;
struct WrapperlessIcall_t1209;
const Il2CppTypeDefinitionMetadata WrapperlessIcall_t1209_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, WrapperlessIcall_t1209_InterfacesOffsets/* interfaceOffsets */
	, &Attribute_t384_0_0_0/* parent */
	, WrapperlessIcall_t1209_VTable/* vtableMethods */
	, WrapperlessIcall_t1209_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo WrapperlessIcall_t1209_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "WrapperlessIcall"/* name */
	, "UnityEngine"/* namespaze */
	, WrapperlessIcall_t1209_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &WrapperlessIcall_t1209_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &WrapperlessIcall_t1209_0_0_0/* byval_arg */
	, &WrapperlessIcall_t1209_1_0_0/* this_arg */
	, &WrapperlessIcall_t1209_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (WrapperlessIcall_t1209)/* instance_size */
	, sizeof (WrapperlessIcall_t1209)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 1/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 1/* interface_offsets_count */

};
// UnityEngine.IL2CPPStructAlignmentAttribute
#include "UnityEngine_UnityEngine_IL2CPPStructAlignmentAttribute.h"
// Metadata Definition UnityEngine.IL2CPPStructAlignmentAttribute
extern TypeInfo IL2CPPStructAlignmentAttribute_t1210_il2cpp_TypeInfo;
// UnityEngine.IL2CPPStructAlignmentAttribute
#include "UnityEngine_UnityEngine_IL2CPPStructAlignmentAttributeMethodDeclarations.h"
extern void* RuntimeInvoker_Void_t57 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.IL2CPPStructAlignmentAttribute::.ctor()
extern const MethodInfo IL2CPPStructAlignmentAttribute__ctor_m6897_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&IL2CPPStructAlignmentAttribute__ctor_m6897/* method */
	, &IL2CPPStructAlignmentAttribute_t1210_il2cpp_TypeInfo/* declaring_type */
	, &Void_t57_0_0_0/* return_type */
	, RuntimeInvoker_Void_t57/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1685/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* IL2CPPStructAlignmentAttribute_t1210_MethodInfos[] =
{
	&IL2CPPStructAlignmentAttribute__ctor_m6897_MethodInfo,
	NULL
};
static const Il2CppMethodReference IL2CPPStructAlignmentAttribute_t1210_VTable[] =
{
	&Attribute_Equals_m3933_MethodInfo,
	&Object_Finalize_m230_MethodInfo,
	&Attribute_GetHashCode_m3934_MethodInfo,
	&Object_ToString_m253_MethodInfo,
};
static bool IL2CPPStructAlignmentAttribute_t1210_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair IL2CPPStructAlignmentAttribute_t1210_InterfacesOffsets[] = 
{
	{ &_Attribute_t716_0_0_0, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType IL2CPPStructAlignmentAttribute_t1210_0_0_0;
extern const Il2CppType IL2CPPStructAlignmentAttribute_t1210_1_0_0;
struct IL2CPPStructAlignmentAttribute_t1210;
const Il2CppTypeDefinitionMetadata IL2CPPStructAlignmentAttribute_t1210_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, IL2CPPStructAlignmentAttribute_t1210_InterfacesOffsets/* interfaceOffsets */
	, &Attribute_t384_0_0_0/* parent */
	, IL2CPPStructAlignmentAttribute_t1210_VTable/* vtableMethods */
	, IL2CPPStructAlignmentAttribute_t1210_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 1033/* fieldStart */

};
TypeInfo IL2CPPStructAlignmentAttribute_t1210_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "IL2CPPStructAlignmentAttribute"/* name */
	, "UnityEngine"/* namespaze */
	, IL2CPPStructAlignmentAttribute_t1210_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &IL2CPPStructAlignmentAttribute_t1210_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 728/* custom_attributes_cache */
	, &IL2CPPStructAlignmentAttribute_t1210_0_0_0/* byval_arg */
	, &IL2CPPStructAlignmentAttribute_t1210_1_0_0/* this_arg */
	, &IL2CPPStructAlignmentAttribute_t1210_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (IL2CPPStructAlignmentAttribute_t1210)/* instance_size */
	, sizeof (IL2CPPStructAlignmentAttribute_t1210)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 1/* method_count */
	, 0/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 1/* interface_offsets_count */

};
// UnityEngine.AttributeHelperEngine
#include "UnityEngine_UnityEngine_AttributeHelperEngine.h"
// Metadata Definition UnityEngine.AttributeHelperEngine
extern TypeInfo AttributeHelperEngine_t1214_il2cpp_TypeInfo;
// UnityEngine.AttributeHelperEngine
#include "UnityEngine_UnityEngine_AttributeHelperEngineMethodDeclarations.h"
extern void* RuntimeInvoker_Void_t57 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.AttributeHelperEngine::.cctor()
extern const MethodInfo AttributeHelperEngine__cctor_m6898_MethodInfo = 
{
	".cctor"/* name */
	, (methodPointerType)&AttributeHelperEngine__cctor_m6898/* method */
	, &AttributeHelperEngine_t1214_il2cpp_TypeInfo/* declaring_type */
	, &Void_t57_0_0_0/* return_type */
	, RuntimeInvoker_Void_t57/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 6161/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1686/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Type_t_0_0_0;
static const ParameterInfo AttributeHelperEngine_t1214_AttributeHelperEngine_GetParentTypeDisallowingMultipleInclusion_m6899_ParameterInfos[] = 
{
	{"type", 0, 134219674, 0, &Type_t_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Type UnityEngine.AttributeHelperEngine::GetParentTypeDisallowingMultipleInclusion(System.Type)
extern const MethodInfo AttributeHelperEngine_GetParentTypeDisallowingMultipleInclusion_m6899_MethodInfo = 
{
	"GetParentTypeDisallowingMultipleInclusion"/* name */
	, (methodPointerType)&AttributeHelperEngine_GetParentTypeDisallowingMultipleInclusion_m6899/* method */
	, &AttributeHelperEngine_t1214_il2cpp_TypeInfo/* declaring_type */
	, &Type_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, AttributeHelperEngine_t1214_AttributeHelperEngine_GetParentTypeDisallowingMultipleInclusion_m6899_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1687/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Type_t_0_0_0;
static const ParameterInfo AttributeHelperEngine_t1214_AttributeHelperEngine_GetRequiredComponents_m6900_ParameterInfos[] = 
{
	{"klass", 0, 134219675, 0, &Type_t_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Type[] UnityEngine.AttributeHelperEngine::GetRequiredComponents(System.Type)
extern const MethodInfo AttributeHelperEngine_GetRequiredComponents_m6900_MethodInfo = 
{
	"GetRequiredComponents"/* name */
	, (methodPointerType)&AttributeHelperEngine_GetRequiredComponents_m6900/* method */
	, &AttributeHelperEngine_t1214_il2cpp_TypeInfo/* declaring_type */
	, &TypeU5BU5D_t1198_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, AttributeHelperEngine_t1214_AttributeHelperEngine_GetRequiredComponents_m6900_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1688/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Type_t_0_0_0;
static const ParameterInfo AttributeHelperEngine_t1214_AttributeHelperEngine_CheckIsEditorScript_m6901_ParameterInfos[] = 
{
	{"klass", 0, 134219676, 0, &Type_t_0_0_0},
};
extern void* RuntimeInvoker_Boolean_t29_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Boolean UnityEngine.AttributeHelperEngine::CheckIsEditorScript(System.Type)
extern const MethodInfo AttributeHelperEngine_CheckIsEditorScript_m6901_MethodInfo = 
{
	"CheckIsEditorScript"/* name */
	, (methodPointerType)&AttributeHelperEngine_CheckIsEditorScript_m6901/* method */
	, &AttributeHelperEngine_t1214_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t29_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t29_Object_t/* invoker_method */
	, AttributeHelperEngine_t1214_AttributeHelperEngine_CheckIsEditorScript_m6901_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1689/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* AttributeHelperEngine_t1214_MethodInfos[] =
{
	&AttributeHelperEngine__cctor_m6898_MethodInfo,
	&AttributeHelperEngine_GetParentTypeDisallowingMultipleInclusion_m6899_MethodInfo,
	&AttributeHelperEngine_GetRequiredComponents_m6900_MethodInfo,
	&AttributeHelperEngine_CheckIsEditorScript_m6901_MethodInfo,
	NULL
};
static const Il2CppMethodReference AttributeHelperEngine_t1214_VTable[] =
{
	&Object_Equals_m252_MethodInfo,
	&Object_Finalize_m230_MethodInfo,
	&Object_GetHashCode_m172_MethodInfo,
	&Object_ToString_m253_MethodInfo,
};
static bool AttributeHelperEngine_t1214_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType AttributeHelperEngine_t1214_0_0_0;
extern const Il2CppType AttributeHelperEngine_t1214_1_0_0;
struct AttributeHelperEngine_t1214;
const Il2CppTypeDefinitionMetadata AttributeHelperEngine_t1214_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, AttributeHelperEngine_t1214_VTable/* vtableMethods */
	, AttributeHelperEngine_t1214_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 1034/* fieldStart */

};
TypeInfo AttributeHelperEngine_t1214_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "AttributeHelperEngine"/* name */
	, "UnityEngine"/* namespaze */
	, AttributeHelperEngine_t1214_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &AttributeHelperEngine_t1214_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &AttributeHelperEngine_t1214_0_0_0/* byval_arg */
	, &AttributeHelperEngine_t1214_1_0_0/* this_arg */
	, &AttributeHelperEngine_t1214_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (AttributeHelperEngine_t1214)/* instance_size */
	, sizeof (AttributeHelperEngine_t1214)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, sizeof(AttributeHelperEngine_t1214_StaticFields)/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, true/* has_cctor */
	, false/* is_blittable */
	, 4/* method_count */
	, 0/* property_count */
	, 3/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// UnityEngine.DisallowMultipleComponent
#include "UnityEngine_UnityEngine_DisallowMultipleComponent.h"
// Metadata Definition UnityEngine.DisallowMultipleComponent
extern TypeInfo DisallowMultipleComponent_t1006_il2cpp_TypeInfo;
// UnityEngine.DisallowMultipleComponent
#include "UnityEngine_UnityEngine_DisallowMultipleComponentMethodDeclarations.h"
extern void* RuntimeInvoker_Void_t57 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.DisallowMultipleComponent::.ctor()
extern const MethodInfo DisallowMultipleComponent__ctor_m5638_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&DisallowMultipleComponent__ctor_m5638/* method */
	, &DisallowMultipleComponent_t1006_il2cpp_TypeInfo/* declaring_type */
	, &Void_t57_0_0_0/* return_type */
	, RuntimeInvoker_Void_t57/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1690/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* DisallowMultipleComponent_t1006_MethodInfos[] =
{
	&DisallowMultipleComponent__ctor_m5638_MethodInfo,
	NULL
};
static const Il2CppMethodReference DisallowMultipleComponent_t1006_VTable[] =
{
	&Attribute_Equals_m3933_MethodInfo,
	&Object_Finalize_m230_MethodInfo,
	&Attribute_GetHashCode_m3934_MethodInfo,
	&Object_ToString_m253_MethodInfo,
};
static bool DisallowMultipleComponent_t1006_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair DisallowMultipleComponent_t1006_InterfacesOffsets[] = 
{
	{ &_Attribute_t716_0_0_0, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType DisallowMultipleComponent_t1006_0_0_0;
extern const Il2CppType DisallowMultipleComponent_t1006_1_0_0;
struct DisallowMultipleComponent_t1006;
const Il2CppTypeDefinitionMetadata DisallowMultipleComponent_t1006_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, DisallowMultipleComponent_t1006_InterfacesOffsets/* interfaceOffsets */
	, &Attribute_t384_0_0_0/* parent */
	, DisallowMultipleComponent_t1006_VTable/* vtableMethods */
	, DisallowMultipleComponent_t1006_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo DisallowMultipleComponent_t1006_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "DisallowMultipleComponent"/* name */
	, "UnityEngine"/* namespaze */
	, DisallowMultipleComponent_t1006_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &DisallowMultipleComponent_t1006_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 729/* custom_attributes_cache */
	, &DisallowMultipleComponent_t1006_0_0_0/* byval_arg */
	, &DisallowMultipleComponent_t1006_1_0_0/* this_arg */
	, &DisallowMultipleComponent_t1006_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (DisallowMultipleComponent_t1006)/* instance_size */
	, sizeof (DisallowMultipleComponent_t1006)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048833/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 1/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 1/* interface_offsets_count */

};
// UnityEngine.RequireComponent
#include "UnityEngine_UnityEngine_RequireComponent.h"
// Metadata Definition UnityEngine.RequireComponent
extern TypeInfo RequireComponent_t1000_il2cpp_TypeInfo;
// UnityEngine.RequireComponent
#include "UnityEngine_UnityEngine_RequireComponentMethodDeclarations.h"
extern const Il2CppType Type_t_0_0_0;
static const ParameterInfo RequireComponent_t1000_RequireComponent__ctor_m5614_ParameterInfos[] = 
{
	{"requiredComponent", 0, 134219677, 0, &Type_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t57_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.RequireComponent::.ctor(System.Type)
extern const MethodInfo RequireComponent__ctor_m5614_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&RequireComponent__ctor_m5614/* method */
	, &RequireComponent_t1000_il2cpp_TypeInfo/* declaring_type */
	, &Void_t57_0_0_0/* return_type */
	, RuntimeInvoker_Void_t57_Object_t/* invoker_method */
	, RequireComponent_t1000_RequireComponent__ctor_m5614_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1691/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* RequireComponent_t1000_MethodInfos[] =
{
	&RequireComponent__ctor_m5614_MethodInfo,
	NULL
};
static const Il2CppMethodReference RequireComponent_t1000_VTable[] =
{
	&Attribute_Equals_m3933_MethodInfo,
	&Object_Finalize_m230_MethodInfo,
	&Attribute_GetHashCode_m3934_MethodInfo,
	&Object_ToString_m253_MethodInfo,
};
static bool RequireComponent_t1000_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair RequireComponent_t1000_InterfacesOffsets[] = 
{
	{ &_Attribute_t716_0_0_0, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType RequireComponent_t1000_0_0_0;
extern const Il2CppType RequireComponent_t1000_1_0_0;
struct RequireComponent_t1000;
const Il2CppTypeDefinitionMetadata RequireComponent_t1000_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, RequireComponent_t1000_InterfacesOffsets/* interfaceOffsets */
	, &Attribute_t384_0_0_0/* parent */
	, RequireComponent_t1000_VTable/* vtableMethods */
	, RequireComponent_t1000_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 1037/* fieldStart */

};
TypeInfo RequireComponent_t1000_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "RequireComponent"/* name */
	, "UnityEngine"/* namespaze */
	, RequireComponent_t1000_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &RequireComponent_t1000_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 730/* custom_attributes_cache */
	, &RequireComponent_t1000_0_0_0/* byval_arg */
	, &RequireComponent_t1000_1_0_0/* this_arg */
	, &RequireComponent_t1000_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (RequireComponent_t1000)/* instance_size */
	, sizeof (RequireComponent_t1000)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048833/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 1/* method_count */
	, 0/* property_count */
	, 3/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 1/* interface_offsets_count */

};
// UnityEngine.AddComponentMenu
#include "UnityEngine_UnityEngine_AddComponentMenu.h"
// Metadata Definition UnityEngine.AddComponentMenu
extern TypeInfo AddComponentMenu_t997_il2cpp_TypeInfo;
// UnityEngine.AddComponentMenu
#include "UnityEngine_UnityEngine_AddComponentMenuMethodDeclarations.h"
extern const Il2CppType String_t_0_0_0;
static const ParameterInfo AddComponentMenu_t997_AddComponentMenu__ctor_m5600_ParameterInfos[] = 
{
	{"menuName", 0, 134219678, 0, &String_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t57_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.AddComponentMenu::.ctor(System.String)
extern const MethodInfo AddComponentMenu__ctor_m5600_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&AddComponentMenu__ctor_m5600/* method */
	, &AddComponentMenu_t997_il2cpp_TypeInfo/* declaring_type */
	, &Void_t57_0_0_0/* return_type */
	, RuntimeInvoker_Void_t57_Object_t/* invoker_method */
	, AddComponentMenu_t997_AddComponentMenu__ctor_m5600_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1692/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType Int32_t50_0_0_0;
static const ParameterInfo AddComponentMenu_t997_AddComponentMenu__ctor_m5632_ParameterInfos[] = 
{
	{"menuName", 0, 134219679, 0, &String_t_0_0_0},
	{"order", 1, 134219680, 0, &Int32_t50_0_0_0},
};
extern void* RuntimeInvoker_Void_t57_Object_t_Int32_t50 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.AddComponentMenu::.ctor(System.String,System.Int32)
extern const MethodInfo AddComponentMenu__ctor_m5632_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&AddComponentMenu__ctor_m5632/* method */
	, &AddComponentMenu_t997_il2cpp_TypeInfo/* declaring_type */
	, &Void_t57_0_0_0/* return_type */
	, RuntimeInvoker_Void_t57_Object_t_Int32_t50/* invoker_method */
	, AddComponentMenu_t997_AddComponentMenu__ctor_m5632_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1693/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* AddComponentMenu_t997_MethodInfos[] =
{
	&AddComponentMenu__ctor_m5600_MethodInfo,
	&AddComponentMenu__ctor_m5632_MethodInfo,
	NULL
};
static const Il2CppMethodReference AddComponentMenu_t997_VTable[] =
{
	&Attribute_Equals_m3933_MethodInfo,
	&Object_Finalize_m230_MethodInfo,
	&Attribute_GetHashCode_m3934_MethodInfo,
	&Object_ToString_m253_MethodInfo,
};
static bool AddComponentMenu_t997_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair AddComponentMenu_t997_InterfacesOffsets[] = 
{
	{ &_Attribute_t716_0_0_0, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType AddComponentMenu_t997_0_0_0;
extern const Il2CppType AddComponentMenu_t997_1_0_0;
struct AddComponentMenu_t997;
const Il2CppTypeDefinitionMetadata AddComponentMenu_t997_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, AddComponentMenu_t997_InterfacesOffsets/* interfaceOffsets */
	, &Attribute_t384_0_0_0/* parent */
	, AddComponentMenu_t997_VTable/* vtableMethods */
	, AddComponentMenu_t997_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 1040/* fieldStart */

};
TypeInfo AddComponentMenu_t997_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "AddComponentMenu"/* name */
	, "UnityEngine"/* namespaze */
	, AddComponentMenu_t997_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &AddComponentMenu_t997_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &AddComponentMenu_t997_0_0_0/* byval_arg */
	, &AddComponentMenu_t997_1_0_0/* this_arg */
	, &AddComponentMenu_t997_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (AddComponentMenu_t997)/* instance_size */
	, sizeof (AddComponentMenu_t997)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048833/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 2/* method_count */
	, 0/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 1/* interface_offsets_count */

};
// UnityEngine.ExecuteInEditMode
#include "UnityEngine_UnityEngine_ExecuteInEditMode.h"
// Metadata Definition UnityEngine.ExecuteInEditMode
extern TypeInfo ExecuteInEditMode_t1005_il2cpp_TypeInfo;
// UnityEngine.ExecuteInEditMode
#include "UnityEngine_UnityEngine_ExecuteInEditModeMethodDeclarations.h"
extern void* RuntimeInvoker_Void_t57 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.ExecuteInEditMode::.ctor()
extern const MethodInfo ExecuteInEditMode__ctor_m5637_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&ExecuteInEditMode__ctor_m5637/* method */
	, &ExecuteInEditMode_t1005_il2cpp_TypeInfo/* declaring_type */
	, &Void_t57_0_0_0/* return_type */
	, RuntimeInvoker_Void_t57/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1694/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* ExecuteInEditMode_t1005_MethodInfos[] =
{
	&ExecuteInEditMode__ctor_m5637_MethodInfo,
	NULL
};
static const Il2CppMethodReference ExecuteInEditMode_t1005_VTable[] =
{
	&Attribute_Equals_m3933_MethodInfo,
	&Object_Finalize_m230_MethodInfo,
	&Attribute_GetHashCode_m3934_MethodInfo,
	&Object_ToString_m253_MethodInfo,
};
static bool ExecuteInEditMode_t1005_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair ExecuteInEditMode_t1005_InterfacesOffsets[] = 
{
	{ &_Attribute_t716_0_0_0, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType ExecuteInEditMode_t1005_0_0_0;
extern const Il2CppType ExecuteInEditMode_t1005_1_0_0;
struct ExecuteInEditMode_t1005;
const Il2CppTypeDefinitionMetadata ExecuteInEditMode_t1005_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, ExecuteInEditMode_t1005_InterfacesOffsets/* interfaceOffsets */
	, &Attribute_t384_0_0_0/* parent */
	, ExecuteInEditMode_t1005_VTable/* vtableMethods */
	, ExecuteInEditMode_t1005_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo ExecuteInEditMode_t1005_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "ExecuteInEditMode"/* name */
	, "UnityEngine"/* namespaze */
	, ExecuteInEditMode_t1005_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &ExecuteInEditMode_t1005_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &ExecuteInEditMode_t1005_0_0_0/* byval_arg */
	, &ExecuteInEditMode_t1005_1_0_0/* this_arg */
	, &ExecuteInEditMode_t1005_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (ExecuteInEditMode_t1005)/* instance_size */
	, sizeof (ExecuteInEditMode_t1005)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048833/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 1/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 1/* interface_offsets_count */

};
// Metadata Definition UnityEngine.CastHelper`1
extern TypeInfo CastHelper_1_t1362_il2cpp_TypeInfo;
extern const Il2CppGenericContainer CastHelper_1_t1362_Il2CppGenericContainer;
extern TypeInfo CastHelper_1_t1362_gp_T_0_il2cpp_TypeInfo;
extern const Il2CppGenericParameter CastHelper_1_t1362_gp_T_0_il2cpp_TypeInfo_GenericParamFull = { &CastHelper_1_t1362_Il2CppGenericContainer, NULL, "T", 0, 0 };
static const Il2CppGenericParameter* CastHelper_1_t1362_Il2CppGenericParametersArray[1] = 
{
	&CastHelper_1_t1362_gp_T_0_il2cpp_TypeInfo_GenericParamFull,
};
extern const Il2CppGenericContainer CastHelper_1_t1362_Il2CppGenericContainer = { { NULL, NULL }, NULL, (void*)&CastHelper_1_t1362_il2cpp_TypeInfo, 1, 0, CastHelper_1_t1362_Il2CppGenericParametersArray };
static const MethodInfo* CastHelper_1_t1362_MethodInfos[] =
{
	NULL
};
extern const MethodInfo ValueType_Equals_m5702_MethodInfo;
extern const MethodInfo ValueType_GetHashCode_m5703_MethodInfo;
extern const MethodInfo ValueType_ToString_m5706_MethodInfo;
static const Il2CppMethodReference CastHelper_1_t1362_VTable[] =
{
	&ValueType_Equals_m5702_MethodInfo,
	&Object_Finalize_m230_MethodInfo,
	&ValueType_GetHashCode_m5703_MethodInfo,
	&ValueType_ToString_m5706_MethodInfo,
};
static bool CastHelper_1_t1362_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType CastHelper_1_t1362_0_0_0;
extern const Il2CppType CastHelper_1_t1362_1_0_0;
extern const Il2CppType ValueType_t1025_0_0_0;
const Il2CppTypeDefinitionMetadata CastHelper_1_t1362_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &ValueType_t1025_0_0_0/* parent */
	, CastHelper_1_t1362_VTable/* vtableMethods */
	, CastHelper_1_t1362_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 1042/* fieldStart */

};
TypeInfo CastHelper_1_t1362_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "CastHelper`1"/* name */
	, "UnityEngine"/* namespaze */
	, CastHelper_1_t1362_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &CastHelper_1_t1362_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &CastHelper_1_t1362_0_0_0/* byval_arg */
	, &CastHelper_1_t1362_1_0_0/* this_arg */
	, &CastHelper_1_t1362_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, &CastHelper_1_t1362_Il2CppGenericContainer/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* actualSize */
	, 0/* element_size */
	, 0/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048840/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, true/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 0/* method_count */
	, 0/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// UnityEngine.SetupCoroutine
#include "UnityEngine_UnityEngine_SetupCoroutine.h"
// Metadata Definition UnityEngine.SetupCoroutine
extern TypeInfo SetupCoroutine_t1215_il2cpp_TypeInfo;
// UnityEngine.SetupCoroutine
#include "UnityEngine_UnityEngine_SetupCoroutineMethodDeclarations.h"
extern void* RuntimeInvoker_Void_t57 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.SetupCoroutine::.ctor()
extern const MethodInfo SetupCoroutine__ctor_m6902_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&SetupCoroutine__ctor_m6902/* method */
	, &SetupCoroutine_t1215_il2cpp_TypeInfo/* declaring_type */
	, &Void_t57_0_0_0/* return_type */
	, RuntimeInvoker_Void_t57/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1695/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo SetupCoroutine_t1215_SetupCoroutine_InvokeMember_m6903_ParameterInfos[] = 
{
	{"behaviour", 0, 134219681, 0, &Object_t_0_0_0},
	{"name", 1, 134219682, 0, &String_t_0_0_0},
	{"variable", 2, 134219683, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Object UnityEngine.SetupCoroutine::InvokeMember(System.Object,System.String,System.Object)
extern const MethodInfo SetupCoroutine_InvokeMember_m6903_MethodInfo = 
{
	"InvokeMember"/* name */
	, (methodPointerType)&SetupCoroutine_InvokeMember_m6903/* method */
	, &SetupCoroutine_t1215_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t/* invoker_method */
	, SetupCoroutine_t1215_SetupCoroutine_InvokeMember_m6903_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1696/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Type_t_0_0_0;
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo SetupCoroutine_t1215_SetupCoroutine_InvokeStatic_m6904_ParameterInfos[] = 
{
	{"klass", 0, 134219684, 0, &Type_t_0_0_0},
	{"name", 1, 134219685, 0, &String_t_0_0_0},
	{"variable", 2, 134219686, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Object UnityEngine.SetupCoroutine::InvokeStatic(System.Type,System.String,System.Object)
extern const MethodInfo SetupCoroutine_InvokeStatic_m6904_MethodInfo = 
{
	"InvokeStatic"/* name */
	, (methodPointerType)&SetupCoroutine_InvokeStatic_m6904/* method */
	, &SetupCoroutine_t1215_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t/* invoker_method */
	, SetupCoroutine_t1215_SetupCoroutine_InvokeStatic_m6904_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1697/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* SetupCoroutine_t1215_MethodInfos[] =
{
	&SetupCoroutine__ctor_m6902_MethodInfo,
	&SetupCoroutine_InvokeMember_m6903_MethodInfo,
	&SetupCoroutine_InvokeStatic_m6904_MethodInfo,
	NULL
};
static const Il2CppMethodReference SetupCoroutine_t1215_VTable[] =
{
	&Object_Equals_m252_MethodInfo,
	&Object_Finalize_m230_MethodInfo,
	&Object_GetHashCode_m172_MethodInfo,
	&Object_ToString_m253_MethodInfo,
};
static bool SetupCoroutine_t1215_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType SetupCoroutine_t1215_0_0_0;
extern const Il2CppType SetupCoroutine_t1215_1_0_0;
struct SetupCoroutine_t1215;
const Il2CppTypeDefinitionMetadata SetupCoroutine_t1215_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, SetupCoroutine_t1215_VTable/* vtableMethods */
	, SetupCoroutine_t1215_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo SetupCoroutine_t1215_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "SetupCoroutine"/* name */
	, "UnityEngine"/* namespaze */
	, SetupCoroutine_t1215_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &SetupCoroutine_t1215_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &SetupCoroutine_t1215_0_0_0/* byval_arg */
	, &SetupCoroutine_t1215_1_0_0/* this_arg */
	, &SetupCoroutine_t1215_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (SetupCoroutine_t1215)/* instance_size */
	, sizeof (SetupCoroutine_t1215)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 3/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// UnityEngine.WritableAttribute
#include "UnityEngine_UnityEngine_WritableAttribute.h"
// Metadata Definition UnityEngine.WritableAttribute
extern TypeInfo WritableAttribute_t1216_il2cpp_TypeInfo;
// UnityEngine.WritableAttribute
#include "UnityEngine_UnityEngine_WritableAttributeMethodDeclarations.h"
extern void* RuntimeInvoker_Void_t57 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.WritableAttribute::.ctor()
extern const MethodInfo WritableAttribute__ctor_m6905_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&WritableAttribute__ctor_m6905/* method */
	, &WritableAttribute_t1216_il2cpp_TypeInfo/* declaring_type */
	, &Void_t57_0_0_0/* return_type */
	, RuntimeInvoker_Void_t57/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1698/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* WritableAttribute_t1216_MethodInfos[] =
{
	&WritableAttribute__ctor_m6905_MethodInfo,
	NULL
};
static const Il2CppMethodReference WritableAttribute_t1216_VTable[] =
{
	&Attribute_Equals_m3933_MethodInfo,
	&Object_Finalize_m230_MethodInfo,
	&Attribute_GetHashCode_m3934_MethodInfo,
	&Object_ToString_m253_MethodInfo,
};
static bool WritableAttribute_t1216_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair WritableAttribute_t1216_InterfacesOffsets[] = 
{
	{ &_Attribute_t716_0_0_0, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType WritableAttribute_t1216_0_0_0;
extern const Il2CppType WritableAttribute_t1216_1_0_0;
struct WritableAttribute_t1216;
const Il2CppTypeDefinitionMetadata WritableAttribute_t1216_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, WritableAttribute_t1216_InterfacesOffsets/* interfaceOffsets */
	, &Attribute_t384_0_0_0/* parent */
	, WritableAttribute_t1216_VTable/* vtableMethods */
	, WritableAttribute_t1216_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo WritableAttribute_t1216_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "WritableAttribute"/* name */
	, "UnityEngine"/* namespaze */
	, WritableAttribute_t1216_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &WritableAttribute_t1216_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 731/* custom_attributes_cache */
	, &WritableAttribute_t1216_0_0_0/* byval_arg */
	, &WritableAttribute_t1216_1_0_0/* this_arg */
	, &WritableAttribute_t1216_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (WritableAttribute_t1216)/* instance_size */
	, sizeof (WritableAttribute_t1216)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 1/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 1/* interface_offsets_count */

};
// UnityEngine.AssemblyIsEditorAssembly
#include "UnityEngine_UnityEngine_AssemblyIsEditorAssembly.h"
// Metadata Definition UnityEngine.AssemblyIsEditorAssembly
extern TypeInfo AssemblyIsEditorAssembly_t1217_il2cpp_TypeInfo;
// UnityEngine.AssemblyIsEditorAssembly
#include "UnityEngine_UnityEngine_AssemblyIsEditorAssemblyMethodDeclarations.h"
extern void* RuntimeInvoker_Void_t57 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.AssemblyIsEditorAssembly::.ctor()
extern const MethodInfo AssemblyIsEditorAssembly__ctor_m6906_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&AssemblyIsEditorAssembly__ctor_m6906/* method */
	, &AssemblyIsEditorAssembly_t1217_il2cpp_TypeInfo/* declaring_type */
	, &Void_t57_0_0_0/* return_type */
	, RuntimeInvoker_Void_t57/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1699/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* AssemblyIsEditorAssembly_t1217_MethodInfos[] =
{
	&AssemblyIsEditorAssembly__ctor_m6906_MethodInfo,
	NULL
};
static const Il2CppMethodReference AssemblyIsEditorAssembly_t1217_VTable[] =
{
	&Attribute_Equals_m3933_MethodInfo,
	&Object_Finalize_m230_MethodInfo,
	&Attribute_GetHashCode_m3934_MethodInfo,
	&Object_ToString_m253_MethodInfo,
};
static bool AssemblyIsEditorAssembly_t1217_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair AssemblyIsEditorAssembly_t1217_InterfacesOffsets[] = 
{
	{ &_Attribute_t716_0_0_0, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType AssemblyIsEditorAssembly_t1217_0_0_0;
extern const Il2CppType AssemblyIsEditorAssembly_t1217_1_0_0;
struct AssemblyIsEditorAssembly_t1217;
const Il2CppTypeDefinitionMetadata AssemblyIsEditorAssembly_t1217_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, AssemblyIsEditorAssembly_t1217_InterfacesOffsets/* interfaceOffsets */
	, &Attribute_t384_0_0_0/* parent */
	, AssemblyIsEditorAssembly_t1217_VTable/* vtableMethods */
	, AssemblyIsEditorAssembly_t1217_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo AssemblyIsEditorAssembly_t1217_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "AssemblyIsEditorAssembly"/* name */
	, "UnityEngine"/* namespaze */
	, AssemblyIsEditorAssembly_t1217_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &AssemblyIsEditorAssembly_t1217_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 732/* custom_attributes_cache */
	, &AssemblyIsEditorAssembly_t1217_0_0_0/* byval_arg */
	, &AssemblyIsEditorAssembly_t1217_1_0_0/* this_arg */
	, &AssemblyIsEditorAssembly_t1217_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (AssemblyIsEditorAssembly_t1217)/* instance_size */
	, sizeof (AssemblyIsEditorAssembly_t1217)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048577/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 1/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 1/* interface_offsets_count */

};
// UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcUserPro.h"
// Metadata Definition UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData
extern TypeInfo GcUserProfileData_t1218_il2cpp_TypeInfo;
// UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcUserProMethodDeclarations.h"
extern const Il2CppType UserProfile_t1230_0_0_0;
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// UnityEngine.SocialPlatforms.Impl.UserProfile UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData::ToUserProfile()
extern const MethodInfo GcUserProfileData_ToUserProfile_m6907_MethodInfo = 
{
	"ToUserProfile"/* name */
	, (methodPointerType)&GcUserProfileData_ToUserProfile_m6907/* method */
	, &GcUserProfileData_t1218_il2cpp_TypeInfo/* declaring_type */
	, &UserProfile_t1230_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1700/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType UserProfileU5BU5D_t1070_1_0_0;
extern const Il2CppType UserProfileU5BU5D_t1070_1_0_0;
extern const Il2CppType Int32_t50_0_0_0;
static const ParameterInfo GcUserProfileData_t1218_GcUserProfileData_AddToArray_m6908_ParameterInfos[] = 
{
	{"array", 0, 134219687, 0, &UserProfileU5BU5D_t1070_1_0_0},
	{"number", 1, 134219688, 0, &Int32_t50_0_0_0},
};
extern void* RuntimeInvoker_Void_t57_UserProfileU5BU5DU26_t1377_Int32_t50 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData::AddToArray(UnityEngine.SocialPlatforms.Impl.UserProfile[]&,System.Int32)
extern const MethodInfo GcUserProfileData_AddToArray_m6908_MethodInfo = 
{
	"AddToArray"/* name */
	, (methodPointerType)&GcUserProfileData_AddToArray_m6908/* method */
	, &GcUserProfileData_t1218_il2cpp_TypeInfo/* declaring_type */
	, &Void_t57_0_0_0/* return_type */
	, RuntimeInvoker_Void_t57_UserProfileU5BU5DU26_t1377_Int32_t50/* invoker_method */
	, GcUserProfileData_t1218_GcUserProfileData_AddToArray_m6908_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1701/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* GcUserProfileData_t1218_MethodInfos[] =
{
	&GcUserProfileData_ToUserProfile_m6907_MethodInfo,
	&GcUserProfileData_AddToArray_m6908_MethodInfo,
	NULL
};
static const Il2CppMethodReference GcUserProfileData_t1218_VTable[] =
{
	&ValueType_Equals_m5702_MethodInfo,
	&Object_Finalize_m230_MethodInfo,
	&ValueType_GetHashCode_m5703_MethodInfo,
	&ValueType_ToString_m5706_MethodInfo,
};
static bool GcUserProfileData_t1218_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType GcUserProfileData_t1218_0_0_0;
extern const Il2CppType GcUserProfileData_t1218_1_0_0;
const Il2CppTypeDefinitionMetadata GcUserProfileData_t1218_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &ValueType_t1025_0_0_0/* parent */
	, GcUserProfileData_t1218_VTable/* vtableMethods */
	, GcUserProfileData_t1218_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 1044/* fieldStart */

};
TypeInfo GcUserProfileData_t1218_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "GcUserProfileData"/* name */
	, "UnityEngine.SocialPlatforms.GameCenter"/* namespaze */
	, GcUserProfileData_t1218_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &GcUserProfileData_t1218_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &GcUserProfileData_t1218_0_0_0/* byval_arg */
	, &GcUserProfileData_t1218_1_0_0/* this_arg */
	, &GcUserProfileData_t1218_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (GcUserProfileData_t1218)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (GcUserProfileData_t1218)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048840/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, true/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 2/* method_count */
	, 0/* property_count */
	, 4/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcAchieve.h"
// Metadata Definition UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData
extern TypeInfo GcAchievementDescriptionData_t1219_il2cpp_TypeInfo;
// UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcAchieveMethodDeclarations.h"
extern const Il2CppType AchievementDescription_t1232_0_0_0;
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// UnityEngine.SocialPlatforms.Impl.AchievementDescription UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData::ToAchievementDescription()
extern const MethodInfo GcAchievementDescriptionData_ToAchievementDescription_m6909_MethodInfo = 
{
	"ToAchievementDescription"/* name */
	, (methodPointerType)&GcAchievementDescriptionData_ToAchievementDescription_m6909/* method */
	, &GcAchievementDescriptionData_t1219_il2cpp_TypeInfo/* declaring_type */
	, &AchievementDescription_t1232_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1702/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* GcAchievementDescriptionData_t1219_MethodInfos[] =
{
	&GcAchievementDescriptionData_ToAchievementDescription_m6909_MethodInfo,
	NULL
};
static const Il2CppMethodReference GcAchievementDescriptionData_t1219_VTable[] =
{
	&ValueType_Equals_m5702_MethodInfo,
	&Object_Finalize_m230_MethodInfo,
	&ValueType_GetHashCode_m5703_MethodInfo,
	&ValueType_ToString_m5706_MethodInfo,
};
static bool GcAchievementDescriptionData_t1219_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType GcAchievementDescriptionData_t1219_0_0_0;
extern const Il2CppType GcAchievementDescriptionData_t1219_1_0_0;
const Il2CppTypeDefinitionMetadata GcAchievementDescriptionData_t1219_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &ValueType_t1025_0_0_0/* parent */
	, GcAchievementDescriptionData_t1219_VTable/* vtableMethods */
	, GcAchievementDescriptionData_t1219_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 1048/* fieldStart */

};
TypeInfo GcAchievementDescriptionData_t1219_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "GcAchievementDescriptionData"/* name */
	, "UnityEngine.SocialPlatforms.GameCenter"/* namespaze */
	, GcAchievementDescriptionData_t1219_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &GcAchievementDescriptionData_t1219_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &GcAchievementDescriptionData_t1219_0_0_0/* byval_arg */
	, &GcAchievementDescriptionData_t1219_1_0_0/* this_arg */
	, &GcAchievementDescriptionData_t1219_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (GcAchievementDescriptionData_t1219)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (GcAchievementDescriptionData_t1219)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048840/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, true/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 1/* method_count */
	, 0/* property_count */
	, 7/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcAchieve_0.h"
// Metadata Definition UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
extern TypeInfo GcAchievementData_t1220_il2cpp_TypeInfo;
// UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcAchieve_0MethodDeclarations.h"
extern const Il2CppType Achievement_t1231_0_0_0;
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// UnityEngine.SocialPlatforms.Impl.Achievement UnityEngine.SocialPlatforms.GameCenter.GcAchievementData::ToAchievement()
extern const MethodInfo GcAchievementData_ToAchievement_m6910_MethodInfo = 
{
	"ToAchievement"/* name */
	, (methodPointerType)&GcAchievementData_ToAchievement_m6910/* method */
	, &GcAchievementData_t1220_il2cpp_TypeInfo/* declaring_type */
	, &Achievement_t1231_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1703/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* GcAchievementData_t1220_MethodInfos[] =
{
	&GcAchievementData_ToAchievement_m6910_MethodInfo,
	NULL
};
static const Il2CppMethodReference GcAchievementData_t1220_VTable[] =
{
	&ValueType_Equals_m5702_MethodInfo,
	&Object_Finalize_m230_MethodInfo,
	&ValueType_GetHashCode_m5703_MethodInfo,
	&ValueType_ToString_m5706_MethodInfo,
};
static bool GcAchievementData_t1220_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType GcAchievementData_t1220_0_0_0;
extern const Il2CppType GcAchievementData_t1220_1_0_0;
const Il2CppTypeDefinitionMetadata GcAchievementData_t1220_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &ValueType_t1025_0_0_0/* parent */
	, GcAchievementData_t1220_VTable/* vtableMethods */
	, GcAchievementData_t1220_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 1055/* fieldStart */

};
TypeInfo GcAchievementData_t1220_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "GcAchievementData"/* name */
	, "UnityEngine.SocialPlatforms.GameCenter"/* namespaze */
	, GcAchievementData_t1220_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &GcAchievementData_t1220_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &GcAchievementData_t1220_0_0_0/* byval_arg */
	, &GcAchievementData_t1220_1_0_0/* this_arg */
	, &GcAchievementData_t1220_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)GcAchievementData_t1220_marshal/* marshal_to_native_func */
	, (methodPointerType)GcAchievementData_t1220_marshal_back/* marshal_from_native_func */
	, (methodPointerType)GcAchievementData_t1220_marshal_cleanup/* marshal_cleanup_func */
	, sizeof (GcAchievementData_t1220)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (GcAchievementData_t1220)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(GcAchievementData_t1220_marshaled)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048840/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, true/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 1/* method_count */
	, 0/* property_count */
	, 5/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// UnityEngine.SocialPlatforms.GameCenter.GcScoreData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcScoreDa.h"
// Metadata Definition UnityEngine.SocialPlatforms.GameCenter.GcScoreData
extern TypeInfo GcScoreData_t1221_il2cpp_TypeInfo;
// UnityEngine.SocialPlatforms.GameCenter.GcScoreData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcScoreDaMethodDeclarations.h"
extern const Il2CppType Score_t1233_0_0_0;
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// UnityEngine.SocialPlatforms.Impl.Score UnityEngine.SocialPlatforms.GameCenter.GcScoreData::ToScore()
extern const MethodInfo GcScoreData_ToScore_m6911_MethodInfo = 
{
	"ToScore"/* name */
	, (methodPointerType)&GcScoreData_ToScore_m6911/* method */
	, &GcScoreData_t1221_il2cpp_TypeInfo/* declaring_type */
	, &Score_t1233_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1704/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* GcScoreData_t1221_MethodInfos[] =
{
	&GcScoreData_ToScore_m6911_MethodInfo,
	NULL
};
static const Il2CppMethodReference GcScoreData_t1221_VTable[] =
{
	&ValueType_Equals_m5702_MethodInfo,
	&Object_Finalize_m230_MethodInfo,
	&ValueType_GetHashCode_m5703_MethodInfo,
	&ValueType_ToString_m5706_MethodInfo,
};
static bool GcScoreData_t1221_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType GcScoreData_t1221_0_0_0;
extern const Il2CppType GcScoreData_t1221_1_0_0;
const Il2CppTypeDefinitionMetadata GcScoreData_t1221_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &ValueType_t1025_0_0_0/* parent */
	, GcScoreData_t1221_VTable/* vtableMethods */
	, GcScoreData_t1221_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 1060/* fieldStart */

};
TypeInfo GcScoreData_t1221_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "GcScoreData"/* name */
	, "UnityEngine.SocialPlatforms.GameCenter"/* namespaze */
	, GcScoreData_t1221_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &GcScoreData_t1221_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &GcScoreData_t1221_0_0_0/* byval_arg */
	, &GcScoreData_t1221_1_0_0/* this_arg */
	, &GcScoreData_t1221_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)GcScoreData_t1221_marshal/* marshal_to_native_func */
	, (methodPointerType)GcScoreData_t1221_marshal_back/* marshal_from_native_func */
	, (methodPointerType)GcScoreData_t1221_marshal_cleanup/* marshal_cleanup_func */
	, sizeof (GcScoreData_t1221)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (GcScoreData_t1221)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(GcScoreData_t1221_marshaled)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048840/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, true/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 1/* method_count */
	, 0/* property_count */
	, 7/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// UnityEngine.Resolution
#include "UnityEngine_UnityEngine_Resolution.h"
// Metadata Definition UnityEngine.Resolution
extern TypeInfo Resolution_t1222_il2cpp_TypeInfo;
// UnityEngine.Resolution
#include "UnityEngine_UnityEngine_ResolutionMethodDeclarations.h"
extern void* RuntimeInvoker_Int32_t50 (const MethodInfo* method, void* obj, void** args);
// System.Int32 UnityEngine.Resolution::get_width()
extern const MethodInfo Resolution_get_width_m6912_MethodInfo = 
{
	"get_width"/* name */
	, (methodPointerType)&Resolution_get_width_m6912/* method */
	, &Resolution_t1222_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t50_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t50/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1705/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t50_0_0_0;
static const ParameterInfo Resolution_t1222_Resolution_set_width_m6913_ParameterInfos[] = 
{
	{"value", 0, 134219689, 0, &Int32_t50_0_0_0},
};
extern void* RuntimeInvoker_Void_t57_Int32_t50 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Resolution::set_width(System.Int32)
extern const MethodInfo Resolution_set_width_m6913_MethodInfo = 
{
	"set_width"/* name */
	, (methodPointerType)&Resolution_set_width_m6913/* method */
	, &Resolution_t1222_il2cpp_TypeInfo/* declaring_type */
	, &Void_t57_0_0_0/* return_type */
	, RuntimeInvoker_Void_t57_Int32_t50/* invoker_method */
	, Resolution_t1222_Resolution_set_width_m6913_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1706/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Int32_t50 (const MethodInfo* method, void* obj, void** args);
// System.Int32 UnityEngine.Resolution::get_height()
extern const MethodInfo Resolution_get_height_m6914_MethodInfo = 
{
	"get_height"/* name */
	, (methodPointerType)&Resolution_get_height_m6914/* method */
	, &Resolution_t1222_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t50_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t50/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1707/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t50_0_0_0;
static const ParameterInfo Resolution_t1222_Resolution_set_height_m6915_ParameterInfos[] = 
{
	{"value", 0, 134219690, 0, &Int32_t50_0_0_0},
};
extern void* RuntimeInvoker_Void_t57_Int32_t50 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Resolution::set_height(System.Int32)
extern const MethodInfo Resolution_set_height_m6915_MethodInfo = 
{
	"set_height"/* name */
	, (methodPointerType)&Resolution_set_height_m6915/* method */
	, &Resolution_t1222_il2cpp_TypeInfo/* declaring_type */
	, &Void_t57_0_0_0/* return_type */
	, RuntimeInvoker_Void_t57_Int32_t50/* invoker_method */
	, Resolution_t1222_Resolution_set_height_m6915_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1708/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Int32_t50 (const MethodInfo* method, void* obj, void** args);
// System.Int32 UnityEngine.Resolution::get_refreshRate()
extern const MethodInfo Resolution_get_refreshRate_m6916_MethodInfo = 
{
	"get_refreshRate"/* name */
	, (methodPointerType)&Resolution_get_refreshRate_m6916/* method */
	, &Resolution_t1222_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t50_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t50/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1709/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t50_0_0_0;
static const ParameterInfo Resolution_t1222_Resolution_set_refreshRate_m6917_ParameterInfos[] = 
{
	{"value", 0, 134219691, 0, &Int32_t50_0_0_0},
};
extern void* RuntimeInvoker_Void_t57_Int32_t50 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Resolution::set_refreshRate(System.Int32)
extern const MethodInfo Resolution_set_refreshRate_m6917_MethodInfo = 
{
	"set_refreshRate"/* name */
	, (methodPointerType)&Resolution_set_refreshRate_m6917/* method */
	, &Resolution_t1222_il2cpp_TypeInfo/* declaring_type */
	, &Void_t57_0_0_0/* return_type */
	, RuntimeInvoker_Void_t57_Int32_t50/* invoker_method */
	, Resolution_t1222_Resolution_set_refreshRate_m6917_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1710/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String UnityEngine.Resolution::ToString()
extern const MethodInfo Resolution_ToString_m6918_MethodInfo = 
{
	"ToString"/* name */
	, (methodPointerType)&Resolution_ToString_m6918/* method */
	, &Resolution_t1222_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1711/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* Resolution_t1222_MethodInfos[] =
{
	&Resolution_get_width_m6912_MethodInfo,
	&Resolution_set_width_m6913_MethodInfo,
	&Resolution_get_height_m6914_MethodInfo,
	&Resolution_set_height_m6915_MethodInfo,
	&Resolution_get_refreshRate_m6916_MethodInfo,
	&Resolution_set_refreshRate_m6917_MethodInfo,
	&Resolution_ToString_m6918_MethodInfo,
	NULL
};
extern const MethodInfo Resolution_get_width_m6912_MethodInfo;
extern const MethodInfo Resolution_set_width_m6913_MethodInfo;
static const PropertyInfo Resolution_t1222____width_PropertyInfo = 
{
	&Resolution_t1222_il2cpp_TypeInfo/* parent */
	, "width"/* name */
	, &Resolution_get_width_m6912_MethodInfo/* get */
	, &Resolution_set_width_m6913_MethodInfo/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo Resolution_get_height_m6914_MethodInfo;
extern const MethodInfo Resolution_set_height_m6915_MethodInfo;
static const PropertyInfo Resolution_t1222____height_PropertyInfo = 
{
	&Resolution_t1222_il2cpp_TypeInfo/* parent */
	, "height"/* name */
	, &Resolution_get_height_m6914_MethodInfo/* get */
	, &Resolution_set_height_m6915_MethodInfo/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo Resolution_get_refreshRate_m6916_MethodInfo;
extern const MethodInfo Resolution_set_refreshRate_m6917_MethodInfo;
static const PropertyInfo Resolution_t1222____refreshRate_PropertyInfo = 
{
	&Resolution_t1222_il2cpp_TypeInfo/* parent */
	, "refreshRate"/* name */
	, &Resolution_get_refreshRate_m6916_MethodInfo/* get */
	, &Resolution_set_refreshRate_m6917_MethodInfo/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
static const PropertyInfo* Resolution_t1222_PropertyInfos[] =
{
	&Resolution_t1222____width_PropertyInfo,
	&Resolution_t1222____height_PropertyInfo,
	&Resolution_t1222____refreshRate_PropertyInfo,
	NULL
};
extern const MethodInfo Resolution_ToString_m6918_MethodInfo;
static const Il2CppMethodReference Resolution_t1222_VTable[] =
{
	&ValueType_Equals_m5702_MethodInfo,
	&Object_Finalize_m230_MethodInfo,
	&ValueType_GetHashCode_m5703_MethodInfo,
	&Resolution_ToString_m6918_MethodInfo,
};
static bool Resolution_t1222_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType Resolution_t1222_0_0_0;
extern const Il2CppType Resolution_t1222_1_0_0;
const Il2CppTypeDefinitionMetadata Resolution_t1222_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &ValueType_t1025_0_0_0/* parent */
	, Resolution_t1222_VTable/* vtableMethods */
	, Resolution_t1222_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 1067/* fieldStart */

};
TypeInfo Resolution_t1222_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "Resolution"/* name */
	, "UnityEngine"/* namespaze */
	, Resolution_t1222_MethodInfos/* methods */
	, Resolution_t1222_PropertyInfos/* properties */
	, NULL/* events */
	, &Resolution_t1222_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &Resolution_t1222_0_0_0/* byval_arg */
	, &Resolution_t1222_1_0_0/* this_arg */
	, &Resolution_t1222_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (Resolution_t1222)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (Resolution_t1222)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(Resolution_t1222 )/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048841/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, true/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, true/* is_blittable */
	, 7/* method_count */
	, 3/* property_count */
	, 3/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// UnityEngine.RenderBuffer
#include "UnityEngine_UnityEngine_RenderBuffer.h"
// Metadata Definition UnityEngine.RenderBuffer
extern TypeInfo RenderBuffer_t1223_il2cpp_TypeInfo;
// UnityEngine.RenderBuffer
#include "UnityEngine_UnityEngine_RenderBufferMethodDeclarations.h"
static const MethodInfo* RenderBuffer_t1223_MethodInfos[] =
{
	NULL
};
static const Il2CppMethodReference RenderBuffer_t1223_VTable[] =
{
	&ValueType_Equals_m5702_MethodInfo,
	&Object_Finalize_m230_MethodInfo,
	&ValueType_GetHashCode_m5703_MethodInfo,
	&ValueType_ToString_m5706_MethodInfo,
};
static bool RenderBuffer_t1223_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType RenderBuffer_t1223_0_0_0;
extern const Il2CppType RenderBuffer_t1223_1_0_0;
const Il2CppTypeDefinitionMetadata RenderBuffer_t1223_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &ValueType_t1025_0_0_0/* parent */
	, RenderBuffer_t1223_VTable/* vtableMethods */
	, RenderBuffer_t1223_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 1070/* fieldStart */

};
TypeInfo RenderBuffer_t1223_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "RenderBuffer"/* name */
	, "UnityEngine"/* namespaze */
	, RenderBuffer_t1223_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &RenderBuffer_t1223_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &RenderBuffer_t1223_0_0_0/* byval_arg */
	, &RenderBuffer_t1223_1_0_0/* this_arg */
	, &RenderBuffer_t1223_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (RenderBuffer_t1223)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (RenderBuffer_t1223)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(RenderBuffer_t1223 )/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048841/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, true/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, true/* is_blittable */
	, 0/* method_count */
	, 0/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// UnityEngine.CameraClearFlags
#include "UnityEngine_UnityEngine_CameraClearFlags.h"
// Metadata Definition UnityEngine.CameraClearFlags
extern TypeInfo CameraClearFlags_t1224_il2cpp_TypeInfo;
// UnityEngine.CameraClearFlags
#include "UnityEngine_UnityEngine_CameraClearFlagsMethodDeclarations.h"
static const MethodInfo* CameraClearFlags_t1224_MethodInfos[] =
{
	NULL
};
extern const MethodInfo Enum_Equals_m229_MethodInfo;
extern const MethodInfo Enum_GetHashCode_m231_MethodInfo;
extern const MethodInfo Enum_ToString_m232_MethodInfo;
extern const MethodInfo Enum_ToString_m233_MethodInfo;
extern const MethodInfo Enum_System_IConvertible_ToBoolean_m234_MethodInfo;
extern const MethodInfo Enum_System_IConvertible_ToByte_m235_MethodInfo;
extern const MethodInfo Enum_System_IConvertible_ToChar_m236_MethodInfo;
extern const MethodInfo Enum_System_IConvertible_ToDateTime_m237_MethodInfo;
extern const MethodInfo Enum_System_IConvertible_ToDecimal_m238_MethodInfo;
extern const MethodInfo Enum_System_IConvertible_ToDouble_m239_MethodInfo;
extern const MethodInfo Enum_System_IConvertible_ToInt16_m240_MethodInfo;
extern const MethodInfo Enum_System_IConvertible_ToInt32_m241_MethodInfo;
extern const MethodInfo Enum_System_IConvertible_ToInt64_m242_MethodInfo;
extern const MethodInfo Enum_System_IConvertible_ToSByte_m243_MethodInfo;
extern const MethodInfo Enum_System_IConvertible_ToSingle_m244_MethodInfo;
extern const MethodInfo Enum_ToString_m245_MethodInfo;
extern const MethodInfo Enum_System_IConvertible_ToType_m246_MethodInfo;
extern const MethodInfo Enum_System_IConvertible_ToUInt16_m247_MethodInfo;
extern const MethodInfo Enum_System_IConvertible_ToUInt32_m248_MethodInfo;
extern const MethodInfo Enum_System_IConvertible_ToUInt64_m249_MethodInfo;
extern const MethodInfo Enum_CompareTo_m250_MethodInfo;
extern const MethodInfo Enum_GetTypeCode_m251_MethodInfo;
static const Il2CppMethodReference CameraClearFlags_t1224_VTable[] =
{
	&Enum_Equals_m229_MethodInfo,
	&Object_Finalize_m230_MethodInfo,
	&Enum_GetHashCode_m231_MethodInfo,
	&Enum_ToString_m232_MethodInfo,
	&Enum_ToString_m233_MethodInfo,
	&Enum_System_IConvertible_ToBoolean_m234_MethodInfo,
	&Enum_System_IConvertible_ToByte_m235_MethodInfo,
	&Enum_System_IConvertible_ToChar_m236_MethodInfo,
	&Enum_System_IConvertible_ToDateTime_m237_MethodInfo,
	&Enum_System_IConvertible_ToDecimal_m238_MethodInfo,
	&Enum_System_IConvertible_ToDouble_m239_MethodInfo,
	&Enum_System_IConvertible_ToInt16_m240_MethodInfo,
	&Enum_System_IConvertible_ToInt32_m241_MethodInfo,
	&Enum_System_IConvertible_ToInt64_m242_MethodInfo,
	&Enum_System_IConvertible_ToSByte_m243_MethodInfo,
	&Enum_System_IConvertible_ToSingle_m244_MethodInfo,
	&Enum_ToString_m245_MethodInfo,
	&Enum_System_IConvertible_ToType_m246_MethodInfo,
	&Enum_System_IConvertible_ToUInt16_m247_MethodInfo,
	&Enum_System_IConvertible_ToUInt32_m248_MethodInfo,
	&Enum_System_IConvertible_ToUInt64_m249_MethodInfo,
	&Enum_CompareTo_m250_MethodInfo,
	&Enum_GetTypeCode_m251_MethodInfo,
};
static bool CameraClearFlags_t1224_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
extern const Il2CppType IFormattable_t53_0_0_0;
extern const Il2CppType IConvertible_t54_0_0_0;
extern const Il2CppType IComparable_t55_0_0_0;
static Il2CppInterfaceOffsetPair CameraClearFlags_t1224_InterfacesOffsets[] = 
{
	{ &IFormattable_t53_0_0_0, 4},
	{ &IConvertible_t54_0_0_0, 5},
	{ &IComparable_t55_0_0_0, 21},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType CameraClearFlags_t1224_0_0_0;
extern const Il2CppType CameraClearFlags_t1224_1_0_0;
// System.Int32
#include "mscorlib_System_Int32.h"
extern TypeInfo Int32_t50_il2cpp_TypeInfo;
const Il2CppTypeDefinitionMetadata CameraClearFlags_t1224_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, CameraClearFlags_t1224_InterfacesOffsets/* interfaceOffsets */
	, &Enum_t56_0_0_0/* parent */
	, CameraClearFlags_t1224_VTable/* vtableMethods */
	, CameraClearFlags_t1224_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 1072/* fieldStart */

};
TypeInfo CameraClearFlags_t1224_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "CameraClearFlags"/* name */
	, "UnityEngine"/* namespaze */
	, CameraClearFlags_t1224_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &Int32_t50_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &CameraClearFlags_t1224_0_0_0/* byval_arg */
	, &CameraClearFlags_t1224_1_0_0/* this_arg */
	, &CameraClearFlags_t1224_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CameraClearFlags_t1224)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (CameraClearFlags_t1224)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(int32_t)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 257/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, true/* valuetype */
	, false/* initialized */
	, true/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 0/* method_count */
	, 0/* property_count */
	, 6/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 23/* vtable_count */
	, 0/* interfaces_count */
	, 3/* interface_offsets_count */

};
// UnityEngine.ScreenOrientation
#include "UnityEngine_UnityEngine_ScreenOrientation.h"
// Metadata Definition UnityEngine.ScreenOrientation
extern TypeInfo ScreenOrientation_t707_il2cpp_TypeInfo;
// UnityEngine.ScreenOrientation
#include "UnityEngine_UnityEngine_ScreenOrientationMethodDeclarations.h"
static const MethodInfo* ScreenOrientation_t707_MethodInfos[] =
{
	NULL
};
static const Il2CppMethodReference ScreenOrientation_t707_VTable[] =
{
	&Enum_Equals_m229_MethodInfo,
	&Object_Finalize_m230_MethodInfo,
	&Enum_GetHashCode_m231_MethodInfo,
	&Enum_ToString_m232_MethodInfo,
	&Enum_ToString_m233_MethodInfo,
	&Enum_System_IConvertible_ToBoolean_m234_MethodInfo,
	&Enum_System_IConvertible_ToByte_m235_MethodInfo,
	&Enum_System_IConvertible_ToChar_m236_MethodInfo,
	&Enum_System_IConvertible_ToDateTime_m237_MethodInfo,
	&Enum_System_IConvertible_ToDecimal_m238_MethodInfo,
	&Enum_System_IConvertible_ToDouble_m239_MethodInfo,
	&Enum_System_IConvertible_ToInt16_m240_MethodInfo,
	&Enum_System_IConvertible_ToInt32_m241_MethodInfo,
	&Enum_System_IConvertible_ToInt64_m242_MethodInfo,
	&Enum_System_IConvertible_ToSByte_m243_MethodInfo,
	&Enum_System_IConvertible_ToSingle_m244_MethodInfo,
	&Enum_ToString_m245_MethodInfo,
	&Enum_System_IConvertible_ToType_m246_MethodInfo,
	&Enum_System_IConvertible_ToUInt16_m247_MethodInfo,
	&Enum_System_IConvertible_ToUInt32_m248_MethodInfo,
	&Enum_System_IConvertible_ToUInt64_m249_MethodInfo,
	&Enum_CompareTo_m250_MethodInfo,
	&Enum_GetTypeCode_m251_MethodInfo,
};
static bool ScreenOrientation_t707_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair ScreenOrientation_t707_InterfacesOffsets[] = 
{
	{ &IFormattable_t53_0_0_0, 4},
	{ &IConvertible_t54_0_0_0, 5},
	{ &IComparable_t55_0_0_0, 21},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType ScreenOrientation_t707_0_0_0;
extern const Il2CppType ScreenOrientation_t707_1_0_0;
const Il2CppTypeDefinitionMetadata ScreenOrientation_t707_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, ScreenOrientation_t707_InterfacesOffsets/* interfaceOffsets */
	, &Enum_t56_0_0_0/* parent */
	, ScreenOrientation_t707_VTable/* vtableMethods */
	, ScreenOrientation_t707_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 1078/* fieldStart */

};
TypeInfo ScreenOrientation_t707_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "ScreenOrientation"/* name */
	, "UnityEngine"/* namespaze */
	, ScreenOrientation_t707_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &Int32_t50_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &ScreenOrientation_t707_0_0_0/* byval_arg */
	, &ScreenOrientation_t707_1_0_0/* this_arg */
	, &ScreenOrientation_t707_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (ScreenOrientation_t707)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (ScreenOrientation_t707)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(int32_t)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 257/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, true/* valuetype */
	, false/* initialized */
	, true/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 0/* method_count */
	, 0/* property_count */
	, 8/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 23/* vtable_count */
	, 0/* interfaces_count */
	, 3/* interface_offsets_count */

};
// UnityEngine.TextureFormat
#include "UnityEngine_UnityEngine_TextureFormat.h"
// Metadata Definition UnityEngine.TextureFormat
extern TypeInfo TextureFormat_t1225_il2cpp_TypeInfo;
// UnityEngine.TextureFormat
#include "UnityEngine_UnityEngine_TextureFormatMethodDeclarations.h"
static const MethodInfo* TextureFormat_t1225_MethodInfos[] =
{
	NULL
};
static const Il2CppMethodReference TextureFormat_t1225_VTable[] =
{
	&Enum_Equals_m229_MethodInfo,
	&Object_Finalize_m230_MethodInfo,
	&Enum_GetHashCode_m231_MethodInfo,
	&Enum_ToString_m232_MethodInfo,
	&Enum_ToString_m233_MethodInfo,
	&Enum_System_IConvertible_ToBoolean_m234_MethodInfo,
	&Enum_System_IConvertible_ToByte_m235_MethodInfo,
	&Enum_System_IConvertible_ToChar_m236_MethodInfo,
	&Enum_System_IConvertible_ToDateTime_m237_MethodInfo,
	&Enum_System_IConvertible_ToDecimal_m238_MethodInfo,
	&Enum_System_IConvertible_ToDouble_m239_MethodInfo,
	&Enum_System_IConvertible_ToInt16_m240_MethodInfo,
	&Enum_System_IConvertible_ToInt32_m241_MethodInfo,
	&Enum_System_IConvertible_ToInt64_m242_MethodInfo,
	&Enum_System_IConvertible_ToSByte_m243_MethodInfo,
	&Enum_System_IConvertible_ToSingle_m244_MethodInfo,
	&Enum_ToString_m245_MethodInfo,
	&Enum_System_IConvertible_ToType_m246_MethodInfo,
	&Enum_System_IConvertible_ToUInt16_m247_MethodInfo,
	&Enum_System_IConvertible_ToUInt32_m248_MethodInfo,
	&Enum_System_IConvertible_ToUInt64_m249_MethodInfo,
	&Enum_CompareTo_m250_MethodInfo,
	&Enum_GetTypeCode_m251_MethodInfo,
};
static bool TextureFormat_t1225_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair TextureFormat_t1225_InterfacesOffsets[] = 
{
	{ &IFormattable_t53_0_0_0, 4},
	{ &IConvertible_t54_0_0_0, 5},
	{ &IComparable_t55_0_0_0, 21},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType TextureFormat_t1225_0_0_0;
extern const Il2CppType TextureFormat_t1225_1_0_0;
const Il2CppTypeDefinitionMetadata TextureFormat_t1225_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, TextureFormat_t1225_InterfacesOffsets/* interfaceOffsets */
	, &Enum_t56_0_0_0/* parent */
	, TextureFormat_t1225_VTable/* vtableMethods */
	, TextureFormat_t1225_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 1086/* fieldStart */

};
TypeInfo TextureFormat_t1225_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "TextureFormat"/* name */
	, "UnityEngine"/* namespaze */
	, TextureFormat_t1225_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &Int32_t50_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &TextureFormat_t1225_0_0_0/* byval_arg */
	, &TextureFormat_t1225_1_0_0/* this_arg */
	, &TextureFormat_t1225_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (TextureFormat_t1225)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (TextureFormat_t1225)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(int32_t)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 257/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, true/* valuetype */
	, false/* initialized */
	, true/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 0/* method_count */
	, 0/* property_count */
	, 45/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 23/* vtable_count */
	, 0/* interfaces_count */
	, 3/* interface_offsets_count */

};
// UnityEngine.Rendering.ReflectionProbeBlendInfo
#include "UnityEngine_UnityEngine_Rendering_ReflectionProbeBlendInfo.h"
// Metadata Definition UnityEngine.Rendering.ReflectionProbeBlendInfo
extern TypeInfo ReflectionProbeBlendInfo_t1226_il2cpp_TypeInfo;
// UnityEngine.Rendering.ReflectionProbeBlendInfo
#include "UnityEngine_UnityEngine_Rendering_ReflectionProbeBlendInfoMethodDeclarations.h"
static const MethodInfo* ReflectionProbeBlendInfo_t1226_MethodInfos[] =
{
	NULL
};
static const Il2CppMethodReference ReflectionProbeBlendInfo_t1226_VTable[] =
{
	&ValueType_Equals_m5702_MethodInfo,
	&Object_Finalize_m230_MethodInfo,
	&ValueType_GetHashCode_m5703_MethodInfo,
	&ValueType_ToString_m5706_MethodInfo,
};
static bool ReflectionProbeBlendInfo_t1226_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType ReflectionProbeBlendInfo_t1226_0_0_0;
extern const Il2CppType ReflectionProbeBlendInfo_t1226_1_0_0;
const Il2CppTypeDefinitionMetadata ReflectionProbeBlendInfo_t1226_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &ValueType_t1025_0_0_0/* parent */
	, ReflectionProbeBlendInfo_t1226_VTable/* vtableMethods */
	, ReflectionProbeBlendInfo_t1226_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 1131/* fieldStart */

};
TypeInfo ReflectionProbeBlendInfo_t1226_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "ReflectionProbeBlendInfo"/* name */
	, "UnityEngine.Rendering"/* namespaze */
	, ReflectionProbeBlendInfo_t1226_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &ReflectionProbeBlendInfo_t1226_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &ReflectionProbeBlendInfo_t1226_0_0_0/* byval_arg */
	, &ReflectionProbeBlendInfo_t1226_1_0_0/* this_arg */
	, &ReflectionProbeBlendInfo_t1226_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (ReflectionProbeBlendInfo_t1226)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (ReflectionProbeBlendInfo_t1226)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048841/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, true/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 0/* method_count */
	, 0/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// UnityEngine.GUIStateObjects
#include "UnityEngine_UnityEngine_GUIStateObjects.h"
// Metadata Definition UnityEngine.GUIStateObjects
extern TypeInfo GUIStateObjects_t1228_il2cpp_TypeInfo;
// UnityEngine.GUIStateObjects
#include "UnityEngine_UnityEngine_GUIStateObjectsMethodDeclarations.h"
extern void* RuntimeInvoker_Void_t57 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.GUIStateObjects::.cctor()
extern const MethodInfo GUIStateObjects__cctor_m6919_MethodInfo = 
{
	".cctor"/* name */
	, (methodPointerType)&GUIStateObjects__cctor_m6919/* method */
	, &GUIStateObjects_t1228_il2cpp_TypeInfo/* declaring_type */
	, &Void_t57_0_0_0/* return_type */
	, RuntimeInvoker_Void_t57/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 6161/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1712/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Type_t_0_0_0;
extern const Il2CppType Int32_t50_0_0_0;
static const ParameterInfo GUIStateObjects_t1228_GUIStateObjects_GetStateObject_m6920_ParameterInfos[] = 
{
	{"t", 0, 134219692, 0, &Type_t_0_0_0},
	{"controlID", 1, 134219693, 0, &Int32_t50_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t_Int32_t50 (const MethodInfo* method, void* obj, void** args);
// System.Object UnityEngine.GUIStateObjects::GetStateObject(System.Type,System.Int32)
extern const MethodInfo GUIStateObjects_GetStateObject_m6920_MethodInfo = 
{
	"GetStateObject"/* name */
	, (methodPointerType)&GUIStateObjects_GetStateObject_m6920/* method */
	, &GUIStateObjects_t1228_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Int32_t50/* invoker_method */
	, GUIStateObjects_t1228_GUIStateObjects_GetStateObject_m6920_ParameterInfos/* parameters */
	, 733/* custom_attributes_cache */
	, 147/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1713/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* GUIStateObjects_t1228_MethodInfos[] =
{
	&GUIStateObjects__cctor_m6919_MethodInfo,
	&GUIStateObjects_GetStateObject_m6920_MethodInfo,
	NULL
};
static const Il2CppMethodReference GUIStateObjects_t1228_VTable[] =
{
	&Object_Equals_m252_MethodInfo,
	&Object_Finalize_m230_MethodInfo,
	&Object_GetHashCode_m172_MethodInfo,
	&Object_ToString_m253_MethodInfo,
};
static bool GUIStateObjects_t1228_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType GUIStateObjects_t1228_0_0_0;
extern const Il2CppType GUIStateObjects_t1228_1_0_0;
struct GUIStateObjects_t1228;
const Il2CppTypeDefinitionMetadata GUIStateObjects_t1228_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, GUIStateObjects_t1228_VTable/* vtableMethods */
	, GUIStateObjects_t1228_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 1133/* fieldStart */

};
TypeInfo GUIStateObjects_t1228_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "GUIStateObjects"/* name */
	, "UnityEngine"/* namespaze */
	, GUIStateObjects_t1228_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &GUIStateObjects_t1228_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &GUIStateObjects_t1228_0_0_0/* byval_arg */
	, &GUIStateObjects_t1228_1_0_0/* this_arg */
	, &GUIStateObjects_t1228_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (GUIStateObjects_t1228)/* instance_size */
	, sizeof (GUIStateObjects_t1228)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, sizeof(GUIStateObjects_t1228_StaticFields)/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, true/* has_cctor */
	, false/* is_blittable */
	, 2/* method_count */
	, 0/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// UnityEngine.SocialPlatforms.Impl.LocalUser
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_LocalUser.h"
// Metadata Definition UnityEngine.SocialPlatforms.Impl.LocalUser
extern TypeInfo LocalUser_t1071_il2cpp_TypeInfo;
// UnityEngine.SocialPlatforms.Impl.LocalUser
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_LocalUserMethodDeclarations.h"
extern void* RuntimeInvoker_Void_t57 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.SocialPlatforms.Impl.LocalUser::.ctor()
extern const MethodInfo LocalUser__ctor_m6921_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&LocalUser__ctor_m6921/* method */
	, &LocalUser_t1071_il2cpp_TypeInfo/* declaring_type */
	, &Void_t57_0_0_0/* return_type */
	, RuntimeInvoker_Void_t57/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1714/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Action_1_t235_0_0_0;
extern const Il2CppType Action_1_t235_0_0_0;
static const ParameterInfo LocalUser_t1071_LocalUser_Authenticate_m6922_ParameterInfos[] = 
{
	{"callback", 0, 134219694, 0, &Action_1_t235_0_0_0},
};
extern void* RuntimeInvoker_Void_t57_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.SocialPlatforms.Impl.LocalUser::Authenticate(System.Action`1<System.Boolean>)
extern const MethodInfo LocalUser_Authenticate_m6922_MethodInfo = 
{
	"Authenticate"/* name */
	, (methodPointerType)&LocalUser_Authenticate_m6922/* method */
	, &LocalUser_t1071_il2cpp_TypeInfo/* declaring_type */
	, &Void_t57_0_0_0/* return_type */
	, RuntimeInvoker_Void_t57_Object_t/* invoker_method */
	, LocalUser_t1071_LocalUser_Authenticate_m6922_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1715/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType IUserProfileU5BU5D_t1229_0_0_0;
extern const Il2CppType IUserProfileU5BU5D_t1229_0_0_0;
static const ParameterInfo LocalUser_t1071_LocalUser_SetFriends_m6923_ParameterInfos[] = 
{
	{"friends", 0, 134219695, 0, &IUserProfileU5BU5D_t1229_0_0_0},
};
extern void* RuntimeInvoker_Void_t57_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.SocialPlatforms.Impl.LocalUser::SetFriends(UnityEngine.SocialPlatforms.IUserProfile[])
extern const MethodInfo LocalUser_SetFriends_m6923_MethodInfo = 
{
	"SetFriends"/* name */
	, (methodPointerType)&LocalUser_SetFriends_m6923/* method */
	, &LocalUser_t1071_il2cpp_TypeInfo/* declaring_type */
	, &Void_t57_0_0_0/* return_type */
	, RuntimeInvoker_Void_t57_Object_t/* invoker_method */
	, LocalUser_t1071_LocalUser_SetFriends_m6923_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1716/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Boolean_t29_0_0_0;
static const ParameterInfo LocalUser_t1071_LocalUser_SetAuthenticated_m6924_ParameterInfos[] = 
{
	{"value", 0, 134219696, 0, &Boolean_t29_0_0_0},
};
extern void* RuntimeInvoker_Void_t57_SByte_t61 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.SocialPlatforms.Impl.LocalUser::SetAuthenticated(System.Boolean)
extern const MethodInfo LocalUser_SetAuthenticated_m6924_MethodInfo = 
{
	"SetAuthenticated"/* name */
	, (methodPointerType)&LocalUser_SetAuthenticated_m6924/* method */
	, &LocalUser_t1071_il2cpp_TypeInfo/* declaring_type */
	, &Void_t57_0_0_0/* return_type */
	, RuntimeInvoker_Void_t57_SByte_t61/* invoker_method */
	, LocalUser_t1071_LocalUser_SetAuthenticated_m6924_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1717/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Boolean_t29_0_0_0;
static const ParameterInfo LocalUser_t1071_LocalUser_SetUnderage_m6925_ParameterInfos[] = 
{
	{"value", 0, 134219697, 0, &Boolean_t29_0_0_0},
};
extern void* RuntimeInvoker_Void_t57_SByte_t61 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.SocialPlatforms.Impl.LocalUser::SetUnderage(System.Boolean)
extern const MethodInfo LocalUser_SetUnderage_m6925_MethodInfo = 
{
	"SetUnderage"/* name */
	, (methodPointerType)&LocalUser_SetUnderage_m6925/* method */
	, &LocalUser_t1071_il2cpp_TypeInfo/* declaring_type */
	, &Void_t57_0_0_0/* return_type */
	, RuntimeInvoker_Void_t57_SByte_t61/* invoker_method */
	, LocalUser_t1071_LocalUser_SetUnderage_m6925_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1718/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Boolean_t29 (const MethodInfo* method, void* obj, void** args);
// System.Boolean UnityEngine.SocialPlatforms.Impl.LocalUser::get_authenticated()
extern const MethodInfo LocalUser_get_authenticated_m6926_MethodInfo = 
{
	"get_authenticated"/* name */
	, (methodPointerType)&LocalUser_get_authenticated_m6926/* method */
	, &LocalUser_t1071_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t29_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t29/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 9/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1719/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Boolean_t29 (const MethodInfo* method, void* obj, void** args);
// System.Boolean UnityEngine.SocialPlatforms.Impl.LocalUser::get_underage()
extern const MethodInfo LocalUser_get_underage_m6927_MethodInfo = 
{
	"get_underage"/* name */
	, (methodPointerType)&LocalUser_get_underage_m6927/* method */
	, &LocalUser_t1071_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t29_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t29/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 10/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1720/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* LocalUser_t1071_MethodInfos[] =
{
	&LocalUser__ctor_m6921_MethodInfo,
	&LocalUser_Authenticate_m6922_MethodInfo,
	&LocalUser_SetFriends_m6923_MethodInfo,
	&LocalUser_SetAuthenticated_m6924_MethodInfo,
	&LocalUser_SetUnderage_m6925_MethodInfo,
	&LocalUser_get_authenticated_m6926_MethodInfo,
	&LocalUser_get_underage_m6927_MethodInfo,
	NULL
};
extern const MethodInfo LocalUser_get_authenticated_m6926_MethodInfo;
static const PropertyInfo LocalUser_t1071____authenticated_PropertyInfo = 
{
	&LocalUser_t1071_il2cpp_TypeInfo/* parent */
	, "authenticated"/* name */
	, &LocalUser_get_authenticated_m6926_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo LocalUser_get_underage_m6927_MethodInfo;
static const PropertyInfo LocalUser_t1071____underage_PropertyInfo = 
{
	&LocalUser_t1071_il2cpp_TypeInfo/* parent */
	, "underage"/* name */
	, &LocalUser_get_underage_m6927_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
static const PropertyInfo* LocalUser_t1071_PropertyInfos[] =
{
	&LocalUser_t1071____authenticated_PropertyInfo,
	&LocalUser_t1071____underage_PropertyInfo,
	NULL
};
extern const MethodInfo UserProfile_ToString_m6930_MethodInfo;
extern const MethodInfo UserProfile_get_userName_m6934_MethodInfo;
extern const MethodInfo UserProfile_get_id_m6935_MethodInfo;
extern const MethodInfo UserProfile_get_isFriend_m6936_MethodInfo;
extern const MethodInfo UserProfile_get_state_m6937_MethodInfo;
extern const MethodInfo LocalUser_Authenticate_m6922_MethodInfo;
static const Il2CppMethodReference LocalUser_t1071_VTable[] =
{
	&Object_Equals_m252_MethodInfo,
	&Object_Finalize_m230_MethodInfo,
	&Object_GetHashCode_m172_MethodInfo,
	&UserProfile_ToString_m6930_MethodInfo,
	&UserProfile_get_userName_m6934_MethodInfo,
	&UserProfile_get_id_m6935_MethodInfo,
	&UserProfile_get_isFriend_m6936_MethodInfo,
	&UserProfile_get_state_m6937_MethodInfo,
	&LocalUser_Authenticate_m6922_MethodInfo,
	&LocalUser_get_authenticated_m6926_MethodInfo,
	&LocalUser_get_underage_m6927_MethodInfo,
};
static bool LocalUser_t1071_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
extern const Il2CppType ILocalUser_t693_0_0_0;
extern const Il2CppType IUserProfile_t692_0_0_0;
static const Il2CppType* LocalUser_t1071_InterfacesTypeInfos[] = 
{
	&ILocalUser_t693_0_0_0,
	&IUserProfile_t692_0_0_0,
};
static Il2CppInterfaceOffsetPair LocalUser_t1071_InterfacesOffsets[] = 
{
	{ &IUserProfile_t692_0_0_0, 4},
	{ &ILocalUser_t693_0_0_0, 8},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType LocalUser_t1071_0_0_0;
extern const Il2CppType LocalUser_t1071_1_0_0;
struct LocalUser_t1071;
const Il2CppTypeDefinitionMetadata LocalUser_t1071_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, LocalUser_t1071_InterfacesTypeInfos/* implementedInterfaces */
	, LocalUser_t1071_InterfacesOffsets/* interfaceOffsets */
	, &UserProfile_t1230_0_0_0/* parent */
	, LocalUser_t1071_VTable/* vtableMethods */
	, LocalUser_t1071_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 1134/* fieldStart */

};
TypeInfo LocalUser_t1071_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "LocalUser"/* name */
	, "UnityEngine.SocialPlatforms.Impl"/* namespaze */
	, LocalUser_t1071_MethodInfos/* methods */
	, LocalUser_t1071_PropertyInfos/* properties */
	, NULL/* events */
	, &LocalUser_t1071_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &LocalUser_t1071_0_0_0/* byval_arg */
	, &LocalUser_t1071_1_0_0/* this_arg */
	, &LocalUser_t1071_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (LocalUser_t1071)/* instance_size */
	, sizeof (LocalUser_t1071)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048577/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 7/* method_count */
	, 2/* property_count */
	, 3/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 11/* vtable_count */
	, 2/* interfaces_count */
	, 2/* interface_offsets_count */

};
// UnityEngine.SocialPlatforms.Impl.UserProfile
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_UserProfile.h"
// Metadata Definition UnityEngine.SocialPlatforms.Impl.UserProfile
extern TypeInfo UserProfile_t1230_il2cpp_TypeInfo;
// UnityEngine.SocialPlatforms.Impl.UserProfile
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_UserProfileMethodDeclarations.h"
extern void* RuntimeInvoker_Void_t57 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::.ctor()
extern const MethodInfo UserProfile__ctor_m6928_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&UserProfile__ctor_m6928/* method */
	, &UserProfile_t1230_il2cpp_TypeInfo/* declaring_type */
	, &Void_t57_0_0_0/* return_type */
	, RuntimeInvoker_Void_t57/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1721/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType Boolean_t29_0_0_0;
extern const Il2CppType UserState_t1244_0_0_0;
extern const Il2CppType UserState_t1244_0_0_0;
extern const Il2CppType Texture2D_t65_0_0_0;
extern const Il2CppType Texture2D_t65_0_0_0;
static const ParameterInfo UserProfile_t1230_UserProfile__ctor_m6929_ParameterInfos[] = 
{
	{"name", 0, 134219698, 0, &String_t_0_0_0},
	{"id", 1, 134219699, 0, &String_t_0_0_0},
	{"friend", 2, 134219700, 0, &Boolean_t29_0_0_0},
	{"state", 3, 134219701, 0, &UserState_t1244_0_0_0},
	{"image", 4, 134219702, 0, &Texture2D_t65_0_0_0},
};
extern void* RuntimeInvoker_Void_t57_Object_t_Object_t_SByte_t61_Int32_t50_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::.ctor(System.String,System.String,System.Boolean,UnityEngine.SocialPlatforms.UserState,UnityEngine.Texture2D)
extern const MethodInfo UserProfile__ctor_m6929_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&UserProfile__ctor_m6929/* method */
	, &UserProfile_t1230_il2cpp_TypeInfo/* declaring_type */
	, &Void_t57_0_0_0/* return_type */
	, RuntimeInvoker_Void_t57_Object_t_Object_t_SByte_t61_Int32_t50_Object_t/* invoker_method */
	, UserProfile_t1230_UserProfile__ctor_m6929_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 5/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1722/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String UnityEngine.SocialPlatforms.Impl.UserProfile::ToString()
extern const MethodInfo UserProfile_ToString_m6930_MethodInfo = 
{
	"ToString"/* name */
	, (methodPointerType)&UserProfile_ToString_m6930/* method */
	, &UserProfile_t1230_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1723/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
static const ParameterInfo UserProfile_t1230_UserProfile_SetUserName_m6931_ParameterInfos[] = 
{
	{"name", 0, 134219703, 0, &String_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t57_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::SetUserName(System.String)
extern const MethodInfo UserProfile_SetUserName_m6931_MethodInfo = 
{
	"SetUserName"/* name */
	, (methodPointerType)&UserProfile_SetUserName_m6931/* method */
	, &UserProfile_t1230_il2cpp_TypeInfo/* declaring_type */
	, &Void_t57_0_0_0/* return_type */
	, RuntimeInvoker_Void_t57_Object_t/* invoker_method */
	, UserProfile_t1230_UserProfile_SetUserName_m6931_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1724/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
static const ParameterInfo UserProfile_t1230_UserProfile_SetUserID_m6932_ParameterInfos[] = 
{
	{"id", 0, 134219704, 0, &String_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t57_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::SetUserID(System.String)
extern const MethodInfo UserProfile_SetUserID_m6932_MethodInfo = 
{
	"SetUserID"/* name */
	, (methodPointerType)&UserProfile_SetUserID_m6932/* method */
	, &UserProfile_t1230_il2cpp_TypeInfo/* declaring_type */
	, &Void_t57_0_0_0/* return_type */
	, RuntimeInvoker_Void_t57_Object_t/* invoker_method */
	, UserProfile_t1230_UserProfile_SetUserID_m6932_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1725/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Texture2D_t65_0_0_0;
static const ParameterInfo UserProfile_t1230_UserProfile_SetImage_m6933_ParameterInfos[] = 
{
	{"image", 0, 134219705, 0, &Texture2D_t65_0_0_0},
};
extern void* RuntimeInvoker_Void_t57_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::SetImage(UnityEngine.Texture2D)
extern const MethodInfo UserProfile_SetImage_m6933_MethodInfo = 
{
	"SetImage"/* name */
	, (methodPointerType)&UserProfile_SetImage_m6933/* method */
	, &UserProfile_t1230_il2cpp_TypeInfo/* declaring_type */
	, &Void_t57_0_0_0/* return_type */
	, RuntimeInvoker_Void_t57_Object_t/* invoker_method */
	, UserProfile_t1230_UserProfile_SetImage_m6933_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1726/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String UnityEngine.SocialPlatforms.Impl.UserProfile::get_userName()
extern const MethodInfo UserProfile_get_userName_m6934_MethodInfo = 
{
	"get_userName"/* name */
	, (methodPointerType)&UserProfile_get_userName_m6934/* method */
	, &UserProfile_t1230_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1727/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String UnityEngine.SocialPlatforms.Impl.UserProfile::get_id()
extern const MethodInfo UserProfile_get_id_m6935_MethodInfo = 
{
	"get_id"/* name */
	, (methodPointerType)&UserProfile_get_id_m6935/* method */
	, &UserProfile_t1230_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1728/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Boolean_t29 (const MethodInfo* method, void* obj, void** args);
// System.Boolean UnityEngine.SocialPlatforms.Impl.UserProfile::get_isFriend()
extern const MethodInfo UserProfile_get_isFriend_m6936_MethodInfo = 
{
	"get_isFriend"/* name */
	, (methodPointerType)&UserProfile_get_isFriend_m6936/* method */
	, &UserProfile_t1230_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t29_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t29/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1729/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_UserState_t1244 (const MethodInfo* method, void* obj, void** args);
// UnityEngine.SocialPlatforms.UserState UnityEngine.SocialPlatforms.Impl.UserProfile::get_state()
extern const MethodInfo UserProfile_get_state_m6937_MethodInfo = 
{
	"get_state"/* name */
	, (methodPointerType)&UserProfile_get_state_m6937/* method */
	, &UserProfile_t1230_il2cpp_TypeInfo/* declaring_type */
	, &UserState_t1244_0_0_0/* return_type */
	, RuntimeInvoker_UserState_t1244/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1730/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* UserProfile_t1230_MethodInfos[] =
{
	&UserProfile__ctor_m6928_MethodInfo,
	&UserProfile__ctor_m6929_MethodInfo,
	&UserProfile_ToString_m6930_MethodInfo,
	&UserProfile_SetUserName_m6931_MethodInfo,
	&UserProfile_SetUserID_m6932_MethodInfo,
	&UserProfile_SetImage_m6933_MethodInfo,
	&UserProfile_get_userName_m6934_MethodInfo,
	&UserProfile_get_id_m6935_MethodInfo,
	&UserProfile_get_isFriend_m6936_MethodInfo,
	&UserProfile_get_state_m6937_MethodInfo,
	NULL
};
static const PropertyInfo UserProfile_t1230____userName_PropertyInfo = 
{
	&UserProfile_t1230_il2cpp_TypeInfo/* parent */
	, "userName"/* name */
	, &UserProfile_get_userName_m6934_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
static const PropertyInfo UserProfile_t1230____id_PropertyInfo = 
{
	&UserProfile_t1230_il2cpp_TypeInfo/* parent */
	, "id"/* name */
	, &UserProfile_get_id_m6935_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
static const PropertyInfo UserProfile_t1230____isFriend_PropertyInfo = 
{
	&UserProfile_t1230_il2cpp_TypeInfo/* parent */
	, "isFriend"/* name */
	, &UserProfile_get_isFriend_m6936_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
static const PropertyInfo UserProfile_t1230____state_PropertyInfo = 
{
	&UserProfile_t1230_il2cpp_TypeInfo/* parent */
	, "state"/* name */
	, &UserProfile_get_state_m6937_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
static const PropertyInfo* UserProfile_t1230_PropertyInfos[] =
{
	&UserProfile_t1230____userName_PropertyInfo,
	&UserProfile_t1230____id_PropertyInfo,
	&UserProfile_t1230____isFriend_PropertyInfo,
	&UserProfile_t1230____state_PropertyInfo,
	NULL
};
static const Il2CppMethodReference UserProfile_t1230_VTable[] =
{
	&Object_Equals_m252_MethodInfo,
	&Object_Finalize_m230_MethodInfo,
	&Object_GetHashCode_m172_MethodInfo,
	&UserProfile_ToString_m6930_MethodInfo,
	&UserProfile_get_userName_m6934_MethodInfo,
	&UserProfile_get_id_m6935_MethodInfo,
	&UserProfile_get_isFriend_m6936_MethodInfo,
	&UserProfile_get_state_m6937_MethodInfo,
};
static bool UserProfile_t1230_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static const Il2CppType* UserProfile_t1230_InterfacesTypeInfos[] = 
{
	&IUserProfile_t692_0_0_0,
};
static Il2CppInterfaceOffsetPair UserProfile_t1230_InterfacesOffsets[] = 
{
	{ &IUserProfile_t692_0_0_0, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType UserProfile_t1230_1_0_0;
struct UserProfile_t1230;
const Il2CppTypeDefinitionMetadata UserProfile_t1230_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, UserProfile_t1230_InterfacesTypeInfos/* implementedInterfaces */
	, UserProfile_t1230_InterfacesOffsets/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, UserProfile_t1230_VTable/* vtableMethods */
	, UserProfile_t1230_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 1137/* fieldStart */

};
TypeInfo UserProfile_t1230_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "UserProfile"/* name */
	, "UnityEngine.SocialPlatforms.Impl"/* namespaze */
	, UserProfile_t1230_MethodInfos/* methods */
	, UserProfile_t1230_PropertyInfos/* properties */
	, NULL/* events */
	, &UserProfile_t1230_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &UserProfile_t1230_0_0_0/* byval_arg */
	, &UserProfile_t1230_1_0_0/* this_arg */
	, &UserProfile_t1230_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (UserProfile_t1230)/* instance_size */
	, sizeof (UserProfile_t1230)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048577/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 10/* method_count */
	, 4/* property_count */
	, 5/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 8/* vtable_count */
	, 1/* interfaces_count */
	, 1/* interface_offsets_count */

};
// UnityEngine.SocialPlatforms.Impl.Achievement
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_Achievement.h"
// Metadata Definition UnityEngine.SocialPlatforms.Impl.Achievement
extern TypeInfo Achievement_t1231_il2cpp_TypeInfo;
// UnityEngine.SocialPlatforms.Impl.Achievement
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_AchievementMethodDeclarations.h"
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType Double_t60_0_0_0;
extern const Il2CppType Double_t60_0_0_0;
extern const Il2CppType Boolean_t29_0_0_0;
extern const Il2CppType Boolean_t29_0_0_0;
extern const Il2CppType DateTime_t245_0_0_0;
extern const Il2CppType DateTime_t245_0_0_0;
static const ParameterInfo Achievement_t1231_Achievement__ctor_m6938_ParameterInfos[] = 
{
	{"id", 0, 134219706, 0, &String_t_0_0_0},
	{"percentCompleted", 1, 134219707, 0, &Double_t60_0_0_0},
	{"completed", 2, 134219708, 0, &Boolean_t29_0_0_0},
	{"hidden", 3, 134219709, 0, &Boolean_t29_0_0_0},
	{"lastReportedDate", 4, 134219710, 0, &DateTime_t245_0_0_0},
};
extern void* RuntimeInvoker_Void_t57_Object_t_Double_t60_SByte_t61_SByte_t61_DateTime_t245 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.SocialPlatforms.Impl.Achievement::.ctor(System.String,System.Double,System.Boolean,System.Boolean,System.DateTime)
extern const MethodInfo Achievement__ctor_m6938_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&Achievement__ctor_m6938/* method */
	, &Achievement_t1231_il2cpp_TypeInfo/* declaring_type */
	, &Void_t57_0_0_0/* return_type */
	, RuntimeInvoker_Void_t57_Object_t_Double_t60_SByte_t61_SByte_t61_DateTime_t245/* invoker_method */
	, Achievement_t1231_Achievement__ctor_m6938_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 5/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1731/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType Double_t60_0_0_0;
static const ParameterInfo Achievement_t1231_Achievement__ctor_m6939_ParameterInfos[] = 
{
	{"id", 0, 134219711, 0, &String_t_0_0_0},
	{"percent", 1, 134219712, 0, &Double_t60_0_0_0},
};
extern void* RuntimeInvoker_Void_t57_Object_t_Double_t60 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.SocialPlatforms.Impl.Achievement::.ctor(System.String,System.Double)
extern const MethodInfo Achievement__ctor_m6939_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&Achievement__ctor_m6939/* method */
	, &Achievement_t1231_il2cpp_TypeInfo/* declaring_type */
	, &Void_t57_0_0_0/* return_type */
	, RuntimeInvoker_Void_t57_Object_t_Double_t60/* invoker_method */
	, Achievement_t1231_Achievement__ctor_m6939_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1732/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Void_t57 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.SocialPlatforms.Impl.Achievement::.ctor()
extern const MethodInfo Achievement__ctor_m6940_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&Achievement__ctor_m6940/* method */
	, &Achievement_t1231_il2cpp_TypeInfo/* declaring_type */
	, &Void_t57_0_0_0/* return_type */
	, RuntimeInvoker_Void_t57/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1733/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String UnityEngine.SocialPlatforms.Impl.Achievement::ToString()
extern const MethodInfo Achievement_ToString_m6941_MethodInfo = 
{
	"ToString"/* name */
	, (methodPointerType)&Achievement_ToString_m6941/* method */
	, &Achievement_t1231_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1734/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String UnityEngine.SocialPlatforms.Impl.Achievement::get_id()
extern const MethodInfo Achievement_get_id_m6942_MethodInfo = 
{
	"get_id"/* name */
	, (methodPointerType)&Achievement_get_id_m6942/* method */
	, &Achievement_t1231_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 736/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1735/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
static const ParameterInfo Achievement_t1231_Achievement_set_id_m6943_ParameterInfos[] = 
{
	{"value", 0, 134219713, 0, &String_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t57_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.SocialPlatforms.Impl.Achievement::set_id(System.String)
extern const MethodInfo Achievement_set_id_m6943_MethodInfo = 
{
	"set_id"/* name */
	, (methodPointerType)&Achievement_set_id_m6943/* method */
	, &Achievement_t1231_il2cpp_TypeInfo/* declaring_type */
	, &Void_t57_0_0_0/* return_type */
	, RuntimeInvoker_Void_t57_Object_t/* invoker_method */
	, Achievement_t1231_Achievement_set_id_m6943_ParameterInfos/* parameters */
	, 737/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1736/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Double_t60 (const MethodInfo* method, void* obj, void** args);
// System.Double UnityEngine.SocialPlatforms.Impl.Achievement::get_percentCompleted()
extern const MethodInfo Achievement_get_percentCompleted_m6944_MethodInfo = 
{
	"get_percentCompleted"/* name */
	, (methodPointerType)&Achievement_get_percentCompleted_m6944/* method */
	, &Achievement_t1231_il2cpp_TypeInfo/* declaring_type */
	, &Double_t60_0_0_0/* return_type */
	, RuntimeInvoker_Double_t60/* invoker_method */
	, NULL/* parameters */
	, 738/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1737/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Double_t60_0_0_0;
static const ParameterInfo Achievement_t1231_Achievement_set_percentCompleted_m6945_ParameterInfos[] = 
{
	{"value", 0, 134219714, 0, &Double_t60_0_0_0},
};
extern void* RuntimeInvoker_Void_t57_Double_t60 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.SocialPlatforms.Impl.Achievement::set_percentCompleted(System.Double)
extern const MethodInfo Achievement_set_percentCompleted_m6945_MethodInfo = 
{
	"set_percentCompleted"/* name */
	, (methodPointerType)&Achievement_set_percentCompleted_m6945/* method */
	, &Achievement_t1231_il2cpp_TypeInfo/* declaring_type */
	, &Void_t57_0_0_0/* return_type */
	, RuntimeInvoker_Void_t57_Double_t60/* invoker_method */
	, Achievement_t1231_Achievement_set_percentCompleted_m6945_ParameterInfos/* parameters */
	, 739/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1738/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Boolean_t29 (const MethodInfo* method, void* obj, void** args);
// System.Boolean UnityEngine.SocialPlatforms.Impl.Achievement::get_completed()
extern const MethodInfo Achievement_get_completed_m6946_MethodInfo = 
{
	"get_completed"/* name */
	, (methodPointerType)&Achievement_get_completed_m6946/* method */
	, &Achievement_t1231_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t29_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t29/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1739/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Boolean_t29 (const MethodInfo* method, void* obj, void** args);
// System.Boolean UnityEngine.SocialPlatforms.Impl.Achievement::get_hidden()
extern const MethodInfo Achievement_get_hidden_m6947_MethodInfo = 
{
	"get_hidden"/* name */
	, (methodPointerType)&Achievement_get_hidden_m6947/* method */
	, &Achievement_t1231_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t29_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t29/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 9/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1740/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_DateTime_t245 (const MethodInfo* method, void* obj, void** args);
// System.DateTime UnityEngine.SocialPlatforms.Impl.Achievement::get_lastReportedDate()
extern const MethodInfo Achievement_get_lastReportedDate_m6948_MethodInfo = 
{
	"get_lastReportedDate"/* name */
	, (methodPointerType)&Achievement_get_lastReportedDate_m6948/* method */
	, &Achievement_t1231_il2cpp_TypeInfo/* declaring_type */
	, &DateTime_t245_0_0_0/* return_type */
	, RuntimeInvoker_DateTime_t245/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 10/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1741/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* Achievement_t1231_MethodInfos[] =
{
	&Achievement__ctor_m6938_MethodInfo,
	&Achievement__ctor_m6939_MethodInfo,
	&Achievement__ctor_m6940_MethodInfo,
	&Achievement_ToString_m6941_MethodInfo,
	&Achievement_get_id_m6942_MethodInfo,
	&Achievement_set_id_m6943_MethodInfo,
	&Achievement_get_percentCompleted_m6944_MethodInfo,
	&Achievement_set_percentCompleted_m6945_MethodInfo,
	&Achievement_get_completed_m6946_MethodInfo,
	&Achievement_get_hidden_m6947_MethodInfo,
	&Achievement_get_lastReportedDate_m6948_MethodInfo,
	NULL
};
extern const MethodInfo Achievement_get_id_m6942_MethodInfo;
extern const MethodInfo Achievement_set_id_m6943_MethodInfo;
static const PropertyInfo Achievement_t1231____id_PropertyInfo = 
{
	&Achievement_t1231_il2cpp_TypeInfo/* parent */
	, "id"/* name */
	, &Achievement_get_id_m6942_MethodInfo/* get */
	, &Achievement_set_id_m6943_MethodInfo/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo Achievement_get_percentCompleted_m6944_MethodInfo;
extern const MethodInfo Achievement_set_percentCompleted_m6945_MethodInfo;
static const PropertyInfo Achievement_t1231____percentCompleted_PropertyInfo = 
{
	&Achievement_t1231_il2cpp_TypeInfo/* parent */
	, "percentCompleted"/* name */
	, &Achievement_get_percentCompleted_m6944_MethodInfo/* get */
	, &Achievement_set_percentCompleted_m6945_MethodInfo/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo Achievement_get_completed_m6946_MethodInfo;
static const PropertyInfo Achievement_t1231____completed_PropertyInfo = 
{
	&Achievement_t1231_il2cpp_TypeInfo/* parent */
	, "completed"/* name */
	, &Achievement_get_completed_m6946_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo Achievement_get_hidden_m6947_MethodInfo;
static const PropertyInfo Achievement_t1231____hidden_PropertyInfo = 
{
	&Achievement_t1231_il2cpp_TypeInfo/* parent */
	, "hidden"/* name */
	, &Achievement_get_hidden_m6947_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo Achievement_get_lastReportedDate_m6948_MethodInfo;
static const PropertyInfo Achievement_t1231____lastReportedDate_PropertyInfo = 
{
	&Achievement_t1231_il2cpp_TypeInfo/* parent */
	, "lastReportedDate"/* name */
	, &Achievement_get_lastReportedDate_m6948_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
static const PropertyInfo* Achievement_t1231_PropertyInfos[] =
{
	&Achievement_t1231____id_PropertyInfo,
	&Achievement_t1231____percentCompleted_PropertyInfo,
	&Achievement_t1231____completed_PropertyInfo,
	&Achievement_t1231____hidden_PropertyInfo,
	&Achievement_t1231____lastReportedDate_PropertyInfo,
	NULL
};
extern const MethodInfo Achievement_ToString_m6941_MethodInfo;
static const Il2CppMethodReference Achievement_t1231_VTable[] =
{
	&Object_Equals_m252_MethodInfo,
	&Object_Finalize_m230_MethodInfo,
	&Object_GetHashCode_m172_MethodInfo,
	&Achievement_ToString_m6941_MethodInfo,
	&Achievement_get_id_m6942_MethodInfo,
	&Achievement_set_id_m6943_MethodInfo,
	&Achievement_get_percentCompleted_m6944_MethodInfo,
	&Achievement_set_percentCompleted_m6945_MethodInfo,
	&Achievement_get_completed_m6946_MethodInfo,
	&Achievement_get_hidden_m6947_MethodInfo,
	&Achievement_get_lastReportedDate_m6948_MethodInfo,
};
static bool Achievement_t1231_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
extern const Il2CppType IAchievement_t1278_0_0_0;
static const Il2CppType* Achievement_t1231_InterfacesTypeInfos[] = 
{
	&IAchievement_t1278_0_0_0,
};
static Il2CppInterfaceOffsetPair Achievement_t1231_InterfacesOffsets[] = 
{
	{ &IAchievement_t1278_0_0_0, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType Achievement_t1231_1_0_0;
struct Achievement_t1231;
const Il2CppTypeDefinitionMetadata Achievement_t1231_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, Achievement_t1231_InterfacesTypeInfos/* implementedInterfaces */
	, Achievement_t1231_InterfacesOffsets/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, Achievement_t1231_VTable/* vtableMethods */
	, Achievement_t1231_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 1142/* fieldStart */

};
TypeInfo Achievement_t1231_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "Achievement"/* name */
	, "UnityEngine.SocialPlatforms.Impl"/* namespaze */
	, Achievement_t1231_MethodInfos/* methods */
	, Achievement_t1231_PropertyInfos/* properties */
	, NULL/* events */
	, &Achievement_t1231_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &Achievement_t1231_0_0_0/* byval_arg */
	, &Achievement_t1231_1_0_0/* this_arg */
	, &Achievement_t1231_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (Achievement_t1231)/* instance_size */
	, sizeof (Achievement_t1231)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048577/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 11/* method_count */
	, 5/* property_count */
	, 5/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 11/* vtable_count */
	, 1/* interfaces_count */
	, 1/* interface_offsets_count */

};
// UnityEngine.SocialPlatforms.Impl.AchievementDescription
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_AchievementDesc.h"
// Metadata Definition UnityEngine.SocialPlatforms.Impl.AchievementDescription
extern TypeInfo AchievementDescription_t1232_il2cpp_TypeInfo;
// UnityEngine.SocialPlatforms.Impl.AchievementDescription
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_AchievementDescMethodDeclarations.h"
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType Texture2D_t65_0_0_0;
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType Boolean_t29_0_0_0;
extern const Il2CppType Int32_t50_0_0_0;
static const ParameterInfo AchievementDescription_t1232_AchievementDescription__ctor_m6949_ParameterInfos[] = 
{
	{"id", 0, 134219715, 0, &String_t_0_0_0},
	{"title", 1, 134219716, 0, &String_t_0_0_0},
	{"image", 2, 134219717, 0, &Texture2D_t65_0_0_0},
	{"achievedDescription", 3, 134219718, 0, &String_t_0_0_0},
	{"unachievedDescription", 4, 134219719, 0, &String_t_0_0_0},
	{"hidden", 5, 134219720, 0, &Boolean_t29_0_0_0},
	{"points", 6, 134219721, 0, &Int32_t50_0_0_0},
};
extern void* RuntimeInvoker_Void_t57_Object_t_Object_t_Object_t_Object_t_Object_t_SByte_t61_Int32_t50 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.SocialPlatforms.Impl.AchievementDescription::.ctor(System.String,System.String,UnityEngine.Texture2D,System.String,System.String,System.Boolean,System.Int32)
extern const MethodInfo AchievementDescription__ctor_m6949_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&AchievementDescription__ctor_m6949/* method */
	, &AchievementDescription_t1232_il2cpp_TypeInfo/* declaring_type */
	, &Void_t57_0_0_0/* return_type */
	, RuntimeInvoker_Void_t57_Object_t_Object_t_Object_t_Object_t_Object_t_SByte_t61_Int32_t50/* invoker_method */
	, AchievementDescription_t1232_AchievementDescription__ctor_m6949_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 7/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1742/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::ToString()
extern const MethodInfo AchievementDescription_ToString_m6950_MethodInfo = 
{
	"ToString"/* name */
	, (methodPointerType)&AchievementDescription_ToString_m6950/* method */
	, &AchievementDescription_t1232_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1743/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Texture2D_t65_0_0_0;
static const ParameterInfo AchievementDescription_t1232_AchievementDescription_SetImage_m6951_ParameterInfos[] = 
{
	{"image", 0, 134219722, 0, &Texture2D_t65_0_0_0},
};
extern void* RuntimeInvoker_Void_t57_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.SocialPlatforms.Impl.AchievementDescription::SetImage(UnityEngine.Texture2D)
extern const MethodInfo AchievementDescription_SetImage_m6951_MethodInfo = 
{
	"SetImage"/* name */
	, (methodPointerType)&AchievementDescription_SetImage_m6951/* method */
	, &AchievementDescription_t1232_il2cpp_TypeInfo/* declaring_type */
	, &Void_t57_0_0_0/* return_type */
	, RuntimeInvoker_Void_t57_Object_t/* invoker_method */
	, AchievementDescription_t1232_AchievementDescription_SetImage_m6951_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1744/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_id()
extern const MethodInfo AchievementDescription_get_id_m6952_MethodInfo = 
{
	"get_id"/* name */
	, (methodPointerType)&AchievementDescription_get_id_m6952/* method */
	, &AchievementDescription_t1232_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 741/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1745/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
static const ParameterInfo AchievementDescription_t1232_AchievementDescription_set_id_m6953_ParameterInfos[] = 
{
	{"value", 0, 134219723, 0, &String_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t57_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.SocialPlatforms.Impl.AchievementDescription::set_id(System.String)
extern const MethodInfo AchievementDescription_set_id_m6953_MethodInfo = 
{
	"set_id"/* name */
	, (methodPointerType)&AchievementDescription_set_id_m6953/* method */
	, &AchievementDescription_t1232_il2cpp_TypeInfo/* declaring_type */
	, &Void_t57_0_0_0/* return_type */
	, RuntimeInvoker_Void_t57_Object_t/* invoker_method */
	, AchievementDescription_t1232_AchievementDescription_set_id_m6953_ParameterInfos/* parameters */
	, 742/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1746/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_title()
extern const MethodInfo AchievementDescription_get_title_m6954_MethodInfo = 
{
	"get_title"/* name */
	, (methodPointerType)&AchievementDescription_get_title_m6954/* method */
	, &AchievementDescription_t1232_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1747/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_achievedDescription()
extern const MethodInfo AchievementDescription_get_achievedDescription_m6955_MethodInfo = 
{
	"get_achievedDescription"/* name */
	, (methodPointerType)&AchievementDescription_get_achievedDescription_m6955/* method */
	, &AchievementDescription_t1232_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1748/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_unachievedDescription()
extern const MethodInfo AchievementDescription_get_unachievedDescription_m6956_MethodInfo = 
{
	"get_unachievedDescription"/* name */
	, (methodPointerType)&AchievementDescription_get_unachievedDescription_m6956/* method */
	, &AchievementDescription_t1232_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1749/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Boolean_t29 (const MethodInfo* method, void* obj, void** args);
// System.Boolean UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_hidden()
extern const MethodInfo AchievementDescription_get_hidden_m6957_MethodInfo = 
{
	"get_hidden"/* name */
	, (methodPointerType)&AchievementDescription_get_hidden_m6957/* method */
	, &AchievementDescription_t1232_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t29_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t29/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 9/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1750/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Int32_t50 (const MethodInfo* method, void* obj, void** args);
// System.Int32 UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_points()
extern const MethodInfo AchievementDescription_get_points_m6958_MethodInfo = 
{
	"get_points"/* name */
	, (methodPointerType)&AchievementDescription_get_points_m6958/* method */
	, &AchievementDescription_t1232_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t50_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t50/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 10/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1751/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* AchievementDescription_t1232_MethodInfos[] =
{
	&AchievementDescription__ctor_m6949_MethodInfo,
	&AchievementDescription_ToString_m6950_MethodInfo,
	&AchievementDescription_SetImage_m6951_MethodInfo,
	&AchievementDescription_get_id_m6952_MethodInfo,
	&AchievementDescription_set_id_m6953_MethodInfo,
	&AchievementDescription_get_title_m6954_MethodInfo,
	&AchievementDescription_get_achievedDescription_m6955_MethodInfo,
	&AchievementDescription_get_unachievedDescription_m6956_MethodInfo,
	&AchievementDescription_get_hidden_m6957_MethodInfo,
	&AchievementDescription_get_points_m6958_MethodInfo,
	NULL
};
extern const MethodInfo AchievementDescription_get_id_m6952_MethodInfo;
extern const MethodInfo AchievementDescription_set_id_m6953_MethodInfo;
static const PropertyInfo AchievementDescription_t1232____id_PropertyInfo = 
{
	&AchievementDescription_t1232_il2cpp_TypeInfo/* parent */
	, "id"/* name */
	, &AchievementDescription_get_id_m6952_MethodInfo/* get */
	, &AchievementDescription_set_id_m6953_MethodInfo/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo AchievementDescription_get_title_m6954_MethodInfo;
static const PropertyInfo AchievementDescription_t1232____title_PropertyInfo = 
{
	&AchievementDescription_t1232_il2cpp_TypeInfo/* parent */
	, "title"/* name */
	, &AchievementDescription_get_title_m6954_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo AchievementDescription_get_achievedDescription_m6955_MethodInfo;
static const PropertyInfo AchievementDescription_t1232____achievedDescription_PropertyInfo = 
{
	&AchievementDescription_t1232_il2cpp_TypeInfo/* parent */
	, "achievedDescription"/* name */
	, &AchievementDescription_get_achievedDescription_m6955_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo AchievementDescription_get_unachievedDescription_m6956_MethodInfo;
static const PropertyInfo AchievementDescription_t1232____unachievedDescription_PropertyInfo = 
{
	&AchievementDescription_t1232_il2cpp_TypeInfo/* parent */
	, "unachievedDescription"/* name */
	, &AchievementDescription_get_unachievedDescription_m6956_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo AchievementDescription_get_hidden_m6957_MethodInfo;
static const PropertyInfo AchievementDescription_t1232____hidden_PropertyInfo = 
{
	&AchievementDescription_t1232_il2cpp_TypeInfo/* parent */
	, "hidden"/* name */
	, &AchievementDescription_get_hidden_m6957_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo AchievementDescription_get_points_m6958_MethodInfo;
static const PropertyInfo AchievementDescription_t1232____points_PropertyInfo = 
{
	&AchievementDescription_t1232_il2cpp_TypeInfo/* parent */
	, "points"/* name */
	, &AchievementDescription_get_points_m6958_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
static const PropertyInfo* AchievementDescription_t1232_PropertyInfos[] =
{
	&AchievementDescription_t1232____id_PropertyInfo,
	&AchievementDescription_t1232____title_PropertyInfo,
	&AchievementDescription_t1232____achievedDescription_PropertyInfo,
	&AchievementDescription_t1232____unachievedDescription_PropertyInfo,
	&AchievementDescription_t1232____hidden_PropertyInfo,
	&AchievementDescription_t1232____points_PropertyInfo,
	NULL
};
extern const MethodInfo AchievementDescription_ToString_m6950_MethodInfo;
static const Il2CppMethodReference AchievementDescription_t1232_VTable[] =
{
	&Object_Equals_m252_MethodInfo,
	&Object_Finalize_m230_MethodInfo,
	&Object_GetHashCode_m172_MethodInfo,
	&AchievementDescription_ToString_m6950_MethodInfo,
	&AchievementDescription_get_id_m6952_MethodInfo,
	&AchievementDescription_set_id_m6953_MethodInfo,
	&AchievementDescription_get_title_m6954_MethodInfo,
	&AchievementDescription_get_achievedDescription_m6955_MethodInfo,
	&AchievementDescription_get_unachievedDescription_m6956_MethodInfo,
	&AchievementDescription_get_hidden_m6957_MethodInfo,
	&AchievementDescription_get_points_m6958_MethodInfo,
};
static bool AchievementDescription_t1232_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
extern const Il2CppType IAchievementDescription_t1363_0_0_0;
static const Il2CppType* AchievementDescription_t1232_InterfacesTypeInfos[] = 
{
	&IAchievementDescription_t1363_0_0_0,
};
static Il2CppInterfaceOffsetPair AchievementDescription_t1232_InterfacesOffsets[] = 
{
	{ &IAchievementDescription_t1363_0_0_0, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType AchievementDescription_t1232_1_0_0;
struct AchievementDescription_t1232;
const Il2CppTypeDefinitionMetadata AchievementDescription_t1232_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, AchievementDescription_t1232_InterfacesTypeInfos/* implementedInterfaces */
	, AchievementDescription_t1232_InterfacesOffsets/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, AchievementDescription_t1232_VTable/* vtableMethods */
	, AchievementDescription_t1232_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 1147/* fieldStart */

};
TypeInfo AchievementDescription_t1232_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "AchievementDescription"/* name */
	, "UnityEngine.SocialPlatforms.Impl"/* namespaze */
	, AchievementDescription_t1232_MethodInfos/* methods */
	, AchievementDescription_t1232_PropertyInfos/* properties */
	, NULL/* events */
	, &AchievementDescription_t1232_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &AchievementDescription_t1232_0_0_0/* byval_arg */
	, &AchievementDescription_t1232_1_0_0/* this_arg */
	, &AchievementDescription_t1232_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (AchievementDescription_t1232)/* instance_size */
	, sizeof (AchievementDescription_t1232)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048577/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 10/* method_count */
	, 6/* property_count */
	, 7/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 11/* vtable_count */
	, 1/* interfaces_count */
	, 1/* interface_offsets_count */

};
// UnityEngine.SocialPlatforms.Impl.Score
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_Score.h"
// Metadata Definition UnityEngine.SocialPlatforms.Impl.Score
extern TypeInfo Score_t1233_il2cpp_TypeInfo;
// UnityEngine.SocialPlatforms.Impl.Score
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_ScoreMethodDeclarations.h"
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType Int64_t631_0_0_0;
extern const Il2CppType Int64_t631_0_0_0;
static const ParameterInfo Score_t1233_Score__ctor_m6959_ParameterInfos[] = 
{
	{"leaderboardID", 0, 134219724, 0, &String_t_0_0_0},
	{"value", 1, 134219725, 0, &Int64_t631_0_0_0},
};
extern void* RuntimeInvoker_Void_t57_Object_t_Int64_t631 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.SocialPlatforms.Impl.Score::.ctor(System.String,System.Int64)
extern const MethodInfo Score__ctor_m6959_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&Score__ctor_m6959/* method */
	, &Score_t1233_il2cpp_TypeInfo/* declaring_type */
	, &Void_t57_0_0_0/* return_type */
	, RuntimeInvoker_Void_t57_Object_t_Int64_t631/* invoker_method */
	, Score_t1233_Score__ctor_m6959_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1752/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType Int64_t631_0_0_0;
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType DateTime_t245_0_0_0;
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType Int32_t50_0_0_0;
static const ParameterInfo Score_t1233_Score__ctor_m6960_ParameterInfos[] = 
{
	{"leaderboardID", 0, 134219726, 0, &String_t_0_0_0},
	{"value", 1, 134219727, 0, &Int64_t631_0_0_0},
	{"userID", 2, 134219728, 0, &String_t_0_0_0},
	{"date", 3, 134219729, 0, &DateTime_t245_0_0_0},
	{"formattedValue", 4, 134219730, 0, &String_t_0_0_0},
	{"rank", 5, 134219731, 0, &Int32_t50_0_0_0},
};
extern void* RuntimeInvoker_Void_t57_Object_t_Int64_t631_Object_t_DateTime_t245_Object_t_Int32_t50 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.SocialPlatforms.Impl.Score::.ctor(System.String,System.Int64,System.String,System.DateTime,System.String,System.Int32)
extern const MethodInfo Score__ctor_m6960_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&Score__ctor_m6960/* method */
	, &Score_t1233_il2cpp_TypeInfo/* declaring_type */
	, &Void_t57_0_0_0/* return_type */
	, RuntimeInvoker_Void_t57_Object_t_Int64_t631_Object_t_DateTime_t245_Object_t_Int32_t50/* invoker_method */
	, Score_t1233_Score__ctor_m6960_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 6/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1753/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String UnityEngine.SocialPlatforms.Impl.Score::ToString()
extern const MethodInfo Score_ToString_m6961_MethodInfo = 
{
	"ToString"/* name */
	, (methodPointerType)&Score_ToString_m6961/* method */
	, &Score_t1233_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1754/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String UnityEngine.SocialPlatforms.Impl.Score::get_leaderboardID()
extern const MethodInfo Score_get_leaderboardID_m6962_MethodInfo = 
{
	"get_leaderboardID"/* name */
	, (methodPointerType)&Score_get_leaderboardID_m6962/* method */
	, &Score_t1233_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 745/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1755/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
static const ParameterInfo Score_t1233_Score_set_leaderboardID_m6963_ParameterInfos[] = 
{
	{"value", 0, 134219732, 0, &String_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t57_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.SocialPlatforms.Impl.Score::set_leaderboardID(System.String)
extern const MethodInfo Score_set_leaderboardID_m6963_MethodInfo = 
{
	"set_leaderboardID"/* name */
	, (methodPointerType)&Score_set_leaderboardID_m6963/* method */
	, &Score_t1233_il2cpp_TypeInfo/* declaring_type */
	, &Void_t57_0_0_0/* return_type */
	, RuntimeInvoker_Void_t57_Object_t/* invoker_method */
	, Score_t1233_Score_set_leaderboardID_m6963_ParameterInfos/* parameters */
	, 746/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1756/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Int64_t631 (const MethodInfo* method, void* obj, void** args);
// System.Int64 UnityEngine.SocialPlatforms.Impl.Score::get_value()
extern const MethodInfo Score_get_value_m6964_MethodInfo = 
{
	"get_value"/* name */
	, (methodPointerType)&Score_get_value_m6964/* method */
	, &Score_t1233_il2cpp_TypeInfo/* declaring_type */
	, &Int64_t631_0_0_0/* return_type */
	, RuntimeInvoker_Int64_t631/* invoker_method */
	, NULL/* parameters */
	, 747/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1757/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int64_t631_0_0_0;
static const ParameterInfo Score_t1233_Score_set_value_m6965_ParameterInfos[] = 
{
	{"value", 0, 134219733, 0, &Int64_t631_0_0_0},
};
extern void* RuntimeInvoker_Void_t57_Int64_t631 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.SocialPlatforms.Impl.Score::set_value(System.Int64)
extern const MethodInfo Score_set_value_m6965_MethodInfo = 
{
	"set_value"/* name */
	, (methodPointerType)&Score_set_value_m6965/* method */
	, &Score_t1233_il2cpp_TypeInfo/* declaring_type */
	, &Void_t57_0_0_0/* return_type */
	, RuntimeInvoker_Void_t57_Int64_t631/* invoker_method */
	, Score_t1233_Score_set_value_m6965_ParameterInfos/* parameters */
	, 748/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1758/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* Score_t1233_MethodInfos[] =
{
	&Score__ctor_m6959_MethodInfo,
	&Score__ctor_m6960_MethodInfo,
	&Score_ToString_m6961_MethodInfo,
	&Score_get_leaderboardID_m6962_MethodInfo,
	&Score_set_leaderboardID_m6963_MethodInfo,
	&Score_get_value_m6964_MethodInfo,
	&Score_set_value_m6965_MethodInfo,
	NULL
};
extern const MethodInfo Score_get_leaderboardID_m6962_MethodInfo;
extern const MethodInfo Score_set_leaderboardID_m6963_MethodInfo;
static const PropertyInfo Score_t1233____leaderboardID_PropertyInfo = 
{
	&Score_t1233_il2cpp_TypeInfo/* parent */
	, "leaderboardID"/* name */
	, &Score_get_leaderboardID_m6962_MethodInfo/* get */
	, &Score_set_leaderboardID_m6963_MethodInfo/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo Score_get_value_m6964_MethodInfo;
extern const MethodInfo Score_set_value_m6965_MethodInfo;
static const PropertyInfo Score_t1233____value_PropertyInfo = 
{
	&Score_t1233_il2cpp_TypeInfo/* parent */
	, "value"/* name */
	, &Score_get_value_m6964_MethodInfo/* get */
	, &Score_set_value_m6965_MethodInfo/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
static const PropertyInfo* Score_t1233_PropertyInfos[] =
{
	&Score_t1233____leaderboardID_PropertyInfo,
	&Score_t1233____value_PropertyInfo,
	NULL
};
extern const MethodInfo Score_ToString_m6961_MethodInfo;
static const Il2CppMethodReference Score_t1233_VTable[] =
{
	&Object_Equals_m252_MethodInfo,
	&Object_Finalize_m230_MethodInfo,
	&Object_GetHashCode_m172_MethodInfo,
	&Score_ToString_m6961_MethodInfo,
	&Score_get_leaderboardID_m6962_MethodInfo,
	&Score_set_leaderboardID_m6963_MethodInfo,
	&Score_get_value_m6964_MethodInfo,
	&Score_set_value_m6965_MethodInfo,
};
static bool Score_t1233_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
extern const Il2CppType IScore_t1234_0_0_0;
static const Il2CppType* Score_t1233_InterfacesTypeInfos[] = 
{
	&IScore_t1234_0_0_0,
};
static Il2CppInterfaceOffsetPair Score_t1233_InterfacesOffsets[] = 
{
	{ &IScore_t1234_0_0_0, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType Score_t1233_1_0_0;
struct Score_t1233;
const Il2CppTypeDefinitionMetadata Score_t1233_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, Score_t1233_InterfacesTypeInfos/* implementedInterfaces */
	, Score_t1233_InterfacesOffsets/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, Score_t1233_VTable/* vtableMethods */
	, Score_t1233_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 1154/* fieldStart */

};
TypeInfo Score_t1233_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "Score"/* name */
	, "UnityEngine.SocialPlatforms.Impl"/* namespaze */
	, Score_t1233_MethodInfos/* methods */
	, Score_t1233_PropertyInfos/* properties */
	, NULL/* events */
	, &Score_t1233_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &Score_t1233_0_0_0/* byval_arg */
	, &Score_t1233_1_0_0/* this_arg */
	, &Score_t1233_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (Score_t1233)/* instance_size */
	, sizeof (Score_t1233)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048577/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 7/* method_count */
	, 2/* property_count */
	, 6/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 8/* vtable_count */
	, 1/* interfaces_count */
	, 1/* interface_offsets_count */

};
// UnityEngine.SocialPlatforms.Impl.Leaderboard
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_Leaderboard.h"
// Metadata Definition UnityEngine.SocialPlatforms.Impl.Leaderboard
extern TypeInfo Leaderboard_t1073_il2cpp_TypeInfo;
// UnityEngine.SocialPlatforms.Impl.Leaderboard
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_LeaderboardMethodDeclarations.h"
extern void* RuntimeInvoker_Void_t57 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::.ctor()
extern const MethodInfo Leaderboard__ctor_m6966_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&Leaderboard__ctor_m6966/* method */
	, &Leaderboard_t1073_il2cpp_TypeInfo/* declaring_type */
	, &Void_t57_0_0_0/* return_type */
	, RuntimeInvoker_Void_t57/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1759/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String UnityEngine.SocialPlatforms.Impl.Leaderboard::ToString()
extern const MethodInfo Leaderboard_ToString_m6967_MethodInfo = 
{
	"ToString"/* name */
	, (methodPointerType)&Leaderboard_ToString_m6967/* method */
	, &Leaderboard_t1073_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1760/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType IScore_t1234_0_0_0;
static const ParameterInfo Leaderboard_t1073_Leaderboard_SetLocalUserScore_m6968_ParameterInfos[] = 
{
	{"score", 0, 134219734, 0, &IScore_t1234_0_0_0},
};
extern void* RuntimeInvoker_Void_t57_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::SetLocalUserScore(UnityEngine.SocialPlatforms.IScore)
extern const MethodInfo Leaderboard_SetLocalUserScore_m6968_MethodInfo = 
{
	"SetLocalUserScore"/* name */
	, (methodPointerType)&Leaderboard_SetLocalUserScore_m6968/* method */
	, &Leaderboard_t1073_il2cpp_TypeInfo/* declaring_type */
	, &Void_t57_0_0_0/* return_type */
	, RuntimeInvoker_Void_t57_Object_t/* invoker_method */
	, Leaderboard_t1073_Leaderboard_SetLocalUserScore_m6968_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1761/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType UInt32_t637_0_0_0;
extern const Il2CppType UInt32_t637_0_0_0;
static const ParameterInfo Leaderboard_t1073_Leaderboard_SetMaxRange_m6969_ParameterInfos[] = 
{
	{"maxRange", 0, 134219735, 0, &UInt32_t637_0_0_0},
};
extern void* RuntimeInvoker_Void_t57_Int32_t50 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::SetMaxRange(System.UInt32)
extern const MethodInfo Leaderboard_SetMaxRange_m6969_MethodInfo = 
{
	"SetMaxRange"/* name */
	, (methodPointerType)&Leaderboard_SetMaxRange_m6969/* method */
	, &Leaderboard_t1073_il2cpp_TypeInfo/* declaring_type */
	, &Void_t57_0_0_0/* return_type */
	, RuntimeInvoker_Void_t57_Int32_t50/* invoker_method */
	, Leaderboard_t1073_Leaderboard_SetMaxRange_m6969_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1762/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType IScoreU5BU5D_t1235_0_0_0;
extern const Il2CppType IScoreU5BU5D_t1235_0_0_0;
static const ParameterInfo Leaderboard_t1073_Leaderboard_SetScores_m6970_ParameterInfos[] = 
{
	{"scores", 0, 134219736, 0, &IScoreU5BU5D_t1235_0_0_0},
};
extern void* RuntimeInvoker_Void_t57_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::SetScores(UnityEngine.SocialPlatforms.IScore[])
extern const MethodInfo Leaderboard_SetScores_m6970_MethodInfo = 
{
	"SetScores"/* name */
	, (methodPointerType)&Leaderboard_SetScores_m6970/* method */
	, &Leaderboard_t1073_il2cpp_TypeInfo/* declaring_type */
	, &Void_t57_0_0_0/* return_type */
	, RuntimeInvoker_Void_t57_Object_t/* invoker_method */
	, Leaderboard_t1073_Leaderboard_SetScores_m6970_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1763/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
static const ParameterInfo Leaderboard_t1073_Leaderboard_SetTitle_m6971_ParameterInfos[] = 
{
	{"title", 0, 134219737, 0, &String_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t57_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::SetTitle(System.String)
extern const MethodInfo Leaderboard_SetTitle_m6971_MethodInfo = 
{
	"SetTitle"/* name */
	, (methodPointerType)&Leaderboard_SetTitle_m6971/* method */
	, &Leaderboard_t1073_il2cpp_TypeInfo/* declaring_type */
	, &Void_t57_0_0_0/* return_type */
	, RuntimeInvoker_Void_t57_Object_t/* invoker_method */
	, Leaderboard_t1073_Leaderboard_SetTitle_m6971_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1764/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType StringU5BU5D_t45_0_0_0;
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String[] UnityEngine.SocialPlatforms.Impl.Leaderboard::GetUserFilter()
extern const MethodInfo Leaderboard_GetUserFilter_m6972_MethodInfo = 
{
	"GetUserFilter"/* name */
	, (methodPointerType)&Leaderboard_GetUserFilter_m6972/* method */
	, &Leaderboard_t1073_il2cpp_TypeInfo/* declaring_type */
	, &StringU5BU5D_t45_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1765/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String UnityEngine.SocialPlatforms.Impl.Leaderboard::get_id()
extern const MethodInfo Leaderboard_get_id_m6973_MethodInfo = 
{
	"get_id"/* name */
	, (methodPointerType)&Leaderboard_get_id_m6973/* method */
	, &Leaderboard_t1073_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 753/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1766/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
static const ParameterInfo Leaderboard_t1073_Leaderboard_set_id_m6974_ParameterInfos[] = 
{
	{"value", 0, 134219738, 0, &String_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t57_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_id(System.String)
extern const MethodInfo Leaderboard_set_id_m6974_MethodInfo = 
{
	"set_id"/* name */
	, (methodPointerType)&Leaderboard_set_id_m6974/* method */
	, &Leaderboard_t1073_il2cpp_TypeInfo/* declaring_type */
	, &Void_t57_0_0_0/* return_type */
	, RuntimeInvoker_Void_t57_Object_t/* invoker_method */
	, Leaderboard_t1073_Leaderboard_set_id_m6974_ParameterInfos/* parameters */
	, 754/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1767/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType UserScope_t1245_0_0_0;
extern void* RuntimeInvoker_UserScope_t1245 (const MethodInfo* method, void* obj, void** args);
// UnityEngine.SocialPlatforms.UserScope UnityEngine.SocialPlatforms.Impl.Leaderboard::get_userScope()
extern const MethodInfo Leaderboard_get_userScope_m6975_MethodInfo = 
{
	"get_userScope"/* name */
	, (methodPointerType)&Leaderboard_get_userScope_m6975/* method */
	, &Leaderboard_t1073_il2cpp_TypeInfo/* declaring_type */
	, &UserScope_t1245_0_0_0/* return_type */
	, RuntimeInvoker_UserScope_t1245/* invoker_method */
	, NULL/* parameters */
	, 755/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1768/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType UserScope_t1245_0_0_0;
static const ParameterInfo Leaderboard_t1073_Leaderboard_set_userScope_m6976_ParameterInfos[] = 
{
	{"value", 0, 134219739, 0, &UserScope_t1245_0_0_0},
};
extern void* RuntimeInvoker_Void_t57_Int32_t50 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_userScope(UnityEngine.SocialPlatforms.UserScope)
extern const MethodInfo Leaderboard_set_userScope_m6976_MethodInfo = 
{
	"set_userScope"/* name */
	, (methodPointerType)&Leaderboard_set_userScope_m6976/* method */
	, &Leaderboard_t1073_il2cpp_TypeInfo/* declaring_type */
	, &Void_t57_0_0_0/* return_type */
	, RuntimeInvoker_Void_t57_Int32_t50/* invoker_method */
	, Leaderboard_t1073_Leaderboard_set_userScope_m6976_ParameterInfos/* parameters */
	, 756/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 9/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1769/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Range_t1236_0_0_0;
extern void* RuntimeInvoker_Range_t1236 (const MethodInfo* method, void* obj, void** args);
// UnityEngine.SocialPlatforms.Range UnityEngine.SocialPlatforms.Impl.Leaderboard::get_range()
extern const MethodInfo Leaderboard_get_range_m6977_MethodInfo = 
{
	"get_range"/* name */
	, (methodPointerType)&Leaderboard_get_range_m6977/* method */
	, &Leaderboard_t1073_il2cpp_TypeInfo/* declaring_type */
	, &Range_t1236_0_0_0/* return_type */
	, RuntimeInvoker_Range_t1236/* invoker_method */
	, NULL/* parameters */
	, 757/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1770/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Range_t1236_0_0_0;
static const ParameterInfo Leaderboard_t1073_Leaderboard_set_range_m6978_ParameterInfos[] = 
{
	{"value", 0, 134219740, 0, &Range_t1236_0_0_0},
};
extern void* RuntimeInvoker_Void_t57_Range_t1236 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_range(UnityEngine.SocialPlatforms.Range)
extern const MethodInfo Leaderboard_set_range_m6978_MethodInfo = 
{
	"set_range"/* name */
	, (methodPointerType)&Leaderboard_set_range_m6978/* method */
	, &Leaderboard_t1073_il2cpp_TypeInfo/* declaring_type */
	, &Void_t57_0_0_0/* return_type */
	, RuntimeInvoker_Void_t57_Range_t1236/* invoker_method */
	, Leaderboard_t1073_Leaderboard_set_range_m6978_ParameterInfos/* parameters */
	, 758/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 10/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1771/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType TimeScope_t1246_0_0_0;
extern void* RuntimeInvoker_TimeScope_t1246 (const MethodInfo* method, void* obj, void** args);
// UnityEngine.SocialPlatforms.TimeScope UnityEngine.SocialPlatforms.Impl.Leaderboard::get_timeScope()
extern const MethodInfo Leaderboard_get_timeScope_m6979_MethodInfo = 
{
	"get_timeScope"/* name */
	, (methodPointerType)&Leaderboard_get_timeScope_m6979/* method */
	, &Leaderboard_t1073_il2cpp_TypeInfo/* declaring_type */
	, &TimeScope_t1246_0_0_0/* return_type */
	, RuntimeInvoker_TimeScope_t1246/* invoker_method */
	, NULL/* parameters */
	, 759/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1772/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType TimeScope_t1246_0_0_0;
static const ParameterInfo Leaderboard_t1073_Leaderboard_set_timeScope_m6980_ParameterInfos[] = 
{
	{"value", 0, 134219741, 0, &TimeScope_t1246_0_0_0},
};
extern void* RuntimeInvoker_Void_t57_Int32_t50 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_timeScope(UnityEngine.SocialPlatforms.TimeScope)
extern const MethodInfo Leaderboard_set_timeScope_m6980_MethodInfo = 
{
	"set_timeScope"/* name */
	, (methodPointerType)&Leaderboard_set_timeScope_m6980/* method */
	, &Leaderboard_t1073_il2cpp_TypeInfo/* declaring_type */
	, &Void_t57_0_0_0/* return_type */
	, RuntimeInvoker_Void_t57_Int32_t50/* invoker_method */
	, Leaderboard_t1073_Leaderboard_set_timeScope_m6980_ParameterInfos/* parameters */
	, 760/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 11/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1773/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* Leaderboard_t1073_MethodInfos[] =
{
	&Leaderboard__ctor_m6966_MethodInfo,
	&Leaderboard_ToString_m6967_MethodInfo,
	&Leaderboard_SetLocalUserScore_m6968_MethodInfo,
	&Leaderboard_SetMaxRange_m6969_MethodInfo,
	&Leaderboard_SetScores_m6970_MethodInfo,
	&Leaderboard_SetTitle_m6971_MethodInfo,
	&Leaderboard_GetUserFilter_m6972_MethodInfo,
	&Leaderboard_get_id_m6973_MethodInfo,
	&Leaderboard_set_id_m6974_MethodInfo,
	&Leaderboard_get_userScope_m6975_MethodInfo,
	&Leaderboard_set_userScope_m6976_MethodInfo,
	&Leaderboard_get_range_m6977_MethodInfo,
	&Leaderboard_set_range_m6978_MethodInfo,
	&Leaderboard_get_timeScope_m6979_MethodInfo,
	&Leaderboard_set_timeScope_m6980_MethodInfo,
	NULL
};
extern const MethodInfo Leaderboard_get_id_m6973_MethodInfo;
extern const MethodInfo Leaderboard_set_id_m6974_MethodInfo;
static const PropertyInfo Leaderboard_t1073____id_PropertyInfo = 
{
	&Leaderboard_t1073_il2cpp_TypeInfo/* parent */
	, "id"/* name */
	, &Leaderboard_get_id_m6973_MethodInfo/* get */
	, &Leaderboard_set_id_m6974_MethodInfo/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo Leaderboard_get_userScope_m6975_MethodInfo;
extern const MethodInfo Leaderboard_set_userScope_m6976_MethodInfo;
static const PropertyInfo Leaderboard_t1073____userScope_PropertyInfo = 
{
	&Leaderboard_t1073_il2cpp_TypeInfo/* parent */
	, "userScope"/* name */
	, &Leaderboard_get_userScope_m6975_MethodInfo/* get */
	, &Leaderboard_set_userScope_m6976_MethodInfo/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo Leaderboard_get_range_m6977_MethodInfo;
extern const MethodInfo Leaderboard_set_range_m6978_MethodInfo;
static const PropertyInfo Leaderboard_t1073____range_PropertyInfo = 
{
	&Leaderboard_t1073_il2cpp_TypeInfo/* parent */
	, "range"/* name */
	, &Leaderboard_get_range_m6977_MethodInfo/* get */
	, &Leaderboard_set_range_m6978_MethodInfo/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo Leaderboard_get_timeScope_m6979_MethodInfo;
extern const MethodInfo Leaderboard_set_timeScope_m6980_MethodInfo;
static const PropertyInfo Leaderboard_t1073____timeScope_PropertyInfo = 
{
	&Leaderboard_t1073_il2cpp_TypeInfo/* parent */
	, "timeScope"/* name */
	, &Leaderboard_get_timeScope_m6979_MethodInfo/* get */
	, &Leaderboard_set_timeScope_m6980_MethodInfo/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
static const PropertyInfo* Leaderboard_t1073_PropertyInfos[] =
{
	&Leaderboard_t1073____id_PropertyInfo,
	&Leaderboard_t1073____userScope_PropertyInfo,
	&Leaderboard_t1073____range_PropertyInfo,
	&Leaderboard_t1073____timeScope_PropertyInfo,
	NULL
};
extern const MethodInfo Leaderboard_ToString_m6967_MethodInfo;
static const Il2CppMethodReference Leaderboard_t1073_VTable[] =
{
	&Object_Equals_m252_MethodInfo,
	&Object_Finalize_m230_MethodInfo,
	&Object_GetHashCode_m172_MethodInfo,
	&Leaderboard_ToString_m6967_MethodInfo,
	&Leaderboard_get_id_m6973_MethodInfo,
	&Leaderboard_get_userScope_m6975_MethodInfo,
	&Leaderboard_get_range_m6977_MethodInfo,
	&Leaderboard_get_timeScope_m6979_MethodInfo,
	&Leaderboard_set_id_m6974_MethodInfo,
	&Leaderboard_set_userScope_m6976_MethodInfo,
	&Leaderboard_set_range_m6978_MethodInfo,
	&Leaderboard_set_timeScope_m6980_MethodInfo,
};
static bool Leaderboard_t1073_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
extern const Il2CppType ILeaderboard_t1277_0_0_0;
static const Il2CppType* Leaderboard_t1073_InterfacesTypeInfos[] = 
{
	&ILeaderboard_t1277_0_0_0,
};
static Il2CppInterfaceOffsetPair Leaderboard_t1073_InterfacesOffsets[] = 
{
	{ &ILeaderboard_t1277_0_0_0, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType Leaderboard_t1073_0_0_0;
extern const Il2CppType Leaderboard_t1073_1_0_0;
struct Leaderboard_t1073;
const Il2CppTypeDefinitionMetadata Leaderboard_t1073_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, Leaderboard_t1073_InterfacesTypeInfos/* implementedInterfaces */
	, Leaderboard_t1073_InterfacesOffsets/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, Leaderboard_t1073_VTable/* vtableMethods */
	, Leaderboard_t1073_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 1160/* fieldStart */

};
TypeInfo Leaderboard_t1073_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "Leaderboard"/* name */
	, "UnityEngine.SocialPlatforms.Impl"/* namespaze */
	, Leaderboard_t1073_MethodInfos/* methods */
	, Leaderboard_t1073_PropertyInfos/* properties */
	, NULL/* events */
	, &Leaderboard_t1073_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &Leaderboard_t1073_0_0_0/* byval_arg */
	, &Leaderboard_t1073_1_0_0/* this_arg */
	, &Leaderboard_t1073_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (Leaderboard_t1073)/* instance_size */
	, sizeof (Leaderboard_t1073)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048577/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 15/* method_count */
	, 4/* property_count */
	, 10/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 12/* vtable_count */
	, 1/* interfaces_count */
	, 1/* interface_offsets_count */

};
// UnityEngine.SendMouseEvents/HitInfo
#include "UnityEngine_UnityEngine_SendMouseEvents_HitInfo.h"
// Metadata Definition UnityEngine.SendMouseEvents/HitInfo
extern TypeInfo HitInfo_t1237_il2cpp_TypeInfo;
// UnityEngine.SendMouseEvents/HitInfo
#include "UnityEngine_UnityEngine_SendMouseEvents_HitInfoMethodDeclarations.h"
extern const Il2CppType String_t_0_0_0;
static const ParameterInfo HitInfo_t1237_HitInfo_SendMessage_m6981_ParameterInfos[] = 
{
	{"name", 0, 134219746, 0, &String_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t57_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.SendMouseEvents/HitInfo::SendMessage(System.String)
extern const MethodInfo HitInfo_SendMessage_m6981_MethodInfo = 
{
	"SendMessage"/* name */
	, (methodPointerType)&HitInfo_SendMessage_m6981/* method */
	, &HitInfo_t1237_il2cpp_TypeInfo/* declaring_type */
	, &Void_t57_0_0_0/* return_type */
	, RuntimeInvoker_Void_t57_Object_t/* invoker_method */
	, HitInfo_t1237_HitInfo_SendMessage_m6981_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1777/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType HitInfo_t1237_0_0_0;
extern const Il2CppType HitInfo_t1237_0_0_0;
extern const Il2CppType HitInfo_t1237_0_0_0;
static const ParameterInfo HitInfo_t1237_HitInfo_Compare_m6982_ParameterInfos[] = 
{
	{"lhs", 0, 134219747, 0, &HitInfo_t1237_0_0_0},
	{"rhs", 1, 134219748, 0, &HitInfo_t1237_0_0_0},
};
extern void* RuntimeInvoker_Boolean_t29_HitInfo_t1237_HitInfo_t1237 (const MethodInfo* method, void* obj, void** args);
// System.Boolean UnityEngine.SendMouseEvents/HitInfo::Compare(UnityEngine.SendMouseEvents/HitInfo,UnityEngine.SendMouseEvents/HitInfo)
extern const MethodInfo HitInfo_Compare_m6982_MethodInfo = 
{
	"Compare"/* name */
	, (methodPointerType)&HitInfo_Compare_m6982/* method */
	, &HitInfo_t1237_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t29_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t29_HitInfo_t1237_HitInfo_t1237/* invoker_method */
	, HitInfo_t1237_HitInfo_Compare_m6982_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1778/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType HitInfo_t1237_0_0_0;
static const ParameterInfo HitInfo_t1237_HitInfo_op_Implicit_m6983_ParameterInfos[] = 
{
	{"exists", 0, 134219749, 0, &HitInfo_t1237_0_0_0},
};
extern void* RuntimeInvoker_Boolean_t29_HitInfo_t1237 (const MethodInfo* method, void* obj, void** args);
// System.Boolean UnityEngine.SendMouseEvents/HitInfo::op_Implicit(UnityEngine.SendMouseEvents/HitInfo)
extern const MethodInfo HitInfo_op_Implicit_m6983_MethodInfo = 
{
	"op_Implicit"/* name */
	, (methodPointerType)&HitInfo_op_Implicit_m6983/* method */
	, &HitInfo_t1237_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t29_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t29_HitInfo_t1237/* invoker_method */
	, HitInfo_t1237_HitInfo_op_Implicit_m6983_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 2198/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1779/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* HitInfo_t1237_MethodInfos[] =
{
	&HitInfo_SendMessage_m6981_MethodInfo,
	&HitInfo_Compare_m6982_MethodInfo,
	&HitInfo_op_Implicit_m6983_MethodInfo,
	NULL
};
static const Il2CppMethodReference HitInfo_t1237_VTable[] =
{
	&ValueType_Equals_m5702_MethodInfo,
	&Object_Finalize_m230_MethodInfo,
	&ValueType_GetHashCode_m5703_MethodInfo,
	&ValueType_ToString_m5706_MethodInfo,
};
static bool HitInfo_t1237_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType HitInfo_t1237_1_0_0;
extern TypeInfo SendMouseEvents_t1240_il2cpp_TypeInfo;
extern const Il2CppType SendMouseEvents_t1240_0_0_0;
const Il2CppTypeDefinitionMetadata HitInfo_t1237_DefinitionMetadata = 
{
	&SendMouseEvents_t1240_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &ValueType_t1025_0_0_0/* parent */
	, HitInfo_t1237_VTable/* vtableMethods */
	, HitInfo_t1237_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 1170/* fieldStart */

};
TypeInfo HitInfo_t1237_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "HitInfo"/* name */
	, ""/* namespaze */
	, HitInfo_t1237_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &HitInfo_t1237_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &HitInfo_t1237_0_0_0/* byval_arg */
	, &HitInfo_t1237_1_0_0/* this_arg */
	, &HitInfo_t1237_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (HitInfo_t1237)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (HitInfo_t1237)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048843/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, true/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 3/* method_count */
	, 0/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// UnityEngine.SendMouseEvents
#include "UnityEngine_UnityEngine_SendMouseEvents.h"
// Metadata Definition UnityEngine.SendMouseEvents
// UnityEngine.SendMouseEvents
#include "UnityEngine_UnityEngine_SendMouseEventsMethodDeclarations.h"
extern void* RuntimeInvoker_Void_t57 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.SendMouseEvents::.cctor()
extern const MethodInfo SendMouseEvents__cctor_m6984_MethodInfo = 
{
	".cctor"/* name */
	, (methodPointerType)&SendMouseEvents__cctor_m6984/* method */
	, &SendMouseEvents_t1240_il2cpp_TypeInfo/* declaring_type */
	, &Void_t57_0_0_0/* return_type */
	, RuntimeInvoker_Void_t57/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 6161/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1774/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t50_0_0_0;
extern const Il2CppType Int32_t50_0_0_0;
static const ParameterInfo SendMouseEvents_t1240_SendMouseEvents_DoSendMouseEvents_m6985_ParameterInfos[] = 
{
	{"mouseUsed", 0, 134219742, 0, &Int32_t50_0_0_0},
	{"skipRTCameras", 1, 134219743, 0, &Int32_t50_0_0_0},
};
extern void* RuntimeInvoker_Void_t57_Int32_t50_Int32_t50 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.SendMouseEvents::DoSendMouseEvents(System.Int32,System.Int32)
extern const MethodInfo SendMouseEvents_DoSendMouseEvents_m6985_MethodInfo = 
{
	"DoSendMouseEvents"/* name */
	, (methodPointerType)&SendMouseEvents_DoSendMouseEvents_m6985/* method */
	, &SendMouseEvents_t1240_il2cpp_TypeInfo/* declaring_type */
	, &Void_t57_0_0_0/* return_type */
	, RuntimeInvoker_Void_t57_Int32_t50_Int32_t50/* invoker_method */
	, SendMouseEvents_t1240_SendMouseEvents_DoSendMouseEvents_m6985_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1775/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t50_0_0_0;
extern const Il2CppType HitInfo_t1237_0_0_0;
static const ParameterInfo SendMouseEvents_t1240_SendMouseEvents_SendEvents_m6986_ParameterInfos[] = 
{
	{"i", 0, 134219744, 0, &Int32_t50_0_0_0},
	{"hit", 1, 134219745, 0, &HitInfo_t1237_0_0_0},
};
extern void* RuntimeInvoker_Void_t57_Int32_t50_HitInfo_t1237 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.SendMouseEvents::SendEvents(System.Int32,UnityEngine.SendMouseEvents/HitInfo)
extern const MethodInfo SendMouseEvents_SendEvents_m6986_MethodInfo = 
{
	"SendEvents"/* name */
	, (methodPointerType)&SendMouseEvents_SendEvents_m6986/* method */
	, &SendMouseEvents_t1240_il2cpp_TypeInfo/* declaring_type */
	, &Void_t57_0_0_0/* return_type */
	, RuntimeInvoker_Void_t57_Int32_t50_HitInfo_t1237/* invoker_method */
	, SendMouseEvents_t1240_SendMouseEvents_SendEvents_m6986_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1776/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* SendMouseEvents_t1240_MethodInfos[] =
{
	&SendMouseEvents__cctor_m6984_MethodInfo,
	&SendMouseEvents_DoSendMouseEvents_m6985_MethodInfo,
	&SendMouseEvents_SendEvents_m6986_MethodInfo,
	NULL
};
static const Il2CppType* SendMouseEvents_t1240_il2cpp_TypeInfo__nestedTypes[1] =
{
	&HitInfo_t1237_0_0_0,
};
static const Il2CppMethodReference SendMouseEvents_t1240_VTable[] =
{
	&Object_Equals_m252_MethodInfo,
	&Object_Finalize_m230_MethodInfo,
	&Object_GetHashCode_m172_MethodInfo,
	&Object_ToString_m253_MethodInfo,
};
static bool SendMouseEvents_t1240_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType SendMouseEvents_t1240_1_0_0;
struct SendMouseEvents_t1240;
const Il2CppTypeDefinitionMetadata SendMouseEvents_t1240_DefinitionMetadata = 
{
	NULL/* declaringType */
	, SendMouseEvents_t1240_il2cpp_TypeInfo__nestedTypes/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, SendMouseEvents_t1240_VTable/* vtableMethods */
	, SendMouseEvents_t1240_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 1172/* fieldStart */

};
TypeInfo SendMouseEvents_t1240_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "SendMouseEvents"/* name */
	, "UnityEngine"/* namespaze */
	, SendMouseEvents_t1240_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &SendMouseEvents_t1240_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &SendMouseEvents_t1240_0_0_0/* byval_arg */
	, &SendMouseEvents_t1240_1_0_0/* this_arg */
	, &SendMouseEvents_t1240_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (SendMouseEvents_t1240)/* instance_size */
	, sizeof (SendMouseEvents_t1240)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, sizeof(SendMouseEvents_t1240_StaticFields)/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, true/* has_cctor */
	, false/* is_blittable */
	, 3/* method_count */
	, 0/* property_count */
	, 7/* field_count */
	, 0/* event_count */
	, 1/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// UnityEngine.Social
#include "UnityEngine_UnityEngine_Social.h"
// Metadata Definition UnityEngine.Social
extern TypeInfo Social_t1241_il2cpp_TypeInfo;
// UnityEngine.Social
#include "UnityEngine_UnityEngine_SocialMethodDeclarations.h"
extern const Il2CppType ISocialPlatform_t1242_0_0_0;
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// UnityEngine.SocialPlatforms.ISocialPlatform UnityEngine.Social::get_Active()
extern const MethodInfo Social_get_Active_m6987_MethodInfo = 
{
	"get_Active"/* name */
	, (methodPointerType)&Social_get_Active_m6987/* method */
	, &Social_t1241_il2cpp_TypeInfo/* declaring_type */
	, &ISocialPlatform_t1242_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2198/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1780/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// UnityEngine.SocialPlatforms.ILocalUser UnityEngine.Social::get_localUser()
extern const MethodInfo Social_get_localUser_m3595_MethodInfo = 
{
	"get_localUser"/* name */
	, (methodPointerType)&Social_get_localUser_m3595/* method */
	, &Social_t1241_il2cpp_TypeInfo/* declaring_type */
	, &ILocalUser_t693_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2198/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1781/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType Double_t60_0_0_0;
extern const Il2CppType Action_1_t235_0_0_0;
static const ParameterInfo Social_t1241_Social_ReportProgress_m3690_ParameterInfos[] = 
{
	{"achievementID", 0, 134219750, 0, &String_t_0_0_0},
	{"progress", 1, 134219751, 0, &Double_t60_0_0_0},
	{"callback", 2, 134219752, 0, &Action_1_t235_0_0_0},
};
extern void* RuntimeInvoker_Void_t57_Object_t_Double_t60_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Social::ReportProgress(System.String,System.Double,System.Action`1<System.Boolean>)
extern const MethodInfo Social_ReportProgress_m3690_MethodInfo = 
{
	"ReportProgress"/* name */
	, (methodPointerType)&Social_ReportProgress_m3690/* method */
	, &Social_t1241_il2cpp_TypeInfo/* declaring_type */
	, &Void_t57_0_0_0/* return_type */
	, RuntimeInvoker_Void_t57_Object_t_Double_t60_Object_t/* invoker_method */
	, Social_t1241_Social_ReportProgress_m3690_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1782/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int64_t631_0_0_0;
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType Action_1_t235_0_0_0;
static const ParameterInfo Social_t1241_Social_ReportScore_m3689_ParameterInfos[] = 
{
	{"score", 0, 134219753, 0, &Int64_t631_0_0_0},
	{"board", 1, 134219754, 0, &String_t_0_0_0},
	{"callback", 2, 134219755, 0, &Action_1_t235_0_0_0},
};
extern void* RuntimeInvoker_Void_t57_Int64_t631_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Social::ReportScore(System.Int64,System.String,System.Action`1<System.Boolean>)
extern const MethodInfo Social_ReportScore_m3689_MethodInfo = 
{
	"ReportScore"/* name */
	, (methodPointerType)&Social_ReportScore_m3689/* method */
	, &Social_t1241_il2cpp_TypeInfo/* declaring_type */
	, &Void_t57_0_0_0/* return_type */
	, RuntimeInvoker_Void_t57_Int64_t631_Object_t_Object_t/* invoker_method */
	, Social_t1241_Social_ReportScore_m3689_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1783/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Void_t57 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Social::ShowAchievementsUI()
extern const MethodInfo Social_ShowAchievementsUI_m3692_MethodInfo = 
{
	"ShowAchievementsUI"/* name */
	, (methodPointerType)&Social_ShowAchievementsUI_m3692/* method */
	, &Social_t1241_il2cpp_TypeInfo/* declaring_type */
	, &Void_t57_0_0_0/* return_type */
	, RuntimeInvoker_Void_t57/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1784/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* Social_t1241_MethodInfos[] =
{
	&Social_get_Active_m6987_MethodInfo,
	&Social_get_localUser_m3595_MethodInfo,
	&Social_ReportProgress_m3690_MethodInfo,
	&Social_ReportScore_m3689_MethodInfo,
	&Social_ShowAchievementsUI_m3692_MethodInfo,
	NULL
};
extern const MethodInfo Social_get_Active_m6987_MethodInfo;
static const PropertyInfo Social_t1241____Active_PropertyInfo = 
{
	&Social_t1241_il2cpp_TypeInfo/* parent */
	, "Active"/* name */
	, &Social_get_Active_m6987_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo Social_get_localUser_m3595_MethodInfo;
static const PropertyInfo Social_t1241____localUser_PropertyInfo = 
{
	&Social_t1241_il2cpp_TypeInfo/* parent */
	, "localUser"/* name */
	, &Social_get_localUser_m3595_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
static const PropertyInfo* Social_t1241_PropertyInfos[] =
{
	&Social_t1241____Active_PropertyInfo,
	&Social_t1241____localUser_PropertyInfo,
	NULL
};
static const Il2CppMethodReference Social_t1241_VTable[] =
{
	&Object_Equals_m252_MethodInfo,
	&Object_Finalize_m230_MethodInfo,
	&Object_GetHashCode_m172_MethodInfo,
	&Object_ToString_m253_MethodInfo,
};
static bool Social_t1241_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType Social_t1241_0_0_0;
extern const Il2CppType Social_t1241_1_0_0;
struct Social_t1241;
const Il2CppTypeDefinitionMetadata Social_t1241_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, Social_t1241_VTable/* vtableMethods */
	, Social_t1241_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo Social_t1241_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "Social"/* name */
	, "UnityEngine"/* namespaze */
	, Social_t1241_MethodInfos/* methods */
	, Social_t1241_PropertyInfos/* properties */
	, NULL/* events */
	, &Social_t1241_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &Social_t1241_0_0_0/* byval_arg */
	, &Social_t1241_1_0_0/* this_arg */
	, &Social_t1241_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (Social_t1241)/* instance_size */
	, sizeof (Social_t1241)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048961/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 5/* method_count */
	, 2/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// UnityEngine.SocialPlatforms.ActivePlatform
#include "UnityEngine_UnityEngine_SocialPlatforms_ActivePlatform.h"
// Metadata Definition UnityEngine.SocialPlatforms.ActivePlatform
extern TypeInfo ActivePlatform_t1243_il2cpp_TypeInfo;
// UnityEngine.SocialPlatforms.ActivePlatform
#include "UnityEngine_UnityEngine_SocialPlatforms_ActivePlatformMethodDeclarations.h"
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// UnityEngine.SocialPlatforms.ISocialPlatform UnityEngine.SocialPlatforms.ActivePlatform::get_Instance()
extern const MethodInfo ActivePlatform_get_Instance_m6988_MethodInfo = 
{
	"get_Instance"/* name */
	, (methodPointerType)&ActivePlatform_get_Instance_m6988/* method */
	, &ActivePlatform_t1243_il2cpp_TypeInfo/* declaring_type */
	, &ISocialPlatform_t1242_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2195/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1785/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// UnityEngine.SocialPlatforms.ISocialPlatform UnityEngine.SocialPlatforms.ActivePlatform::SelectSocialPlatform()
extern const MethodInfo ActivePlatform_SelectSocialPlatform_m6989_MethodInfo = 
{
	"SelectSocialPlatform"/* name */
	, (methodPointerType)&ActivePlatform_SelectSocialPlatform_m6989/* method */
	, &ActivePlatform_t1243_il2cpp_TypeInfo/* declaring_type */
	, &ISocialPlatform_t1242_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1786/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* ActivePlatform_t1243_MethodInfos[] =
{
	&ActivePlatform_get_Instance_m6988_MethodInfo,
	&ActivePlatform_SelectSocialPlatform_m6989_MethodInfo,
	NULL
};
extern const MethodInfo ActivePlatform_get_Instance_m6988_MethodInfo;
static const PropertyInfo ActivePlatform_t1243____Instance_PropertyInfo = 
{
	&ActivePlatform_t1243_il2cpp_TypeInfo/* parent */
	, "Instance"/* name */
	, &ActivePlatform_get_Instance_m6988_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
static const PropertyInfo* ActivePlatform_t1243_PropertyInfos[] =
{
	&ActivePlatform_t1243____Instance_PropertyInfo,
	NULL
};
static const Il2CppMethodReference ActivePlatform_t1243_VTable[] =
{
	&Object_Equals_m252_MethodInfo,
	&Object_Finalize_m230_MethodInfo,
	&Object_GetHashCode_m172_MethodInfo,
	&Object_ToString_m253_MethodInfo,
};
static bool ActivePlatform_t1243_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType ActivePlatform_t1243_0_0_0;
extern const Il2CppType ActivePlatform_t1243_1_0_0;
struct ActivePlatform_t1243;
const Il2CppTypeDefinitionMetadata ActivePlatform_t1243_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, ActivePlatform_t1243_VTable/* vtableMethods */
	, ActivePlatform_t1243_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 1179/* fieldStart */

};
TypeInfo ActivePlatform_t1243_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "ActivePlatform"/* name */
	, "UnityEngine.SocialPlatforms"/* namespaze */
	, ActivePlatform_t1243_MethodInfos/* methods */
	, ActivePlatform_t1243_PropertyInfos/* properties */
	, NULL/* events */
	, &ActivePlatform_t1243_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &ActivePlatform_t1243_0_0_0/* byval_arg */
	, &ActivePlatform_t1243_1_0_0/* this_arg */
	, &ActivePlatform_t1243_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (ActivePlatform_t1243)/* instance_size */
	, sizeof (ActivePlatform_t1243)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, sizeof(ActivePlatform_t1243_StaticFields)/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048960/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 2/* method_count */
	, 1/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// Metadata Definition UnityEngine.SocialPlatforms.ISocialPlatform
extern TypeInfo ISocialPlatform_t1242_il2cpp_TypeInfo;
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// UnityEngine.SocialPlatforms.ILocalUser UnityEngine.SocialPlatforms.ISocialPlatform::get_localUser()
extern const MethodInfo ISocialPlatform_get_localUser_m7311_MethodInfo = 
{
	"get_localUser"/* name */
	, NULL/* method */
	, &ISocialPlatform_t1242_il2cpp_TypeInfo/* declaring_type */
	, &ILocalUser_t693_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1787/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType Double_t60_0_0_0;
extern const Il2CppType Action_1_t235_0_0_0;
static const ParameterInfo ISocialPlatform_t1242_ISocialPlatform_ReportProgress_m7312_ParameterInfos[] = 
{
	{"achievementID", 0, 134219756, 0, &String_t_0_0_0},
	{"progress", 1, 134219757, 0, &Double_t60_0_0_0},
	{"callback", 2, 134219758, 0, &Action_1_t235_0_0_0},
};
extern void* RuntimeInvoker_Void_t57_Object_t_Double_t60_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.SocialPlatforms.ISocialPlatform::ReportProgress(System.String,System.Double,System.Action`1<System.Boolean>)
extern const MethodInfo ISocialPlatform_ReportProgress_m7312_MethodInfo = 
{
	"ReportProgress"/* name */
	, NULL/* method */
	, &ISocialPlatform_t1242_il2cpp_TypeInfo/* declaring_type */
	, &Void_t57_0_0_0/* return_type */
	, RuntimeInvoker_Void_t57_Object_t_Double_t60_Object_t/* invoker_method */
	, ISocialPlatform_t1242_ISocialPlatform_ReportProgress_m7312_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1788/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int64_t631_0_0_0;
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType Action_1_t235_0_0_0;
static const ParameterInfo ISocialPlatform_t1242_ISocialPlatform_ReportScore_m7313_ParameterInfos[] = 
{
	{"score", 0, 134219759, 0, &Int64_t631_0_0_0},
	{"board", 1, 134219760, 0, &String_t_0_0_0},
	{"callback", 2, 134219761, 0, &Action_1_t235_0_0_0},
};
extern void* RuntimeInvoker_Void_t57_Int64_t631_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.SocialPlatforms.ISocialPlatform::ReportScore(System.Int64,System.String,System.Action`1<System.Boolean>)
extern const MethodInfo ISocialPlatform_ReportScore_m7313_MethodInfo = 
{
	"ReportScore"/* name */
	, NULL/* method */
	, &ISocialPlatform_t1242_il2cpp_TypeInfo/* declaring_type */
	, &Void_t57_0_0_0/* return_type */
	, RuntimeInvoker_Void_t57_Int64_t631_Object_t_Object_t/* invoker_method */
	, ISocialPlatform_t1242_ISocialPlatform_ReportScore_m7313_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1789/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Void_t57 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.SocialPlatforms.ISocialPlatform::ShowAchievementsUI()
extern const MethodInfo ISocialPlatform_ShowAchievementsUI_m7314_MethodInfo = 
{
	"ShowAchievementsUI"/* name */
	, NULL/* method */
	, &ISocialPlatform_t1242_il2cpp_TypeInfo/* declaring_type */
	, &Void_t57_0_0_0/* return_type */
	, RuntimeInvoker_Void_t57/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1790/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType ILocalUser_t693_0_0_0;
extern const Il2CppType Action_1_t235_0_0_0;
static const ParameterInfo ISocialPlatform_t1242_ISocialPlatform_Authenticate_m7315_ParameterInfos[] = 
{
	{"user", 0, 134219762, 0, &ILocalUser_t693_0_0_0},
	{"callback", 1, 134219763, 0, &Action_1_t235_0_0_0},
};
extern void* RuntimeInvoker_Void_t57_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.SocialPlatforms.ISocialPlatform::Authenticate(UnityEngine.SocialPlatforms.ILocalUser,System.Action`1<System.Boolean>)
extern const MethodInfo ISocialPlatform_Authenticate_m7315_MethodInfo = 
{
	"Authenticate"/* name */
	, NULL/* method */
	, &ISocialPlatform_t1242_il2cpp_TypeInfo/* declaring_type */
	, &Void_t57_0_0_0/* return_type */
	, RuntimeInvoker_Void_t57_Object_t_Object_t/* invoker_method */
	, ISocialPlatform_t1242_ISocialPlatform_Authenticate_m7315_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1791/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType ILocalUser_t693_0_0_0;
extern const Il2CppType Action_1_t235_0_0_0;
static const ParameterInfo ISocialPlatform_t1242_ISocialPlatform_LoadFriends_m7316_ParameterInfos[] = 
{
	{"user", 0, 134219764, 0, &ILocalUser_t693_0_0_0},
	{"callback", 1, 134219765, 0, &Action_1_t235_0_0_0},
};
extern void* RuntimeInvoker_Void_t57_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.SocialPlatforms.ISocialPlatform::LoadFriends(UnityEngine.SocialPlatforms.ILocalUser,System.Action`1<System.Boolean>)
extern const MethodInfo ISocialPlatform_LoadFriends_m7316_MethodInfo = 
{
	"LoadFriends"/* name */
	, NULL/* method */
	, &ISocialPlatform_t1242_il2cpp_TypeInfo/* declaring_type */
	, &Void_t57_0_0_0/* return_type */
	, RuntimeInvoker_Void_t57_Object_t_Object_t/* invoker_method */
	, ISocialPlatform_t1242_ISocialPlatform_LoadFriends_m7316_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1792/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* ISocialPlatform_t1242_MethodInfos[] =
{
	&ISocialPlatform_get_localUser_m7311_MethodInfo,
	&ISocialPlatform_ReportProgress_m7312_MethodInfo,
	&ISocialPlatform_ReportScore_m7313_MethodInfo,
	&ISocialPlatform_ShowAchievementsUI_m7314_MethodInfo,
	&ISocialPlatform_Authenticate_m7315_MethodInfo,
	&ISocialPlatform_LoadFriends_m7316_MethodInfo,
	NULL
};
extern const MethodInfo ISocialPlatform_get_localUser_m7311_MethodInfo;
static const PropertyInfo ISocialPlatform_t1242____localUser_PropertyInfo = 
{
	&ISocialPlatform_t1242_il2cpp_TypeInfo/* parent */
	, "localUser"/* name */
	, &ISocialPlatform_get_localUser_m7311_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
static const PropertyInfo* ISocialPlatform_t1242_PropertyInfos[] =
{
	&ISocialPlatform_t1242____localUser_PropertyInfo,
	NULL
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType ISocialPlatform_t1242_1_0_0;
struct ISocialPlatform_t1242;
const Il2CppTypeDefinitionMetadata ISocialPlatform_t1242_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, NULL/* parent */
	, NULL/* vtableMethods */
	, NULL/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo ISocialPlatform_t1242_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "ISocialPlatform"/* name */
	, "UnityEngine.SocialPlatforms"/* namespaze */
	, ISocialPlatform_t1242_MethodInfos/* methods */
	, ISocialPlatform_t1242_PropertyInfos/* properties */
	, NULL/* events */
	, &ISocialPlatform_t1242_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &ISocialPlatform_t1242_0_0_0/* byval_arg */
	, &ISocialPlatform_t1242_1_0_0/* this_arg */
	, &ISocialPlatform_t1242_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 6/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// Metadata Definition UnityEngine.SocialPlatforms.ILocalUser
extern TypeInfo ILocalUser_t693_il2cpp_TypeInfo;
extern const Il2CppType Action_1_t235_0_0_0;
static const ParameterInfo ILocalUser_t693_ILocalUser_Authenticate_m7317_ParameterInfos[] = 
{
	{"callback", 0, 134219766, 0, &Action_1_t235_0_0_0},
};
extern void* RuntimeInvoker_Void_t57_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.SocialPlatforms.ILocalUser::Authenticate(System.Action`1<System.Boolean>)
extern const MethodInfo ILocalUser_Authenticate_m7317_MethodInfo = 
{
	"Authenticate"/* name */
	, NULL/* method */
	, &ILocalUser_t693_il2cpp_TypeInfo/* declaring_type */
	, &Void_t57_0_0_0/* return_type */
	, RuntimeInvoker_Void_t57_Object_t/* invoker_method */
	, ILocalUser_t693_ILocalUser_Authenticate_m7317_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1793/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Boolean_t29 (const MethodInfo* method, void* obj, void** args);
// System.Boolean UnityEngine.SocialPlatforms.ILocalUser::get_authenticated()
extern const MethodInfo ILocalUser_get_authenticated_m7318_MethodInfo = 
{
	"get_authenticated"/* name */
	, NULL/* method */
	, &ILocalUser_t693_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t29_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t29/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1794/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Boolean_t29 (const MethodInfo* method, void* obj, void** args);
// System.Boolean UnityEngine.SocialPlatforms.ILocalUser::get_underage()
extern const MethodInfo ILocalUser_get_underage_m7319_MethodInfo = 
{
	"get_underage"/* name */
	, NULL/* method */
	, &ILocalUser_t693_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t29_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t29/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1795/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* ILocalUser_t693_MethodInfos[] =
{
	&ILocalUser_Authenticate_m7317_MethodInfo,
	&ILocalUser_get_authenticated_m7318_MethodInfo,
	&ILocalUser_get_underage_m7319_MethodInfo,
	NULL
};
extern const MethodInfo ILocalUser_get_authenticated_m7318_MethodInfo;
static const PropertyInfo ILocalUser_t693____authenticated_PropertyInfo = 
{
	&ILocalUser_t693_il2cpp_TypeInfo/* parent */
	, "authenticated"/* name */
	, &ILocalUser_get_authenticated_m7318_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo ILocalUser_get_underage_m7319_MethodInfo;
static const PropertyInfo ILocalUser_t693____underage_PropertyInfo = 
{
	&ILocalUser_t693_il2cpp_TypeInfo/* parent */
	, "underage"/* name */
	, &ILocalUser_get_underage_m7319_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
static const PropertyInfo* ILocalUser_t693_PropertyInfos[] =
{
	&ILocalUser_t693____authenticated_PropertyInfo,
	&ILocalUser_t693____underage_PropertyInfo,
	NULL
};
static const Il2CppType* ILocalUser_t693_InterfacesTypeInfos[] = 
{
	&IUserProfile_t692_0_0_0,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType ILocalUser_t693_1_0_0;
struct ILocalUser_t693;
const Il2CppTypeDefinitionMetadata ILocalUser_t693_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, ILocalUser_t693_InterfacesTypeInfos/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, NULL/* parent */
	, NULL/* vtableMethods */
	, NULL/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo ILocalUser_t693_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "ILocalUser"/* name */
	, "UnityEngine.SocialPlatforms"/* namespaze */
	, ILocalUser_t693_MethodInfos/* methods */
	, ILocalUser_t693_PropertyInfos/* properties */
	, NULL/* events */
	, &ILocalUser_t693_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &ILocalUser_t693_0_0_0/* byval_arg */
	, &ILocalUser_t693_1_0_0/* this_arg */
	, &ILocalUser_t693_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 3/* method_count */
	, 2/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 1/* interfaces_count */
	, 0/* interface_offsets_count */

};
// UnityEngine.SocialPlatforms.UserState
#include "UnityEngine_UnityEngine_SocialPlatforms_UserState.h"
// Metadata Definition UnityEngine.SocialPlatforms.UserState
extern TypeInfo UserState_t1244_il2cpp_TypeInfo;
// UnityEngine.SocialPlatforms.UserState
#include "UnityEngine_UnityEngine_SocialPlatforms_UserStateMethodDeclarations.h"
static const MethodInfo* UserState_t1244_MethodInfos[] =
{
	NULL
};
static const Il2CppMethodReference UserState_t1244_VTable[] =
{
	&Enum_Equals_m229_MethodInfo,
	&Object_Finalize_m230_MethodInfo,
	&Enum_GetHashCode_m231_MethodInfo,
	&Enum_ToString_m232_MethodInfo,
	&Enum_ToString_m233_MethodInfo,
	&Enum_System_IConvertible_ToBoolean_m234_MethodInfo,
	&Enum_System_IConvertible_ToByte_m235_MethodInfo,
	&Enum_System_IConvertible_ToChar_m236_MethodInfo,
	&Enum_System_IConvertible_ToDateTime_m237_MethodInfo,
	&Enum_System_IConvertible_ToDecimal_m238_MethodInfo,
	&Enum_System_IConvertible_ToDouble_m239_MethodInfo,
	&Enum_System_IConvertible_ToInt16_m240_MethodInfo,
	&Enum_System_IConvertible_ToInt32_m241_MethodInfo,
	&Enum_System_IConvertible_ToInt64_m242_MethodInfo,
	&Enum_System_IConvertible_ToSByte_m243_MethodInfo,
	&Enum_System_IConvertible_ToSingle_m244_MethodInfo,
	&Enum_ToString_m245_MethodInfo,
	&Enum_System_IConvertible_ToType_m246_MethodInfo,
	&Enum_System_IConvertible_ToUInt16_m247_MethodInfo,
	&Enum_System_IConvertible_ToUInt32_m248_MethodInfo,
	&Enum_System_IConvertible_ToUInt64_m249_MethodInfo,
	&Enum_CompareTo_m250_MethodInfo,
	&Enum_GetTypeCode_m251_MethodInfo,
};
static bool UserState_t1244_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair UserState_t1244_InterfacesOffsets[] = 
{
	{ &IFormattable_t53_0_0_0, 4},
	{ &IConvertible_t54_0_0_0, 5},
	{ &IComparable_t55_0_0_0, 21},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType UserState_t1244_1_0_0;
const Il2CppTypeDefinitionMetadata UserState_t1244_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, UserState_t1244_InterfacesOffsets/* interfaceOffsets */
	, &Enum_t56_0_0_0/* parent */
	, UserState_t1244_VTable/* vtableMethods */
	, UserState_t1244_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 1180/* fieldStart */

};
TypeInfo UserState_t1244_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "UserState"/* name */
	, "UnityEngine.SocialPlatforms"/* namespaze */
	, UserState_t1244_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &Int32_t50_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &UserState_t1244_0_0_0/* byval_arg */
	, &UserState_t1244_1_0_0/* this_arg */
	, &UserState_t1244_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (UserState_t1244)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (UserState_t1244)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(int32_t)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 257/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, true/* valuetype */
	, false/* initialized */
	, true/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 0/* method_count */
	, 0/* property_count */
	, 6/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 23/* vtable_count */
	, 0/* interfaces_count */
	, 3/* interface_offsets_count */

};
// Metadata Definition UnityEngine.SocialPlatforms.IUserProfile
extern TypeInfo IUserProfile_t692_il2cpp_TypeInfo;
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String UnityEngine.SocialPlatforms.IUserProfile::get_userName()
extern const MethodInfo IUserProfile_get_userName_m7320_MethodInfo = 
{
	"get_userName"/* name */
	, NULL/* method */
	, &IUserProfile_t692_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1796/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String UnityEngine.SocialPlatforms.IUserProfile::get_id()
extern const MethodInfo IUserProfile_get_id_m7321_MethodInfo = 
{
	"get_id"/* name */
	, NULL/* method */
	, &IUserProfile_t692_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1797/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* IUserProfile_t692_MethodInfos[] =
{
	&IUserProfile_get_userName_m7320_MethodInfo,
	&IUserProfile_get_id_m7321_MethodInfo,
	NULL
};
extern const MethodInfo IUserProfile_get_userName_m7320_MethodInfo;
static const PropertyInfo IUserProfile_t692____userName_PropertyInfo = 
{
	&IUserProfile_t692_il2cpp_TypeInfo/* parent */
	, "userName"/* name */
	, &IUserProfile_get_userName_m7320_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo IUserProfile_get_id_m7321_MethodInfo;
static const PropertyInfo IUserProfile_t692____id_PropertyInfo = 
{
	&IUserProfile_t692_il2cpp_TypeInfo/* parent */
	, "id"/* name */
	, &IUserProfile_get_id_m7321_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
static const PropertyInfo* IUserProfile_t692_PropertyInfos[] =
{
	&IUserProfile_t692____userName_PropertyInfo,
	&IUserProfile_t692____id_PropertyInfo,
	NULL
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType IUserProfile_t692_1_0_0;
struct IUserProfile_t692;
const Il2CppTypeDefinitionMetadata IUserProfile_t692_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, NULL/* parent */
	, NULL/* vtableMethods */
	, NULL/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo IUserProfile_t692_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "IUserProfile"/* name */
	, "UnityEngine.SocialPlatforms"/* namespaze */
	, IUserProfile_t692_MethodInfos/* methods */
	, IUserProfile_t692_PropertyInfos/* properties */
	, NULL/* events */
	, &IUserProfile_t692_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &IUserProfile_t692_0_0_0/* byval_arg */
	, &IUserProfile_t692_1_0_0/* this_arg */
	, &IUserProfile_t692_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 2/* method_count */
	, 2/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// Metadata Definition UnityEngine.SocialPlatforms.IAchievement
extern TypeInfo IAchievement_t1278_il2cpp_TypeInfo;
static const MethodInfo* IAchievement_t1278_MethodInfos[] =
{
	NULL
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType IAchievement_t1278_1_0_0;
struct IAchievement_t1278;
const Il2CppTypeDefinitionMetadata IAchievement_t1278_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, NULL/* parent */
	, NULL/* vtableMethods */
	, NULL/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo IAchievement_t1278_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "IAchievement"/* name */
	, "UnityEngine.SocialPlatforms"/* namespaze */
	, IAchievement_t1278_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &IAchievement_t1278_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &IAchievement_t1278_0_0_0/* byval_arg */
	, &IAchievement_t1278_1_0_0/* this_arg */
	, &IAchievement_t1278_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 0/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// Metadata Definition UnityEngine.SocialPlatforms.IAchievementDescription
extern TypeInfo IAchievementDescription_t1363_il2cpp_TypeInfo;
static const MethodInfo* IAchievementDescription_t1363_MethodInfos[] =
{
	NULL
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType IAchievementDescription_t1363_1_0_0;
struct IAchievementDescription_t1363;
const Il2CppTypeDefinitionMetadata IAchievementDescription_t1363_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, NULL/* parent */
	, NULL/* vtableMethods */
	, NULL/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo IAchievementDescription_t1363_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "IAchievementDescription"/* name */
	, "UnityEngine.SocialPlatforms"/* namespaze */
	, IAchievementDescription_t1363_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &IAchievementDescription_t1363_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &IAchievementDescription_t1363_0_0_0/* byval_arg */
	, &IAchievementDescription_t1363_1_0_0/* this_arg */
	, &IAchievementDescription_t1363_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 0/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// Metadata Definition UnityEngine.SocialPlatforms.IScore
extern TypeInfo IScore_t1234_il2cpp_TypeInfo;
static const MethodInfo* IScore_t1234_MethodInfos[] =
{
	NULL
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType IScore_t1234_1_0_0;
struct IScore_t1234;
const Il2CppTypeDefinitionMetadata IScore_t1234_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, NULL/* parent */
	, NULL/* vtableMethods */
	, NULL/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo IScore_t1234_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "IScore"/* name */
	, "UnityEngine.SocialPlatforms"/* namespaze */
	, IScore_t1234_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &IScore_t1234_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &IScore_t1234_0_0_0/* byval_arg */
	, &IScore_t1234_1_0_0/* this_arg */
	, &IScore_t1234_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 0/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// UnityEngine.SocialPlatforms.UserScope
#include "UnityEngine_UnityEngine_SocialPlatforms_UserScope.h"
// Metadata Definition UnityEngine.SocialPlatforms.UserScope
extern TypeInfo UserScope_t1245_il2cpp_TypeInfo;
// UnityEngine.SocialPlatforms.UserScope
#include "UnityEngine_UnityEngine_SocialPlatforms_UserScopeMethodDeclarations.h"
static const MethodInfo* UserScope_t1245_MethodInfos[] =
{
	NULL
};
static const Il2CppMethodReference UserScope_t1245_VTable[] =
{
	&Enum_Equals_m229_MethodInfo,
	&Object_Finalize_m230_MethodInfo,
	&Enum_GetHashCode_m231_MethodInfo,
	&Enum_ToString_m232_MethodInfo,
	&Enum_ToString_m233_MethodInfo,
	&Enum_System_IConvertible_ToBoolean_m234_MethodInfo,
	&Enum_System_IConvertible_ToByte_m235_MethodInfo,
	&Enum_System_IConvertible_ToChar_m236_MethodInfo,
	&Enum_System_IConvertible_ToDateTime_m237_MethodInfo,
	&Enum_System_IConvertible_ToDecimal_m238_MethodInfo,
	&Enum_System_IConvertible_ToDouble_m239_MethodInfo,
	&Enum_System_IConvertible_ToInt16_m240_MethodInfo,
	&Enum_System_IConvertible_ToInt32_m241_MethodInfo,
	&Enum_System_IConvertible_ToInt64_m242_MethodInfo,
	&Enum_System_IConvertible_ToSByte_m243_MethodInfo,
	&Enum_System_IConvertible_ToSingle_m244_MethodInfo,
	&Enum_ToString_m245_MethodInfo,
	&Enum_System_IConvertible_ToType_m246_MethodInfo,
	&Enum_System_IConvertible_ToUInt16_m247_MethodInfo,
	&Enum_System_IConvertible_ToUInt32_m248_MethodInfo,
	&Enum_System_IConvertible_ToUInt64_m249_MethodInfo,
	&Enum_CompareTo_m250_MethodInfo,
	&Enum_GetTypeCode_m251_MethodInfo,
};
static bool UserScope_t1245_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair UserScope_t1245_InterfacesOffsets[] = 
{
	{ &IFormattable_t53_0_0_0, 4},
	{ &IConvertible_t54_0_0_0, 5},
	{ &IComparable_t55_0_0_0, 21},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType UserScope_t1245_1_0_0;
const Il2CppTypeDefinitionMetadata UserScope_t1245_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, UserScope_t1245_InterfacesOffsets/* interfaceOffsets */
	, &Enum_t56_0_0_0/* parent */
	, UserScope_t1245_VTable/* vtableMethods */
	, UserScope_t1245_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 1186/* fieldStart */

};
TypeInfo UserScope_t1245_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "UserScope"/* name */
	, "UnityEngine.SocialPlatforms"/* namespaze */
	, UserScope_t1245_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &Int32_t50_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &UserScope_t1245_0_0_0/* byval_arg */
	, &UserScope_t1245_1_0_0/* this_arg */
	, &UserScope_t1245_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (UserScope_t1245)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (UserScope_t1245)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(int32_t)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 257/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, true/* valuetype */
	, false/* initialized */
	, true/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 0/* method_count */
	, 0/* property_count */
	, 3/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 23/* vtable_count */
	, 0/* interfaces_count */
	, 3/* interface_offsets_count */

};
// UnityEngine.SocialPlatforms.TimeScope
#include "UnityEngine_UnityEngine_SocialPlatforms_TimeScope.h"
// Metadata Definition UnityEngine.SocialPlatforms.TimeScope
extern TypeInfo TimeScope_t1246_il2cpp_TypeInfo;
// UnityEngine.SocialPlatforms.TimeScope
#include "UnityEngine_UnityEngine_SocialPlatforms_TimeScopeMethodDeclarations.h"
static const MethodInfo* TimeScope_t1246_MethodInfos[] =
{
	NULL
};
static const Il2CppMethodReference TimeScope_t1246_VTable[] =
{
	&Enum_Equals_m229_MethodInfo,
	&Object_Finalize_m230_MethodInfo,
	&Enum_GetHashCode_m231_MethodInfo,
	&Enum_ToString_m232_MethodInfo,
	&Enum_ToString_m233_MethodInfo,
	&Enum_System_IConvertible_ToBoolean_m234_MethodInfo,
	&Enum_System_IConvertible_ToByte_m235_MethodInfo,
	&Enum_System_IConvertible_ToChar_m236_MethodInfo,
	&Enum_System_IConvertible_ToDateTime_m237_MethodInfo,
	&Enum_System_IConvertible_ToDecimal_m238_MethodInfo,
	&Enum_System_IConvertible_ToDouble_m239_MethodInfo,
	&Enum_System_IConvertible_ToInt16_m240_MethodInfo,
	&Enum_System_IConvertible_ToInt32_m241_MethodInfo,
	&Enum_System_IConvertible_ToInt64_m242_MethodInfo,
	&Enum_System_IConvertible_ToSByte_m243_MethodInfo,
	&Enum_System_IConvertible_ToSingle_m244_MethodInfo,
	&Enum_ToString_m245_MethodInfo,
	&Enum_System_IConvertible_ToType_m246_MethodInfo,
	&Enum_System_IConvertible_ToUInt16_m247_MethodInfo,
	&Enum_System_IConvertible_ToUInt32_m248_MethodInfo,
	&Enum_System_IConvertible_ToUInt64_m249_MethodInfo,
	&Enum_CompareTo_m250_MethodInfo,
	&Enum_GetTypeCode_m251_MethodInfo,
};
static bool TimeScope_t1246_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair TimeScope_t1246_InterfacesOffsets[] = 
{
	{ &IFormattable_t53_0_0_0, 4},
	{ &IConvertible_t54_0_0_0, 5},
	{ &IComparable_t55_0_0_0, 21},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType TimeScope_t1246_1_0_0;
const Il2CppTypeDefinitionMetadata TimeScope_t1246_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, TimeScope_t1246_InterfacesOffsets/* interfaceOffsets */
	, &Enum_t56_0_0_0/* parent */
	, TimeScope_t1246_VTable/* vtableMethods */
	, TimeScope_t1246_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 1189/* fieldStart */

};
TypeInfo TimeScope_t1246_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "TimeScope"/* name */
	, "UnityEngine.SocialPlatforms"/* namespaze */
	, TimeScope_t1246_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &Int32_t50_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &TimeScope_t1246_0_0_0/* byval_arg */
	, &TimeScope_t1246_1_0_0/* this_arg */
	, &TimeScope_t1246_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (TimeScope_t1246)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (TimeScope_t1246)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(int32_t)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 257/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, true/* valuetype */
	, false/* initialized */
	, true/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 0/* method_count */
	, 0/* property_count */
	, 4/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 23/* vtable_count */
	, 0/* interfaces_count */
	, 3/* interface_offsets_count */

};
// UnityEngine.SocialPlatforms.Range
#include "UnityEngine_UnityEngine_SocialPlatforms_Range.h"
// Metadata Definition UnityEngine.SocialPlatforms.Range
extern TypeInfo Range_t1236_il2cpp_TypeInfo;
// UnityEngine.SocialPlatforms.Range
#include "UnityEngine_UnityEngine_SocialPlatforms_RangeMethodDeclarations.h"
extern const Il2CppType Int32_t50_0_0_0;
extern const Il2CppType Int32_t50_0_0_0;
static const ParameterInfo Range_t1236_Range__ctor_m6990_ParameterInfos[] = 
{
	{"fromValue", 0, 134219767, 0, &Int32_t50_0_0_0},
	{"valueCount", 1, 134219768, 0, &Int32_t50_0_0_0},
};
extern void* RuntimeInvoker_Void_t57_Int32_t50_Int32_t50 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.SocialPlatforms.Range::.ctor(System.Int32,System.Int32)
extern const MethodInfo Range__ctor_m6990_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&Range__ctor_m6990/* method */
	, &Range_t1236_il2cpp_TypeInfo/* declaring_type */
	, &Void_t57_0_0_0/* return_type */
	, RuntimeInvoker_Void_t57_Int32_t50_Int32_t50/* invoker_method */
	, Range_t1236_Range__ctor_m6990_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1798/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* Range_t1236_MethodInfos[] =
{
	&Range__ctor_m6990_MethodInfo,
	NULL
};
static const Il2CppMethodReference Range_t1236_VTable[] =
{
	&ValueType_Equals_m5702_MethodInfo,
	&Object_Finalize_m230_MethodInfo,
	&ValueType_GetHashCode_m5703_MethodInfo,
	&ValueType_ToString_m5706_MethodInfo,
};
static bool Range_t1236_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType Range_t1236_1_0_0;
const Il2CppTypeDefinitionMetadata Range_t1236_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &ValueType_t1025_0_0_0/* parent */
	, Range_t1236_VTable/* vtableMethods */
	, Range_t1236_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 1193/* fieldStart */

};
TypeInfo Range_t1236_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "Range"/* name */
	, "UnityEngine.SocialPlatforms"/* namespaze */
	, Range_t1236_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &Range_t1236_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &Range_t1236_0_0_0/* byval_arg */
	, &Range_t1236_1_0_0/* this_arg */
	, &Range_t1236_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (Range_t1236)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (Range_t1236)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(Range_t1236 )/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048841/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, true/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, true/* is_blittable */
	, 1/* method_count */
	, 0/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// Metadata Definition UnityEngine.SocialPlatforms.ILeaderboard
extern TypeInfo ILeaderboard_t1277_il2cpp_TypeInfo;
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String UnityEngine.SocialPlatforms.ILeaderboard::get_id()
extern const MethodInfo ILeaderboard_get_id_m7322_MethodInfo = 
{
	"get_id"/* name */
	, NULL/* method */
	, &ILeaderboard_t1277_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1799/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_UserScope_t1245 (const MethodInfo* method, void* obj, void** args);
// UnityEngine.SocialPlatforms.UserScope UnityEngine.SocialPlatforms.ILeaderboard::get_userScope()
extern const MethodInfo ILeaderboard_get_userScope_m7323_MethodInfo = 
{
	"get_userScope"/* name */
	, NULL/* method */
	, &ILeaderboard_t1277_il2cpp_TypeInfo/* declaring_type */
	, &UserScope_t1245_0_0_0/* return_type */
	, RuntimeInvoker_UserScope_t1245/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1800/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Range_t1236 (const MethodInfo* method, void* obj, void** args);
// UnityEngine.SocialPlatforms.Range UnityEngine.SocialPlatforms.ILeaderboard::get_range()
extern const MethodInfo ILeaderboard_get_range_m7324_MethodInfo = 
{
	"get_range"/* name */
	, NULL/* method */
	, &ILeaderboard_t1277_il2cpp_TypeInfo/* declaring_type */
	, &Range_t1236_0_0_0/* return_type */
	, RuntimeInvoker_Range_t1236/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1801/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_TimeScope_t1246 (const MethodInfo* method, void* obj, void** args);
// UnityEngine.SocialPlatforms.TimeScope UnityEngine.SocialPlatforms.ILeaderboard::get_timeScope()
extern const MethodInfo ILeaderboard_get_timeScope_m7325_MethodInfo = 
{
	"get_timeScope"/* name */
	, NULL/* method */
	, &ILeaderboard_t1277_il2cpp_TypeInfo/* declaring_type */
	, &TimeScope_t1246_0_0_0/* return_type */
	, RuntimeInvoker_TimeScope_t1246/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1802/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* ILeaderboard_t1277_MethodInfos[] =
{
	&ILeaderboard_get_id_m7322_MethodInfo,
	&ILeaderboard_get_userScope_m7323_MethodInfo,
	&ILeaderboard_get_range_m7324_MethodInfo,
	&ILeaderboard_get_timeScope_m7325_MethodInfo,
	NULL
};
extern const MethodInfo ILeaderboard_get_id_m7322_MethodInfo;
static const PropertyInfo ILeaderboard_t1277____id_PropertyInfo = 
{
	&ILeaderboard_t1277_il2cpp_TypeInfo/* parent */
	, "id"/* name */
	, &ILeaderboard_get_id_m7322_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo ILeaderboard_get_userScope_m7323_MethodInfo;
static const PropertyInfo ILeaderboard_t1277____userScope_PropertyInfo = 
{
	&ILeaderboard_t1277_il2cpp_TypeInfo/* parent */
	, "userScope"/* name */
	, &ILeaderboard_get_userScope_m7323_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo ILeaderboard_get_range_m7324_MethodInfo;
static const PropertyInfo ILeaderboard_t1277____range_PropertyInfo = 
{
	&ILeaderboard_t1277_il2cpp_TypeInfo/* parent */
	, "range"/* name */
	, &ILeaderboard_get_range_m7324_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo ILeaderboard_get_timeScope_m7325_MethodInfo;
static const PropertyInfo ILeaderboard_t1277____timeScope_PropertyInfo = 
{
	&ILeaderboard_t1277_il2cpp_TypeInfo/* parent */
	, "timeScope"/* name */
	, &ILeaderboard_get_timeScope_m7325_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
static const PropertyInfo* ILeaderboard_t1277_PropertyInfos[] =
{
	&ILeaderboard_t1277____id_PropertyInfo,
	&ILeaderboard_t1277____userScope_PropertyInfo,
	&ILeaderboard_t1277____range_PropertyInfo,
	&ILeaderboard_t1277____timeScope_PropertyInfo,
	NULL
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType ILeaderboard_t1277_1_0_0;
struct ILeaderboard_t1277;
const Il2CppTypeDefinitionMetadata ILeaderboard_t1277_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, NULL/* parent */
	, NULL/* vtableMethods */
	, NULL/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo ILeaderboard_t1277_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "ILeaderboard"/* name */
	, "UnityEngine.SocialPlatforms"/* namespaze */
	, ILeaderboard_t1277_MethodInfos/* methods */
	, ILeaderboard_t1277_PropertyInfos/* properties */
	, NULL/* events */
	, &ILeaderboard_t1277_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &ILeaderboard_t1277_0_0_0/* byval_arg */
	, &ILeaderboard_t1277_1_0_0/* this_arg */
	, &ILeaderboard_t1277_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 4/* method_count */
	, 4/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// UnityEngine.PropertyAttribute
#include "UnityEngine_UnityEngine_PropertyAttribute.h"
// Metadata Definition UnityEngine.PropertyAttribute
extern TypeInfo PropertyAttribute_t1247_il2cpp_TypeInfo;
// UnityEngine.PropertyAttribute
#include "UnityEngine_UnityEngine_PropertyAttributeMethodDeclarations.h"
extern void* RuntimeInvoker_Void_t57 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.PropertyAttribute::.ctor()
extern const MethodInfo PropertyAttribute__ctor_m6991_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&PropertyAttribute__ctor_m6991/* method */
	, &PropertyAttribute_t1247_il2cpp_TypeInfo/* declaring_type */
	, &Void_t57_0_0_0/* return_type */
	, RuntimeInvoker_Void_t57/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 6276/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1803/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* PropertyAttribute_t1247_MethodInfos[] =
{
	&PropertyAttribute__ctor_m6991_MethodInfo,
	NULL
};
static const Il2CppMethodReference PropertyAttribute_t1247_VTable[] =
{
	&Attribute_Equals_m3933_MethodInfo,
	&Object_Finalize_m230_MethodInfo,
	&Attribute_GetHashCode_m3934_MethodInfo,
	&Object_ToString_m253_MethodInfo,
};
static bool PropertyAttribute_t1247_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair PropertyAttribute_t1247_InterfacesOffsets[] = 
{
	{ &_Attribute_t716_0_0_0, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType PropertyAttribute_t1247_0_0_0;
extern const Il2CppType PropertyAttribute_t1247_1_0_0;
struct PropertyAttribute_t1247;
const Il2CppTypeDefinitionMetadata PropertyAttribute_t1247_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, PropertyAttribute_t1247_InterfacesOffsets/* interfaceOffsets */
	, &Attribute_t384_0_0_0/* parent */
	, PropertyAttribute_t1247_VTable/* vtableMethods */
	, PropertyAttribute_t1247_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo PropertyAttribute_t1247_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "PropertyAttribute"/* name */
	, "UnityEngine"/* namespaze */
	, PropertyAttribute_t1247_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &PropertyAttribute_t1247_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 761/* custom_attributes_cache */
	, &PropertyAttribute_t1247_0_0_0/* byval_arg */
	, &PropertyAttribute_t1247_1_0_0/* this_arg */
	, &PropertyAttribute_t1247_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (PropertyAttribute_t1247)/* instance_size */
	, sizeof (PropertyAttribute_t1247)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048705/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 1/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 1/* interface_offsets_count */

};
// UnityEngine.TooltipAttribute
#include "UnityEngine_UnityEngine_TooltipAttribute.h"
// Metadata Definition UnityEngine.TooltipAttribute
extern TypeInfo TooltipAttribute_t1009_il2cpp_TypeInfo;
// UnityEngine.TooltipAttribute
#include "UnityEngine_UnityEngine_TooltipAttributeMethodDeclarations.h"
extern const Il2CppType String_t_0_0_0;
static const ParameterInfo TooltipAttribute_t1009_TooltipAttribute__ctor_m5644_ParameterInfos[] = 
{
	{"tooltip", 0, 134219769, 0, &String_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t57_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.TooltipAttribute::.ctor(System.String)
extern const MethodInfo TooltipAttribute__ctor_m5644_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&TooltipAttribute__ctor_m5644/* method */
	, &TooltipAttribute_t1009_il2cpp_TypeInfo/* declaring_type */
	, &Void_t57_0_0_0/* return_type */
	, RuntimeInvoker_Void_t57_Object_t/* invoker_method */
	, TooltipAttribute_t1009_TooltipAttribute__ctor_m5644_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1804/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* TooltipAttribute_t1009_MethodInfos[] =
{
	&TooltipAttribute__ctor_m5644_MethodInfo,
	NULL
};
static const Il2CppMethodReference TooltipAttribute_t1009_VTable[] =
{
	&Attribute_Equals_m3933_MethodInfo,
	&Object_Finalize_m230_MethodInfo,
	&Attribute_GetHashCode_m3934_MethodInfo,
	&Object_ToString_m253_MethodInfo,
};
static bool TooltipAttribute_t1009_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair TooltipAttribute_t1009_InterfacesOffsets[] = 
{
	{ &_Attribute_t716_0_0_0, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType TooltipAttribute_t1009_0_0_0;
extern const Il2CppType TooltipAttribute_t1009_1_0_0;
struct TooltipAttribute_t1009;
const Il2CppTypeDefinitionMetadata TooltipAttribute_t1009_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, TooltipAttribute_t1009_InterfacesOffsets/* interfaceOffsets */
	, &PropertyAttribute_t1247_0_0_0/* parent */
	, TooltipAttribute_t1009_VTable/* vtableMethods */
	, TooltipAttribute_t1009_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 1195/* fieldStart */

};
TypeInfo TooltipAttribute_t1009_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "TooltipAttribute"/* name */
	, "UnityEngine"/* namespaze */
	, TooltipAttribute_t1009_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &TooltipAttribute_t1009_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 762/* custom_attributes_cache */
	, &TooltipAttribute_t1009_0_0_0/* byval_arg */
	, &TooltipAttribute_t1009_1_0_0/* this_arg */
	, &TooltipAttribute_t1009_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (TooltipAttribute_t1009)/* instance_size */
	, sizeof (TooltipAttribute_t1009)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048577/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 1/* method_count */
	, 0/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 1/* interface_offsets_count */

};
// UnityEngine.SpaceAttribute
#include "UnityEngine_UnityEngine_SpaceAttribute.h"
// Metadata Definition UnityEngine.SpaceAttribute
extern TypeInfo SpaceAttribute_t1007_il2cpp_TypeInfo;
// UnityEngine.SpaceAttribute
#include "UnityEngine_UnityEngine_SpaceAttributeMethodDeclarations.h"
extern const Il2CppType Single_t59_0_0_0;
extern const Il2CppType Single_t59_0_0_0;
static const ParameterInfo SpaceAttribute_t1007_SpaceAttribute__ctor_m5642_ParameterInfos[] = 
{
	{"height", 0, 134219770, 0, &Single_t59_0_0_0},
};
extern void* RuntimeInvoker_Void_t57_Single_t59 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.SpaceAttribute::.ctor(System.Single)
extern const MethodInfo SpaceAttribute__ctor_m5642_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&SpaceAttribute__ctor_m5642/* method */
	, &SpaceAttribute_t1007_il2cpp_TypeInfo/* declaring_type */
	, &Void_t57_0_0_0/* return_type */
	, RuntimeInvoker_Void_t57_Single_t59/* invoker_method */
	, SpaceAttribute_t1007_SpaceAttribute__ctor_m5642_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1805/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* SpaceAttribute_t1007_MethodInfos[] =
{
	&SpaceAttribute__ctor_m5642_MethodInfo,
	NULL
};
static const Il2CppMethodReference SpaceAttribute_t1007_VTable[] =
{
	&Attribute_Equals_m3933_MethodInfo,
	&Object_Finalize_m230_MethodInfo,
	&Attribute_GetHashCode_m3934_MethodInfo,
	&Object_ToString_m253_MethodInfo,
};
static bool SpaceAttribute_t1007_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair SpaceAttribute_t1007_InterfacesOffsets[] = 
{
	{ &_Attribute_t716_0_0_0, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType SpaceAttribute_t1007_0_0_0;
extern const Il2CppType SpaceAttribute_t1007_1_0_0;
struct SpaceAttribute_t1007;
const Il2CppTypeDefinitionMetadata SpaceAttribute_t1007_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, SpaceAttribute_t1007_InterfacesOffsets/* interfaceOffsets */
	, &PropertyAttribute_t1247_0_0_0/* parent */
	, SpaceAttribute_t1007_VTable/* vtableMethods */
	, SpaceAttribute_t1007_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 1196/* fieldStart */

};
TypeInfo SpaceAttribute_t1007_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "SpaceAttribute"/* name */
	, "UnityEngine"/* namespaze */
	, SpaceAttribute_t1007_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &SpaceAttribute_t1007_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 763/* custom_attributes_cache */
	, &SpaceAttribute_t1007_0_0_0/* byval_arg */
	, &SpaceAttribute_t1007_1_0_0/* this_arg */
	, &SpaceAttribute_t1007_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (SpaceAttribute_t1007)/* instance_size */
	, sizeof (SpaceAttribute_t1007)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048577/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 1/* method_count */
	, 0/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 1/* interface_offsets_count */

};
// UnityEngine.RangeAttribute
#include "UnityEngine_UnityEngine_RangeAttribute.h"
// Metadata Definition UnityEngine.RangeAttribute
extern TypeInfo RangeAttribute_t1004_il2cpp_TypeInfo;
// UnityEngine.RangeAttribute
#include "UnityEngine_UnityEngine_RangeAttributeMethodDeclarations.h"
extern const Il2CppType Single_t59_0_0_0;
extern const Il2CppType Single_t59_0_0_0;
static const ParameterInfo RangeAttribute_t1004_RangeAttribute__ctor_m5636_ParameterInfos[] = 
{
	{"min", 0, 134219771, 0, &Single_t59_0_0_0},
	{"max", 1, 134219772, 0, &Single_t59_0_0_0},
};
extern void* RuntimeInvoker_Void_t57_Single_t59_Single_t59 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.RangeAttribute::.ctor(System.Single,System.Single)
extern const MethodInfo RangeAttribute__ctor_m5636_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&RangeAttribute__ctor_m5636/* method */
	, &RangeAttribute_t1004_il2cpp_TypeInfo/* declaring_type */
	, &Void_t57_0_0_0/* return_type */
	, RuntimeInvoker_Void_t57_Single_t59_Single_t59/* invoker_method */
	, RangeAttribute_t1004_RangeAttribute__ctor_m5636_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1806/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* RangeAttribute_t1004_MethodInfos[] =
{
	&RangeAttribute__ctor_m5636_MethodInfo,
	NULL
};
static const Il2CppMethodReference RangeAttribute_t1004_VTable[] =
{
	&Attribute_Equals_m3933_MethodInfo,
	&Object_Finalize_m230_MethodInfo,
	&Attribute_GetHashCode_m3934_MethodInfo,
	&Object_ToString_m253_MethodInfo,
};
static bool RangeAttribute_t1004_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair RangeAttribute_t1004_InterfacesOffsets[] = 
{
	{ &_Attribute_t716_0_0_0, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType RangeAttribute_t1004_0_0_0;
extern const Il2CppType RangeAttribute_t1004_1_0_0;
struct RangeAttribute_t1004;
const Il2CppTypeDefinitionMetadata RangeAttribute_t1004_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, RangeAttribute_t1004_InterfacesOffsets/* interfaceOffsets */
	, &PropertyAttribute_t1247_0_0_0/* parent */
	, RangeAttribute_t1004_VTable/* vtableMethods */
	, RangeAttribute_t1004_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 1197/* fieldStart */

};
TypeInfo RangeAttribute_t1004_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "RangeAttribute"/* name */
	, "UnityEngine"/* namespaze */
	, RangeAttribute_t1004_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &RangeAttribute_t1004_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 764/* custom_attributes_cache */
	, &RangeAttribute_t1004_0_0_0/* byval_arg */
	, &RangeAttribute_t1004_1_0_0/* this_arg */
	, &RangeAttribute_t1004_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (RangeAttribute_t1004)/* instance_size */
	, sizeof (RangeAttribute_t1004)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048833/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 1/* method_count */
	, 0/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 1/* interface_offsets_count */

};
// UnityEngine.TextAreaAttribute
#include "UnityEngine_UnityEngine_TextAreaAttribute.h"
// Metadata Definition UnityEngine.TextAreaAttribute
extern TypeInfo TextAreaAttribute_t1010_il2cpp_TypeInfo;
// UnityEngine.TextAreaAttribute
#include "UnityEngine_UnityEngine_TextAreaAttributeMethodDeclarations.h"
extern const Il2CppType Int32_t50_0_0_0;
extern const Il2CppType Int32_t50_0_0_0;
static const ParameterInfo TextAreaAttribute_t1010_TextAreaAttribute__ctor_m5647_ParameterInfos[] = 
{
	{"minLines", 0, 134219773, 0, &Int32_t50_0_0_0},
	{"maxLines", 1, 134219774, 0, &Int32_t50_0_0_0},
};
extern void* RuntimeInvoker_Void_t57_Int32_t50_Int32_t50 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.TextAreaAttribute::.ctor(System.Int32,System.Int32)
extern const MethodInfo TextAreaAttribute__ctor_m5647_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&TextAreaAttribute__ctor_m5647/* method */
	, &TextAreaAttribute_t1010_il2cpp_TypeInfo/* declaring_type */
	, &Void_t57_0_0_0/* return_type */
	, RuntimeInvoker_Void_t57_Int32_t50_Int32_t50/* invoker_method */
	, TextAreaAttribute_t1010_TextAreaAttribute__ctor_m5647_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1807/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* TextAreaAttribute_t1010_MethodInfos[] =
{
	&TextAreaAttribute__ctor_m5647_MethodInfo,
	NULL
};
static const Il2CppMethodReference TextAreaAttribute_t1010_VTable[] =
{
	&Attribute_Equals_m3933_MethodInfo,
	&Object_Finalize_m230_MethodInfo,
	&Attribute_GetHashCode_m3934_MethodInfo,
	&Object_ToString_m253_MethodInfo,
};
static bool TextAreaAttribute_t1010_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair TextAreaAttribute_t1010_InterfacesOffsets[] = 
{
	{ &_Attribute_t716_0_0_0, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType TextAreaAttribute_t1010_0_0_0;
extern const Il2CppType TextAreaAttribute_t1010_1_0_0;
struct TextAreaAttribute_t1010;
const Il2CppTypeDefinitionMetadata TextAreaAttribute_t1010_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, TextAreaAttribute_t1010_InterfacesOffsets/* interfaceOffsets */
	, &PropertyAttribute_t1247_0_0_0/* parent */
	, TextAreaAttribute_t1010_VTable/* vtableMethods */
	, TextAreaAttribute_t1010_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 1199/* fieldStart */

};
TypeInfo TextAreaAttribute_t1010_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "TextAreaAttribute"/* name */
	, "UnityEngine"/* namespaze */
	, TextAreaAttribute_t1010_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &TextAreaAttribute_t1010_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 765/* custom_attributes_cache */
	, &TextAreaAttribute_t1010_0_0_0/* byval_arg */
	, &TextAreaAttribute_t1010_1_0_0/* this_arg */
	, &TextAreaAttribute_t1010_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (TextAreaAttribute_t1010)/* instance_size */
	, sizeof (TextAreaAttribute_t1010)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048833/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 1/* method_count */
	, 0/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 1/* interface_offsets_count */

};
// UnityEngine.SelectionBaseAttribute
#include "UnityEngine_UnityEngine_SelectionBaseAttribute.h"
// Metadata Definition UnityEngine.SelectionBaseAttribute
extern TypeInfo SelectionBaseAttribute_t1008_il2cpp_TypeInfo;
// UnityEngine.SelectionBaseAttribute
#include "UnityEngine_UnityEngine_SelectionBaseAttributeMethodDeclarations.h"
extern void* RuntimeInvoker_Void_t57 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.SelectionBaseAttribute::.ctor()
extern const MethodInfo SelectionBaseAttribute__ctor_m5643_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&SelectionBaseAttribute__ctor_m5643/* method */
	, &SelectionBaseAttribute_t1008_il2cpp_TypeInfo/* declaring_type */
	, &Void_t57_0_0_0/* return_type */
	, RuntimeInvoker_Void_t57/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1808/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* SelectionBaseAttribute_t1008_MethodInfos[] =
{
	&SelectionBaseAttribute__ctor_m5643_MethodInfo,
	NULL
};
static const Il2CppMethodReference SelectionBaseAttribute_t1008_VTable[] =
{
	&Attribute_Equals_m3933_MethodInfo,
	&Object_Finalize_m230_MethodInfo,
	&Attribute_GetHashCode_m3934_MethodInfo,
	&Object_ToString_m253_MethodInfo,
};
static bool SelectionBaseAttribute_t1008_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair SelectionBaseAttribute_t1008_InterfacesOffsets[] = 
{
	{ &_Attribute_t716_0_0_0, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType SelectionBaseAttribute_t1008_0_0_0;
extern const Il2CppType SelectionBaseAttribute_t1008_1_0_0;
struct SelectionBaseAttribute_t1008;
const Il2CppTypeDefinitionMetadata SelectionBaseAttribute_t1008_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, SelectionBaseAttribute_t1008_InterfacesOffsets/* interfaceOffsets */
	, &Attribute_t384_0_0_0/* parent */
	, SelectionBaseAttribute_t1008_VTable/* vtableMethods */
	, SelectionBaseAttribute_t1008_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo SelectionBaseAttribute_t1008_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "SelectionBaseAttribute"/* name */
	, "UnityEngine"/* namespaze */
	, SelectionBaseAttribute_t1008_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &SelectionBaseAttribute_t1008_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 766/* custom_attributes_cache */
	, &SelectionBaseAttribute_t1008_0_0_0/* byval_arg */
	, &SelectionBaseAttribute_t1008_1_0_0/* this_arg */
	, &SelectionBaseAttribute_t1008_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (SelectionBaseAttribute_t1008)/* instance_size */
	, sizeof (SelectionBaseAttribute_t1008)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048577/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 1/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 1/* interface_offsets_count */

};
// UnityEngine.SliderState
#include "UnityEngine_UnityEngine_SliderState.h"
// Metadata Definition UnityEngine.SliderState
extern TypeInfo SliderState_t1248_il2cpp_TypeInfo;
// UnityEngine.SliderState
#include "UnityEngine_UnityEngine_SliderStateMethodDeclarations.h"
extern void* RuntimeInvoker_Void_t57 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.SliderState::.ctor()
extern const MethodInfo SliderState__ctor_m6992_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&SliderState__ctor_m6992/* method */
	, &SliderState_t1248_il2cpp_TypeInfo/* declaring_type */
	, &Void_t57_0_0_0/* return_type */
	, RuntimeInvoker_Void_t57/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1809/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* SliderState_t1248_MethodInfos[] =
{
	&SliderState__ctor_m6992_MethodInfo,
	NULL
};
static const Il2CppMethodReference SliderState_t1248_VTable[] =
{
	&Object_Equals_m252_MethodInfo,
	&Object_Finalize_m230_MethodInfo,
	&Object_GetHashCode_m172_MethodInfo,
	&Object_ToString_m253_MethodInfo,
};
static bool SliderState_t1248_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType SliderState_t1248_0_0_0;
extern const Il2CppType SliderState_t1248_1_0_0;
struct SliderState_t1248;
const Il2CppTypeDefinitionMetadata SliderState_t1248_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, SliderState_t1248_VTable/* vtableMethods */
	, SliderState_t1248_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 1201/* fieldStart */

};
TypeInfo SliderState_t1248_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "SliderState"/* name */
	, "UnityEngine"/* namespaze */
	, SliderState_t1248_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &SliderState_t1248_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &SliderState_t1248_0_0_0/* byval_arg */
	, &SliderState_t1248_1_0_0/* this_arg */
	, &SliderState_t1248_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (SliderState_t1248)/* instance_size */
	, sizeof (SliderState_t1248)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 1/* method_count */
	, 0/* property_count */
	, 3/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// UnityEngine.SliderHandler
#include "UnityEngine_UnityEngine_SliderHandler.h"
// Metadata Definition UnityEngine.SliderHandler
extern TypeInfo SliderHandler_t1249_il2cpp_TypeInfo;
// UnityEngine.SliderHandler
#include "UnityEngine_UnityEngine_SliderHandlerMethodDeclarations.h"
extern const Il2CppType Rect_t593_0_0_0;
extern const Il2CppType Rect_t593_0_0_0;
extern const Il2CppType Single_t59_0_0_0;
extern const Il2CppType Single_t59_0_0_0;
extern const Il2CppType Single_t59_0_0_0;
extern const Il2CppType Single_t59_0_0_0;
extern const Il2CppType GUIStyle_t64_0_0_0;
extern const Il2CppType GUIStyle_t64_0_0_0;
extern const Il2CppType GUIStyle_t64_0_0_0;
extern const Il2CppType Boolean_t29_0_0_0;
extern const Il2CppType Int32_t50_0_0_0;
static const ParameterInfo SliderHandler_t1249_SliderHandler__ctor_m6993_ParameterInfos[] = 
{
	{"position", 0, 134219775, 0, &Rect_t593_0_0_0},
	{"currentValue", 1, 134219776, 0, &Single_t59_0_0_0},
	{"size", 2, 134219777, 0, &Single_t59_0_0_0},
	{"start", 3, 134219778, 0, &Single_t59_0_0_0},
	{"end", 4, 134219779, 0, &Single_t59_0_0_0},
	{"slider", 5, 134219780, 0, &GUIStyle_t64_0_0_0},
	{"thumb", 6, 134219781, 0, &GUIStyle_t64_0_0_0},
	{"horiz", 7, 134219782, 0, &Boolean_t29_0_0_0},
	{"id", 8, 134219783, 0, &Int32_t50_0_0_0},
};
extern void* RuntimeInvoker_Void_t57_Rect_t593_Single_t59_Single_t59_Single_t59_Single_t59_Object_t_Object_t_SByte_t61_Int32_t50 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.SliderHandler::.ctor(UnityEngine.Rect,System.Single,System.Single,System.Single,System.Single,UnityEngine.GUIStyle,UnityEngine.GUIStyle,System.Boolean,System.Int32)
extern const MethodInfo SliderHandler__ctor_m6993_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&SliderHandler__ctor_m6993/* method */
	, &SliderHandler_t1249_il2cpp_TypeInfo/* declaring_type */
	, &Void_t57_0_0_0/* return_type */
	, RuntimeInvoker_Void_t57_Rect_t593_Single_t59_Single_t59_Single_t59_Single_t59_Object_t_Object_t_SByte_t61_Int32_t50/* invoker_method */
	, SliderHandler_t1249_SliderHandler__ctor_m6993_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 9/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1810/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Single_t59 (const MethodInfo* method, void* obj, void** args);
// System.Single UnityEngine.SliderHandler::Handle()
extern const MethodInfo SliderHandler_Handle_m6994_MethodInfo = 
{
	"Handle"/* name */
	, (methodPointerType)&SliderHandler_Handle_m6994/* method */
	, &SliderHandler_t1249_il2cpp_TypeInfo/* declaring_type */
	, &Single_t59_0_0_0/* return_type */
	, RuntimeInvoker_Single_t59/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1811/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Single_t59 (const MethodInfo* method, void* obj, void** args);
// System.Single UnityEngine.SliderHandler::OnMouseDown()
extern const MethodInfo SliderHandler_OnMouseDown_m6995_MethodInfo = 
{
	"OnMouseDown"/* name */
	, (methodPointerType)&SliderHandler_OnMouseDown_m6995/* method */
	, &SliderHandler_t1249_il2cpp_TypeInfo/* declaring_type */
	, &Single_t59_0_0_0/* return_type */
	, RuntimeInvoker_Single_t59/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1812/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Single_t59 (const MethodInfo* method, void* obj, void** args);
// System.Single UnityEngine.SliderHandler::OnMouseDrag()
extern const MethodInfo SliderHandler_OnMouseDrag_m6996_MethodInfo = 
{
	"OnMouseDrag"/* name */
	, (methodPointerType)&SliderHandler_OnMouseDrag_m6996/* method */
	, &SliderHandler_t1249_il2cpp_TypeInfo/* declaring_type */
	, &Single_t59_0_0_0/* return_type */
	, RuntimeInvoker_Single_t59/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1813/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Single_t59 (const MethodInfo* method, void* obj, void** args);
// System.Single UnityEngine.SliderHandler::OnMouseUp()
extern const MethodInfo SliderHandler_OnMouseUp_m6997_MethodInfo = 
{
	"OnMouseUp"/* name */
	, (methodPointerType)&SliderHandler_OnMouseUp_m6997/* method */
	, &SliderHandler_t1249_il2cpp_TypeInfo/* declaring_type */
	, &Single_t59_0_0_0/* return_type */
	, RuntimeInvoker_Single_t59/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1814/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Single_t59 (const MethodInfo* method, void* obj, void** args);
// System.Single UnityEngine.SliderHandler::OnRepaint()
extern const MethodInfo SliderHandler_OnRepaint_m6998_MethodInfo = 
{
	"OnRepaint"/* name */
	, (methodPointerType)&SliderHandler_OnRepaint_m6998/* method */
	, &SliderHandler_t1249_il2cpp_TypeInfo/* declaring_type */
	, &Single_t59_0_0_0/* return_type */
	, RuntimeInvoker_Single_t59/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1815/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType EventType_t1108_0_0_0;
extern void* RuntimeInvoker_EventType_t1108 (const MethodInfo* method, void* obj, void** args);
// UnityEngine.EventType UnityEngine.SliderHandler::CurrentEventType()
extern const MethodInfo SliderHandler_CurrentEventType_m6999_MethodInfo = 
{
	"CurrentEventType"/* name */
	, (methodPointerType)&SliderHandler_CurrentEventType_m6999/* method */
	, &SliderHandler_t1249_il2cpp_TypeInfo/* declaring_type */
	, &EventType_t1108_0_0_0/* return_type */
	, RuntimeInvoker_EventType_t1108/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1816/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Int32_t50 (const MethodInfo* method, void* obj, void** args);
// System.Int32 UnityEngine.SliderHandler::CurrentScrollTroughSide()
extern const MethodInfo SliderHandler_CurrentScrollTroughSide_m7000_MethodInfo = 
{
	"CurrentScrollTroughSide"/* name */
	, (methodPointerType)&SliderHandler_CurrentScrollTroughSide_m7000/* method */
	, &SliderHandler_t1249_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t50_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t50/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1817/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Boolean_t29 (const MethodInfo* method, void* obj, void** args);
// System.Boolean UnityEngine.SliderHandler::IsEmptySlider()
extern const MethodInfo SliderHandler_IsEmptySlider_m7001_MethodInfo = 
{
	"IsEmptySlider"/* name */
	, (methodPointerType)&SliderHandler_IsEmptySlider_m7001/* method */
	, &SliderHandler_t1249_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t29_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t29/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1818/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Boolean_t29 (const MethodInfo* method, void* obj, void** args);
// System.Boolean UnityEngine.SliderHandler::SupportsPageMovements()
extern const MethodInfo SliderHandler_SupportsPageMovements_m7002_MethodInfo = 
{
	"SupportsPageMovements"/* name */
	, (methodPointerType)&SliderHandler_SupportsPageMovements_m7002/* method */
	, &SliderHandler_t1249_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t29_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t29/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1819/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Single_t59 (const MethodInfo* method, void* obj, void** args);
// System.Single UnityEngine.SliderHandler::PageMovementValue()
extern const MethodInfo SliderHandler_PageMovementValue_m7003_MethodInfo = 
{
	"PageMovementValue"/* name */
	, (methodPointerType)&SliderHandler_PageMovementValue_m7003/* method */
	, &SliderHandler_t1249_il2cpp_TypeInfo/* declaring_type */
	, &Single_t59_0_0_0/* return_type */
	, RuntimeInvoker_Single_t59/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1820/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Single_t59 (const MethodInfo* method, void* obj, void** args);
// System.Single UnityEngine.SliderHandler::PageUpMovementBound()
extern const MethodInfo SliderHandler_PageUpMovementBound_m7004_MethodInfo = 
{
	"PageUpMovementBound"/* name */
	, (methodPointerType)&SliderHandler_PageUpMovementBound_m7004/* method */
	, &SliderHandler_t1249_il2cpp_TypeInfo/* declaring_type */
	, &Single_t59_0_0_0/* return_type */
	, RuntimeInvoker_Single_t59/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1821/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Event_t680_0_0_0;
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// UnityEngine.Event UnityEngine.SliderHandler::CurrentEvent()
extern const MethodInfo SliderHandler_CurrentEvent_m7005_MethodInfo = 
{
	"CurrentEvent"/* name */
	, (methodPointerType)&SliderHandler_CurrentEvent_m7005/* method */
	, &SliderHandler_t1249_il2cpp_TypeInfo/* declaring_type */
	, &Event_t680_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1822/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Single_t59 (const MethodInfo* method, void* obj, void** args);
// System.Single UnityEngine.SliderHandler::ValueForCurrentMousePosition()
extern const MethodInfo SliderHandler_ValueForCurrentMousePosition_m7006_MethodInfo = 
{
	"ValueForCurrentMousePosition"/* name */
	, (methodPointerType)&SliderHandler_ValueForCurrentMousePosition_m7006/* method */
	, &SliderHandler_t1249_il2cpp_TypeInfo/* declaring_type */
	, &Single_t59_0_0_0/* return_type */
	, RuntimeInvoker_Single_t59/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1823/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Single_t59_0_0_0;
static const ParameterInfo SliderHandler_t1249_SliderHandler_Clamp_m7007_ParameterInfos[] = 
{
	{"value", 0, 134219784, 0, &Single_t59_0_0_0},
};
extern void* RuntimeInvoker_Single_t59_Single_t59 (const MethodInfo* method, void* obj, void** args);
// System.Single UnityEngine.SliderHandler::Clamp(System.Single)
extern const MethodInfo SliderHandler_Clamp_m7007_MethodInfo = 
{
	"Clamp"/* name */
	, (methodPointerType)&SliderHandler_Clamp_m7007/* method */
	, &SliderHandler_t1249_il2cpp_TypeInfo/* declaring_type */
	, &Single_t59_0_0_0/* return_type */
	, RuntimeInvoker_Single_t59_Single_t59/* invoker_method */
	, SliderHandler_t1249_SliderHandler_Clamp_m7007_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1824/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Rect_t593 (const MethodInfo* method, void* obj, void** args);
// UnityEngine.Rect UnityEngine.SliderHandler::ThumbSelectionRect()
extern const MethodInfo SliderHandler_ThumbSelectionRect_m7008_MethodInfo = 
{
	"ThumbSelectionRect"/* name */
	, (methodPointerType)&SliderHandler_ThumbSelectionRect_m7008/* method */
	, &SliderHandler_t1249_il2cpp_TypeInfo/* declaring_type */
	, &Rect_t593_0_0_0/* return_type */
	, RuntimeInvoker_Rect_t593/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1825/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Single_t59_0_0_0;
static const ParameterInfo SliderHandler_t1249_SliderHandler_StartDraggingWithValue_m7009_ParameterInfos[] = 
{
	{"dragStartValue", 0, 134219785, 0, &Single_t59_0_0_0},
};
extern void* RuntimeInvoker_Void_t57_Single_t59 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.SliderHandler::StartDraggingWithValue(System.Single)
extern const MethodInfo SliderHandler_StartDraggingWithValue_m7009_MethodInfo = 
{
	"StartDraggingWithValue"/* name */
	, (methodPointerType)&SliderHandler_StartDraggingWithValue_m7009/* method */
	, &SliderHandler_t1249_il2cpp_TypeInfo/* declaring_type */
	, &Void_t57_0_0_0/* return_type */
	, RuntimeInvoker_Void_t57_Single_t59/* invoker_method */
	, SliderHandler_t1249_SliderHandler_StartDraggingWithValue_m7009_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1826/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// UnityEngine.SliderState UnityEngine.SliderHandler::SliderState()
extern const MethodInfo SliderHandler_SliderState_m7010_MethodInfo = 
{
	"SliderState"/* name */
	, (methodPointerType)&SliderHandler_SliderState_m7010/* method */
	, &SliderHandler_t1249_il2cpp_TypeInfo/* declaring_type */
	, &SliderState_t1248_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1827/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Rect_t593 (const MethodInfo* method, void* obj, void** args);
// UnityEngine.Rect UnityEngine.SliderHandler::ThumbRect()
extern const MethodInfo SliderHandler_ThumbRect_m7011_MethodInfo = 
{
	"ThumbRect"/* name */
	, (methodPointerType)&SliderHandler_ThumbRect_m7011/* method */
	, &SliderHandler_t1249_il2cpp_TypeInfo/* declaring_type */
	, &Rect_t593_0_0_0/* return_type */
	, RuntimeInvoker_Rect_t593/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1828/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Rect_t593 (const MethodInfo* method, void* obj, void** args);
// UnityEngine.Rect UnityEngine.SliderHandler::VerticalThumbRect()
extern const MethodInfo SliderHandler_VerticalThumbRect_m7012_MethodInfo = 
{
	"VerticalThumbRect"/* name */
	, (methodPointerType)&SliderHandler_VerticalThumbRect_m7012/* method */
	, &SliderHandler_t1249_il2cpp_TypeInfo/* declaring_type */
	, &Rect_t593_0_0_0/* return_type */
	, RuntimeInvoker_Rect_t593/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1829/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Rect_t593 (const MethodInfo* method, void* obj, void** args);
// UnityEngine.Rect UnityEngine.SliderHandler::HorizontalThumbRect()
extern const MethodInfo SliderHandler_HorizontalThumbRect_m7013_MethodInfo = 
{
	"HorizontalThumbRect"/* name */
	, (methodPointerType)&SliderHandler_HorizontalThumbRect_m7013/* method */
	, &SliderHandler_t1249_il2cpp_TypeInfo/* declaring_type */
	, &Rect_t593_0_0_0/* return_type */
	, RuntimeInvoker_Rect_t593/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1830/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Single_t59 (const MethodInfo* method, void* obj, void** args);
// System.Single UnityEngine.SliderHandler::ClampedCurrentValue()
extern const MethodInfo SliderHandler_ClampedCurrentValue_m7014_MethodInfo = 
{
	"ClampedCurrentValue"/* name */
	, (methodPointerType)&SliderHandler_ClampedCurrentValue_m7014/* method */
	, &SliderHandler_t1249_il2cpp_TypeInfo/* declaring_type */
	, &Single_t59_0_0_0/* return_type */
	, RuntimeInvoker_Single_t59/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1831/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Single_t59 (const MethodInfo* method, void* obj, void** args);
// System.Single UnityEngine.SliderHandler::MousePosition()
extern const MethodInfo SliderHandler_MousePosition_m7015_MethodInfo = 
{
	"MousePosition"/* name */
	, (methodPointerType)&SliderHandler_MousePosition_m7015/* method */
	, &SliderHandler_t1249_il2cpp_TypeInfo/* declaring_type */
	, &Single_t59_0_0_0/* return_type */
	, RuntimeInvoker_Single_t59/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1832/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Single_t59 (const MethodInfo* method, void* obj, void** args);
// System.Single UnityEngine.SliderHandler::ValuesPerPixel()
extern const MethodInfo SliderHandler_ValuesPerPixel_m7016_MethodInfo = 
{
	"ValuesPerPixel"/* name */
	, (methodPointerType)&SliderHandler_ValuesPerPixel_m7016/* method */
	, &SliderHandler_t1249_il2cpp_TypeInfo/* declaring_type */
	, &Single_t59_0_0_0/* return_type */
	, RuntimeInvoker_Single_t59/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1833/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Single_t59 (const MethodInfo* method, void* obj, void** args);
// System.Single UnityEngine.SliderHandler::ThumbSize()
extern const MethodInfo SliderHandler_ThumbSize_m7017_MethodInfo = 
{
	"ThumbSize"/* name */
	, (methodPointerType)&SliderHandler_ThumbSize_m7017/* method */
	, &SliderHandler_t1249_il2cpp_TypeInfo/* declaring_type */
	, &Single_t59_0_0_0/* return_type */
	, RuntimeInvoker_Single_t59/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1834/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Single_t59 (const MethodInfo* method, void* obj, void** args);
// System.Single UnityEngine.SliderHandler::MaxValue()
extern const MethodInfo SliderHandler_MaxValue_m7018_MethodInfo = 
{
	"MaxValue"/* name */
	, (methodPointerType)&SliderHandler_MaxValue_m7018/* method */
	, &SliderHandler_t1249_il2cpp_TypeInfo/* declaring_type */
	, &Single_t59_0_0_0/* return_type */
	, RuntimeInvoker_Single_t59/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1835/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Single_t59 (const MethodInfo* method, void* obj, void** args);
// System.Single UnityEngine.SliderHandler::MinValue()
extern const MethodInfo SliderHandler_MinValue_m7019_MethodInfo = 
{
	"MinValue"/* name */
	, (methodPointerType)&SliderHandler_MinValue_m7019/* method */
	, &SliderHandler_t1249_il2cpp_TypeInfo/* declaring_type */
	, &Single_t59_0_0_0/* return_type */
	, RuntimeInvoker_Single_t59/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1836/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* SliderHandler_t1249_MethodInfos[] =
{
	&SliderHandler__ctor_m6993_MethodInfo,
	&SliderHandler_Handle_m6994_MethodInfo,
	&SliderHandler_OnMouseDown_m6995_MethodInfo,
	&SliderHandler_OnMouseDrag_m6996_MethodInfo,
	&SliderHandler_OnMouseUp_m6997_MethodInfo,
	&SliderHandler_OnRepaint_m6998_MethodInfo,
	&SliderHandler_CurrentEventType_m6999_MethodInfo,
	&SliderHandler_CurrentScrollTroughSide_m7000_MethodInfo,
	&SliderHandler_IsEmptySlider_m7001_MethodInfo,
	&SliderHandler_SupportsPageMovements_m7002_MethodInfo,
	&SliderHandler_PageMovementValue_m7003_MethodInfo,
	&SliderHandler_PageUpMovementBound_m7004_MethodInfo,
	&SliderHandler_CurrentEvent_m7005_MethodInfo,
	&SliderHandler_ValueForCurrentMousePosition_m7006_MethodInfo,
	&SliderHandler_Clamp_m7007_MethodInfo,
	&SliderHandler_ThumbSelectionRect_m7008_MethodInfo,
	&SliderHandler_StartDraggingWithValue_m7009_MethodInfo,
	&SliderHandler_SliderState_m7010_MethodInfo,
	&SliderHandler_ThumbRect_m7011_MethodInfo,
	&SliderHandler_VerticalThumbRect_m7012_MethodInfo,
	&SliderHandler_HorizontalThumbRect_m7013_MethodInfo,
	&SliderHandler_ClampedCurrentValue_m7014_MethodInfo,
	&SliderHandler_MousePosition_m7015_MethodInfo,
	&SliderHandler_ValuesPerPixel_m7016_MethodInfo,
	&SliderHandler_ThumbSize_m7017_MethodInfo,
	&SliderHandler_MaxValue_m7018_MethodInfo,
	&SliderHandler_MinValue_m7019_MethodInfo,
	NULL
};
static const Il2CppMethodReference SliderHandler_t1249_VTable[] =
{
	&ValueType_Equals_m5702_MethodInfo,
	&Object_Finalize_m230_MethodInfo,
	&ValueType_GetHashCode_m5703_MethodInfo,
	&ValueType_ToString_m5706_MethodInfo,
};
static bool SliderHandler_t1249_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType SliderHandler_t1249_0_0_0;
extern const Il2CppType SliderHandler_t1249_1_0_0;
const Il2CppTypeDefinitionMetadata SliderHandler_t1249_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &ValueType_t1025_0_0_0/* parent */
	, SliderHandler_t1249_VTable/* vtableMethods */
	, SliderHandler_t1249_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 1204/* fieldStart */

};
TypeInfo SliderHandler_t1249_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "SliderHandler"/* name */
	, "UnityEngine"/* namespaze */
	, SliderHandler_t1249_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &SliderHandler_t1249_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &SliderHandler_t1249_0_0_0/* byval_arg */
	, &SliderHandler_t1249_1_0_0/* this_arg */
	, &SliderHandler_t1249_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (SliderHandler_t1249)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (SliderHandler_t1249)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048840/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, true/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 27/* method_count */
	, 0/* property_count */
	, 9/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// UnityEngine.StackTraceUtility
#include "UnityEngine_UnityEngine_StackTraceUtility.h"
// Metadata Definition UnityEngine.StackTraceUtility
extern TypeInfo StackTraceUtility_t1250_il2cpp_TypeInfo;
// UnityEngine.StackTraceUtility
#include "UnityEngine_UnityEngine_StackTraceUtilityMethodDeclarations.h"
extern void* RuntimeInvoker_Void_t57 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.StackTraceUtility::.ctor()
extern const MethodInfo StackTraceUtility__ctor_m7020_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&StackTraceUtility__ctor_m7020/* method */
	, &StackTraceUtility_t1250_il2cpp_TypeInfo/* declaring_type */
	, &Void_t57_0_0_0/* return_type */
	, RuntimeInvoker_Void_t57/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1837/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Void_t57 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.StackTraceUtility::.cctor()
extern const MethodInfo StackTraceUtility__cctor_m7021_MethodInfo = 
{
	".cctor"/* name */
	, (methodPointerType)&StackTraceUtility__cctor_m7021/* method */
	, &StackTraceUtility_t1250_il2cpp_TypeInfo/* declaring_type */
	, &Void_t57_0_0_0/* return_type */
	, RuntimeInvoker_Void_t57/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 6161/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1838/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
static const ParameterInfo StackTraceUtility_t1250_StackTraceUtility_SetProjectFolder_m7022_ParameterInfos[] = 
{
	{"folder", 0, 134219786, 0, &String_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t57_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.StackTraceUtility::SetProjectFolder(System.String)
extern const MethodInfo StackTraceUtility_SetProjectFolder_m7022_MethodInfo = 
{
	"SetProjectFolder"/* name */
	, (methodPointerType)&StackTraceUtility_SetProjectFolder_m7022/* method */
	, &StackTraceUtility_t1250_il2cpp_TypeInfo/* declaring_type */
	, &Void_t57_0_0_0/* return_type */
	, RuntimeInvoker_Void_t57_Object_t/* invoker_method */
	, StackTraceUtility_t1250_StackTraceUtility_SetProjectFolder_m7022_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 147/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1839/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String UnityEngine.StackTraceUtility::ExtractStackTrace()
extern const MethodInfo StackTraceUtility_ExtractStackTrace_m7023_MethodInfo = 
{
	"ExtractStackTrace"/* name */
	, (methodPointerType)&StackTraceUtility_ExtractStackTrace_m7023/* method */
	, &StackTraceUtility_t1250_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 767/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1840/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo StackTraceUtility_t1250_StackTraceUtility_IsSystemStacktraceType_m7024_ParameterInfos[] = 
{
	{"name", 0, 134219787, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Boolean_t29_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Boolean UnityEngine.StackTraceUtility::IsSystemStacktraceType(System.Object)
extern const MethodInfo StackTraceUtility_IsSystemStacktraceType_m7024_MethodInfo = 
{
	"IsSystemStacktraceType"/* name */
	, (methodPointerType)&StackTraceUtility_IsSystemStacktraceType_m7024/* method */
	, &StackTraceUtility_t1250_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t29_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t29_Object_t/* invoker_method */
	, StackTraceUtility_t1250_StackTraceUtility_IsSystemStacktraceType_m7024_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1841/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo StackTraceUtility_t1250_StackTraceUtility_ExtractStringFromException_m7025_ParameterInfos[] = 
{
	{"exception", 0, 134219788, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String UnityEngine.StackTraceUtility::ExtractStringFromException(System.Object)
extern const MethodInfo StackTraceUtility_ExtractStringFromException_m7025_MethodInfo = 
{
	"ExtractStringFromException"/* name */
	, (methodPointerType)&StackTraceUtility_ExtractStringFromException_m7025/* method */
	, &StackTraceUtility_t1250_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, StackTraceUtility_t1250_StackTraceUtility_ExtractStringFromException_m7025_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1842/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType String_t_1_0_2;
extern const Il2CppType String_t_1_0_0;
extern const Il2CppType String_t_1_0_2;
static const ParameterInfo StackTraceUtility_t1250_StackTraceUtility_ExtractStringFromExceptionInternal_m7026_ParameterInfos[] = 
{
	{"exceptiono", 0, 134219789, 0, &Object_t_0_0_0},
	{"message", 1, 134219790, 0, &String_t_1_0_2},
	{"stackTrace", 2, 134219791, 0, &String_t_1_0_2},
};
extern void* RuntimeInvoker_Void_t57_Object_t_StringU26_t705_StringU26_t705 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.StackTraceUtility::ExtractStringFromExceptionInternal(System.Object,System.String&,System.String&)
extern const MethodInfo StackTraceUtility_ExtractStringFromExceptionInternal_m7026_MethodInfo = 
{
	"ExtractStringFromExceptionInternal"/* name */
	, (methodPointerType)&StackTraceUtility_ExtractStringFromExceptionInternal_m7026/* method */
	, &StackTraceUtility_t1250_il2cpp_TypeInfo/* declaring_type */
	, &Void_t57_0_0_0/* return_type */
	, RuntimeInvoker_Void_t57_Object_t_StringU26_t705_StringU26_t705/* invoker_method */
	, StackTraceUtility_t1250_StackTraceUtility_ExtractStringFromExceptionInternal_m7026_ParameterInfos/* parameters */
	, 768/* custom_attributes_cache */
	, 147/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1843/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType Boolean_t29_0_0_0;
static const ParameterInfo StackTraceUtility_t1250_StackTraceUtility_PostprocessStacktrace_m7027_ParameterInfos[] = 
{
	{"oldString", 0, 134219792, 0, &String_t_0_0_0},
	{"stripEngineInternalInformation", 1, 134219793, 0, &Boolean_t29_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t_SByte_t61 (const MethodInfo* method, void* obj, void** args);
// System.String UnityEngine.StackTraceUtility::PostprocessStacktrace(System.String,System.Boolean)
extern const MethodInfo StackTraceUtility_PostprocessStacktrace_m7027_MethodInfo = 
{
	"PostprocessStacktrace"/* name */
	, (methodPointerType)&StackTraceUtility_PostprocessStacktrace_m7027/* method */
	, &StackTraceUtility_t1250_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_SByte_t61/* invoker_method */
	, StackTraceUtility_t1250_StackTraceUtility_PostprocessStacktrace_m7027_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 147/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1844/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType StackTrace_t1298_0_0_0;
extern const Il2CppType StackTrace_t1298_0_0_0;
static const ParameterInfo StackTraceUtility_t1250_StackTraceUtility_ExtractFormattedStackTrace_m7028_ParameterInfos[] = 
{
	{"stackTrace", 0, 134219794, 0, &StackTrace_t1298_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String UnityEngine.StackTraceUtility::ExtractFormattedStackTrace(System.Diagnostics.StackTrace)
extern const MethodInfo StackTraceUtility_ExtractFormattedStackTrace_m7028_MethodInfo = 
{
	"ExtractFormattedStackTrace"/* name */
	, (methodPointerType)&StackTraceUtility_ExtractFormattedStackTrace_m7028/* method */
	, &StackTraceUtility_t1250_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, StackTraceUtility_t1250_StackTraceUtility_ExtractFormattedStackTrace_m7028_ParameterInfos/* parameters */
	, 769/* custom_attributes_cache */
	, 147/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1845/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* StackTraceUtility_t1250_MethodInfos[] =
{
	&StackTraceUtility__ctor_m7020_MethodInfo,
	&StackTraceUtility__cctor_m7021_MethodInfo,
	&StackTraceUtility_SetProjectFolder_m7022_MethodInfo,
	&StackTraceUtility_ExtractStackTrace_m7023_MethodInfo,
	&StackTraceUtility_IsSystemStacktraceType_m7024_MethodInfo,
	&StackTraceUtility_ExtractStringFromException_m7025_MethodInfo,
	&StackTraceUtility_ExtractStringFromExceptionInternal_m7026_MethodInfo,
	&StackTraceUtility_PostprocessStacktrace_m7027_MethodInfo,
	&StackTraceUtility_ExtractFormattedStackTrace_m7028_MethodInfo,
	NULL
};
static const Il2CppMethodReference StackTraceUtility_t1250_VTable[] =
{
	&Object_Equals_m252_MethodInfo,
	&Object_Finalize_m230_MethodInfo,
	&Object_GetHashCode_m172_MethodInfo,
	&Object_ToString_m253_MethodInfo,
};
static bool StackTraceUtility_t1250_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType StackTraceUtility_t1250_0_0_0;
extern const Il2CppType StackTraceUtility_t1250_1_0_0;
struct StackTraceUtility_t1250;
const Il2CppTypeDefinitionMetadata StackTraceUtility_t1250_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, StackTraceUtility_t1250_VTable/* vtableMethods */
	, StackTraceUtility_t1250_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 1213/* fieldStart */

};
TypeInfo StackTraceUtility_t1250_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "StackTraceUtility"/* name */
	, "UnityEngine"/* namespaze */
	, StackTraceUtility_t1250_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &StackTraceUtility_t1250_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &StackTraceUtility_t1250_0_0_0/* byval_arg */
	, &StackTraceUtility_t1250_1_0_0/* this_arg */
	, &StackTraceUtility_t1250_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (StackTraceUtility_t1250)/* instance_size */
	, sizeof (StackTraceUtility_t1250)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, sizeof(StackTraceUtility_t1250_StaticFields)/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048577/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, true/* has_cctor */
	, false/* is_blittable */
	, 9/* method_count */
	, 0/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// UnityEngine.UnityException
#include "UnityEngine_UnityEngine_UnityException.h"
// Metadata Definition UnityEngine.UnityException
extern TypeInfo UnityException_t962_il2cpp_TypeInfo;
// UnityEngine.UnityException
#include "UnityEngine_UnityEngine_UnityExceptionMethodDeclarations.h"
extern void* RuntimeInvoker_Void_t57 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.UnityException::.ctor()
extern const MethodInfo UnityException__ctor_m7029_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&UnityException__ctor_m7029/* method */
	, &UnityException_t962_il2cpp_TypeInfo/* declaring_type */
	, &Void_t57_0_0_0/* return_type */
	, RuntimeInvoker_Void_t57/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1846/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
static const ParameterInfo UnityException_t962_UnityException__ctor_m7030_ParameterInfos[] = 
{
	{"message", 0, 134219795, 0, &String_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t57_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.UnityException::.ctor(System.String)
extern const MethodInfo UnityException__ctor_m7030_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&UnityException__ctor_m7030/* method */
	, &UnityException_t962_il2cpp_TypeInfo/* declaring_type */
	, &Void_t57_0_0_0/* return_type */
	, RuntimeInvoker_Void_t57_Object_t/* invoker_method */
	, UnityException_t962_UnityException__ctor_m7030_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1847/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType Exception_t27_0_0_0;
extern const Il2CppType Exception_t27_0_0_0;
static const ParameterInfo UnityException_t962_UnityException__ctor_m7031_ParameterInfos[] = 
{
	{"message", 0, 134219796, 0, &String_t_0_0_0},
	{"innerException", 1, 134219797, 0, &Exception_t27_0_0_0},
};
extern void* RuntimeInvoker_Void_t57_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.UnityException::.ctor(System.String,System.Exception)
extern const MethodInfo UnityException__ctor_m7031_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&UnityException__ctor_m7031/* method */
	, &UnityException_t962_il2cpp_TypeInfo/* declaring_type */
	, &Void_t57_0_0_0/* return_type */
	, RuntimeInvoker_Void_t57_Object_t_Object_t/* invoker_method */
	, UnityException_t962_UnityException__ctor_m7031_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1848/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType SerializationInfo_t1299_0_0_0;
extern const Il2CppType SerializationInfo_t1299_0_0_0;
extern const Il2CppType StreamingContext_t1300_0_0_0;
extern const Il2CppType StreamingContext_t1300_0_0_0;
static const ParameterInfo UnityException_t962_UnityException__ctor_m7032_ParameterInfos[] = 
{
	{"info", 0, 134219798, 0, &SerializationInfo_t1299_0_0_0},
	{"context", 1, 134219799, 0, &StreamingContext_t1300_0_0_0},
};
extern void* RuntimeInvoker_Void_t57_Object_t_StreamingContext_t1300 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.UnityException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern const MethodInfo UnityException__ctor_m7032_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&UnityException__ctor_m7032/* method */
	, &UnityException_t962_il2cpp_TypeInfo/* declaring_type */
	, &Void_t57_0_0_0/* return_type */
	, RuntimeInvoker_Void_t57_Object_t_StreamingContext_t1300/* invoker_method */
	, UnityException_t962_UnityException__ctor_m7032_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6276/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1849/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* UnityException_t962_MethodInfos[] =
{
	&UnityException__ctor_m7029_MethodInfo,
	&UnityException__ctor_m7030_MethodInfo,
	&UnityException__ctor_m7031_MethodInfo,
	&UnityException__ctor_m7032_MethodInfo,
	NULL
};
extern const MethodInfo Exception_ToString_m7378_MethodInfo;
extern const MethodInfo Exception_GetObjectData_m7379_MethodInfo;
extern const MethodInfo Exception_get_InnerException_m7380_MethodInfo;
extern const MethodInfo Exception_get_Message_m7381_MethodInfo;
extern const MethodInfo Exception_get_Source_m7382_MethodInfo;
extern const MethodInfo Exception_get_StackTrace_m7383_MethodInfo;
extern const MethodInfo Exception_GetType_m7384_MethodInfo;
static const Il2CppMethodReference UnityException_t962_VTable[] =
{
	&Object_Equals_m252_MethodInfo,
	&Object_Finalize_m230_MethodInfo,
	&Object_GetHashCode_m172_MethodInfo,
	&Exception_ToString_m7378_MethodInfo,
	&Exception_GetObjectData_m7379_MethodInfo,
	&Exception_get_InnerException_m7380_MethodInfo,
	&Exception_get_Message_m7381_MethodInfo,
	&Exception_get_Source_m7382_MethodInfo,
	&Exception_get_StackTrace_m7383_MethodInfo,
	&Exception_GetObjectData_m7379_MethodInfo,
	&Exception_GetType_m7384_MethodInfo,
};
static bool UnityException_t962_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
extern const Il2CppType _Exception_t1379_0_0_0;
static Il2CppInterfaceOffsetPair UnityException_t962_InterfacesOffsets[] = 
{
	{ &ISerializable_t711_0_0_0, 4},
	{ &_Exception_t1379_0_0_0, 5},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType UnityException_t962_0_0_0;
extern const Il2CppType UnityException_t962_1_0_0;
struct UnityException_t962;
const Il2CppTypeDefinitionMetadata UnityException_t962_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, UnityException_t962_InterfacesOffsets/* interfaceOffsets */
	, &Exception_t27_0_0_0/* parent */
	, UnityException_t962_VTable/* vtableMethods */
	, UnityException_t962_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 1214/* fieldStart */

};
TypeInfo UnityException_t962_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "UnityException"/* name */
	, "UnityEngine"/* namespaze */
	, UnityException_t962_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &UnityException_t962_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &UnityException_t962_0_0_0/* byval_arg */
	, &UnityException_t962_1_0_0/* this_arg */
	, &UnityException_t962_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (UnityException_t962)/* instance_size */
	, sizeof (UnityException_t962)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1056769/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 4/* method_count */
	, 0/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 11/* vtable_count */
	, 0/* interfaces_count */
	, 2/* interface_offsets_count */

};
// UnityEngine.SharedBetweenAnimatorsAttribute
#include "UnityEngine_UnityEngine_SharedBetweenAnimatorsAttribute.h"
// Metadata Definition UnityEngine.SharedBetweenAnimatorsAttribute
extern TypeInfo SharedBetweenAnimatorsAttribute_t1251_il2cpp_TypeInfo;
// UnityEngine.SharedBetweenAnimatorsAttribute
#include "UnityEngine_UnityEngine_SharedBetweenAnimatorsAttributeMethodDeclarations.h"
extern void* RuntimeInvoker_Void_t57 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.SharedBetweenAnimatorsAttribute::.ctor()
extern const MethodInfo SharedBetweenAnimatorsAttribute__ctor_m7033_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&SharedBetweenAnimatorsAttribute__ctor_m7033/* method */
	, &SharedBetweenAnimatorsAttribute_t1251_il2cpp_TypeInfo/* declaring_type */
	, &Void_t57_0_0_0/* return_type */
	, RuntimeInvoker_Void_t57/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1850/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* SharedBetweenAnimatorsAttribute_t1251_MethodInfos[] =
{
	&SharedBetweenAnimatorsAttribute__ctor_m7033_MethodInfo,
	NULL
};
static const Il2CppMethodReference SharedBetweenAnimatorsAttribute_t1251_VTable[] =
{
	&Attribute_Equals_m3933_MethodInfo,
	&Object_Finalize_m230_MethodInfo,
	&Attribute_GetHashCode_m3934_MethodInfo,
	&Object_ToString_m253_MethodInfo,
};
static bool SharedBetweenAnimatorsAttribute_t1251_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair SharedBetweenAnimatorsAttribute_t1251_InterfacesOffsets[] = 
{
	{ &_Attribute_t716_0_0_0, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType SharedBetweenAnimatorsAttribute_t1251_0_0_0;
extern const Il2CppType SharedBetweenAnimatorsAttribute_t1251_1_0_0;
struct SharedBetweenAnimatorsAttribute_t1251;
const Il2CppTypeDefinitionMetadata SharedBetweenAnimatorsAttribute_t1251_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, SharedBetweenAnimatorsAttribute_t1251_InterfacesOffsets/* interfaceOffsets */
	, &Attribute_t384_0_0_0/* parent */
	, SharedBetweenAnimatorsAttribute_t1251_VTable/* vtableMethods */
	, SharedBetweenAnimatorsAttribute_t1251_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo SharedBetweenAnimatorsAttribute_t1251_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "SharedBetweenAnimatorsAttribute"/* name */
	, "UnityEngine"/* namespaze */
	, SharedBetweenAnimatorsAttribute_t1251_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &SharedBetweenAnimatorsAttribute_t1251_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 770/* custom_attributes_cache */
	, &SharedBetweenAnimatorsAttribute_t1251_0_0_0/* byval_arg */
	, &SharedBetweenAnimatorsAttribute_t1251_1_0_0/* this_arg */
	, &SharedBetweenAnimatorsAttribute_t1251_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (SharedBetweenAnimatorsAttribute_t1251)/* instance_size */
	, sizeof (SharedBetweenAnimatorsAttribute_t1251)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048833/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 1/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 1/* interface_offsets_count */

};
// UnityEngine.StateMachineBehaviour
#include "UnityEngine_UnityEngine_StateMachineBehaviour.h"
// Metadata Definition UnityEngine.StateMachineBehaviour
extern TypeInfo StateMachineBehaviour_t1252_il2cpp_TypeInfo;
// UnityEngine.StateMachineBehaviour
#include "UnityEngine_UnityEngine_StateMachineBehaviourMethodDeclarations.h"
extern void* RuntimeInvoker_Void_t57 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.StateMachineBehaviour::.ctor()
extern const MethodInfo StateMachineBehaviour__ctor_m7034_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&StateMachineBehaviour__ctor_m7034/* method */
	, &StateMachineBehaviour_t1252_il2cpp_TypeInfo/* declaring_type */
	, &Void_t57_0_0_0/* return_type */
	, RuntimeInvoker_Void_t57/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 6276/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1851/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Animator_t564_0_0_0;
extern const Il2CppType Animator_t564_0_0_0;
extern const Il2CppType AnimatorStateInfo_t1150_0_0_0;
extern const Il2CppType AnimatorStateInfo_t1150_0_0_0;
extern const Il2CppType Int32_t50_0_0_0;
static const ParameterInfo StateMachineBehaviour_t1252_StateMachineBehaviour_OnStateEnter_m7035_ParameterInfos[] = 
{
	{"animator", 0, 134219800, 0, &Animator_t564_0_0_0},
	{"stateInfo", 1, 134219801, 0, &AnimatorStateInfo_t1150_0_0_0},
	{"layerIndex", 2, 134219802, 0, &Int32_t50_0_0_0},
};
extern void* RuntimeInvoker_Void_t57_Object_t_AnimatorStateInfo_t1150_Int32_t50 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.StateMachineBehaviour::OnStateEnter(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
extern const MethodInfo StateMachineBehaviour_OnStateEnter_m7035_MethodInfo = 
{
	"OnStateEnter"/* name */
	, (methodPointerType)&StateMachineBehaviour_OnStateEnter_m7035/* method */
	, &StateMachineBehaviour_t1252_il2cpp_TypeInfo/* declaring_type */
	, &Void_t57_0_0_0/* return_type */
	, RuntimeInvoker_Void_t57_Object_t_AnimatorStateInfo_t1150_Int32_t50/* invoker_method */
	, StateMachineBehaviour_t1252_StateMachineBehaviour_OnStateEnter_m7035_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1852/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Animator_t564_0_0_0;
extern const Il2CppType AnimatorStateInfo_t1150_0_0_0;
extern const Il2CppType Int32_t50_0_0_0;
static const ParameterInfo StateMachineBehaviour_t1252_StateMachineBehaviour_OnStateUpdate_m7036_ParameterInfos[] = 
{
	{"animator", 0, 134219803, 0, &Animator_t564_0_0_0},
	{"stateInfo", 1, 134219804, 0, &AnimatorStateInfo_t1150_0_0_0},
	{"layerIndex", 2, 134219805, 0, &Int32_t50_0_0_0},
};
extern void* RuntimeInvoker_Void_t57_Object_t_AnimatorStateInfo_t1150_Int32_t50 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.StateMachineBehaviour::OnStateUpdate(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
extern const MethodInfo StateMachineBehaviour_OnStateUpdate_m7036_MethodInfo = 
{
	"OnStateUpdate"/* name */
	, (methodPointerType)&StateMachineBehaviour_OnStateUpdate_m7036/* method */
	, &StateMachineBehaviour_t1252_il2cpp_TypeInfo/* declaring_type */
	, &Void_t57_0_0_0/* return_type */
	, RuntimeInvoker_Void_t57_Object_t_AnimatorStateInfo_t1150_Int32_t50/* invoker_method */
	, StateMachineBehaviour_t1252_StateMachineBehaviour_OnStateUpdate_m7036_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1853/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Animator_t564_0_0_0;
extern const Il2CppType AnimatorStateInfo_t1150_0_0_0;
extern const Il2CppType Int32_t50_0_0_0;
static const ParameterInfo StateMachineBehaviour_t1252_StateMachineBehaviour_OnStateExit_m7037_ParameterInfos[] = 
{
	{"animator", 0, 134219806, 0, &Animator_t564_0_0_0},
	{"stateInfo", 1, 134219807, 0, &AnimatorStateInfo_t1150_0_0_0},
	{"layerIndex", 2, 134219808, 0, &Int32_t50_0_0_0},
};
extern void* RuntimeInvoker_Void_t57_Object_t_AnimatorStateInfo_t1150_Int32_t50 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.StateMachineBehaviour::OnStateExit(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
extern const MethodInfo StateMachineBehaviour_OnStateExit_m7037_MethodInfo = 
{
	"OnStateExit"/* name */
	, (methodPointerType)&StateMachineBehaviour_OnStateExit_m7037/* method */
	, &StateMachineBehaviour_t1252_il2cpp_TypeInfo/* declaring_type */
	, &Void_t57_0_0_0/* return_type */
	, RuntimeInvoker_Void_t57_Object_t_AnimatorStateInfo_t1150_Int32_t50/* invoker_method */
	, StateMachineBehaviour_t1252_StateMachineBehaviour_OnStateExit_m7037_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1854/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Animator_t564_0_0_0;
extern const Il2CppType AnimatorStateInfo_t1150_0_0_0;
extern const Il2CppType Int32_t50_0_0_0;
static const ParameterInfo StateMachineBehaviour_t1252_StateMachineBehaviour_OnStateMove_m7038_ParameterInfos[] = 
{
	{"animator", 0, 134219809, 0, &Animator_t564_0_0_0},
	{"stateInfo", 1, 134219810, 0, &AnimatorStateInfo_t1150_0_0_0},
	{"layerIndex", 2, 134219811, 0, &Int32_t50_0_0_0},
};
extern void* RuntimeInvoker_Void_t57_Object_t_AnimatorStateInfo_t1150_Int32_t50 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.StateMachineBehaviour::OnStateMove(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
extern const MethodInfo StateMachineBehaviour_OnStateMove_m7038_MethodInfo = 
{
	"OnStateMove"/* name */
	, (methodPointerType)&StateMachineBehaviour_OnStateMove_m7038/* method */
	, &StateMachineBehaviour_t1252_il2cpp_TypeInfo/* declaring_type */
	, &Void_t57_0_0_0/* return_type */
	, RuntimeInvoker_Void_t57_Object_t_AnimatorStateInfo_t1150_Int32_t50/* invoker_method */
	, StateMachineBehaviour_t1252_StateMachineBehaviour_OnStateMove_m7038_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1855/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Animator_t564_0_0_0;
extern const Il2CppType AnimatorStateInfo_t1150_0_0_0;
extern const Il2CppType Int32_t50_0_0_0;
static const ParameterInfo StateMachineBehaviour_t1252_StateMachineBehaviour_OnStateIK_m7039_ParameterInfos[] = 
{
	{"animator", 0, 134219812, 0, &Animator_t564_0_0_0},
	{"stateInfo", 1, 134219813, 0, &AnimatorStateInfo_t1150_0_0_0},
	{"layerIndex", 2, 134219814, 0, &Int32_t50_0_0_0},
};
extern void* RuntimeInvoker_Void_t57_Object_t_AnimatorStateInfo_t1150_Int32_t50 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.StateMachineBehaviour::OnStateIK(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
extern const MethodInfo StateMachineBehaviour_OnStateIK_m7039_MethodInfo = 
{
	"OnStateIK"/* name */
	, (methodPointerType)&StateMachineBehaviour_OnStateIK_m7039/* method */
	, &StateMachineBehaviour_t1252_il2cpp_TypeInfo/* declaring_type */
	, &Void_t57_0_0_0/* return_type */
	, RuntimeInvoker_Void_t57_Object_t_AnimatorStateInfo_t1150_Int32_t50/* invoker_method */
	, StateMachineBehaviour_t1252_StateMachineBehaviour_OnStateIK_m7039_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1856/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Animator_t564_0_0_0;
extern const Il2CppType Int32_t50_0_0_0;
static const ParameterInfo StateMachineBehaviour_t1252_StateMachineBehaviour_OnStateMachineEnter_m7040_ParameterInfos[] = 
{
	{"animator", 0, 134219815, 0, &Animator_t564_0_0_0},
	{"stateMachinePathHash", 1, 134219816, 0, &Int32_t50_0_0_0},
};
extern void* RuntimeInvoker_Void_t57_Object_t_Int32_t50 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.StateMachineBehaviour::OnStateMachineEnter(UnityEngine.Animator,System.Int32)
extern const MethodInfo StateMachineBehaviour_OnStateMachineEnter_m7040_MethodInfo = 
{
	"OnStateMachineEnter"/* name */
	, (methodPointerType)&StateMachineBehaviour_OnStateMachineEnter_m7040/* method */
	, &StateMachineBehaviour_t1252_il2cpp_TypeInfo/* declaring_type */
	, &Void_t57_0_0_0/* return_type */
	, RuntimeInvoker_Void_t57_Object_t_Int32_t50/* invoker_method */
	, StateMachineBehaviour_t1252_StateMachineBehaviour_OnStateMachineEnter_m7040_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 0/* iflags */
	, 9/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1857/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Animator_t564_0_0_0;
extern const Il2CppType Int32_t50_0_0_0;
static const ParameterInfo StateMachineBehaviour_t1252_StateMachineBehaviour_OnStateMachineExit_m7041_ParameterInfos[] = 
{
	{"animator", 0, 134219817, 0, &Animator_t564_0_0_0},
	{"stateMachinePathHash", 1, 134219818, 0, &Int32_t50_0_0_0},
};
extern void* RuntimeInvoker_Void_t57_Object_t_Int32_t50 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.StateMachineBehaviour::OnStateMachineExit(UnityEngine.Animator,System.Int32)
extern const MethodInfo StateMachineBehaviour_OnStateMachineExit_m7041_MethodInfo = 
{
	"OnStateMachineExit"/* name */
	, (methodPointerType)&StateMachineBehaviour_OnStateMachineExit_m7041/* method */
	, &StateMachineBehaviour_t1252_il2cpp_TypeInfo/* declaring_type */
	, &Void_t57_0_0_0/* return_type */
	, RuntimeInvoker_Void_t57_Object_t_Int32_t50/* invoker_method */
	, StateMachineBehaviour_t1252_StateMachineBehaviour_OnStateMachineExit_m7041_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 0/* iflags */
	, 10/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1858/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* StateMachineBehaviour_t1252_MethodInfos[] =
{
	&StateMachineBehaviour__ctor_m7034_MethodInfo,
	&StateMachineBehaviour_OnStateEnter_m7035_MethodInfo,
	&StateMachineBehaviour_OnStateUpdate_m7036_MethodInfo,
	&StateMachineBehaviour_OnStateExit_m7037_MethodInfo,
	&StateMachineBehaviour_OnStateMove_m7038_MethodInfo,
	&StateMachineBehaviour_OnStateIK_m7039_MethodInfo,
	&StateMachineBehaviour_OnStateMachineEnter_m7040_MethodInfo,
	&StateMachineBehaviour_OnStateMachineExit_m7041_MethodInfo,
	NULL
};
extern const MethodInfo Object_Equals_m3868_MethodInfo;
extern const MethodInfo Object_GetHashCode_m3869_MethodInfo;
extern const MethodInfo Object_ToString_m3870_MethodInfo;
extern const MethodInfo StateMachineBehaviour_OnStateEnter_m7035_MethodInfo;
extern const MethodInfo StateMachineBehaviour_OnStateUpdate_m7036_MethodInfo;
extern const MethodInfo StateMachineBehaviour_OnStateExit_m7037_MethodInfo;
extern const MethodInfo StateMachineBehaviour_OnStateMove_m7038_MethodInfo;
extern const MethodInfo StateMachineBehaviour_OnStateIK_m7039_MethodInfo;
extern const MethodInfo StateMachineBehaviour_OnStateMachineEnter_m7040_MethodInfo;
extern const MethodInfo StateMachineBehaviour_OnStateMachineExit_m7041_MethodInfo;
static const Il2CppMethodReference StateMachineBehaviour_t1252_VTable[] =
{
	&Object_Equals_m3868_MethodInfo,
	&Object_Finalize_m230_MethodInfo,
	&Object_GetHashCode_m3869_MethodInfo,
	&Object_ToString_m3870_MethodInfo,
	&StateMachineBehaviour_OnStateEnter_m7035_MethodInfo,
	&StateMachineBehaviour_OnStateUpdate_m7036_MethodInfo,
	&StateMachineBehaviour_OnStateExit_m7037_MethodInfo,
	&StateMachineBehaviour_OnStateMove_m7038_MethodInfo,
	&StateMachineBehaviour_OnStateIK_m7039_MethodInfo,
	&StateMachineBehaviour_OnStateMachineEnter_m7040_MethodInfo,
	&StateMachineBehaviour_OnStateMachineExit_m7041_MethodInfo,
};
static bool StateMachineBehaviour_t1252_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType StateMachineBehaviour_t1252_0_0_0;
extern const Il2CppType StateMachineBehaviour_t1252_1_0_0;
extern const Il2CppType ScriptableObject_t106_0_0_0;
struct StateMachineBehaviour_t1252;
const Il2CppTypeDefinitionMetadata StateMachineBehaviour_t1252_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &ScriptableObject_t106_0_0_0/* parent */
	, StateMachineBehaviour_t1252_VTable/* vtableMethods */
	, StateMachineBehaviour_t1252_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo StateMachineBehaviour_t1252_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "StateMachineBehaviour"/* name */
	, "UnityEngine"/* namespaze */
	, StateMachineBehaviour_t1252_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &StateMachineBehaviour_t1252_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &StateMachineBehaviour_t1252_0_0_0/* byval_arg */
	, &StateMachineBehaviour_t1252_1_0_0/* this_arg */
	, &StateMachineBehaviour_t1252_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (StateMachineBehaviour_t1252)/* instance_size */
	, sizeof (StateMachineBehaviour_t1252)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048705/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 8/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 11/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// UnityEngine.SystemClock
#include "UnityEngine_UnityEngine_SystemClock.h"
// Metadata Definition UnityEngine.SystemClock
extern TypeInfo SystemClock_t1253_il2cpp_TypeInfo;
// UnityEngine.SystemClock
#include "UnityEngine_UnityEngine_SystemClockMethodDeclarations.h"
extern void* RuntimeInvoker_Void_t57 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.SystemClock::.cctor()
extern const MethodInfo SystemClock__cctor_m7042_MethodInfo = 
{
	".cctor"/* name */
	, (methodPointerType)&SystemClock__cctor_m7042/* method */
	, &SystemClock_t1253_il2cpp_TypeInfo/* declaring_type */
	, &Void_t57_0_0_0/* return_type */
	, RuntimeInvoker_Void_t57/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 6161/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1859/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_DateTime_t245 (const MethodInfo* method, void* obj, void** args);
// System.DateTime UnityEngine.SystemClock::get_now()
extern const MethodInfo SystemClock_get_now_m7043_MethodInfo = 
{
	"get_now"/* name */
	, (methodPointerType)&SystemClock_get_now_m7043/* method */
	, &SystemClock_t1253_il2cpp_TypeInfo/* declaring_type */
	, &DateTime_t245_0_0_0/* return_type */
	, RuntimeInvoker_DateTime_t245/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2198/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1860/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* SystemClock_t1253_MethodInfos[] =
{
	&SystemClock__cctor_m7042_MethodInfo,
	&SystemClock_get_now_m7043_MethodInfo,
	NULL
};
extern const MethodInfo SystemClock_get_now_m7043_MethodInfo;
static const PropertyInfo SystemClock_t1253____now_PropertyInfo = 
{
	&SystemClock_t1253_il2cpp_TypeInfo/* parent */
	, "now"/* name */
	, &SystemClock_get_now_m7043_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
static const PropertyInfo* SystemClock_t1253_PropertyInfos[] =
{
	&SystemClock_t1253____now_PropertyInfo,
	NULL
};
static const Il2CppMethodReference SystemClock_t1253_VTable[] =
{
	&Object_Equals_m252_MethodInfo,
	&Object_Finalize_m230_MethodInfo,
	&Object_GetHashCode_m172_MethodInfo,
	&Object_ToString_m253_MethodInfo,
};
static bool SystemClock_t1253_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType SystemClock_t1253_0_0_0;
extern const Il2CppType SystemClock_t1253_1_0_0;
struct SystemClock_t1253;
const Il2CppTypeDefinitionMetadata SystemClock_t1253_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, SystemClock_t1253_VTable/* vtableMethods */
	, SystemClock_t1253_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 1216/* fieldStart */

};
TypeInfo SystemClock_t1253_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "SystemClock"/* name */
	, "UnityEngine"/* namespaze */
	, SystemClock_t1253_MethodInfos/* methods */
	, SystemClock_t1253_PropertyInfos/* properties */
	, NULL/* events */
	, &SystemClock_t1253_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &SystemClock_t1253_0_0_0/* byval_arg */
	, &SystemClock_t1253_1_0_0/* this_arg */
	, &SystemClock_t1253_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (SystemClock_t1253)/* instance_size */
	, sizeof (SystemClock_t1253)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, sizeof(SystemClock_t1253_StaticFields)/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, true/* has_cctor */
	, false/* is_blittable */
	, 2/* method_count */
	, 1/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// UnityEngine.TextEditor/DblClickSnapping
#include "UnityEngine_UnityEngine_TextEditor_DblClickSnapping.h"
// Metadata Definition UnityEngine.TextEditor/DblClickSnapping
extern TypeInfo DblClickSnapping_t1254_il2cpp_TypeInfo;
// UnityEngine.TextEditor/DblClickSnapping
#include "UnityEngine_UnityEngine_TextEditor_DblClickSnappingMethodDeclarations.h"
static const MethodInfo* DblClickSnapping_t1254_MethodInfos[] =
{
	NULL
};
static const Il2CppMethodReference DblClickSnapping_t1254_VTable[] =
{
	&Enum_Equals_m229_MethodInfo,
	&Object_Finalize_m230_MethodInfo,
	&Enum_GetHashCode_m231_MethodInfo,
	&Enum_ToString_m232_MethodInfo,
	&Enum_ToString_m233_MethodInfo,
	&Enum_System_IConvertible_ToBoolean_m234_MethodInfo,
	&Enum_System_IConvertible_ToByte_m235_MethodInfo,
	&Enum_System_IConvertible_ToChar_m236_MethodInfo,
	&Enum_System_IConvertible_ToDateTime_m237_MethodInfo,
	&Enum_System_IConvertible_ToDecimal_m238_MethodInfo,
	&Enum_System_IConvertible_ToDouble_m239_MethodInfo,
	&Enum_System_IConvertible_ToInt16_m240_MethodInfo,
	&Enum_System_IConvertible_ToInt32_m241_MethodInfo,
	&Enum_System_IConvertible_ToInt64_m242_MethodInfo,
	&Enum_System_IConvertible_ToSByte_m243_MethodInfo,
	&Enum_System_IConvertible_ToSingle_m244_MethodInfo,
	&Enum_ToString_m245_MethodInfo,
	&Enum_System_IConvertible_ToType_m246_MethodInfo,
	&Enum_System_IConvertible_ToUInt16_m247_MethodInfo,
	&Enum_System_IConvertible_ToUInt32_m248_MethodInfo,
	&Enum_System_IConvertible_ToUInt64_m249_MethodInfo,
	&Enum_CompareTo_m250_MethodInfo,
	&Enum_GetTypeCode_m251_MethodInfo,
};
static bool DblClickSnapping_t1254_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair DblClickSnapping_t1254_InterfacesOffsets[] = 
{
	{ &IFormattable_t53_0_0_0, 4},
	{ &IConvertible_t54_0_0_0, 5},
	{ &IComparable_t55_0_0_0, 21},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType DblClickSnapping_t1254_0_0_0;
extern const Il2CppType DblClickSnapping_t1254_1_0_0;
extern TypeInfo TextEditor_t964_il2cpp_TypeInfo;
extern const Il2CppType TextEditor_t964_0_0_0;
// System.Byte
#include "mscorlib_System_Byte.h"
extern TypeInfo Byte_t638_il2cpp_TypeInfo;
const Il2CppTypeDefinitionMetadata DblClickSnapping_t1254_DefinitionMetadata = 
{
	&TextEditor_t964_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, DblClickSnapping_t1254_InterfacesOffsets/* interfaceOffsets */
	, &Enum_t56_0_0_0/* parent */
	, DblClickSnapping_t1254_VTable/* vtableMethods */
	, DblClickSnapping_t1254_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 1217/* fieldStart */

};
TypeInfo DblClickSnapping_t1254_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "DblClickSnapping"/* name */
	, ""/* namespaze */
	, DblClickSnapping_t1254_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &Byte_t638_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &DblClickSnapping_t1254_0_0_0/* byval_arg */
	, &DblClickSnapping_t1254_1_0_0/* this_arg */
	, &DblClickSnapping_t1254_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (DblClickSnapping_t1254)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (DblClickSnapping_t1254)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(uint8_t)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 258/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, true/* valuetype */
	, false/* initialized */
	, true/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 0/* method_count */
	, 0/* property_count */
	, 3/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 23/* vtable_count */
	, 0/* interfaces_count */
	, 3/* interface_offsets_count */

};
// UnityEngine.TextEditor/TextEditOp
#include "UnityEngine_UnityEngine_TextEditor_TextEditOp.h"
// Metadata Definition UnityEngine.TextEditor/TextEditOp
extern TypeInfo TextEditOp_t1255_il2cpp_TypeInfo;
// UnityEngine.TextEditor/TextEditOp
#include "UnityEngine_UnityEngine_TextEditor_TextEditOpMethodDeclarations.h"
static const MethodInfo* TextEditOp_t1255_MethodInfos[] =
{
	NULL
};
static const Il2CppMethodReference TextEditOp_t1255_VTable[] =
{
	&Enum_Equals_m229_MethodInfo,
	&Object_Finalize_m230_MethodInfo,
	&Enum_GetHashCode_m231_MethodInfo,
	&Enum_ToString_m232_MethodInfo,
	&Enum_ToString_m233_MethodInfo,
	&Enum_System_IConvertible_ToBoolean_m234_MethodInfo,
	&Enum_System_IConvertible_ToByte_m235_MethodInfo,
	&Enum_System_IConvertible_ToChar_m236_MethodInfo,
	&Enum_System_IConvertible_ToDateTime_m237_MethodInfo,
	&Enum_System_IConvertible_ToDecimal_m238_MethodInfo,
	&Enum_System_IConvertible_ToDouble_m239_MethodInfo,
	&Enum_System_IConvertible_ToInt16_m240_MethodInfo,
	&Enum_System_IConvertible_ToInt32_m241_MethodInfo,
	&Enum_System_IConvertible_ToInt64_m242_MethodInfo,
	&Enum_System_IConvertible_ToSByte_m243_MethodInfo,
	&Enum_System_IConvertible_ToSingle_m244_MethodInfo,
	&Enum_ToString_m245_MethodInfo,
	&Enum_System_IConvertible_ToType_m246_MethodInfo,
	&Enum_System_IConvertible_ToUInt16_m247_MethodInfo,
	&Enum_System_IConvertible_ToUInt32_m248_MethodInfo,
	&Enum_System_IConvertible_ToUInt64_m249_MethodInfo,
	&Enum_CompareTo_m250_MethodInfo,
	&Enum_GetTypeCode_m251_MethodInfo,
};
static bool TextEditOp_t1255_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair TextEditOp_t1255_InterfacesOffsets[] = 
{
	{ &IFormattable_t53_0_0_0, 4},
	{ &IConvertible_t54_0_0_0, 5},
	{ &IComparable_t55_0_0_0, 21},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType TextEditOp_t1255_0_0_0;
extern const Il2CppType TextEditOp_t1255_1_0_0;
const Il2CppTypeDefinitionMetadata TextEditOp_t1255_DefinitionMetadata = 
{
	&TextEditor_t964_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, TextEditOp_t1255_InterfacesOffsets/* interfaceOffsets */
	, &Enum_t56_0_0_0/* parent */
	, TextEditOp_t1255_VTable/* vtableMethods */
	, TextEditOp_t1255_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 1220/* fieldStart */

};
TypeInfo TextEditOp_t1255_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "TextEditOp"/* name */
	, ""/* namespaze */
	, TextEditOp_t1255_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &Int32_t50_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &TextEditOp_t1255_0_0_0/* byval_arg */
	, &TextEditOp_t1255_1_0_0/* this_arg */
	, &TextEditOp_t1255_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (TextEditOp_t1255)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (TextEditOp_t1255)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(int32_t)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 259/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, true/* valuetype */
	, false/* initialized */
	, true/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 0/* method_count */
	, 0/* property_count */
	, 51/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 23/* vtable_count */
	, 0/* interfaces_count */
	, 3/* interface_offsets_count */

};
// UnityEngine.TextEditor
#include "UnityEngine_UnityEngine_TextEditor.h"
// Metadata Definition UnityEngine.TextEditor
// UnityEngine.TextEditor
#include "UnityEngine_UnityEngine_TextEditorMethodDeclarations.h"
extern void* RuntimeInvoker_Void_t57 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.TextEditor::.ctor()
extern const MethodInfo TextEditor__ctor_m5385_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&TextEditor__ctor_m5385/* method */
	, &TextEditor_t964_il2cpp_TypeInfo/* declaring_type */
	, &Void_t57_0_0_0/* return_type */
	, RuntimeInvoker_Void_t57/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1861/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Void_t57 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.TextEditor::ClearCursorPos()
extern const MethodInfo TextEditor_ClearCursorPos_m7044_MethodInfo = 
{
	"ClearCursorPos"/* name */
	, (methodPointerType)&TextEditor_ClearCursorPos_m7044/* method */
	, &TextEditor_t964_il2cpp_TypeInfo/* declaring_type */
	, &Void_t57_0_0_0/* return_type */
	, RuntimeInvoker_Void_t57/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1862/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Void_t57 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.TextEditor::OnFocus()
extern const MethodInfo TextEditor_OnFocus_m5388_MethodInfo = 
{
	"OnFocus"/* name */
	, (methodPointerType)&TextEditor_OnFocus_m5388/* method */
	, &TextEditor_t964_il2cpp_TypeInfo/* declaring_type */
	, &Void_t57_0_0_0/* return_type */
	, RuntimeInvoker_Void_t57/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1863/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Void_t57 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.TextEditor::OnLostFocus()
extern const MethodInfo TextEditor_OnLostFocus_m7045_MethodInfo = 
{
	"OnLostFocus"/* name */
	, (methodPointerType)&TextEditor_OnLostFocus_m7045/* method */
	, &TextEditor_t964_il2cpp_TypeInfo/* declaring_type */
	, &Void_t57_0_0_0/* return_type */
	, RuntimeInvoker_Void_t57/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1864/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Void_t57 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.TextEditor::SelectAll()
extern const MethodInfo TextEditor_SelectAll_m7046_MethodInfo = 
{
	"SelectAll"/* name */
	, (methodPointerType)&TextEditor_SelectAll_m7046/* method */
	, &TextEditor_t964_il2cpp_TypeInfo/* declaring_type */
	, &Void_t57_0_0_0/* return_type */
	, RuntimeInvoker_Void_t57/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1865/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Boolean_t29 (const MethodInfo* method, void* obj, void** args);
// System.Boolean UnityEngine.TextEditor::DeleteSelection()
extern const MethodInfo TextEditor_DeleteSelection_m7047_MethodInfo = 
{
	"DeleteSelection"/* name */
	, (methodPointerType)&TextEditor_DeleteSelection_m7047/* method */
	, &TextEditor_t964_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t29_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t29/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1866/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
static const ParameterInfo TextEditor_t964_TextEditor_ReplaceSelection_m7048_ParameterInfos[] = 
{
	{"replace", 0, 134219819, 0, &String_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t57_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.TextEditor::ReplaceSelection(System.String)
extern const MethodInfo TextEditor_ReplaceSelection_m7048_MethodInfo = 
{
	"ReplaceSelection"/* name */
	, (methodPointerType)&TextEditor_ReplaceSelection_m7048/* method */
	, &TextEditor_t964_il2cpp_TypeInfo/* declaring_type */
	, &Void_t57_0_0_0/* return_type */
	, RuntimeInvoker_Void_t57_Object_t/* invoker_method */
	, TextEditor_t964_TextEditor_ReplaceSelection_m7048_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1867/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Void_t57 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.TextEditor::UpdateScrollOffsetIfNeeded()
extern const MethodInfo TextEditor_UpdateScrollOffsetIfNeeded_m7049_MethodInfo = 
{
	"UpdateScrollOffsetIfNeeded"/* name */
	, (methodPointerType)&TextEditor_UpdateScrollOffsetIfNeeded_m7049/* method */
	, &TextEditor_t964_il2cpp_TypeInfo/* declaring_type */
	, &Void_t57_0_0_0/* return_type */
	, RuntimeInvoker_Void_t57/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1868/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Void_t57 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.TextEditor::UpdateScrollOffset()
extern const MethodInfo TextEditor_UpdateScrollOffset_m7050_MethodInfo = 
{
	"UpdateScrollOffset"/* name */
	, (methodPointerType)&TextEditor_UpdateScrollOffset_m7050/* method */
	, &TextEditor_t964_il2cpp_TypeInfo/* declaring_type */
	, &Void_t57_0_0_0/* return_type */
	, RuntimeInvoker_Void_t57/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1869/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Void_t57 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.TextEditor::SaveBackup()
extern const MethodInfo TextEditor_SaveBackup_m7051_MethodInfo = 
{
	"SaveBackup"/* name */
	, (methodPointerType)&TextEditor_SaveBackup_m7051/* method */
	, &TextEditor_t964_il2cpp_TypeInfo/* declaring_type */
	, &Void_t57_0_0_0/* return_type */
	, RuntimeInvoker_Void_t57/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1870/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Void_t57 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.TextEditor::Copy()
extern const MethodInfo TextEditor_Copy_m5389_MethodInfo = 
{
	"Copy"/* name */
	, (methodPointerType)&TextEditor_Copy_m5389/* method */
	, &TextEditor_t964_il2cpp_TypeInfo/* declaring_type */
	, &Void_t57_0_0_0/* return_type */
	, RuntimeInvoker_Void_t57/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1871/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
static const ParameterInfo TextEditor_t964_TextEditor_ReplaceNewlinesWithSpaces_m7052_ParameterInfos[] = 
{
	{"value", 0, 134219820, 0, &String_t_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String UnityEngine.TextEditor::ReplaceNewlinesWithSpaces(System.String)
extern const MethodInfo TextEditor_ReplaceNewlinesWithSpaces_m7052_MethodInfo = 
{
	"ReplaceNewlinesWithSpaces"/* name */
	, (methodPointerType)&TextEditor_ReplaceNewlinesWithSpaces_m7052/* method */
	, &TextEditor_t964_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, TextEditor_t964_TextEditor_ReplaceNewlinesWithSpaces_m7052_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1872/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Boolean_t29 (const MethodInfo* method, void* obj, void** args);
// System.Boolean UnityEngine.TextEditor::Paste()
extern const MethodInfo TextEditor_Paste_m5386_MethodInfo = 
{
	"Paste"/* name */
	, (methodPointerType)&TextEditor_Paste_m5386/* method */
	, &TextEditor_t964_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t29_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t29/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1873/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Void_t57 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.TextEditor::ClampPos()
extern const MethodInfo TextEditor_ClampPos_m7053_MethodInfo = 
{
	"ClampPos"/* name */
	, (methodPointerType)&TextEditor_ClampPos_m7053/* method */
	, &TextEditor_t964_il2cpp_TypeInfo/* declaring_type */
	, &Void_t57_0_0_0/* return_type */
	, RuntimeInvoker_Void_t57/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1874/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* TextEditor_t964_MethodInfos[] =
{
	&TextEditor__ctor_m5385_MethodInfo,
	&TextEditor_ClearCursorPos_m7044_MethodInfo,
	&TextEditor_OnFocus_m5388_MethodInfo,
	&TextEditor_OnLostFocus_m7045_MethodInfo,
	&TextEditor_SelectAll_m7046_MethodInfo,
	&TextEditor_DeleteSelection_m7047_MethodInfo,
	&TextEditor_ReplaceSelection_m7048_MethodInfo,
	&TextEditor_UpdateScrollOffsetIfNeeded_m7049_MethodInfo,
	&TextEditor_UpdateScrollOffset_m7050_MethodInfo,
	&TextEditor_SaveBackup_m7051_MethodInfo,
	&TextEditor_Copy_m5389_MethodInfo,
	&TextEditor_ReplaceNewlinesWithSpaces_m7052_MethodInfo,
	&TextEditor_Paste_m5386_MethodInfo,
	&TextEditor_ClampPos_m7053_MethodInfo,
	NULL
};
static const Il2CppType* TextEditor_t964_il2cpp_TypeInfo__nestedTypes[2] =
{
	&DblClickSnapping_t1254_0_0_0,
	&TextEditOp_t1255_0_0_0,
};
static const Il2CppMethodReference TextEditor_t964_VTable[] =
{
	&Object_Equals_m252_MethodInfo,
	&Object_Finalize_m230_MethodInfo,
	&Object_GetHashCode_m172_MethodInfo,
	&Object_ToString_m253_MethodInfo,
};
static bool TextEditor_t964_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType TextEditor_t964_1_0_0;
struct TextEditor_t964;
const Il2CppTypeDefinitionMetadata TextEditor_t964_DefinitionMetadata = 
{
	NULL/* declaringType */
	, TextEditor_t964_il2cpp_TypeInfo__nestedTypes/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, TextEditor_t964_VTable/* vtableMethods */
	, TextEditor_t964_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 1271/* fieldStart */

};
TypeInfo TextEditor_t964_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "TextEditor"/* name */
	, "UnityEngine"/* namespaze */
	, TextEditor_t964_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &TextEditor_t964_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &TextEditor_t964_0_0_0/* byval_arg */
	, &TextEditor_t964_1_0_0/* this_arg */
	, &TextEditor_t964_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (TextEditor_t964)/* instance_size */
	, sizeof (TextEditor_t964)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, sizeof(TextEditor_t964_StaticFields)/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048577/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 14/* method_count */
	, 0/* property_count */
	, 24/* field_count */
	, 0/* event_count */
	, 2/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// UnityEngine.TextGenerationSettings
#include "UnityEngine_UnityEngine_TextGenerationSettings.h"
// Metadata Definition UnityEngine.TextGenerationSettings
extern TypeInfo TextGenerationSettings_t936_il2cpp_TypeInfo;
// UnityEngine.TextGenerationSettings
#include "UnityEngine_UnityEngine_TextGenerationSettingsMethodDeclarations.h"
extern const Il2CppType Color_t283_0_0_0;
extern const Il2CppType Color_t283_0_0_0;
extern const Il2CppType Color_t283_0_0_0;
static const ParameterInfo TextGenerationSettings_t936_TextGenerationSettings_CompareColors_m7054_ParameterInfos[] = 
{
	{"left", 0, 134219821, 0, &Color_t283_0_0_0},
	{"right", 1, 134219822, 0, &Color_t283_0_0_0},
};
extern void* RuntimeInvoker_Boolean_t29_Color_t283_Color_t283 (const MethodInfo* method, void* obj, void** args);
// System.Boolean UnityEngine.TextGenerationSettings::CompareColors(UnityEngine.Color,UnityEngine.Color)
extern const MethodInfo TextGenerationSettings_CompareColors_m7054_MethodInfo = 
{
	"CompareColors"/* name */
	, (methodPointerType)&TextGenerationSettings_CompareColors_m7054/* method */
	, &TextGenerationSettings_t936_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t29_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t29_Color_t283_Color_t283/* invoker_method */
	, TextGenerationSettings_t936_TextGenerationSettings_CompareColors_m7054_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1875/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Vector2_t68_0_0_0;
extern const Il2CppType Vector2_t68_0_0_0;
extern const Il2CppType Vector2_t68_0_0_0;
static const ParameterInfo TextGenerationSettings_t936_TextGenerationSettings_CompareVector2_m7055_ParameterInfos[] = 
{
	{"left", 0, 134219823, 0, &Vector2_t68_0_0_0},
	{"right", 1, 134219824, 0, &Vector2_t68_0_0_0},
};
extern void* RuntimeInvoker_Boolean_t29_Vector2_t68_Vector2_t68 (const MethodInfo* method, void* obj, void** args);
// System.Boolean UnityEngine.TextGenerationSettings::CompareVector2(UnityEngine.Vector2,UnityEngine.Vector2)
extern const MethodInfo TextGenerationSettings_CompareVector2_m7055_MethodInfo = 
{
	"CompareVector2"/* name */
	, (methodPointerType)&TextGenerationSettings_CompareVector2_m7055/* method */
	, &TextGenerationSettings_t936_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t29_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t29_Vector2_t68_Vector2_t68/* invoker_method */
	, TextGenerationSettings_t936_TextGenerationSettings_CompareVector2_m7055_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1876/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType TextGenerationSettings_t936_0_0_0;
extern const Il2CppType TextGenerationSettings_t936_0_0_0;
static const ParameterInfo TextGenerationSettings_t936_TextGenerationSettings_Equals_m7056_ParameterInfos[] = 
{
	{"other", 0, 134219825, 0, &TextGenerationSettings_t936_0_0_0},
};
extern void* RuntimeInvoker_Boolean_t29_TextGenerationSettings_t936 (const MethodInfo* method, void* obj, void** args);
// System.Boolean UnityEngine.TextGenerationSettings::Equals(UnityEngine.TextGenerationSettings)
extern const MethodInfo TextGenerationSettings_Equals_m7056_MethodInfo = 
{
	"Equals"/* name */
	, (methodPointerType)&TextGenerationSettings_Equals_m7056/* method */
	, &TextGenerationSettings_t936_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t29_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t29_TextGenerationSettings_t936/* invoker_method */
	, TextGenerationSettings_t936_TextGenerationSettings_Equals_m7056_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1877/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* TextGenerationSettings_t936_MethodInfos[] =
{
	&TextGenerationSettings_CompareColors_m7054_MethodInfo,
	&TextGenerationSettings_CompareVector2_m7055_MethodInfo,
	&TextGenerationSettings_Equals_m7056_MethodInfo,
	NULL
};
static const Il2CppMethodReference TextGenerationSettings_t936_VTable[] =
{
	&ValueType_Equals_m5702_MethodInfo,
	&Object_Finalize_m230_MethodInfo,
	&ValueType_GetHashCode_m5703_MethodInfo,
	&ValueType_ToString_m5706_MethodInfo,
};
static bool TextGenerationSettings_t936_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType TextGenerationSettings_t936_1_0_0;
const Il2CppTypeDefinitionMetadata TextGenerationSettings_t936_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &ValueType_t1025_0_0_0/* parent */
	, TextGenerationSettings_t936_VTable/* vtableMethods */
	, TextGenerationSettings_t936_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 1295/* fieldStart */

};
TypeInfo TextGenerationSettings_t936_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "TextGenerationSettings"/* name */
	, "UnityEngine"/* namespaze */
	, TextGenerationSettings_t936_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &TextGenerationSettings_t936_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &TextGenerationSettings_t936_0_0_0/* byval_arg */
	, &TextGenerationSettings_t936_1_0_0/* this_arg */
	, &TextGenerationSettings_t936_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (TextGenerationSettings_t936)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (TextGenerationSettings_t936)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048841/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, true/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 3/* method_count */
	, 0/* property_count */
	, 17/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// UnityEngine.TrackedReference
#include "UnityEngine_UnityEngine_TrackedReference.h"
// Metadata Definition UnityEngine.TrackedReference
extern TypeInfo TrackedReference_t1154_il2cpp_TypeInfo;
// UnityEngine.TrackedReference
#include "UnityEngine_UnityEngine_TrackedReferenceMethodDeclarations.h"
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo TrackedReference_t1154_TrackedReference_Equals_m7057_ParameterInfos[] = 
{
	{"o", 0, 134219826, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Boolean_t29_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Boolean UnityEngine.TrackedReference::Equals(System.Object)
extern const MethodInfo TrackedReference_Equals_m7057_MethodInfo = 
{
	"Equals"/* name */
	, (methodPointerType)&TrackedReference_Equals_m7057/* method */
	, &TrackedReference_t1154_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t29_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t29_Object_t/* invoker_method */
	, TrackedReference_t1154_TrackedReference_Equals_m7057_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1878/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Int32_t50 (const MethodInfo* method, void* obj, void** args);
// System.Int32 UnityEngine.TrackedReference::GetHashCode()
extern const MethodInfo TrackedReference_GetHashCode_m7058_MethodInfo = 
{
	"GetHashCode"/* name */
	, (methodPointerType)&TrackedReference_GetHashCode_m7058/* method */
	, &TrackedReference_t1154_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t50_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t50/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1879/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType TrackedReference_t1154_0_0_0;
extern const Il2CppType TrackedReference_t1154_0_0_0;
extern const Il2CppType TrackedReference_t1154_0_0_0;
static const ParameterInfo TrackedReference_t1154_TrackedReference_op_Equality_m7059_ParameterInfos[] = 
{
	{"x", 0, 134219827, 0, &TrackedReference_t1154_0_0_0},
	{"y", 1, 134219828, 0, &TrackedReference_t1154_0_0_0},
};
extern void* RuntimeInvoker_Boolean_t29_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Boolean UnityEngine.TrackedReference::op_Equality(UnityEngine.TrackedReference,UnityEngine.TrackedReference)
extern const MethodInfo TrackedReference_op_Equality_m7059_MethodInfo = 
{
	"op_Equality"/* name */
	, (methodPointerType)&TrackedReference_op_Equality_m7059/* method */
	, &TrackedReference_t1154_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t29_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t29_Object_t_Object_t/* invoker_method */
	, TrackedReference_t1154_TrackedReference_op_Equality_m7059_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 2198/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1880/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* TrackedReference_t1154_MethodInfos[] =
{
	&TrackedReference_Equals_m7057_MethodInfo,
	&TrackedReference_GetHashCode_m7058_MethodInfo,
	&TrackedReference_op_Equality_m7059_MethodInfo,
	NULL
};
extern const MethodInfo TrackedReference_Equals_m7057_MethodInfo;
extern const MethodInfo TrackedReference_GetHashCode_m7058_MethodInfo;
static const Il2CppMethodReference TrackedReference_t1154_VTable[] =
{
	&TrackedReference_Equals_m7057_MethodInfo,
	&Object_Finalize_m230_MethodInfo,
	&TrackedReference_GetHashCode_m7058_MethodInfo,
	&Object_ToString_m253_MethodInfo,
};
static bool TrackedReference_t1154_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType TrackedReference_t1154_1_0_0;
struct TrackedReference_t1154;
const Il2CppTypeDefinitionMetadata TrackedReference_t1154_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, TrackedReference_t1154_VTable/* vtableMethods */
	, TrackedReference_t1154_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 1312/* fieldStart */

};
TypeInfo TrackedReference_t1154_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "TrackedReference"/* name */
	, "UnityEngine"/* namespaze */
	, TrackedReference_t1154_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &TrackedReference_t1154_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &TrackedReference_t1154_0_0_0/* byval_arg */
	, &TrackedReference_t1154_1_0_0/* this_arg */
	, &TrackedReference_t1154_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)TrackedReference_t1154_marshal/* marshal_to_native_func */
	, (methodPointerType)TrackedReference_t1154_marshal_back/* marshal_from_native_func */
	, (methodPointerType)TrackedReference_t1154_marshal_cleanup/* marshal_cleanup_func */
	, sizeof (TrackedReference_t1154)/* instance_size */
	, sizeof (TrackedReference_t1154)/* actualSize */
	, 0/* element_size */
	, sizeof(TrackedReference_t1154_marshaled)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048585/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 3/* method_count */
	, 0/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// UnityEngine.Events.PersistentListenerMode
#include "UnityEngine_UnityEngine_Events_PersistentListenerMode.h"
// Metadata Definition UnityEngine.Events.PersistentListenerMode
extern TypeInfo PersistentListenerMode_t1257_il2cpp_TypeInfo;
// UnityEngine.Events.PersistentListenerMode
#include "UnityEngine_UnityEngine_Events_PersistentListenerModeMethodDeclarations.h"
static const MethodInfo* PersistentListenerMode_t1257_MethodInfos[] =
{
	NULL
};
static const Il2CppMethodReference PersistentListenerMode_t1257_VTable[] =
{
	&Enum_Equals_m229_MethodInfo,
	&Object_Finalize_m230_MethodInfo,
	&Enum_GetHashCode_m231_MethodInfo,
	&Enum_ToString_m232_MethodInfo,
	&Enum_ToString_m233_MethodInfo,
	&Enum_System_IConvertible_ToBoolean_m234_MethodInfo,
	&Enum_System_IConvertible_ToByte_m235_MethodInfo,
	&Enum_System_IConvertible_ToChar_m236_MethodInfo,
	&Enum_System_IConvertible_ToDateTime_m237_MethodInfo,
	&Enum_System_IConvertible_ToDecimal_m238_MethodInfo,
	&Enum_System_IConvertible_ToDouble_m239_MethodInfo,
	&Enum_System_IConvertible_ToInt16_m240_MethodInfo,
	&Enum_System_IConvertible_ToInt32_m241_MethodInfo,
	&Enum_System_IConvertible_ToInt64_m242_MethodInfo,
	&Enum_System_IConvertible_ToSByte_m243_MethodInfo,
	&Enum_System_IConvertible_ToSingle_m244_MethodInfo,
	&Enum_ToString_m245_MethodInfo,
	&Enum_System_IConvertible_ToType_m246_MethodInfo,
	&Enum_System_IConvertible_ToUInt16_m247_MethodInfo,
	&Enum_System_IConvertible_ToUInt32_m248_MethodInfo,
	&Enum_System_IConvertible_ToUInt64_m249_MethodInfo,
	&Enum_CompareTo_m250_MethodInfo,
	&Enum_GetTypeCode_m251_MethodInfo,
};
static bool PersistentListenerMode_t1257_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair PersistentListenerMode_t1257_InterfacesOffsets[] = 
{
	{ &IFormattable_t53_0_0_0, 4},
	{ &IConvertible_t54_0_0_0, 5},
	{ &IComparable_t55_0_0_0, 21},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType PersistentListenerMode_t1257_0_0_0;
extern const Il2CppType PersistentListenerMode_t1257_1_0_0;
const Il2CppTypeDefinitionMetadata PersistentListenerMode_t1257_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, PersistentListenerMode_t1257_InterfacesOffsets/* interfaceOffsets */
	, &Enum_t56_0_0_0/* parent */
	, PersistentListenerMode_t1257_VTable/* vtableMethods */
	, PersistentListenerMode_t1257_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 1313/* fieldStart */

};
TypeInfo PersistentListenerMode_t1257_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "PersistentListenerMode"/* name */
	, "UnityEngine.Events"/* namespaze */
	, PersistentListenerMode_t1257_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &Int32_t50_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &PersistentListenerMode_t1257_0_0_0/* byval_arg */
	, &PersistentListenerMode_t1257_1_0_0/* this_arg */
	, &PersistentListenerMode_t1257_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (PersistentListenerMode_t1257)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (PersistentListenerMode_t1257)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(int32_t)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 8449/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, true/* valuetype */
	, false/* initialized */
	, true/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 0/* method_count */
	, 0/* property_count */
	, 8/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 23/* vtable_count */
	, 0/* interfaces_count */
	, 3/* interface_offsets_count */

};
// UnityEngine.Events.ArgumentCache
#include "UnityEngine_UnityEngine_Events_ArgumentCache.h"
// Metadata Definition UnityEngine.Events.ArgumentCache
extern TypeInfo ArgumentCache_t1258_il2cpp_TypeInfo;
// UnityEngine.Events.ArgumentCache
#include "UnityEngine_UnityEngine_Events_ArgumentCacheMethodDeclarations.h"
extern void* RuntimeInvoker_Void_t57 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.ArgumentCache::.ctor()
extern const MethodInfo ArgumentCache__ctor_m7060_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&ArgumentCache__ctor_m7060/* method */
	, &ArgumentCache_t1258_il2cpp_TypeInfo/* declaring_type */
	, &Void_t57_0_0_0/* return_type */
	, RuntimeInvoker_Void_t57/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1881/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t598_0_0_0;
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// UnityEngine.Object UnityEngine.Events.ArgumentCache::get_unityObjectArgument()
extern const MethodInfo ArgumentCache_get_unityObjectArgument_m7061_MethodInfo = 
{
	"get_unityObjectArgument"/* name */
	, (methodPointerType)&ArgumentCache_get_unityObjectArgument_m7061/* method */
	, &ArgumentCache_t1258_il2cpp_TypeInfo/* declaring_type */
	, &Object_t598_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1882/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String UnityEngine.Events.ArgumentCache::get_unityObjectArgumentAssemblyTypeName()
extern const MethodInfo ArgumentCache_get_unityObjectArgumentAssemblyTypeName_m7062_MethodInfo = 
{
	"get_unityObjectArgumentAssemblyTypeName"/* name */
	, (methodPointerType)&ArgumentCache_get_unityObjectArgumentAssemblyTypeName_m7062/* method */
	, &ArgumentCache_t1258_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1883/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Int32_t50 (const MethodInfo* method, void* obj, void** args);
// System.Int32 UnityEngine.Events.ArgumentCache::get_intArgument()
extern const MethodInfo ArgumentCache_get_intArgument_m7063_MethodInfo = 
{
	"get_intArgument"/* name */
	, (methodPointerType)&ArgumentCache_get_intArgument_m7063/* method */
	, &ArgumentCache_t1258_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t50_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t50/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1884/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Single_t59 (const MethodInfo* method, void* obj, void** args);
// System.Single UnityEngine.Events.ArgumentCache::get_floatArgument()
extern const MethodInfo ArgumentCache_get_floatArgument_m7064_MethodInfo = 
{
	"get_floatArgument"/* name */
	, (methodPointerType)&ArgumentCache_get_floatArgument_m7064/* method */
	, &ArgumentCache_t1258_il2cpp_TypeInfo/* declaring_type */
	, &Single_t59_0_0_0/* return_type */
	, RuntimeInvoker_Single_t59/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1885/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String UnityEngine.Events.ArgumentCache::get_stringArgument()
extern const MethodInfo ArgumentCache_get_stringArgument_m7065_MethodInfo = 
{
	"get_stringArgument"/* name */
	, (methodPointerType)&ArgumentCache_get_stringArgument_m7065/* method */
	, &ArgumentCache_t1258_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1886/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Boolean_t29 (const MethodInfo* method, void* obj, void** args);
// System.Boolean UnityEngine.Events.ArgumentCache::get_boolArgument()
extern const MethodInfo ArgumentCache_get_boolArgument_m7066_MethodInfo = 
{
	"get_boolArgument"/* name */
	, (methodPointerType)&ArgumentCache_get_boolArgument_m7066/* method */
	, &ArgumentCache_t1258_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t29_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t29/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1887/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Void_t57 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.ArgumentCache::TidyAssemblyTypeName()
extern const MethodInfo ArgumentCache_TidyAssemblyTypeName_m7067_MethodInfo = 
{
	"TidyAssemblyTypeName"/* name */
	, (methodPointerType)&ArgumentCache_TidyAssemblyTypeName_m7067/* method */
	, &ArgumentCache_t1258_il2cpp_TypeInfo/* declaring_type */
	, &Void_t57_0_0_0/* return_type */
	, RuntimeInvoker_Void_t57/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1888/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Void_t57 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.ArgumentCache::OnBeforeSerialize()
extern const MethodInfo ArgumentCache_OnBeforeSerialize_m7068_MethodInfo = 
{
	"OnBeforeSerialize"/* name */
	, (methodPointerType)&ArgumentCache_OnBeforeSerialize_m7068/* method */
	, &ArgumentCache_t1258_il2cpp_TypeInfo/* declaring_type */
	, &Void_t57_0_0_0/* return_type */
	, RuntimeInvoker_Void_t57/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1889/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Void_t57 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.ArgumentCache::OnAfterDeserialize()
extern const MethodInfo ArgumentCache_OnAfterDeserialize_m7069_MethodInfo = 
{
	"OnAfterDeserialize"/* name */
	, (methodPointerType)&ArgumentCache_OnAfterDeserialize_m7069/* method */
	, &ArgumentCache_t1258_il2cpp_TypeInfo/* declaring_type */
	, &Void_t57_0_0_0/* return_type */
	, RuntimeInvoker_Void_t57/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1890/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* ArgumentCache_t1258_MethodInfos[] =
{
	&ArgumentCache__ctor_m7060_MethodInfo,
	&ArgumentCache_get_unityObjectArgument_m7061_MethodInfo,
	&ArgumentCache_get_unityObjectArgumentAssemblyTypeName_m7062_MethodInfo,
	&ArgumentCache_get_intArgument_m7063_MethodInfo,
	&ArgumentCache_get_floatArgument_m7064_MethodInfo,
	&ArgumentCache_get_stringArgument_m7065_MethodInfo,
	&ArgumentCache_get_boolArgument_m7066_MethodInfo,
	&ArgumentCache_TidyAssemblyTypeName_m7067_MethodInfo,
	&ArgumentCache_OnBeforeSerialize_m7068_MethodInfo,
	&ArgumentCache_OnAfterDeserialize_m7069_MethodInfo,
	NULL
};
extern const MethodInfo ArgumentCache_get_unityObjectArgument_m7061_MethodInfo;
static const PropertyInfo ArgumentCache_t1258____unityObjectArgument_PropertyInfo = 
{
	&ArgumentCache_t1258_il2cpp_TypeInfo/* parent */
	, "unityObjectArgument"/* name */
	, &ArgumentCache_get_unityObjectArgument_m7061_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo ArgumentCache_get_unityObjectArgumentAssemblyTypeName_m7062_MethodInfo;
static const PropertyInfo ArgumentCache_t1258____unityObjectArgumentAssemblyTypeName_PropertyInfo = 
{
	&ArgumentCache_t1258_il2cpp_TypeInfo/* parent */
	, "unityObjectArgumentAssemblyTypeName"/* name */
	, &ArgumentCache_get_unityObjectArgumentAssemblyTypeName_m7062_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo ArgumentCache_get_intArgument_m7063_MethodInfo;
static const PropertyInfo ArgumentCache_t1258____intArgument_PropertyInfo = 
{
	&ArgumentCache_t1258_il2cpp_TypeInfo/* parent */
	, "intArgument"/* name */
	, &ArgumentCache_get_intArgument_m7063_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo ArgumentCache_get_floatArgument_m7064_MethodInfo;
static const PropertyInfo ArgumentCache_t1258____floatArgument_PropertyInfo = 
{
	&ArgumentCache_t1258_il2cpp_TypeInfo/* parent */
	, "floatArgument"/* name */
	, &ArgumentCache_get_floatArgument_m7064_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo ArgumentCache_get_stringArgument_m7065_MethodInfo;
static const PropertyInfo ArgumentCache_t1258____stringArgument_PropertyInfo = 
{
	&ArgumentCache_t1258_il2cpp_TypeInfo/* parent */
	, "stringArgument"/* name */
	, &ArgumentCache_get_stringArgument_m7065_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo ArgumentCache_get_boolArgument_m7066_MethodInfo;
static const PropertyInfo ArgumentCache_t1258____boolArgument_PropertyInfo = 
{
	&ArgumentCache_t1258_il2cpp_TypeInfo/* parent */
	, "boolArgument"/* name */
	, &ArgumentCache_get_boolArgument_m7066_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
static const PropertyInfo* ArgumentCache_t1258_PropertyInfos[] =
{
	&ArgumentCache_t1258____unityObjectArgument_PropertyInfo,
	&ArgumentCache_t1258____unityObjectArgumentAssemblyTypeName_PropertyInfo,
	&ArgumentCache_t1258____intArgument_PropertyInfo,
	&ArgumentCache_t1258____floatArgument_PropertyInfo,
	&ArgumentCache_t1258____stringArgument_PropertyInfo,
	&ArgumentCache_t1258____boolArgument_PropertyInfo,
	NULL
};
extern const MethodInfo ArgumentCache_OnBeforeSerialize_m7068_MethodInfo;
extern const MethodInfo ArgumentCache_OnAfterDeserialize_m7069_MethodInfo;
static const Il2CppMethodReference ArgumentCache_t1258_VTable[] =
{
	&Object_Equals_m252_MethodInfo,
	&Object_Finalize_m230_MethodInfo,
	&Object_GetHashCode_m172_MethodInfo,
	&Object_ToString_m253_MethodInfo,
	&ArgumentCache_OnBeforeSerialize_m7068_MethodInfo,
	&ArgumentCache_OnAfterDeserialize_m7069_MethodInfo,
};
static bool ArgumentCache_t1258_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
};
extern const Il2CppType ISerializationCallbackReceiver_t1013_0_0_0;
static const Il2CppType* ArgumentCache_t1258_InterfacesTypeInfos[] = 
{
	&ISerializationCallbackReceiver_t1013_0_0_0,
};
static Il2CppInterfaceOffsetPair ArgumentCache_t1258_InterfacesOffsets[] = 
{
	{ &ISerializationCallbackReceiver_t1013_0_0_0, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType ArgumentCache_t1258_0_0_0;
extern const Il2CppType ArgumentCache_t1258_1_0_0;
struct ArgumentCache_t1258;
const Il2CppTypeDefinitionMetadata ArgumentCache_t1258_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, ArgumentCache_t1258_InterfacesTypeInfos/* implementedInterfaces */
	, ArgumentCache_t1258_InterfacesOffsets/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, ArgumentCache_t1258_VTable/* vtableMethods */
	, ArgumentCache_t1258_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 1321/* fieldStart */

};
TypeInfo ArgumentCache_t1258_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "ArgumentCache"/* name */
	, "UnityEngine.Events"/* namespaze */
	, ArgumentCache_t1258_MethodInfos/* methods */
	, ArgumentCache_t1258_PropertyInfos/* properties */
	, NULL/* events */
	, &ArgumentCache_t1258_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &ArgumentCache_t1258_0_0_0/* byval_arg */
	, &ArgumentCache_t1258_1_0_0/* this_arg */
	, &ArgumentCache_t1258_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (ArgumentCache_t1258)/* instance_size */
	, sizeof (ArgumentCache_t1258)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1056768/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 10/* method_count */
	, 6/* property_count */
	, 6/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 6/* vtable_count */
	, 1/* interfaces_count */
	, 1/* interface_offsets_count */

};
// UnityEngine.Events.BaseInvokableCall
#include "UnityEngine_UnityEngine_Events_BaseInvokableCall.h"
// Metadata Definition UnityEngine.Events.BaseInvokableCall
extern TypeInfo BaseInvokableCall_t1259_il2cpp_TypeInfo;
// UnityEngine.Events.BaseInvokableCall
#include "UnityEngine_UnityEngine_Events_BaseInvokableCallMethodDeclarations.h"
extern void* RuntimeInvoker_Void_t57 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.BaseInvokableCall::.ctor()
extern const MethodInfo BaseInvokableCall__ctor_m7070_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&BaseInvokableCall__ctor_m7070/* method */
	, &BaseInvokableCall_t1259_il2cpp_TypeInfo/* declaring_type */
	, &Void_t57_0_0_0/* return_type */
	, RuntimeInvoker_Void_t57/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 6276/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1891/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType MethodInfo_t_0_0_0;
static const ParameterInfo BaseInvokableCall_t1259_BaseInvokableCall__ctor_m7071_ParameterInfos[] = 
{
	{"target", 0, 134219829, 0, &Object_t_0_0_0},
	{"function", 1, 134219830, 0, &MethodInfo_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t57_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.BaseInvokableCall::.ctor(System.Object,System.Reflection.MethodInfo)
extern const MethodInfo BaseInvokableCall__ctor_m7071_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&BaseInvokableCall__ctor_m7071/* method */
	, &BaseInvokableCall_t1259_il2cpp_TypeInfo/* declaring_type */
	, &Void_t57_0_0_0/* return_type */
	, RuntimeInvoker_Void_t57_Object_t_Object_t/* invoker_method */
	, BaseInvokableCall_t1259_BaseInvokableCall__ctor_m7071_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6276/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1892/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType ObjectU5BU5D_t580_0_0_0;
static const ParameterInfo BaseInvokableCall_t1259_BaseInvokableCall_Invoke_m7326_ParameterInfos[] = 
{
	{"args", 0, 134219831, 0, &ObjectU5BU5D_t580_0_0_0},
};
extern void* RuntimeInvoker_Void_t57_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.BaseInvokableCall::Invoke(System.Object[])
extern const MethodInfo BaseInvokableCall_Invoke_m7326_MethodInfo = 
{
	"Invoke"/* name */
	, NULL/* method */
	, &BaseInvokableCall_t1259_il2cpp_TypeInfo/* declaring_type */
	, &Void_t57_0_0_0/* return_type */
	, RuntimeInvoker_Void_t57_Object_t/* invoker_method */
	, BaseInvokableCall_t1259_BaseInvokableCall_Invoke_m7326_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1893/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo BaseInvokableCall_t1259_BaseInvokableCall_ThrowOnInvalidArg_m7327_ParameterInfos[] = 
{
	{"arg", 0, 134219832, 0, &Object_t_0_0_0},
};
extern const Il2CppGenericContainer BaseInvokableCall_ThrowOnInvalidArg_m7327_Il2CppGenericContainer;
extern TypeInfo BaseInvokableCall_ThrowOnInvalidArg_m7327_gp_T_0_il2cpp_TypeInfo;
extern const Il2CppGenericParameter BaseInvokableCall_ThrowOnInvalidArg_m7327_gp_T_0_il2cpp_TypeInfo_GenericParamFull = { &BaseInvokableCall_ThrowOnInvalidArg_m7327_Il2CppGenericContainer, NULL, "T", 0, 0 };
static const Il2CppGenericParameter* BaseInvokableCall_ThrowOnInvalidArg_m7327_Il2CppGenericParametersArray[1] = 
{
	&BaseInvokableCall_ThrowOnInvalidArg_m7327_gp_T_0_il2cpp_TypeInfo_GenericParamFull,
};
extern const MethodInfo BaseInvokableCall_ThrowOnInvalidArg_m7327_MethodInfo;
extern const Il2CppGenericContainer BaseInvokableCall_ThrowOnInvalidArg_m7327_Il2CppGenericContainer = { { NULL, NULL }, NULL, (void*)&BaseInvokableCall_ThrowOnInvalidArg_m7327_MethodInfo, 1, 1, BaseInvokableCall_ThrowOnInvalidArg_m7327_Il2CppGenericParametersArray };
extern const Il2CppType BaseInvokableCall_ThrowOnInvalidArg_m7327_gp_0_0_0_0;
static Il2CppRGCTXDefinition BaseInvokableCall_ThrowOnInvalidArg_m7327_RGCTXData[3] = 
{
	{ IL2CPP_RGCTX_DATA_CLASS, (void*)&BaseInvokableCall_ThrowOnInvalidArg_m7327_gp_0_0_0_0 }/* Class */,
	{ IL2CPP_RGCTX_DATA_TYPE, (void*)&BaseInvokableCall_ThrowOnInvalidArg_m7327_gp_0_0_0_0 }/* Type */,
	{IL2CPP_RGCTX_DATA_INVALID, NULL},
};
// System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg(System.Object)
extern const MethodInfo BaseInvokableCall_ThrowOnInvalidArg_m7327_MethodInfo = 
{
	"ThrowOnInvalidArg"/* name */
	, NULL/* method */
	, &BaseInvokableCall_t1259_il2cpp_TypeInfo/* declaring_type */
	, &Void_t57_0_0_0/* return_type */
	, NULL/* invoker_method */
	, BaseInvokableCall_t1259_BaseInvokableCall_ThrowOnInvalidArg_m7327_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 148/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, true/* is_generic */
	, false/* is_inflated */
	, 1894/* token */
	, BaseInvokableCall_ThrowOnInvalidArg_m7327_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &BaseInvokableCall_ThrowOnInvalidArg_m7327_Il2CppGenericContainer/* genericContainer */

};
extern const Il2CppType Delegate_t620_0_0_0;
extern const Il2CppType Delegate_t620_0_0_0;
static const ParameterInfo BaseInvokableCall_t1259_BaseInvokableCall_AllowInvoke_m7072_ParameterInfos[] = 
{
	{"delegate", 0, 134219833, 0, &Delegate_t620_0_0_0},
};
extern void* RuntimeInvoker_Boolean_t29_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Boolean UnityEngine.Events.BaseInvokableCall::AllowInvoke(System.Delegate)
extern const MethodInfo BaseInvokableCall_AllowInvoke_m7072_MethodInfo = 
{
	"AllowInvoke"/* name */
	, (methodPointerType)&BaseInvokableCall_AllowInvoke_m7072/* method */
	, &BaseInvokableCall_t1259_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t29_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t29_Object_t/* invoker_method */
	, BaseInvokableCall_t1259_BaseInvokableCall_AllowInvoke_m7072_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 148/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1895/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType MethodInfo_t_0_0_0;
static const ParameterInfo BaseInvokableCall_t1259_BaseInvokableCall_Find_m7328_ParameterInfos[] = 
{
	{"targetObj", 0, 134219834, 0, &Object_t_0_0_0},
	{"method", 1, 134219835, 0, &MethodInfo_t_0_0_0},
};
extern void* RuntimeInvoker_Boolean_t29_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Boolean UnityEngine.Events.BaseInvokableCall::Find(System.Object,System.Reflection.MethodInfo)
extern const MethodInfo BaseInvokableCall_Find_m7328_MethodInfo = 
{
	"Find"/* name */
	, NULL/* method */
	, &BaseInvokableCall_t1259_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t29_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t29_Object_t_Object_t/* invoker_method */
	, BaseInvokableCall_t1259_BaseInvokableCall_Find_m7328_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1896/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* BaseInvokableCall_t1259_MethodInfos[] =
{
	&BaseInvokableCall__ctor_m7070_MethodInfo,
	&BaseInvokableCall__ctor_m7071_MethodInfo,
	&BaseInvokableCall_Invoke_m7326_MethodInfo,
	&BaseInvokableCall_ThrowOnInvalidArg_m7327_MethodInfo,
	&BaseInvokableCall_AllowInvoke_m7072_MethodInfo,
	&BaseInvokableCall_Find_m7328_MethodInfo,
	NULL
};
static const Il2CppMethodReference BaseInvokableCall_t1259_VTable[] =
{
	&Object_Equals_m252_MethodInfo,
	&Object_Finalize_m230_MethodInfo,
	&Object_GetHashCode_m172_MethodInfo,
	&Object_ToString_m253_MethodInfo,
	NULL,
	NULL,
};
static bool BaseInvokableCall_t1259_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType BaseInvokableCall_t1259_0_0_0;
extern const Il2CppType BaseInvokableCall_t1259_1_0_0;
struct BaseInvokableCall_t1259;
const Il2CppTypeDefinitionMetadata BaseInvokableCall_t1259_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, BaseInvokableCall_t1259_VTable/* vtableMethods */
	, BaseInvokableCall_t1259_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo BaseInvokableCall_t1259_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "BaseInvokableCall"/* name */
	, "UnityEngine.Events"/* namespaze */
	, BaseInvokableCall_t1259_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &BaseInvokableCall_t1259_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &BaseInvokableCall_t1259_0_0_0/* byval_arg */
	, &BaseInvokableCall_t1259_1_0_0/* this_arg */
	, &BaseInvokableCall_t1259_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (BaseInvokableCall_t1259)/* instance_size */
	, sizeof (BaseInvokableCall_t1259)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048704/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 6/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 6/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// UnityEngine.Events.InvokableCall
#include "UnityEngine_UnityEngine_Events_InvokableCall.h"
// Metadata Definition UnityEngine.Events.InvokableCall
extern TypeInfo InvokableCall_t1260_il2cpp_TypeInfo;
// UnityEngine.Events.InvokableCall
#include "UnityEngine_UnityEngine_Events_InvokableCallMethodDeclarations.h"
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType MethodInfo_t_0_0_0;
static const ParameterInfo InvokableCall_t1260_InvokableCall__ctor_m7073_ParameterInfos[] = 
{
	{"target", 0, 134219836, 0, &Object_t_0_0_0},
	{"theFunction", 1, 134219837, 0, &MethodInfo_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t57_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.InvokableCall::.ctor(System.Object,System.Reflection.MethodInfo)
extern const MethodInfo InvokableCall__ctor_m7073_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InvokableCall__ctor_m7073/* method */
	, &InvokableCall_t1260_il2cpp_TypeInfo/* declaring_type */
	, &Void_t57_0_0_0/* return_type */
	, RuntimeInvoker_Void_t57_Object_t_Object_t/* invoker_method */
	, InvokableCall_t1260_InvokableCall__ctor_m7073_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1897/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType UnityAction_t456_0_0_0;
extern const Il2CppType UnityAction_t456_0_0_0;
static const ParameterInfo InvokableCall_t1260_InvokableCall__ctor_m7074_ParameterInfos[] = 
{
	{"action", 0, 134219838, 0, &UnityAction_t456_0_0_0},
};
extern void* RuntimeInvoker_Void_t57_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.InvokableCall::.ctor(UnityEngine.Events.UnityAction)
extern const MethodInfo InvokableCall__ctor_m7074_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InvokableCall__ctor_m7074/* method */
	, &InvokableCall_t1260_il2cpp_TypeInfo/* declaring_type */
	, &Void_t57_0_0_0/* return_type */
	, RuntimeInvoker_Void_t57_Object_t/* invoker_method */
	, InvokableCall_t1260_InvokableCall__ctor_m7074_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1898/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType ObjectU5BU5D_t580_0_0_0;
static const ParameterInfo InvokableCall_t1260_InvokableCall_Invoke_m7075_ParameterInfos[] = 
{
	{"args", 0, 134219839, 0, &ObjectU5BU5D_t580_0_0_0},
};
extern void* RuntimeInvoker_Void_t57_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.InvokableCall::Invoke(System.Object[])
extern const MethodInfo InvokableCall_Invoke_m7075_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&InvokableCall_Invoke_m7075/* method */
	, &InvokableCall_t1260_il2cpp_TypeInfo/* declaring_type */
	, &Void_t57_0_0_0/* return_type */
	, RuntimeInvoker_Void_t57_Object_t/* invoker_method */
	, InvokableCall_t1260_InvokableCall_Invoke_m7075_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1899/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType MethodInfo_t_0_0_0;
static const ParameterInfo InvokableCall_t1260_InvokableCall_Find_m7076_ParameterInfos[] = 
{
	{"targetObj", 0, 134219840, 0, &Object_t_0_0_0},
	{"method", 1, 134219841, 0, &MethodInfo_t_0_0_0},
};
extern void* RuntimeInvoker_Boolean_t29_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Boolean UnityEngine.Events.InvokableCall::Find(System.Object,System.Reflection.MethodInfo)
extern const MethodInfo InvokableCall_Find_m7076_MethodInfo = 
{
	"Find"/* name */
	, (methodPointerType)&InvokableCall_Find_m7076/* method */
	, &InvokableCall_t1260_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t29_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t29_Object_t_Object_t/* invoker_method */
	, InvokableCall_t1260_InvokableCall_Find_m7076_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1900/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* InvokableCall_t1260_MethodInfos[] =
{
	&InvokableCall__ctor_m7073_MethodInfo,
	&InvokableCall__ctor_m7074_MethodInfo,
	&InvokableCall_Invoke_m7075_MethodInfo,
	&InvokableCall_Find_m7076_MethodInfo,
	NULL
};
extern const MethodInfo InvokableCall_Invoke_m7075_MethodInfo;
extern const MethodInfo InvokableCall_Find_m7076_MethodInfo;
static const Il2CppMethodReference InvokableCall_t1260_VTable[] =
{
	&Object_Equals_m252_MethodInfo,
	&Object_Finalize_m230_MethodInfo,
	&Object_GetHashCode_m172_MethodInfo,
	&Object_ToString_m253_MethodInfo,
	&InvokableCall_Invoke_m7075_MethodInfo,
	&InvokableCall_Find_m7076_MethodInfo,
};
static bool InvokableCall_t1260_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType InvokableCall_t1260_0_0_0;
extern const Il2CppType InvokableCall_t1260_1_0_0;
struct InvokableCall_t1260;
const Il2CppTypeDefinitionMetadata InvokableCall_t1260_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &BaseInvokableCall_t1259_0_0_0/* parent */
	, InvokableCall_t1260_VTable/* vtableMethods */
	, InvokableCall_t1260_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 1327/* fieldStart */

};
TypeInfo InvokableCall_t1260_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "InvokableCall"/* name */
	, "UnityEngine.Events"/* namespaze */
	, InvokableCall_t1260_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &InvokableCall_t1260_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &InvokableCall_t1260_0_0_0/* byval_arg */
	, &InvokableCall_t1260_1_0_0/* this_arg */
	, &InvokableCall_t1260_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InvokableCall_t1260)/* instance_size */
	, sizeof (InvokableCall_t1260)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 4/* method_count */
	, 0/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 6/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// Metadata Definition UnityEngine.Events.InvokableCall`1
extern TypeInfo InvokableCall_1_t1364_il2cpp_TypeInfo;
extern const Il2CppGenericContainer InvokableCall_1_t1364_Il2CppGenericContainer;
extern TypeInfo InvokableCall_1_t1364_gp_T1_0_il2cpp_TypeInfo;
extern const Il2CppGenericParameter InvokableCall_1_t1364_gp_T1_0_il2cpp_TypeInfo_GenericParamFull = { &InvokableCall_1_t1364_Il2CppGenericContainer, NULL, "T1", 0, 0 };
static const Il2CppGenericParameter* InvokableCall_1_t1364_Il2CppGenericParametersArray[1] = 
{
	&InvokableCall_1_t1364_gp_T1_0_il2cpp_TypeInfo_GenericParamFull,
};
extern const Il2CppGenericContainer InvokableCall_1_t1364_Il2CppGenericContainer = { { NULL, NULL }, NULL, (void*)&InvokableCall_1_t1364_il2cpp_TypeInfo, 1, 0, InvokableCall_1_t1364_Il2CppGenericParametersArray };
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType MethodInfo_t_0_0_0;
static const ParameterInfo InvokableCall_1_t1364_InvokableCall_1__ctor_m7329_ParameterInfos[] = 
{
	{"target", 0, 134219842, 0, &Object_t_0_0_0},
	{"theFunction", 1, 134219843, 0, &MethodInfo_t_0_0_0},
};
// System.Void UnityEngine.Events.InvokableCall`1::.ctor(System.Object,System.Reflection.MethodInfo)
extern const MethodInfo InvokableCall_1__ctor_m7329_MethodInfo = 
{
	".ctor"/* name */
	, NULL/* method */
	, &InvokableCall_1_t1364_il2cpp_TypeInfo/* declaring_type */
	, &Void_t57_0_0_0/* return_type */
	, NULL/* invoker_method */
	, InvokableCall_1_t1364_InvokableCall_1__ctor_m7329_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1901/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType UnityAction_1_t1441_0_0_0;
extern const Il2CppType UnityAction_1_t1441_0_0_0;
static const ParameterInfo InvokableCall_1_t1364_InvokableCall_1__ctor_m7330_ParameterInfos[] = 
{
	{"callback", 0, 134219844, 0, &UnityAction_1_t1441_0_0_0},
};
// System.Void UnityEngine.Events.InvokableCall`1::.ctor(UnityEngine.Events.UnityAction`1<T1>)
extern const MethodInfo InvokableCall_1__ctor_m7330_MethodInfo = 
{
	".ctor"/* name */
	, NULL/* method */
	, &InvokableCall_1_t1364_il2cpp_TypeInfo/* declaring_type */
	, &Void_t57_0_0_0/* return_type */
	, NULL/* invoker_method */
	, InvokableCall_1_t1364_InvokableCall_1__ctor_m7330_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1902/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType ObjectU5BU5D_t580_0_0_0;
static const ParameterInfo InvokableCall_1_t1364_InvokableCall_1_Invoke_m7331_ParameterInfos[] = 
{
	{"args", 0, 134219845, 0, &ObjectU5BU5D_t580_0_0_0},
};
// System.Void UnityEngine.Events.InvokableCall`1::Invoke(System.Object[])
extern const MethodInfo InvokableCall_1_Invoke_m7331_MethodInfo = 
{
	"Invoke"/* name */
	, NULL/* method */
	, &InvokableCall_1_t1364_il2cpp_TypeInfo/* declaring_type */
	, &Void_t57_0_0_0/* return_type */
	, NULL/* invoker_method */
	, InvokableCall_1_t1364_InvokableCall_1_Invoke_m7331_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1903/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType MethodInfo_t_0_0_0;
static const ParameterInfo InvokableCall_1_t1364_InvokableCall_1_Find_m7332_ParameterInfos[] = 
{
	{"targetObj", 0, 134219846, 0, &Object_t_0_0_0},
	{"method", 1, 134219847, 0, &MethodInfo_t_0_0_0},
};
// System.Boolean UnityEngine.Events.InvokableCall`1::Find(System.Object,System.Reflection.MethodInfo)
extern const MethodInfo InvokableCall_1_Find_m7332_MethodInfo = 
{
	"Find"/* name */
	, NULL/* method */
	, &InvokableCall_1_t1364_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t29_0_0_0/* return_type */
	, NULL/* invoker_method */
	, InvokableCall_1_t1364_InvokableCall_1_Find_m7332_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1904/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* InvokableCall_1_t1364_MethodInfos[] =
{
	&InvokableCall_1__ctor_m7329_MethodInfo,
	&InvokableCall_1__ctor_m7330_MethodInfo,
	&InvokableCall_1_Invoke_m7331_MethodInfo,
	&InvokableCall_1_Find_m7332_MethodInfo,
	NULL
};
extern const MethodInfo InvokableCall_1_Invoke_m7331_MethodInfo;
extern const MethodInfo InvokableCall_1_Find_m7332_MethodInfo;
static const Il2CppMethodReference InvokableCall_1_t1364_VTable[] =
{
	&Object_Equals_m252_MethodInfo,
	&Object_Finalize_m230_MethodInfo,
	&Object_GetHashCode_m172_MethodInfo,
	&Object_ToString_m253_MethodInfo,
	&InvokableCall_1_Invoke_m7331_MethodInfo,
	&InvokableCall_1_Find_m7332_MethodInfo,
};
static bool InvokableCall_1_t1364_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
};
extern const Il2CppGenericMethod BaseInvokableCall_ThrowOnInvalidArg_TisT1_t1440_m7432_GenericMethod;
extern const Il2CppType InvokableCall_1_t1364_gp_0_0_0_0;
extern const Il2CppGenericMethod UnityAction_1_Invoke_m7433_GenericMethod;
static Il2CppRGCTXDefinition InvokableCall_1_t1364_RGCTXData[6] = 
{
	{ IL2CPP_RGCTX_DATA_TYPE, (void*)&UnityAction_1_t1441_0_0_0 }/* Type */,
	{ IL2CPP_RGCTX_DATA_CLASS, (void*)&UnityAction_1_t1441_0_0_0 }/* Class */,
	{ IL2CPP_RGCTX_DATA_METHOD, &BaseInvokableCall_ThrowOnInvalidArg_TisT1_t1440_m7432_GenericMethod }/* Method */,
	{ IL2CPP_RGCTX_DATA_CLASS, (void*)&InvokableCall_1_t1364_gp_0_0_0_0 }/* Class */,
	{ IL2CPP_RGCTX_DATA_METHOD, &UnityAction_1_Invoke_m7433_GenericMethod }/* Method */,
	{IL2CPP_RGCTX_DATA_INVALID, NULL},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType InvokableCall_1_t1364_0_0_0;
extern const Il2CppType InvokableCall_1_t1364_1_0_0;
struct InvokableCall_1_t1364;
const Il2CppTypeDefinitionMetadata InvokableCall_1_t1364_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &BaseInvokableCall_t1259_0_0_0/* parent */
	, InvokableCall_1_t1364_VTable/* vtableMethods */
	, InvokableCall_1_t1364_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, InvokableCall_1_t1364_RGCTXData/* rgctxDefinition */
	, 1328/* fieldStart */

};
TypeInfo InvokableCall_1_t1364_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "InvokableCall`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, InvokableCall_1_t1364_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &InvokableCall_1_t1364_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &InvokableCall_1_t1364_0_0_0/* byval_arg */
	, &InvokableCall_1_t1364_1_0_0/* this_arg */
	, &InvokableCall_1_t1364_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, &InvokableCall_1_t1364_Il2CppGenericContainer/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* actualSize */
	, 0/* element_size */
	, 0/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 4/* method_count */
	, 0/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 6/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// Metadata Definition UnityEngine.Events.InvokableCall`2
extern TypeInfo InvokableCall_2_t1365_il2cpp_TypeInfo;
extern const Il2CppGenericContainer InvokableCall_2_t1365_Il2CppGenericContainer;
extern TypeInfo InvokableCall_2_t1365_gp_T1_0_il2cpp_TypeInfo;
extern const Il2CppGenericParameter InvokableCall_2_t1365_gp_T1_0_il2cpp_TypeInfo_GenericParamFull = { &InvokableCall_2_t1365_Il2CppGenericContainer, NULL, "T1", 0, 0 };
extern TypeInfo InvokableCall_2_t1365_gp_T2_1_il2cpp_TypeInfo;
extern const Il2CppGenericParameter InvokableCall_2_t1365_gp_T2_1_il2cpp_TypeInfo_GenericParamFull = { &InvokableCall_2_t1365_Il2CppGenericContainer, NULL, "T2", 1, 0 };
static const Il2CppGenericParameter* InvokableCall_2_t1365_Il2CppGenericParametersArray[2] = 
{
	&InvokableCall_2_t1365_gp_T1_0_il2cpp_TypeInfo_GenericParamFull,
	&InvokableCall_2_t1365_gp_T2_1_il2cpp_TypeInfo_GenericParamFull,
};
extern const Il2CppGenericContainer InvokableCall_2_t1365_Il2CppGenericContainer = { { NULL, NULL }, NULL, (void*)&InvokableCall_2_t1365_il2cpp_TypeInfo, 2, 0, InvokableCall_2_t1365_Il2CppGenericParametersArray };
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType MethodInfo_t_0_0_0;
static const ParameterInfo InvokableCall_2_t1365_InvokableCall_2__ctor_m7333_ParameterInfos[] = 
{
	{"target", 0, 134219848, 0, &Object_t_0_0_0},
	{"theFunction", 1, 134219849, 0, &MethodInfo_t_0_0_0},
};
// System.Void UnityEngine.Events.InvokableCall`2::.ctor(System.Object,System.Reflection.MethodInfo)
extern const MethodInfo InvokableCall_2__ctor_m7333_MethodInfo = 
{
	".ctor"/* name */
	, NULL/* method */
	, &InvokableCall_2_t1365_il2cpp_TypeInfo/* declaring_type */
	, &Void_t57_0_0_0/* return_type */
	, NULL/* invoker_method */
	, InvokableCall_2_t1365_InvokableCall_2__ctor_m7333_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1905/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType ObjectU5BU5D_t580_0_0_0;
static const ParameterInfo InvokableCall_2_t1365_InvokableCall_2_Invoke_m7334_ParameterInfos[] = 
{
	{"args", 0, 134219850, 0, &ObjectU5BU5D_t580_0_0_0},
};
// System.Void UnityEngine.Events.InvokableCall`2::Invoke(System.Object[])
extern const MethodInfo InvokableCall_2_Invoke_m7334_MethodInfo = 
{
	"Invoke"/* name */
	, NULL/* method */
	, &InvokableCall_2_t1365_il2cpp_TypeInfo/* declaring_type */
	, &Void_t57_0_0_0/* return_type */
	, NULL/* invoker_method */
	, InvokableCall_2_t1365_InvokableCall_2_Invoke_m7334_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1906/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType MethodInfo_t_0_0_0;
static const ParameterInfo InvokableCall_2_t1365_InvokableCall_2_Find_m7335_ParameterInfos[] = 
{
	{"targetObj", 0, 134219851, 0, &Object_t_0_0_0},
	{"method", 1, 134219852, 0, &MethodInfo_t_0_0_0},
};
// System.Boolean UnityEngine.Events.InvokableCall`2::Find(System.Object,System.Reflection.MethodInfo)
extern const MethodInfo InvokableCall_2_Find_m7335_MethodInfo = 
{
	"Find"/* name */
	, NULL/* method */
	, &InvokableCall_2_t1365_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t29_0_0_0/* return_type */
	, NULL/* invoker_method */
	, InvokableCall_2_t1365_InvokableCall_2_Find_m7335_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1907/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* InvokableCall_2_t1365_MethodInfos[] =
{
	&InvokableCall_2__ctor_m7333_MethodInfo,
	&InvokableCall_2_Invoke_m7334_MethodInfo,
	&InvokableCall_2_Find_m7335_MethodInfo,
	NULL
};
extern const MethodInfo InvokableCall_2_Invoke_m7334_MethodInfo;
extern const MethodInfo InvokableCall_2_Find_m7335_MethodInfo;
static const Il2CppMethodReference InvokableCall_2_t1365_VTable[] =
{
	&Object_Equals_m252_MethodInfo,
	&Object_Finalize_m230_MethodInfo,
	&Object_GetHashCode_m172_MethodInfo,
	&Object_ToString_m253_MethodInfo,
	&InvokableCall_2_Invoke_m7334_MethodInfo,
	&InvokableCall_2_Find_m7335_MethodInfo,
};
static bool InvokableCall_2_t1365_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
};
extern const Il2CppType UnityAction_2_t1444_0_0_0;
extern const Il2CppGenericMethod BaseInvokableCall_ThrowOnInvalidArg_TisT1_t1442_m7434_GenericMethod;
extern const Il2CppGenericMethod BaseInvokableCall_ThrowOnInvalidArg_TisT2_t1443_m7435_GenericMethod;
extern const Il2CppType InvokableCall_2_t1365_gp_0_0_0_0;
extern const Il2CppType InvokableCall_2_t1365_gp_1_0_0_0;
extern const Il2CppGenericMethod UnityAction_2_Invoke_m7436_GenericMethod;
static Il2CppRGCTXDefinition InvokableCall_2_t1365_RGCTXData[8] = 
{
	{ IL2CPP_RGCTX_DATA_TYPE, (void*)&UnityAction_2_t1444_0_0_0 }/* Type */,
	{ IL2CPP_RGCTX_DATA_CLASS, (void*)&UnityAction_2_t1444_0_0_0 }/* Class */,
	{ IL2CPP_RGCTX_DATA_METHOD, &BaseInvokableCall_ThrowOnInvalidArg_TisT1_t1442_m7434_GenericMethod }/* Method */,
	{ IL2CPP_RGCTX_DATA_METHOD, &BaseInvokableCall_ThrowOnInvalidArg_TisT2_t1443_m7435_GenericMethod }/* Method */,
	{ IL2CPP_RGCTX_DATA_CLASS, (void*)&InvokableCall_2_t1365_gp_0_0_0_0 }/* Class */,
	{ IL2CPP_RGCTX_DATA_CLASS, (void*)&InvokableCall_2_t1365_gp_1_0_0_0 }/* Class */,
	{ IL2CPP_RGCTX_DATA_METHOD, &UnityAction_2_Invoke_m7436_GenericMethod }/* Method */,
	{IL2CPP_RGCTX_DATA_INVALID, NULL},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType InvokableCall_2_t1365_0_0_0;
extern const Il2CppType InvokableCall_2_t1365_1_0_0;
struct InvokableCall_2_t1365;
const Il2CppTypeDefinitionMetadata InvokableCall_2_t1365_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &BaseInvokableCall_t1259_0_0_0/* parent */
	, InvokableCall_2_t1365_VTable/* vtableMethods */
	, InvokableCall_2_t1365_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, InvokableCall_2_t1365_RGCTXData/* rgctxDefinition */
	, 1329/* fieldStart */

};
TypeInfo InvokableCall_2_t1365_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "InvokableCall`2"/* name */
	, "UnityEngine.Events"/* namespaze */
	, InvokableCall_2_t1365_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &InvokableCall_2_t1365_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &InvokableCall_2_t1365_0_0_0/* byval_arg */
	, &InvokableCall_2_t1365_1_0_0/* this_arg */
	, &InvokableCall_2_t1365_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, &InvokableCall_2_t1365_Il2CppGenericContainer/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* actualSize */
	, 0/* element_size */
	, 0/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 3/* method_count */
	, 0/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 6/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// Metadata Definition UnityEngine.Events.InvokableCall`3
extern TypeInfo InvokableCall_3_t1366_il2cpp_TypeInfo;
extern const Il2CppGenericContainer InvokableCall_3_t1366_Il2CppGenericContainer;
extern TypeInfo InvokableCall_3_t1366_gp_T1_0_il2cpp_TypeInfo;
extern const Il2CppGenericParameter InvokableCall_3_t1366_gp_T1_0_il2cpp_TypeInfo_GenericParamFull = { &InvokableCall_3_t1366_Il2CppGenericContainer, NULL, "T1", 0, 0 };
extern TypeInfo InvokableCall_3_t1366_gp_T2_1_il2cpp_TypeInfo;
extern const Il2CppGenericParameter InvokableCall_3_t1366_gp_T2_1_il2cpp_TypeInfo_GenericParamFull = { &InvokableCall_3_t1366_Il2CppGenericContainer, NULL, "T2", 1, 0 };
extern TypeInfo InvokableCall_3_t1366_gp_T3_2_il2cpp_TypeInfo;
extern const Il2CppGenericParameter InvokableCall_3_t1366_gp_T3_2_il2cpp_TypeInfo_GenericParamFull = { &InvokableCall_3_t1366_Il2CppGenericContainer, NULL, "T3", 2, 0 };
static const Il2CppGenericParameter* InvokableCall_3_t1366_Il2CppGenericParametersArray[3] = 
{
	&InvokableCall_3_t1366_gp_T1_0_il2cpp_TypeInfo_GenericParamFull,
	&InvokableCall_3_t1366_gp_T2_1_il2cpp_TypeInfo_GenericParamFull,
	&InvokableCall_3_t1366_gp_T3_2_il2cpp_TypeInfo_GenericParamFull,
};
extern const Il2CppGenericContainer InvokableCall_3_t1366_Il2CppGenericContainer = { { NULL, NULL }, NULL, (void*)&InvokableCall_3_t1366_il2cpp_TypeInfo, 3, 0, InvokableCall_3_t1366_Il2CppGenericParametersArray };
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType MethodInfo_t_0_0_0;
static const ParameterInfo InvokableCall_3_t1366_InvokableCall_3__ctor_m7336_ParameterInfos[] = 
{
	{"target", 0, 134219853, 0, &Object_t_0_0_0},
	{"theFunction", 1, 134219854, 0, &MethodInfo_t_0_0_0},
};
// System.Void UnityEngine.Events.InvokableCall`3::.ctor(System.Object,System.Reflection.MethodInfo)
extern const MethodInfo InvokableCall_3__ctor_m7336_MethodInfo = 
{
	".ctor"/* name */
	, NULL/* method */
	, &InvokableCall_3_t1366_il2cpp_TypeInfo/* declaring_type */
	, &Void_t57_0_0_0/* return_type */
	, NULL/* invoker_method */
	, InvokableCall_3_t1366_InvokableCall_3__ctor_m7336_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1908/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType ObjectU5BU5D_t580_0_0_0;
static const ParameterInfo InvokableCall_3_t1366_InvokableCall_3_Invoke_m7337_ParameterInfos[] = 
{
	{"args", 0, 134219855, 0, &ObjectU5BU5D_t580_0_0_0},
};
// System.Void UnityEngine.Events.InvokableCall`3::Invoke(System.Object[])
extern const MethodInfo InvokableCall_3_Invoke_m7337_MethodInfo = 
{
	"Invoke"/* name */
	, NULL/* method */
	, &InvokableCall_3_t1366_il2cpp_TypeInfo/* declaring_type */
	, &Void_t57_0_0_0/* return_type */
	, NULL/* invoker_method */
	, InvokableCall_3_t1366_InvokableCall_3_Invoke_m7337_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1909/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType MethodInfo_t_0_0_0;
static const ParameterInfo InvokableCall_3_t1366_InvokableCall_3_Find_m7338_ParameterInfos[] = 
{
	{"targetObj", 0, 134219856, 0, &Object_t_0_0_0},
	{"method", 1, 134219857, 0, &MethodInfo_t_0_0_0},
};
// System.Boolean UnityEngine.Events.InvokableCall`3::Find(System.Object,System.Reflection.MethodInfo)
extern const MethodInfo InvokableCall_3_Find_m7338_MethodInfo = 
{
	"Find"/* name */
	, NULL/* method */
	, &InvokableCall_3_t1366_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t29_0_0_0/* return_type */
	, NULL/* invoker_method */
	, InvokableCall_3_t1366_InvokableCall_3_Find_m7338_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1910/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* InvokableCall_3_t1366_MethodInfos[] =
{
	&InvokableCall_3__ctor_m7336_MethodInfo,
	&InvokableCall_3_Invoke_m7337_MethodInfo,
	&InvokableCall_3_Find_m7338_MethodInfo,
	NULL
};
extern const MethodInfo InvokableCall_3_Invoke_m7337_MethodInfo;
extern const MethodInfo InvokableCall_3_Find_m7338_MethodInfo;
static const Il2CppMethodReference InvokableCall_3_t1366_VTable[] =
{
	&Object_Equals_m252_MethodInfo,
	&Object_Finalize_m230_MethodInfo,
	&Object_GetHashCode_m172_MethodInfo,
	&Object_ToString_m253_MethodInfo,
	&InvokableCall_3_Invoke_m7337_MethodInfo,
	&InvokableCall_3_Find_m7338_MethodInfo,
};
static bool InvokableCall_3_t1366_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
};
extern const Il2CppType UnityAction_3_t1448_0_0_0;
extern const Il2CppGenericMethod BaseInvokableCall_ThrowOnInvalidArg_TisT1_t1445_m7437_GenericMethod;
extern const Il2CppGenericMethod BaseInvokableCall_ThrowOnInvalidArg_TisT2_t1446_m7438_GenericMethod;
extern const Il2CppGenericMethod BaseInvokableCall_ThrowOnInvalidArg_TisT3_t1447_m7439_GenericMethod;
extern const Il2CppType InvokableCall_3_t1366_gp_0_0_0_0;
extern const Il2CppType InvokableCall_3_t1366_gp_1_0_0_0;
extern const Il2CppType InvokableCall_3_t1366_gp_2_0_0_0;
extern const Il2CppGenericMethod UnityAction_3_Invoke_m7440_GenericMethod;
static Il2CppRGCTXDefinition InvokableCall_3_t1366_RGCTXData[10] = 
{
	{ IL2CPP_RGCTX_DATA_TYPE, (void*)&UnityAction_3_t1448_0_0_0 }/* Type */,
	{ IL2CPP_RGCTX_DATA_CLASS, (void*)&UnityAction_3_t1448_0_0_0 }/* Class */,
	{ IL2CPP_RGCTX_DATA_METHOD, &BaseInvokableCall_ThrowOnInvalidArg_TisT1_t1445_m7437_GenericMethod }/* Method */,
	{ IL2CPP_RGCTX_DATA_METHOD, &BaseInvokableCall_ThrowOnInvalidArg_TisT2_t1446_m7438_GenericMethod }/* Method */,
	{ IL2CPP_RGCTX_DATA_METHOD, &BaseInvokableCall_ThrowOnInvalidArg_TisT3_t1447_m7439_GenericMethod }/* Method */,
	{ IL2CPP_RGCTX_DATA_CLASS, (void*)&InvokableCall_3_t1366_gp_0_0_0_0 }/* Class */,
	{ IL2CPP_RGCTX_DATA_CLASS, (void*)&InvokableCall_3_t1366_gp_1_0_0_0 }/* Class */,
	{ IL2CPP_RGCTX_DATA_CLASS, (void*)&InvokableCall_3_t1366_gp_2_0_0_0 }/* Class */,
	{ IL2CPP_RGCTX_DATA_METHOD, &UnityAction_3_Invoke_m7440_GenericMethod }/* Method */,
	{IL2CPP_RGCTX_DATA_INVALID, NULL},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType InvokableCall_3_t1366_0_0_0;
extern const Il2CppType InvokableCall_3_t1366_1_0_0;
struct InvokableCall_3_t1366;
const Il2CppTypeDefinitionMetadata InvokableCall_3_t1366_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &BaseInvokableCall_t1259_0_0_0/* parent */
	, InvokableCall_3_t1366_VTable/* vtableMethods */
	, InvokableCall_3_t1366_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, InvokableCall_3_t1366_RGCTXData/* rgctxDefinition */
	, 1330/* fieldStart */

};
TypeInfo InvokableCall_3_t1366_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "InvokableCall`3"/* name */
	, "UnityEngine.Events"/* namespaze */
	, InvokableCall_3_t1366_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &InvokableCall_3_t1366_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &InvokableCall_3_t1366_0_0_0/* byval_arg */
	, &InvokableCall_3_t1366_1_0_0/* this_arg */
	, &InvokableCall_3_t1366_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, &InvokableCall_3_t1366_Il2CppGenericContainer/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* actualSize */
	, 0/* element_size */
	, 0/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 3/* method_count */
	, 0/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 6/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// Metadata Definition UnityEngine.Events.InvokableCall`4
extern TypeInfo InvokableCall_4_t1367_il2cpp_TypeInfo;
extern const Il2CppGenericContainer InvokableCall_4_t1367_Il2CppGenericContainer;
extern TypeInfo InvokableCall_4_t1367_gp_T1_0_il2cpp_TypeInfo;
extern const Il2CppGenericParameter InvokableCall_4_t1367_gp_T1_0_il2cpp_TypeInfo_GenericParamFull = { &InvokableCall_4_t1367_Il2CppGenericContainer, NULL, "T1", 0, 0 };
extern TypeInfo InvokableCall_4_t1367_gp_T2_1_il2cpp_TypeInfo;
extern const Il2CppGenericParameter InvokableCall_4_t1367_gp_T2_1_il2cpp_TypeInfo_GenericParamFull = { &InvokableCall_4_t1367_Il2CppGenericContainer, NULL, "T2", 1, 0 };
extern TypeInfo InvokableCall_4_t1367_gp_T3_2_il2cpp_TypeInfo;
extern const Il2CppGenericParameter InvokableCall_4_t1367_gp_T3_2_il2cpp_TypeInfo_GenericParamFull = { &InvokableCall_4_t1367_Il2CppGenericContainer, NULL, "T3", 2, 0 };
extern TypeInfo InvokableCall_4_t1367_gp_T4_3_il2cpp_TypeInfo;
extern const Il2CppGenericParameter InvokableCall_4_t1367_gp_T4_3_il2cpp_TypeInfo_GenericParamFull = { &InvokableCall_4_t1367_Il2CppGenericContainer, NULL, "T4", 3, 0 };
static const Il2CppGenericParameter* InvokableCall_4_t1367_Il2CppGenericParametersArray[4] = 
{
	&InvokableCall_4_t1367_gp_T1_0_il2cpp_TypeInfo_GenericParamFull,
	&InvokableCall_4_t1367_gp_T2_1_il2cpp_TypeInfo_GenericParamFull,
	&InvokableCall_4_t1367_gp_T3_2_il2cpp_TypeInfo_GenericParamFull,
	&InvokableCall_4_t1367_gp_T4_3_il2cpp_TypeInfo_GenericParamFull,
};
extern const Il2CppGenericContainer InvokableCall_4_t1367_Il2CppGenericContainer = { { NULL, NULL }, NULL, (void*)&InvokableCall_4_t1367_il2cpp_TypeInfo, 4, 0, InvokableCall_4_t1367_Il2CppGenericParametersArray };
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType MethodInfo_t_0_0_0;
static const ParameterInfo InvokableCall_4_t1367_InvokableCall_4__ctor_m7339_ParameterInfos[] = 
{
	{"target", 0, 134219858, 0, &Object_t_0_0_0},
	{"theFunction", 1, 134219859, 0, &MethodInfo_t_0_0_0},
};
// System.Void UnityEngine.Events.InvokableCall`4::.ctor(System.Object,System.Reflection.MethodInfo)
extern const MethodInfo InvokableCall_4__ctor_m7339_MethodInfo = 
{
	".ctor"/* name */
	, NULL/* method */
	, &InvokableCall_4_t1367_il2cpp_TypeInfo/* declaring_type */
	, &Void_t57_0_0_0/* return_type */
	, NULL/* invoker_method */
	, InvokableCall_4_t1367_InvokableCall_4__ctor_m7339_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1911/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType ObjectU5BU5D_t580_0_0_0;
static const ParameterInfo InvokableCall_4_t1367_InvokableCall_4_Invoke_m7340_ParameterInfos[] = 
{
	{"args", 0, 134219860, 0, &ObjectU5BU5D_t580_0_0_0},
};
// System.Void UnityEngine.Events.InvokableCall`4::Invoke(System.Object[])
extern const MethodInfo InvokableCall_4_Invoke_m7340_MethodInfo = 
{
	"Invoke"/* name */
	, NULL/* method */
	, &InvokableCall_4_t1367_il2cpp_TypeInfo/* declaring_type */
	, &Void_t57_0_0_0/* return_type */
	, NULL/* invoker_method */
	, InvokableCall_4_t1367_InvokableCall_4_Invoke_m7340_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1912/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType MethodInfo_t_0_0_0;
static const ParameterInfo InvokableCall_4_t1367_InvokableCall_4_Find_m7341_ParameterInfos[] = 
{
	{"targetObj", 0, 134219861, 0, &Object_t_0_0_0},
	{"method", 1, 134219862, 0, &MethodInfo_t_0_0_0},
};
// System.Boolean UnityEngine.Events.InvokableCall`4::Find(System.Object,System.Reflection.MethodInfo)
extern const MethodInfo InvokableCall_4_Find_m7341_MethodInfo = 
{
	"Find"/* name */
	, NULL/* method */
	, &InvokableCall_4_t1367_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t29_0_0_0/* return_type */
	, NULL/* invoker_method */
	, InvokableCall_4_t1367_InvokableCall_4_Find_m7341_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1913/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* InvokableCall_4_t1367_MethodInfos[] =
{
	&InvokableCall_4__ctor_m7339_MethodInfo,
	&InvokableCall_4_Invoke_m7340_MethodInfo,
	&InvokableCall_4_Find_m7341_MethodInfo,
	NULL
};
extern const MethodInfo InvokableCall_4_Invoke_m7340_MethodInfo;
extern const MethodInfo InvokableCall_4_Find_m7341_MethodInfo;
static const Il2CppMethodReference InvokableCall_4_t1367_VTable[] =
{
	&Object_Equals_m252_MethodInfo,
	&Object_Finalize_m230_MethodInfo,
	&Object_GetHashCode_m172_MethodInfo,
	&Object_ToString_m253_MethodInfo,
	&InvokableCall_4_Invoke_m7340_MethodInfo,
	&InvokableCall_4_Find_m7341_MethodInfo,
};
static bool InvokableCall_4_t1367_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
};
extern const Il2CppType UnityAction_4_t1453_0_0_0;
extern const Il2CppGenericMethod BaseInvokableCall_ThrowOnInvalidArg_TisT1_t1449_m7441_GenericMethod;
extern const Il2CppGenericMethod BaseInvokableCall_ThrowOnInvalidArg_TisT2_t1450_m7442_GenericMethod;
extern const Il2CppGenericMethod BaseInvokableCall_ThrowOnInvalidArg_TisT3_t1451_m7443_GenericMethod;
extern const Il2CppGenericMethod BaseInvokableCall_ThrowOnInvalidArg_TisT4_t1452_m7444_GenericMethod;
extern const Il2CppType InvokableCall_4_t1367_gp_0_0_0_0;
extern const Il2CppType InvokableCall_4_t1367_gp_1_0_0_0;
extern const Il2CppType InvokableCall_4_t1367_gp_2_0_0_0;
extern const Il2CppType InvokableCall_4_t1367_gp_3_0_0_0;
extern const Il2CppGenericMethod UnityAction_4_Invoke_m7445_GenericMethod;
static Il2CppRGCTXDefinition InvokableCall_4_t1367_RGCTXData[12] = 
{
	{ IL2CPP_RGCTX_DATA_TYPE, (void*)&UnityAction_4_t1453_0_0_0 }/* Type */,
	{ IL2CPP_RGCTX_DATA_CLASS, (void*)&UnityAction_4_t1453_0_0_0 }/* Class */,
	{ IL2CPP_RGCTX_DATA_METHOD, &BaseInvokableCall_ThrowOnInvalidArg_TisT1_t1449_m7441_GenericMethod }/* Method */,
	{ IL2CPP_RGCTX_DATA_METHOD, &BaseInvokableCall_ThrowOnInvalidArg_TisT2_t1450_m7442_GenericMethod }/* Method */,
	{ IL2CPP_RGCTX_DATA_METHOD, &BaseInvokableCall_ThrowOnInvalidArg_TisT3_t1451_m7443_GenericMethod }/* Method */,
	{ IL2CPP_RGCTX_DATA_METHOD, &BaseInvokableCall_ThrowOnInvalidArg_TisT4_t1452_m7444_GenericMethod }/* Method */,
	{ IL2CPP_RGCTX_DATA_CLASS, (void*)&InvokableCall_4_t1367_gp_0_0_0_0 }/* Class */,
	{ IL2CPP_RGCTX_DATA_CLASS, (void*)&InvokableCall_4_t1367_gp_1_0_0_0 }/* Class */,
	{ IL2CPP_RGCTX_DATA_CLASS, (void*)&InvokableCall_4_t1367_gp_2_0_0_0 }/* Class */,
	{ IL2CPP_RGCTX_DATA_CLASS, (void*)&InvokableCall_4_t1367_gp_3_0_0_0 }/* Class */,
	{ IL2CPP_RGCTX_DATA_METHOD, &UnityAction_4_Invoke_m7445_GenericMethod }/* Method */,
	{IL2CPP_RGCTX_DATA_INVALID, NULL},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType InvokableCall_4_t1367_0_0_0;
extern const Il2CppType InvokableCall_4_t1367_1_0_0;
struct InvokableCall_4_t1367;
const Il2CppTypeDefinitionMetadata InvokableCall_4_t1367_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &BaseInvokableCall_t1259_0_0_0/* parent */
	, InvokableCall_4_t1367_VTable/* vtableMethods */
	, InvokableCall_4_t1367_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, InvokableCall_4_t1367_RGCTXData/* rgctxDefinition */
	, 1331/* fieldStart */

};
TypeInfo InvokableCall_4_t1367_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "InvokableCall`4"/* name */
	, "UnityEngine.Events"/* namespaze */
	, InvokableCall_4_t1367_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &InvokableCall_4_t1367_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &InvokableCall_4_t1367_0_0_0/* byval_arg */
	, &InvokableCall_4_t1367_1_0_0/* this_arg */
	, &InvokableCall_4_t1367_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, &InvokableCall_4_t1367_Il2CppGenericContainer/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* actualSize */
	, 0/* element_size */
	, 0/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 3/* method_count */
	, 0/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 6/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// Metadata Definition UnityEngine.Events.CachedInvokableCall`1
extern TypeInfo CachedInvokableCall_1_t1347_il2cpp_TypeInfo;
extern const Il2CppGenericContainer CachedInvokableCall_1_t1347_Il2CppGenericContainer;
extern TypeInfo CachedInvokableCall_1_t1347_gp_T_0_il2cpp_TypeInfo;
extern const Il2CppGenericParameter CachedInvokableCall_1_t1347_gp_T_0_il2cpp_TypeInfo_GenericParamFull = { &CachedInvokableCall_1_t1347_Il2CppGenericContainer, NULL, "T", 0, 0 };
static const Il2CppGenericParameter* CachedInvokableCall_1_t1347_Il2CppGenericParametersArray[1] = 
{
	&CachedInvokableCall_1_t1347_gp_T_0_il2cpp_TypeInfo_GenericParamFull,
};
extern const Il2CppGenericContainer CachedInvokableCall_1_t1347_Il2CppGenericContainer = { { NULL, NULL }, NULL, (void*)&CachedInvokableCall_1_t1347_il2cpp_TypeInfo, 1, 0, CachedInvokableCall_1_t1347_Il2CppGenericParametersArray };
extern const Il2CppType Object_t598_0_0_0;
extern const Il2CppType MethodInfo_t_0_0_0;
extern const Il2CppType CachedInvokableCall_1_t1347_gp_0_0_0_0;
extern const Il2CppType CachedInvokableCall_1_t1347_gp_0_0_0_0;
static const ParameterInfo CachedInvokableCall_1_t1347_CachedInvokableCall_1__ctor_m7342_ParameterInfos[] = 
{
	{"target", 0, 134219863, 0, &Object_t598_0_0_0},
	{"theFunction", 1, 134219864, 0, &MethodInfo_t_0_0_0},
	{"argument", 2, 134219865, 0, &CachedInvokableCall_1_t1347_gp_0_0_0_0},
};
// System.Void UnityEngine.Events.CachedInvokableCall`1::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
extern const MethodInfo CachedInvokableCall_1__ctor_m7342_MethodInfo = 
{
	".ctor"/* name */
	, NULL/* method */
	, &CachedInvokableCall_1_t1347_il2cpp_TypeInfo/* declaring_type */
	, &Void_t57_0_0_0/* return_type */
	, NULL/* invoker_method */
	, CachedInvokableCall_1_t1347_CachedInvokableCall_1__ctor_m7342_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1914/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType ObjectU5BU5D_t580_0_0_0;
static const ParameterInfo CachedInvokableCall_1_t1347_CachedInvokableCall_1_Invoke_m7343_ParameterInfos[] = 
{
	{"args", 0, 134219866, 0, &ObjectU5BU5D_t580_0_0_0},
};
// System.Void UnityEngine.Events.CachedInvokableCall`1::Invoke(System.Object[])
extern const MethodInfo CachedInvokableCall_1_Invoke_m7343_MethodInfo = 
{
	"Invoke"/* name */
	, NULL/* method */
	, &CachedInvokableCall_1_t1347_il2cpp_TypeInfo/* declaring_type */
	, &Void_t57_0_0_0/* return_type */
	, NULL/* invoker_method */
	, CachedInvokableCall_1_t1347_CachedInvokableCall_1_Invoke_m7343_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1915/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* CachedInvokableCall_1_t1347_MethodInfos[] =
{
	&CachedInvokableCall_1__ctor_m7342_MethodInfo,
	&CachedInvokableCall_1_Invoke_m7343_MethodInfo,
	NULL
};
extern const MethodInfo CachedInvokableCall_1_Invoke_m7343_MethodInfo;
extern const Il2CppGenericMethod InvokableCall_1_Find_m7446_GenericMethod;
static const Il2CppMethodReference CachedInvokableCall_1_t1347_VTable[] =
{
	&Object_Equals_m252_MethodInfo,
	&Object_Finalize_m230_MethodInfo,
	&Object_GetHashCode_m172_MethodInfo,
	&Object_ToString_m253_MethodInfo,
	&CachedInvokableCall_1_Invoke_m7343_MethodInfo,
	&InvokableCall_1_Find_m7446_GenericMethod,
};
static bool CachedInvokableCall_1_t1347_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	true,
};
extern const Il2CppGenericMethod InvokableCall_1__ctor_m7447_GenericMethod;
extern const Il2CppGenericMethod InvokableCall_1_Invoke_m7448_GenericMethod;
static Il2CppRGCTXDefinition CachedInvokableCall_1_t1347_RGCTXData[4] = 
{
	{ IL2CPP_RGCTX_DATA_METHOD, &InvokableCall_1__ctor_m7447_GenericMethod }/* Method */,
	{ IL2CPP_RGCTX_DATA_CLASS, (void*)&CachedInvokableCall_1_t1347_gp_0_0_0_0 }/* Class */,
	{ IL2CPP_RGCTX_DATA_METHOD, &InvokableCall_1_Invoke_m7448_GenericMethod }/* Method */,
	{IL2CPP_RGCTX_DATA_INVALID, NULL},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType CachedInvokableCall_1_t1347_0_0_0;
extern const Il2CppType CachedInvokableCall_1_t1347_1_0_0;
extern const Il2CppType InvokableCall_1_t1455_0_0_0;
struct CachedInvokableCall_1_t1347;
const Il2CppTypeDefinitionMetadata CachedInvokableCall_1_t1347_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &InvokableCall_1_t1455_0_0_0/* parent */
	, CachedInvokableCall_1_t1347_VTable/* vtableMethods */
	, CachedInvokableCall_1_t1347_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, CachedInvokableCall_1_t1347_RGCTXData/* rgctxDefinition */
	, 1332/* fieldStart */

};
TypeInfo CachedInvokableCall_1_t1347_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "CachedInvokableCall`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, CachedInvokableCall_1_t1347_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &CachedInvokableCall_1_t1347_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &CachedInvokableCall_1_t1347_0_0_0/* byval_arg */
	, &CachedInvokableCall_1_t1347_1_0_0/* this_arg */
	, &CachedInvokableCall_1_t1347_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, &CachedInvokableCall_1_t1347_Il2CppGenericContainer/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* actualSize */
	, 0/* element_size */
	, 0/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 2/* method_count */
	, 0/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 6/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// UnityEngine.Events.UnityEventCallState
#include "UnityEngine_UnityEngine_Events_UnityEventCallState.h"
// Metadata Definition UnityEngine.Events.UnityEventCallState
extern TypeInfo UnityEventCallState_t1261_il2cpp_TypeInfo;
// UnityEngine.Events.UnityEventCallState
#include "UnityEngine_UnityEngine_Events_UnityEventCallStateMethodDeclarations.h"
static const MethodInfo* UnityEventCallState_t1261_MethodInfos[] =
{
	NULL
};
static const Il2CppMethodReference UnityEventCallState_t1261_VTable[] =
{
	&Enum_Equals_m229_MethodInfo,
	&Object_Finalize_m230_MethodInfo,
	&Enum_GetHashCode_m231_MethodInfo,
	&Enum_ToString_m232_MethodInfo,
	&Enum_ToString_m233_MethodInfo,
	&Enum_System_IConvertible_ToBoolean_m234_MethodInfo,
	&Enum_System_IConvertible_ToByte_m235_MethodInfo,
	&Enum_System_IConvertible_ToChar_m236_MethodInfo,
	&Enum_System_IConvertible_ToDateTime_m237_MethodInfo,
	&Enum_System_IConvertible_ToDecimal_m238_MethodInfo,
	&Enum_System_IConvertible_ToDouble_m239_MethodInfo,
	&Enum_System_IConvertible_ToInt16_m240_MethodInfo,
	&Enum_System_IConvertible_ToInt32_m241_MethodInfo,
	&Enum_System_IConvertible_ToInt64_m242_MethodInfo,
	&Enum_System_IConvertible_ToSByte_m243_MethodInfo,
	&Enum_System_IConvertible_ToSingle_m244_MethodInfo,
	&Enum_ToString_m245_MethodInfo,
	&Enum_System_IConvertible_ToType_m246_MethodInfo,
	&Enum_System_IConvertible_ToUInt16_m247_MethodInfo,
	&Enum_System_IConvertible_ToUInt32_m248_MethodInfo,
	&Enum_System_IConvertible_ToUInt64_m249_MethodInfo,
	&Enum_CompareTo_m250_MethodInfo,
	&Enum_GetTypeCode_m251_MethodInfo,
};
static bool UnityEventCallState_t1261_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair UnityEventCallState_t1261_InterfacesOffsets[] = 
{
	{ &IFormattable_t53_0_0_0, 4},
	{ &IConvertible_t54_0_0_0, 5},
	{ &IComparable_t55_0_0_0, 21},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType UnityEventCallState_t1261_0_0_0;
extern const Il2CppType UnityEventCallState_t1261_1_0_0;
const Il2CppTypeDefinitionMetadata UnityEventCallState_t1261_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, UnityEventCallState_t1261_InterfacesOffsets/* interfaceOffsets */
	, &Enum_t56_0_0_0/* parent */
	, UnityEventCallState_t1261_VTable/* vtableMethods */
	, UnityEventCallState_t1261_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 1333/* fieldStart */

};
TypeInfo UnityEventCallState_t1261_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "UnityEventCallState"/* name */
	, "UnityEngine.Events"/* namespaze */
	, UnityEventCallState_t1261_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &Int32_t50_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &UnityEventCallState_t1261_0_0_0/* byval_arg */
	, &UnityEventCallState_t1261_1_0_0/* this_arg */
	, &UnityEventCallState_t1261_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (UnityEventCallState_t1261)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (UnityEventCallState_t1261)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(int32_t)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 257/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, true/* valuetype */
	, false/* initialized */
	, true/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 0/* method_count */
	, 0/* property_count */
	, 4/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 23/* vtable_count */
	, 0/* interfaces_count */
	, 3/* interface_offsets_count */

};
// UnityEngine.Events.PersistentCall
#include "UnityEngine_UnityEngine_Events_PersistentCall.h"
// Metadata Definition UnityEngine.Events.PersistentCall
extern TypeInfo PersistentCall_t1262_il2cpp_TypeInfo;
// UnityEngine.Events.PersistentCall
#include "UnityEngine_UnityEngine_Events_PersistentCallMethodDeclarations.h"
extern void* RuntimeInvoker_Void_t57 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.PersistentCall::.ctor()
extern const MethodInfo PersistentCall__ctor_m7077_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&PersistentCall__ctor_m7077/* method */
	, &PersistentCall_t1262_il2cpp_TypeInfo/* declaring_type */
	, &Void_t57_0_0_0/* return_type */
	, RuntimeInvoker_Void_t57/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1916/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// UnityEngine.Object UnityEngine.Events.PersistentCall::get_target()
extern const MethodInfo PersistentCall_get_target_m7078_MethodInfo = 
{
	"get_target"/* name */
	, (methodPointerType)&PersistentCall_get_target_m7078/* method */
	, &PersistentCall_t1262_il2cpp_TypeInfo/* declaring_type */
	, &Object_t598_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1917/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String UnityEngine.Events.PersistentCall::get_methodName()
extern const MethodInfo PersistentCall_get_methodName_m7079_MethodInfo = 
{
	"get_methodName"/* name */
	, (methodPointerType)&PersistentCall_get_methodName_m7079/* method */
	, &PersistentCall_t1262_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1918/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_PersistentListenerMode_t1257 (const MethodInfo* method, void* obj, void** args);
// UnityEngine.Events.PersistentListenerMode UnityEngine.Events.PersistentCall::get_mode()
extern const MethodInfo PersistentCall_get_mode_m7080_MethodInfo = 
{
	"get_mode"/* name */
	, (methodPointerType)&PersistentCall_get_mode_m7080/* method */
	, &PersistentCall_t1262_il2cpp_TypeInfo/* declaring_type */
	, &PersistentListenerMode_t1257_0_0_0/* return_type */
	, RuntimeInvoker_PersistentListenerMode_t1257/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1919/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// UnityEngine.Events.ArgumentCache UnityEngine.Events.PersistentCall::get_arguments()
extern const MethodInfo PersistentCall_get_arguments_m7081_MethodInfo = 
{
	"get_arguments"/* name */
	, (methodPointerType)&PersistentCall_get_arguments_m7081/* method */
	, &PersistentCall_t1262_il2cpp_TypeInfo/* declaring_type */
	, &ArgumentCache_t1258_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1920/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Boolean_t29 (const MethodInfo* method, void* obj, void** args);
// System.Boolean UnityEngine.Events.PersistentCall::IsValid()
extern const MethodInfo PersistentCall_IsValid_m7082_MethodInfo = 
{
	"IsValid"/* name */
	, (methodPointerType)&PersistentCall_IsValid_m7082/* method */
	, &PersistentCall_t1262_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t29_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t29/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1921/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType UnityEventBase_t1267_0_0_0;
extern const Il2CppType UnityEventBase_t1267_0_0_0;
static const ParameterInfo PersistentCall_t1262_PersistentCall_GetRuntimeCall_m7083_ParameterInfos[] = 
{
	{"theEvent", 0, 134219867, 0, &UnityEventBase_t1267_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.PersistentCall::GetRuntimeCall(UnityEngine.Events.UnityEventBase)
extern const MethodInfo PersistentCall_GetRuntimeCall_m7083_MethodInfo = 
{
	"GetRuntimeCall"/* name */
	, (methodPointerType)&PersistentCall_GetRuntimeCall_m7083/* method */
	, &PersistentCall_t1262_il2cpp_TypeInfo/* declaring_type */
	, &BaseInvokableCall_t1259_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, PersistentCall_t1262_PersistentCall_GetRuntimeCall_m7083_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1922/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t598_0_0_0;
extern const Il2CppType MethodInfo_t_0_0_0;
extern const Il2CppType ArgumentCache_t1258_0_0_0;
static const ParameterInfo PersistentCall_t1262_PersistentCall_GetObjectCall_m7084_ParameterInfos[] = 
{
	{"target", 0, 134219868, 0, &Object_t598_0_0_0},
	{"method", 1, 134219869, 0, &MethodInfo_t_0_0_0},
	{"arguments", 2, 134219870, 0, &ArgumentCache_t1258_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.PersistentCall::GetObjectCall(UnityEngine.Object,System.Reflection.MethodInfo,UnityEngine.Events.ArgumentCache)
extern const MethodInfo PersistentCall_GetObjectCall_m7084_MethodInfo = 
{
	"GetObjectCall"/* name */
	, (methodPointerType)&PersistentCall_GetObjectCall_m7084/* method */
	, &PersistentCall_t1262_il2cpp_TypeInfo/* declaring_type */
	, &BaseInvokableCall_t1259_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t/* invoker_method */
	, PersistentCall_t1262_PersistentCall_GetObjectCall_m7084_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1923/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* PersistentCall_t1262_MethodInfos[] =
{
	&PersistentCall__ctor_m7077_MethodInfo,
	&PersistentCall_get_target_m7078_MethodInfo,
	&PersistentCall_get_methodName_m7079_MethodInfo,
	&PersistentCall_get_mode_m7080_MethodInfo,
	&PersistentCall_get_arguments_m7081_MethodInfo,
	&PersistentCall_IsValid_m7082_MethodInfo,
	&PersistentCall_GetRuntimeCall_m7083_MethodInfo,
	&PersistentCall_GetObjectCall_m7084_MethodInfo,
	NULL
};
extern const MethodInfo PersistentCall_get_target_m7078_MethodInfo;
static const PropertyInfo PersistentCall_t1262____target_PropertyInfo = 
{
	&PersistentCall_t1262_il2cpp_TypeInfo/* parent */
	, "target"/* name */
	, &PersistentCall_get_target_m7078_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo PersistentCall_get_methodName_m7079_MethodInfo;
static const PropertyInfo PersistentCall_t1262____methodName_PropertyInfo = 
{
	&PersistentCall_t1262_il2cpp_TypeInfo/* parent */
	, "methodName"/* name */
	, &PersistentCall_get_methodName_m7079_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo PersistentCall_get_mode_m7080_MethodInfo;
static const PropertyInfo PersistentCall_t1262____mode_PropertyInfo = 
{
	&PersistentCall_t1262_il2cpp_TypeInfo/* parent */
	, "mode"/* name */
	, &PersistentCall_get_mode_m7080_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo PersistentCall_get_arguments_m7081_MethodInfo;
static const PropertyInfo PersistentCall_t1262____arguments_PropertyInfo = 
{
	&PersistentCall_t1262_il2cpp_TypeInfo/* parent */
	, "arguments"/* name */
	, &PersistentCall_get_arguments_m7081_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
static const PropertyInfo* PersistentCall_t1262_PropertyInfos[] =
{
	&PersistentCall_t1262____target_PropertyInfo,
	&PersistentCall_t1262____methodName_PropertyInfo,
	&PersistentCall_t1262____mode_PropertyInfo,
	&PersistentCall_t1262____arguments_PropertyInfo,
	NULL
};
static const Il2CppMethodReference PersistentCall_t1262_VTable[] =
{
	&Object_Equals_m252_MethodInfo,
	&Object_Finalize_m230_MethodInfo,
	&Object_GetHashCode_m172_MethodInfo,
	&Object_ToString_m253_MethodInfo,
};
static bool PersistentCall_t1262_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType PersistentCall_t1262_0_0_0;
extern const Il2CppType PersistentCall_t1262_1_0_0;
struct PersistentCall_t1262;
const Il2CppTypeDefinitionMetadata PersistentCall_t1262_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, PersistentCall_t1262_VTable/* vtableMethods */
	, PersistentCall_t1262_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 1337/* fieldStart */

};
TypeInfo PersistentCall_t1262_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "PersistentCall"/* name */
	, "UnityEngine.Events"/* namespaze */
	, PersistentCall_t1262_MethodInfos/* methods */
	, PersistentCall_t1262_PropertyInfos/* properties */
	, NULL/* events */
	, &PersistentCall_t1262_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &PersistentCall_t1262_0_0_0/* byval_arg */
	, &PersistentCall_t1262_1_0_0/* this_arg */
	, &PersistentCall_t1262_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (PersistentCall_t1262)/* instance_size */
	, sizeof (PersistentCall_t1262)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1056768/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 8/* method_count */
	, 4/* property_count */
	, 5/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// UnityEngine.Events.PersistentCallGroup
#include "UnityEngine_UnityEngine_Events_PersistentCallGroup.h"
// Metadata Definition UnityEngine.Events.PersistentCallGroup
extern TypeInfo PersistentCallGroup_t1264_il2cpp_TypeInfo;
// UnityEngine.Events.PersistentCallGroup
#include "UnityEngine_UnityEngine_Events_PersistentCallGroupMethodDeclarations.h"
extern void* RuntimeInvoker_Void_t57 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.PersistentCallGroup::.ctor()
extern const MethodInfo PersistentCallGroup__ctor_m7085_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&PersistentCallGroup__ctor_m7085/* method */
	, &PersistentCallGroup_t1264_il2cpp_TypeInfo/* declaring_type */
	, &Void_t57_0_0_0/* return_type */
	, RuntimeInvoker_Void_t57/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1924/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType InvokableCallList_t1266_0_0_0;
extern const Il2CppType InvokableCallList_t1266_0_0_0;
extern const Il2CppType UnityEventBase_t1267_0_0_0;
static const ParameterInfo PersistentCallGroup_t1264_PersistentCallGroup_Initialize_m7086_ParameterInfos[] = 
{
	{"invokableList", 0, 134219871, 0, &InvokableCallList_t1266_0_0_0},
	{"unityEventBase", 1, 134219872, 0, &UnityEventBase_t1267_0_0_0},
};
extern void* RuntimeInvoker_Void_t57_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.PersistentCallGroup::Initialize(UnityEngine.Events.InvokableCallList,UnityEngine.Events.UnityEventBase)
extern const MethodInfo PersistentCallGroup_Initialize_m7086_MethodInfo = 
{
	"Initialize"/* name */
	, (methodPointerType)&PersistentCallGroup_Initialize_m7086/* method */
	, &PersistentCallGroup_t1264_il2cpp_TypeInfo/* declaring_type */
	, &Void_t57_0_0_0/* return_type */
	, RuntimeInvoker_Void_t57_Object_t_Object_t/* invoker_method */
	, PersistentCallGroup_t1264_PersistentCallGroup_Initialize_m7086_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1925/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* PersistentCallGroup_t1264_MethodInfos[] =
{
	&PersistentCallGroup__ctor_m7085_MethodInfo,
	&PersistentCallGroup_Initialize_m7086_MethodInfo,
	NULL
};
static const Il2CppMethodReference PersistentCallGroup_t1264_VTable[] =
{
	&Object_Equals_m252_MethodInfo,
	&Object_Finalize_m230_MethodInfo,
	&Object_GetHashCode_m172_MethodInfo,
	&Object_ToString_m253_MethodInfo,
};
static bool PersistentCallGroup_t1264_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType PersistentCallGroup_t1264_0_0_0;
extern const Il2CppType PersistentCallGroup_t1264_1_0_0;
struct PersistentCallGroup_t1264;
const Il2CppTypeDefinitionMetadata PersistentCallGroup_t1264_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, PersistentCallGroup_t1264_VTable/* vtableMethods */
	, PersistentCallGroup_t1264_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 1342/* fieldStart */

};
TypeInfo PersistentCallGroup_t1264_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "PersistentCallGroup"/* name */
	, "UnityEngine.Events"/* namespaze */
	, PersistentCallGroup_t1264_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &PersistentCallGroup_t1264_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &PersistentCallGroup_t1264_0_0_0/* byval_arg */
	, &PersistentCallGroup_t1264_1_0_0/* this_arg */
	, &PersistentCallGroup_t1264_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (PersistentCallGroup_t1264)/* instance_size */
	, sizeof (PersistentCallGroup_t1264)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1056768/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 2/* method_count */
	, 0/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// UnityEngine.Events.InvokableCallList
#include "UnityEngine_UnityEngine_Events_InvokableCallList.h"
// Metadata Definition UnityEngine.Events.InvokableCallList
extern TypeInfo InvokableCallList_t1266_il2cpp_TypeInfo;
// UnityEngine.Events.InvokableCallList
#include "UnityEngine_UnityEngine_Events_InvokableCallListMethodDeclarations.h"
extern void* RuntimeInvoker_Void_t57 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.InvokableCallList::.ctor()
extern const MethodInfo InvokableCallList__ctor_m7087_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InvokableCallList__ctor_m7087/* method */
	, &InvokableCallList_t1266_il2cpp_TypeInfo/* declaring_type */
	, &Void_t57_0_0_0/* return_type */
	, RuntimeInvoker_Void_t57/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1926/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType BaseInvokableCall_t1259_0_0_0;
static const ParameterInfo InvokableCallList_t1266_InvokableCallList_AddPersistentInvokableCall_m7088_ParameterInfos[] = 
{
	{"call", 0, 134219873, 0, &BaseInvokableCall_t1259_0_0_0},
};
extern void* RuntimeInvoker_Void_t57_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.InvokableCallList::AddPersistentInvokableCall(UnityEngine.Events.BaseInvokableCall)
extern const MethodInfo InvokableCallList_AddPersistentInvokableCall_m7088_MethodInfo = 
{
	"AddPersistentInvokableCall"/* name */
	, (methodPointerType)&InvokableCallList_AddPersistentInvokableCall_m7088/* method */
	, &InvokableCallList_t1266_il2cpp_TypeInfo/* declaring_type */
	, &Void_t57_0_0_0/* return_type */
	, RuntimeInvoker_Void_t57_Object_t/* invoker_method */
	, InvokableCallList_t1266_InvokableCallList_AddPersistentInvokableCall_m7088_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1927/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType BaseInvokableCall_t1259_0_0_0;
static const ParameterInfo InvokableCallList_t1266_InvokableCallList_AddListener_m7089_ParameterInfos[] = 
{
	{"call", 0, 134219874, 0, &BaseInvokableCall_t1259_0_0_0},
};
extern void* RuntimeInvoker_Void_t57_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.InvokableCallList::AddListener(UnityEngine.Events.BaseInvokableCall)
extern const MethodInfo InvokableCallList_AddListener_m7089_MethodInfo = 
{
	"AddListener"/* name */
	, (methodPointerType)&InvokableCallList_AddListener_m7089/* method */
	, &InvokableCallList_t1266_il2cpp_TypeInfo/* declaring_type */
	, &Void_t57_0_0_0/* return_type */
	, RuntimeInvoker_Void_t57_Object_t/* invoker_method */
	, InvokableCallList_t1266_InvokableCallList_AddListener_m7089_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1928/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType MethodInfo_t_0_0_0;
static const ParameterInfo InvokableCallList_t1266_InvokableCallList_RemoveListener_m7090_ParameterInfos[] = 
{
	{"targetObj", 0, 134219875, 0, &Object_t_0_0_0},
	{"method", 1, 134219876, 0, &MethodInfo_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t57_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.InvokableCallList::RemoveListener(System.Object,System.Reflection.MethodInfo)
extern const MethodInfo InvokableCallList_RemoveListener_m7090_MethodInfo = 
{
	"RemoveListener"/* name */
	, (methodPointerType)&InvokableCallList_RemoveListener_m7090/* method */
	, &InvokableCallList_t1266_il2cpp_TypeInfo/* declaring_type */
	, &Void_t57_0_0_0/* return_type */
	, RuntimeInvoker_Void_t57_Object_t_Object_t/* invoker_method */
	, InvokableCallList_t1266_InvokableCallList_RemoveListener_m7090_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1929/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Void_t57 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.InvokableCallList::ClearPersistent()
extern const MethodInfo InvokableCallList_ClearPersistent_m7091_MethodInfo = 
{
	"ClearPersistent"/* name */
	, (methodPointerType)&InvokableCallList_ClearPersistent_m7091/* method */
	, &InvokableCallList_t1266_il2cpp_TypeInfo/* declaring_type */
	, &Void_t57_0_0_0/* return_type */
	, RuntimeInvoker_Void_t57/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1930/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType ObjectU5BU5D_t580_0_0_0;
static const ParameterInfo InvokableCallList_t1266_InvokableCallList_Invoke_m7092_ParameterInfos[] = 
{
	{"parameters", 0, 134219877, 0, &ObjectU5BU5D_t580_0_0_0},
};
extern void* RuntimeInvoker_Void_t57_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.InvokableCallList::Invoke(System.Object[])
extern const MethodInfo InvokableCallList_Invoke_m7092_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&InvokableCallList_Invoke_m7092/* method */
	, &InvokableCallList_t1266_il2cpp_TypeInfo/* declaring_type */
	, &Void_t57_0_0_0/* return_type */
	, RuntimeInvoker_Void_t57_Object_t/* invoker_method */
	, InvokableCallList_t1266_InvokableCallList_Invoke_m7092_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1931/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* InvokableCallList_t1266_MethodInfos[] =
{
	&InvokableCallList__ctor_m7087_MethodInfo,
	&InvokableCallList_AddPersistentInvokableCall_m7088_MethodInfo,
	&InvokableCallList_AddListener_m7089_MethodInfo,
	&InvokableCallList_RemoveListener_m7090_MethodInfo,
	&InvokableCallList_ClearPersistent_m7091_MethodInfo,
	&InvokableCallList_Invoke_m7092_MethodInfo,
	NULL
};
static const Il2CppMethodReference InvokableCallList_t1266_VTable[] =
{
	&Object_Equals_m252_MethodInfo,
	&Object_Finalize_m230_MethodInfo,
	&Object_GetHashCode_m172_MethodInfo,
	&Object_ToString_m253_MethodInfo,
};
static bool InvokableCallList_t1266_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType InvokableCallList_t1266_1_0_0;
struct InvokableCallList_t1266;
const Il2CppTypeDefinitionMetadata InvokableCallList_t1266_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, InvokableCallList_t1266_VTable/* vtableMethods */
	, InvokableCallList_t1266_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 1343/* fieldStart */

};
TypeInfo InvokableCallList_t1266_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "InvokableCallList"/* name */
	, "UnityEngine.Events"/* namespaze */
	, InvokableCallList_t1266_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &InvokableCallList_t1266_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &InvokableCallList_t1266_0_0_0/* byval_arg */
	, &InvokableCallList_t1266_1_0_0/* this_arg */
	, &InvokableCallList_t1266_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InvokableCallList_t1266)/* instance_size */
	, sizeof (InvokableCallList_t1266)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 6/* method_count */
	, 0/* property_count */
	, 3/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// UnityEngine.Events.UnityEventBase
#include "UnityEngine_UnityEngine_Events_UnityEventBase.h"
// Metadata Definition UnityEngine.Events.UnityEventBase
extern TypeInfo UnityEventBase_t1267_il2cpp_TypeInfo;
// UnityEngine.Events.UnityEventBase
#include "UnityEngine_UnityEngine_Events_UnityEventBaseMethodDeclarations.h"
extern void* RuntimeInvoker_Void_t57 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityEventBase::.ctor()
extern const MethodInfo UnityEventBase__ctor_m7093_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&UnityEventBase__ctor_m7093/* method */
	, &UnityEventBase_t1267_il2cpp_TypeInfo/* declaring_type */
	, &Void_t57_0_0_0/* return_type */
	, RuntimeInvoker_Void_t57/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 6276/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1932/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Void_t57 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityEventBase::UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize()
extern const MethodInfo UnityEventBase_UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize_m5692_MethodInfo = 
{
	"UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize"/* name */
	, (methodPointerType)&UnityEventBase_UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize_m5692/* method */
	, &UnityEventBase_t1267_il2cpp_TypeInfo/* declaring_type */
	, &Void_t57_0_0_0/* return_type */
	, RuntimeInvoker_Void_t57/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 481/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1933/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Void_t57 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityEventBase::UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize()
extern const MethodInfo UnityEventBase_UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize_m5693_MethodInfo = 
{
	"UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize"/* name */
	, (methodPointerType)&UnityEventBase_UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize_m5693/* method */
	, &UnityEventBase_t1267_il2cpp_TypeInfo/* declaring_type */
	, &Void_t57_0_0_0/* return_type */
	, RuntimeInvoker_Void_t57/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 481/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1934/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo UnityEventBase_t1267_UnityEventBase_FindMethod_Impl_m7344_ParameterInfos[] = 
{
	{"name", 0, 134219878, 0, &String_t_0_0_0},
	{"targetObj", 1, 134219879, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Reflection.MethodInfo UnityEngine.Events.UnityEventBase::FindMethod_Impl(System.String,System.Object)
extern const MethodInfo UnityEventBase_FindMethod_Impl_m7344_MethodInfo = 
{
	"FindMethod_Impl"/* name */
	, NULL/* method */
	, &UnityEventBase_t1267_il2cpp_TypeInfo/* declaring_type */
	, &MethodInfo_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t/* invoker_method */
	, UnityEventBase_t1267_UnityEventBase_FindMethod_Impl_m7344_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 1476/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1935/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType MethodInfo_t_0_0_0;
static const ParameterInfo UnityEventBase_t1267_UnityEventBase_GetDelegate_m7345_ParameterInfos[] = 
{
	{"target", 0, 134219880, 0, &Object_t_0_0_0},
	{"theFunction", 1, 134219881, 0, &MethodInfo_t_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEventBase::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern const MethodInfo UnityEventBase_GetDelegate_m7345_MethodInfo = 
{
	"GetDelegate"/* name */
	, NULL/* method */
	, &UnityEventBase_t1267_il2cpp_TypeInfo/* declaring_type */
	, &BaseInvokableCall_t1259_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t/* invoker_method */
	, UnityEventBase_t1267_UnityEventBase_GetDelegate_m7345_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 1475/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1936/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType PersistentCall_t1262_0_0_0;
static const ParameterInfo UnityEventBase_t1267_UnityEventBase_FindMethod_m7094_ParameterInfos[] = 
{
	{"call", 0, 134219882, 0, &PersistentCall_t1262_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Reflection.MethodInfo UnityEngine.Events.UnityEventBase::FindMethod(UnityEngine.Events.PersistentCall)
extern const MethodInfo UnityEventBase_FindMethod_m7094_MethodInfo = 
{
	"FindMethod"/* name */
	, (methodPointerType)&UnityEventBase_FindMethod_m7094/* method */
	, &UnityEventBase_t1267_il2cpp_TypeInfo/* declaring_type */
	, &MethodInfo_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, UnityEventBase_t1267_UnityEventBase_FindMethod_m7094_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 131/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1937/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType PersistentListenerMode_t1257_0_0_0;
extern const Il2CppType Type_t_0_0_0;
static const ParameterInfo UnityEventBase_t1267_UnityEventBase_FindMethod_m7095_ParameterInfos[] = 
{
	{"name", 0, 134219883, 0, &String_t_0_0_0},
	{"listener", 1, 134219884, 0, &Object_t_0_0_0},
	{"mode", 2, 134219885, 0, &PersistentListenerMode_t1257_0_0_0},
	{"argumentType", 3, 134219886, 0, &Type_t_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Int32_t50_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Reflection.MethodInfo UnityEngine.Events.UnityEventBase::FindMethod(System.String,System.Object,UnityEngine.Events.PersistentListenerMode,System.Type)
extern const MethodInfo UnityEventBase_FindMethod_m7095_MethodInfo = 
{
	"FindMethod"/* name */
	, (methodPointerType)&UnityEventBase_FindMethod_m7095/* method */
	, &UnityEventBase_t1267_il2cpp_TypeInfo/* declaring_type */
	, &MethodInfo_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Int32_t50_Object_t/* invoker_method */
	, UnityEventBase_t1267_UnityEventBase_FindMethod_m7095_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 131/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 4/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1938/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Void_t57 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityEventBase::DirtyPersistentCalls()
extern const MethodInfo UnityEventBase_DirtyPersistentCalls_m7096_MethodInfo = 
{
	"DirtyPersistentCalls"/* name */
	, (methodPointerType)&UnityEventBase_DirtyPersistentCalls_m7096/* method */
	, &UnityEventBase_t1267_il2cpp_TypeInfo/* declaring_type */
	, &Void_t57_0_0_0/* return_type */
	, RuntimeInvoker_Void_t57/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1939/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Void_t57 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityEventBase::RebuildPersistentCallsIfNeeded()
extern const MethodInfo UnityEventBase_RebuildPersistentCallsIfNeeded_m7097_MethodInfo = 
{
	"RebuildPersistentCallsIfNeeded"/* name */
	, (methodPointerType)&UnityEventBase_RebuildPersistentCallsIfNeeded_m7097/* method */
	, &UnityEventBase_t1267_il2cpp_TypeInfo/* declaring_type */
	, &Void_t57_0_0_0/* return_type */
	, RuntimeInvoker_Void_t57/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1940/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType BaseInvokableCall_t1259_0_0_0;
static const ParameterInfo UnityEventBase_t1267_UnityEventBase_AddCall_m7098_ParameterInfos[] = 
{
	{"call", 0, 134219887, 0, &BaseInvokableCall_t1259_0_0_0},
};
extern void* RuntimeInvoker_Void_t57_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityEventBase::AddCall(UnityEngine.Events.BaseInvokableCall)
extern const MethodInfo UnityEventBase_AddCall_m7098_MethodInfo = 
{
	"AddCall"/* name */
	, (methodPointerType)&UnityEventBase_AddCall_m7098/* method */
	, &UnityEventBase_t1267_il2cpp_TypeInfo/* declaring_type */
	, &Void_t57_0_0_0/* return_type */
	, RuntimeInvoker_Void_t57_Object_t/* invoker_method */
	, UnityEventBase_t1267_UnityEventBase_AddCall_m7098_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 131/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1941/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType MethodInfo_t_0_0_0;
static const ParameterInfo UnityEventBase_t1267_UnityEventBase_RemoveListener_m7099_ParameterInfos[] = 
{
	{"targetObj", 0, 134219888, 0, &Object_t_0_0_0},
	{"method", 1, 134219889, 0, &MethodInfo_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t57_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityEventBase::RemoveListener(System.Object,System.Reflection.MethodInfo)
extern const MethodInfo UnityEventBase_RemoveListener_m7099_MethodInfo = 
{
	"RemoveListener"/* name */
	, (methodPointerType)&UnityEventBase_RemoveListener_m7099/* method */
	, &UnityEventBase_t1267_il2cpp_TypeInfo/* declaring_type */
	, &Void_t57_0_0_0/* return_type */
	, RuntimeInvoker_Void_t57_Object_t_Object_t/* invoker_method */
	, UnityEventBase_t1267_UnityEventBase_RemoveListener_m7099_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 132/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1942/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType ObjectU5BU5D_t580_0_0_0;
static const ParameterInfo UnityEventBase_t1267_UnityEventBase_Invoke_m7100_ParameterInfos[] = 
{
	{"parameters", 0, 134219890, 0, &ObjectU5BU5D_t580_0_0_0},
};
extern void* RuntimeInvoker_Void_t57_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityEventBase::Invoke(System.Object[])
extern const MethodInfo UnityEventBase_Invoke_m7100_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&UnityEventBase_Invoke_m7100/* method */
	, &UnityEventBase_t1267_il2cpp_TypeInfo/* declaring_type */
	, &Void_t57_0_0_0/* return_type */
	, RuntimeInvoker_Void_t57_Object_t/* invoker_method */
	, UnityEventBase_t1267_UnityEventBase_Invoke_m7100_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 132/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1943/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String UnityEngine.Events.UnityEventBase::ToString()
extern const MethodInfo UnityEventBase_ToString_m5691_MethodInfo = 
{
	"ToString"/* name */
	, (methodPointerType)&UnityEventBase_ToString_m5691/* method */
	, &UnityEventBase_t1267_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1944/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType TypeU5BU5D_t1198_0_0_0;
static const ParameterInfo UnityEventBase_t1267_UnityEventBase_GetValidMethodInfo_m7101_ParameterInfos[] = 
{
	{"obj", 0, 134219891, 0, &Object_t_0_0_0},
	{"functionName", 1, 134219892, 0, &String_t_0_0_0},
	{"argumentTypes", 2, 134219893, 0, &TypeU5BU5D_t1198_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Reflection.MethodInfo UnityEngine.Events.UnityEventBase::GetValidMethodInfo(System.Object,System.String,System.Type[])
extern const MethodInfo UnityEventBase_GetValidMethodInfo_m7101_MethodInfo = 
{
	"GetValidMethodInfo"/* name */
	, (methodPointerType)&UnityEventBase_GetValidMethodInfo_m7101/* method */
	, &UnityEventBase_t1267_il2cpp_TypeInfo/* declaring_type */
	, &MethodInfo_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t/* invoker_method */
	, UnityEventBase_t1267_UnityEventBase_GetValidMethodInfo_m7101_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1945/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* UnityEventBase_t1267_MethodInfos[] =
{
	&UnityEventBase__ctor_m7093_MethodInfo,
	&UnityEventBase_UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize_m5692_MethodInfo,
	&UnityEventBase_UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize_m5693_MethodInfo,
	&UnityEventBase_FindMethod_Impl_m7344_MethodInfo,
	&UnityEventBase_GetDelegate_m7345_MethodInfo,
	&UnityEventBase_FindMethod_m7094_MethodInfo,
	&UnityEventBase_FindMethod_m7095_MethodInfo,
	&UnityEventBase_DirtyPersistentCalls_m7096_MethodInfo,
	&UnityEventBase_RebuildPersistentCallsIfNeeded_m7097_MethodInfo,
	&UnityEventBase_AddCall_m7098_MethodInfo,
	&UnityEventBase_RemoveListener_m7099_MethodInfo,
	&UnityEventBase_Invoke_m7100_MethodInfo,
	&UnityEventBase_ToString_m5691_MethodInfo,
	&UnityEventBase_GetValidMethodInfo_m7101_MethodInfo,
	NULL
};
extern const MethodInfo UnityEventBase_ToString_m5691_MethodInfo;
extern const MethodInfo UnityEventBase_UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize_m5692_MethodInfo;
extern const MethodInfo UnityEventBase_UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize_m5693_MethodInfo;
static const Il2CppMethodReference UnityEventBase_t1267_VTable[] =
{
	&Object_Equals_m252_MethodInfo,
	&Object_Finalize_m230_MethodInfo,
	&Object_GetHashCode_m172_MethodInfo,
	&UnityEventBase_ToString_m5691_MethodInfo,
	&UnityEventBase_UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize_m5692_MethodInfo,
	&UnityEventBase_UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize_m5693_MethodInfo,
	NULL,
	NULL,
};
static bool UnityEventBase_t1267_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static const Il2CppType* UnityEventBase_t1267_InterfacesTypeInfos[] = 
{
	&ISerializationCallbackReceiver_t1013_0_0_0,
};
static Il2CppInterfaceOffsetPair UnityEventBase_t1267_InterfacesOffsets[] = 
{
	{ &ISerializationCallbackReceiver_t1013_0_0_0, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType UnityEventBase_t1267_1_0_0;
struct UnityEventBase_t1267;
const Il2CppTypeDefinitionMetadata UnityEventBase_t1267_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, UnityEventBase_t1267_InterfacesTypeInfos/* implementedInterfaces */
	, UnityEventBase_t1267_InterfacesOffsets/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, UnityEventBase_t1267_VTable/* vtableMethods */
	, UnityEventBase_t1267_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 1346/* fieldStart */

};
TypeInfo UnityEventBase_t1267_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "UnityEventBase"/* name */
	, "UnityEngine.Events"/* namespaze */
	, UnityEventBase_t1267_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &UnityEventBase_t1267_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &UnityEventBase_t1267_0_0_0/* byval_arg */
	, &UnityEventBase_t1267_1_0_0/* this_arg */
	, &UnityEventBase_t1267_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (UnityEventBase_t1267)/* instance_size */
	, sizeof (UnityEventBase_t1267)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1056897/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 14/* method_count */
	, 0/* property_count */
	, 4/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 8/* vtable_count */
	, 1/* interfaces_count */
	, 1/* interface_offsets_count */

};
// UnityEngine.Events.UnityEvent
#include "UnityEngine_UnityEngine_Events_UnityEvent.h"
// Metadata Definition UnityEngine.Events.UnityEvent
extern TypeInfo UnityEvent_t793_il2cpp_TypeInfo;
// UnityEngine.Events.UnityEvent
#include "UnityEngine_UnityEngine_Events_UnityEventMethodDeclarations.h"
extern void* RuntimeInvoker_Void_t57 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityEvent::.ctor()
extern const MethodInfo UnityEvent__ctor_m5251_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&UnityEvent__ctor_m5251/* method */
	, &UnityEvent_t793_il2cpp_TypeInfo/* declaring_type */
	, &Void_t57_0_0_0/* return_type */
	, RuntimeInvoker_Void_t57/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1946/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType UnityAction_t456_0_0_0;
static const ParameterInfo UnityEvent_t793_UnityEvent_AddListener_m3592_ParameterInfos[] = 
{
	{"call", 0, 134219894, 0, &UnityAction_t456_0_0_0},
};
extern void* RuntimeInvoker_Void_t57_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
extern const MethodInfo UnityEvent_AddListener_m3592_MethodInfo = 
{
	"AddListener"/* name */
	, (methodPointerType)&UnityEvent_AddListener_m3592/* method */
	, &UnityEvent_t793_il2cpp_TypeInfo/* declaring_type */
	, &Void_t57_0_0_0/* return_type */
	, RuntimeInvoker_Void_t57_Object_t/* invoker_method */
	, UnityEvent_t793_UnityEvent_AddListener_m3592_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1947/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo UnityEvent_t793_UnityEvent_FindMethod_Impl_m5709_ParameterInfos[] = 
{
	{"name", 0, 134219895, 0, &String_t_0_0_0},
	{"targetObj", 1, 134219896, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent::FindMethod_Impl(System.String,System.Object)
extern const MethodInfo UnityEvent_FindMethod_Impl_m5709_MethodInfo = 
{
	"FindMethod_Impl"/* name */
	, (methodPointerType)&UnityEvent_FindMethod_Impl_m5709/* method */
	, &UnityEvent_t793_il2cpp_TypeInfo/* declaring_type */
	, &MethodInfo_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t/* invoker_method */
	, UnityEvent_t793_UnityEvent_FindMethod_Impl_m5709_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 196/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1948/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType MethodInfo_t_0_0_0;
static const ParameterInfo UnityEvent_t793_UnityEvent_GetDelegate_m5710_ParameterInfos[] = 
{
	{"target", 0, 134219897, 0, &Object_t_0_0_0},
	{"theFunction", 1, 134219898, 0, &MethodInfo_t_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern const MethodInfo UnityEvent_GetDelegate_m5710_MethodInfo = 
{
	"GetDelegate"/* name */
	, (methodPointerType)&UnityEvent_GetDelegate_m5710/* method */
	, &UnityEvent_t793_il2cpp_TypeInfo/* declaring_type */
	, &BaseInvokableCall_t1259_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t/* invoker_method */
	, UnityEvent_t793_UnityEvent_GetDelegate_m5710_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 195/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1949/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType UnityAction_t456_0_0_0;
static const ParameterInfo UnityEvent_t793_UnityEvent_GetDelegate_m7102_ParameterInfos[] = 
{
	{"action", 0, 134219899, 0, &UnityAction_t456_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent::GetDelegate(UnityEngine.Events.UnityAction)
extern const MethodInfo UnityEvent_GetDelegate_m7102_MethodInfo = 
{
	"GetDelegate"/* name */
	, (methodPointerType)&UnityEvent_GetDelegate_m7102/* method */
	, &UnityEvent_t793_il2cpp_TypeInfo/* declaring_type */
	, &BaseInvokableCall_t1259_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, UnityEvent_t793_UnityEvent_GetDelegate_m7102_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1950/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Void_t57 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityEvent::Invoke()
extern const MethodInfo UnityEvent_Invoke_m5253_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&UnityEvent_Invoke_m5253/* method */
	, &UnityEvent_t793_il2cpp_TypeInfo/* declaring_type */
	, &Void_t57_0_0_0/* return_type */
	, RuntimeInvoker_Void_t57/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1951/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* UnityEvent_t793_MethodInfos[] =
{
	&UnityEvent__ctor_m5251_MethodInfo,
	&UnityEvent_AddListener_m3592_MethodInfo,
	&UnityEvent_FindMethod_Impl_m5709_MethodInfo,
	&UnityEvent_GetDelegate_m5710_MethodInfo,
	&UnityEvent_GetDelegate_m7102_MethodInfo,
	&UnityEvent_Invoke_m5253_MethodInfo,
	NULL
};
extern const MethodInfo UnityEvent_FindMethod_Impl_m5709_MethodInfo;
extern const MethodInfo UnityEvent_GetDelegate_m5710_MethodInfo;
static const Il2CppMethodReference UnityEvent_t793_VTable[] =
{
	&Object_Equals_m252_MethodInfo,
	&Object_Finalize_m230_MethodInfo,
	&Object_GetHashCode_m172_MethodInfo,
	&UnityEventBase_ToString_m5691_MethodInfo,
	&UnityEventBase_UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize_m5692_MethodInfo,
	&UnityEventBase_UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize_m5693_MethodInfo,
	&UnityEvent_FindMethod_Impl_m5709_MethodInfo,
	&UnityEvent_GetDelegate_m5710_MethodInfo,
};
static bool UnityEvent_t793_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair UnityEvent_t793_InterfacesOffsets[] = 
{
	{ &ISerializationCallbackReceiver_t1013_0_0_0, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType UnityEvent_t793_0_0_0;
extern const Il2CppType UnityEvent_t793_1_0_0;
struct UnityEvent_t793;
const Il2CppTypeDefinitionMetadata UnityEvent_t793_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, UnityEvent_t793_InterfacesOffsets/* interfaceOffsets */
	, &UnityEventBase_t1267_0_0_0/* parent */
	, UnityEvent_t793_VTable/* vtableMethods */
	, UnityEvent_t793_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 1350/* fieldStart */

};
TypeInfo UnityEvent_t793_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "UnityEvent"/* name */
	, "UnityEngine.Events"/* namespaze */
	, UnityEvent_t793_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &UnityEvent_t793_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &UnityEvent_t793_0_0_0/* byval_arg */
	, &UnityEvent_t793_1_0_0/* this_arg */
	, &UnityEvent_t793_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (UnityEvent_t793)/* instance_size */
	, sizeof (UnityEvent_t793)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1056769/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 6/* method_count */
	, 0/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 8/* vtable_count */
	, 0/* interfaces_count */
	, 1/* interface_offsets_count */

};
// Metadata Definition UnityEngine.Events.UnityEvent`1
extern TypeInfo UnityEvent_1_t1368_il2cpp_TypeInfo;
extern const Il2CppGenericContainer UnityEvent_1_t1368_Il2CppGenericContainer;
extern TypeInfo UnityEvent_1_t1368_gp_T0_0_il2cpp_TypeInfo;
extern const Il2CppGenericParameter UnityEvent_1_t1368_gp_T0_0_il2cpp_TypeInfo_GenericParamFull = { &UnityEvent_1_t1368_Il2CppGenericContainer, NULL, "T0", 0, 0 };
static const Il2CppGenericParameter* UnityEvent_1_t1368_Il2CppGenericParametersArray[1] = 
{
	&UnityEvent_1_t1368_gp_T0_0_il2cpp_TypeInfo_GenericParamFull,
};
extern const Il2CppGenericContainer UnityEvent_1_t1368_Il2CppGenericContainer = { { NULL, NULL }, NULL, (void*)&UnityEvent_1_t1368_il2cpp_TypeInfo, 1, 0, UnityEvent_1_t1368_Il2CppGenericParametersArray };
// System.Void UnityEngine.Events.UnityEvent`1::.ctor()
extern const MethodInfo UnityEvent_1__ctor_m7346_MethodInfo = 
{
	".ctor"/* name */
	, NULL/* method */
	, &UnityEvent_1_t1368_il2cpp_TypeInfo/* declaring_type */
	, &Void_t57_0_0_0/* return_type */
	, NULL/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 6276/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1952/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType UnityAction_1_t1457_0_0_0;
extern const Il2CppType UnityAction_1_t1457_0_0_0;
static const ParameterInfo UnityEvent_1_t1368_UnityEvent_1_AddListener_m7347_ParameterInfos[] = 
{
	{"call", 0, 134219900, 0, &UnityAction_1_t1457_0_0_0},
};
// System.Void UnityEngine.Events.UnityEvent`1::AddListener(UnityEngine.Events.UnityAction`1<T0>)
extern const MethodInfo UnityEvent_1_AddListener_m7347_MethodInfo = 
{
	"AddListener"/* name */
	, NULL/* method */
	, &UnityEvent_1_t1368_il2cpp_TypeInfo/* declaring_type */
	, &Void_t57_0_0_0/* return_type */
	, NULL/* invoker_method */
	, UnityEvent_1_t1368_UnityEvent_1_AddListener_m7347_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1953/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType UnityAction_1_t1457_0_0_0;
static const ParameterInfo UnityEvent_1_t1368_UnityEvent_1_RemoveListener_m7348_ParameterInfos[] = 
{
	{"call", 0, 134219901, 0, &UnityAction_1_t1457_0_0_0},
};
// System.Void UnityEngine.Events.UnityEvent`1::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
extern const MethodInfo UnityEvent_1_RemoveListener_m7348_MethodInfo = 
{
	"RemoveListener"/* name */
	, NULL/* method */
	, &UnityEvent_1_t1368_il2cpp_TypeInfo/* declaring_type */
	, &Void_t57_0_0_0/* return_type */
	, NULL/* invoker_method */
	, UnityEvent_1_t1368_UnityEvent_1_RemoveListener_m7348_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1954/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo UnityEvent_1_t1368_UnityEvent_1_FindMethod_Impl_m7349_ParameterInfos[] = 
{
	{"name", 0, 134219902, 0, &String_t_0_0_0},
	{"targetObj", 1, 134219903, 0, &Object_t_0_0_0},
};
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1::FindMethod_Impl(System.String,System.Object)
extern const MethodInfo UnityEvent_1_FindMethod_Impl_m7349_MethodInfo = 
{
	"FindMethod_Impl"/* name */
	, NULL/* method */
	, &UnityEvent_1_t1368_il2cpp_TypeInfo/* declaring_type */
	, &MethodInfo_t_0_0_0/* return_type */
	, NULL/* invoker_method */
	, UnityEvent_1_t1368_UnityEvent_1_FindMethod_Impl_m7349_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 196/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1955/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType MethodInfo_t_0_0_0;
static const ParameterInfo UnityEvent_1_t1368_UnityEvent_1_GetDelegate_m7350_ParameterInfos[] = 
{
	{"target", 0, 134219904, 0, &Object_t_0_0_0},
	{"theFunction", 1, 134219905, 0, &MethodInfo_t_0_0_0},
};
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern const MethodInfo UnityEvent_1_GetDelegate_m7350_MethodInfo = 
{
	"GetDelegate"/* name */
	, NULL/* method */
	, &UnityEvent_1_t1368_il2cpp_TypeInfo/* declaring_type */
	, &BaseInvokableCall_t1259_0_0_0/* return_type */
	, NULL/* invoker_method */
	, UnityEvent_1_t1368_UnityEvent_1_GetDelegate_m7350_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 195/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1956/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType UnityAction_1_t1457_0_0_0;
static const ParameterInfo UnityEvent_1_t1368_UnityEvent_1_GetDelegate_m7351_ParameterInfos[] = 
{
	{"action", 0, 134219906, 0, &UnityAction_1_t1457_0_0_0},
};
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
extern const MethodInfo UnityEvent_1_GetDelegate_m7351_MethodInfo = 
{
	"GetDelegate"/* name */
	, NULL/* method */
	, &UnityEvent_1_t1368_il2cpp_TypeInfo/* declaring_type */
	, &BaseInvokableCall_t1259_0_0_0/* return_type */
	, NULL/* invoker_method */
	, UnityEvent_1_t1368_UnityEvent_1_GetDelegate_m7351_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1957/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType UnityEvent_1_t1368_gp_0_0_0_0;
extern const Il2CppType UnityEvent_1_t1368_gp_0_0_0_0;
static const ParameterInfo UnityEvent_1_t1368_UnityEvent_1_Invoke_m7352_ParameterInfos[] = 
{
	{"arg0", 0, 134219907, 0, &UnityEvent_1_t1368_gp_0_0_0_0},
};
// System.Void UnityEngine.Events.UnityEvent`1::Invoke(T0)
extern const MethodInfo UnityEvent_1_Invoke_m7352_MethodInfo = 
{
	"Invoke"/* name */
	, NULL/* method */
	, &UnityEvent_1_t1368_il2cpp_TypeInfo/* declaring_type */
	, &Void_t57_0_0_0/* return_type */
	, NULL/* invoker_method */
	, UnityEvent_1_t1368_UnityEvent_1_Invoke_m7352_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1958/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* UnityEvent_1_t1368_MethodInfos[] =
{
	&UnityEvent_1__ctor_m7346_MethodInfo,
	&UnityEvent_1_AddListener_m7347_MethodInfo,
	&UnityEvent_1_RemoveListener_m7348_MethodInfo,
	&UnityEvent_1_FindMethod_Impl_m7349_MethodInfo,
	&UnityEvent_1_GetDelegate_m7350_MethodInfo,
	&UnityEvent_1_GetDelegate_m7351_MethodInfo,
	&UnityEvent_1_Invoke_m7352_MethodInfo,
	NULL
};
extern const MethodInfo UnityEvent_1_FindMethod_Impl_m7349_MethodInfo;
extern const MethodInfo UnityEvent_1_GetDelegate_m7350_MethodInfo;
static const Il2CppMethodReference UnityEvent_1_t1368_VTable[] =
{
	&Object_Equals_m252_MethodInfo,
	&Object_Finalize_m230_MethodInfo,
	&Object_GetHashCode_m172_MethodInfo,
	&UnityEventBase_ToString_m5691_MethodInfo,
	&UnityEventBase_UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize_m5692_MethodInfo,
	&UnityEventBase_UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize_m5693_MethodInfo,
	&UnityEvent_1_FindMethod_Impl_m7349_MethodInfo,
	&UnityEvent_1_GetDelegate_m7350_MethodInfo,
};
static bool UnityEvent_1_t1368_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair UnityEvent_1_t1368_InterfacesOffsets[] = 
{
	{ &ISerializationCallbackReceiver_t1013_0_0_0, 4},
};
extern const Il2CppGenericMethod UnityEvent_1_GetDelegate_m7449_GenericMethod;
extern const Il2CppType InvokableCall_1_t1458_0_0_0;
extern const Il2CppGenericMethod InvokableCall_1__ctor_m7450_GenericMethod;
extern const Il2CppGenericMethod InvokableCall_1__ctor_m7451_GenericMethod;
static Il2CppRGCTXDefinition UnityEvent_1_t1368_RGCTXData[7] = 
{
	{ IL2CPP_RGCTX_DATA_METHOD, &UnityEvent_1_GetDelegate_m7449_GenericMethod }/* Method */,
	{ IL2CPP_RGCTX_DATA_TYPE, (void*)&UnityEvent_1_t1368_gp_0_0_0_0 }/* Type */,
	{ IL2CPP_RGCTX_DATA_CLASS, (void*)&InvokableCall_1_t1458_0_0_0 }/* Class */,
	{ IL2CPP_RGCTX_DATA_METHOD, &InvokableCall_1__ctor_m7450_GenericMethod }/* Method */,
	{ IL2CPP_RGCTX_DATA_METHOD, &InvokableCall_1__ctor_m7451_GenericMethod }/* Method */,
	{ IL2CPP_RGCTX_DATA_CLASS, (void*)&UnityEvent_1_t1368_gp_0_0_0_0 }/* Class */,
	{IL2CPP_RGCTX_DATA_INVALID, NULL},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType UnityEvent_1_t1368_0_0_0;
extern const Il2CppType UnityEvent_1_t1368_1_0_0;
struct UnityEvent_1_t1368;
const Il2CppTypeDefinitionMetadata UnityEvent_1_t1368_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, UnityEvent_1_t1368_InterfacesOffsets/* interfaceOffsets */
	, &UnityEventBase_t1267_0_0_0/* parent */
	, UnityEvent_1_t1368_VTable/* vtableMethods */
	, UnityEvent_1_t1368_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, UnityEvent_1_t1368_RGCTXData/* rgctxDefinition */
	, 1351/* fieldStart */

};
TypeInfo UnityEvent_1_t1368_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "UnityEvent`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, UnityEvent_1_t1368_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &UnityEvent_1_t1368_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &UnityEvent_1_t1368_0_0_0/* byval_arg */
	, &UnityEvent_1_t1368_1_0_0/* this_arg */
	, &UnityEvent_1_t1368_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, &UnityEvent_1_t1368_Il2CppGenericContainer/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* actualSize */
	, 0/* element_size */
	, 0/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1056897/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 7/* method_count */
	, 0/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 8/* vtable_count */
	, 0/* interfaces_count */
	, 1/* interface_offsets_count */

};
// Metadata Definition UnityEngine.Events.UnityEvent`2
extern TypeInfo UnityEvent_2_t1369_il2cpp_TypeInfo;
extern const Il2CppGenericContainer UnityEvent_2_t1369_Il2CppGenericContainer;
extern TypeInfo UnityEvent_2_t1369_gp_T0_0_il2cpp_TypeInfo;
extern const Il2CppGenericParameter UnityEvent_2_t1369_gp_T0_0_il2cpp_TypeInfo_GenericParamFull = { &UnityEvent_2_t1369_Il2CppGenericContainer, NULL, "T0", 0, 0 };
extern TypeInfo UnityEvent_2_t1369_gp_T1_1_il2cpp_TypeInfo;
extern const Il2CppGenericParameter UnityEvent_2_t1369_gp_T1_1_il2cpp_TypeInfo_GenericParamFull = { &UnityEvent_2_t1369_Il2CppGenericContainer, NULL, "T1", 1, 0 };
static const Il2CppGenericParameter* UnityEvent_2_t1369_Il2CppGenericParametersArray[2] = 
{
	&UnityEvent_2_t1369_gp_T0_0_il2cpp_TypeInfo_GenericParamFull,
	&UnityEvent_2_t1369_gp_T1_1_il2cpp_TypeInfo_GenericParamFull,
};
extern const Il2CppGenericContainer UnityEvent_2_t1369_Il2CppGenericContainer = { { NULL, NULL }, NULL, (void*)&UnityEvent_2_t1369_il2cpp_TypeInfo, 2, 0, UnityEvent_2_t1369_Il2CppGenericParametersArray };
// System.Void UnityEngine.Events.UnityEvent`2::.ctor()
extern const MethodInfo UnityEvent_2__ctor_m7353_MethodInfo = 
{
	".ctor"/* name */
	, NULL/* method */
	, &UnityEvent_2_t1369_il2cpp_TypeInfo/* declaring_type */
	, &Void_t57_0_0_0/* return_type */
	, NULL/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 6276/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1959/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo UnityEvent_2_t1369_UnityEvent_2_FindMethod_Impl_m7354_ParameterInfos[] = 
{
	{"name", 0, 134219908, 0, &String_t_0_0_0},
	{"targetObj", 1, 134219909, 0, &Object_t_0_0_0},
};
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`2::FindMethod_Impl(System.String,System.Object)
extern const MethodInfo UnityEvent_2_FindMethod_Impl_m7354_MethodInfo = 
{
	"FindMethod_Impl"/* name */
	, NULL/* method */
	, &UnityEvent_2_t1369_il2cpp_TypeInfo/* declaring_type */
	, &MethodInfo_t_0_0_0/* return_type */
	, NULL/* invoker_method */
	, UnityEvent_2_t1369_UnityEvent_2_FindMethod_Impl_m7354_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 196/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1960/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType MethodInfo_t_0_0_0;
static const ParameterInfo UnityEvent_2_t1369_UnityEvent_2_GetDelegate_m7355_ParameterInfos[] = 
{
	{"target", 0, 134219910, 0, &Object_t_0_0_0},
	{"theFunction", 1, 134219911, 0, &MethodInfo_t_0_0_0},
};
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`2::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern const MethodInfo UnityEvent_2_GetDelegate_m7355_MethodInfo = 
{
	"GetDelegate"/* name */
	, NULL/* method */
	, &UnityEvent_2_t1369_il2cpp_TypeInfo/* declaring_type */
	, &BaseInvokableCall_t1259_0_0_0/* return_type */
	, NULL/* invoker_method */
	, UnityEvent_2_t1369_UnityEvent_2_GetDelegate_m7355_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 195/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1961/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* UnityEvent_2_t1369_MethodInfos[] =
{
	&UnityEvent_2__ctor_m7353_MethodInfo,
	&UnityEvent_2_FindMethod_Impl_m7354_MethodInfo,
	&UnityEvent_2_GetDelegate_m7355_MethodInfo,
	NULL
};
extern const MethodInfo UnityEvent_2_FindMethod_Impl_m7354_MethodInfo;
extern const MethodInfo UnityEvent_2_GetDelegate_m7355_MethodInfo;
static const Il2CppMethodReference UnityEvent_2_t1369_VTable[] =
{
	&Object_Equals_m252_MethodInfo,
	&Object_Finalize_m230_MethodInfo,
	&Object_GetHashCode_m172_MethodInfo,
	&UnityEventBase_ToString_m5691_MethodInfo,
	&UnityEventBase_UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize_m5692_MethodInfo,
	&UnityEventBase_UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize_m5693_MethodInfo,
	&UnityEvent_2_FindMethod_Impl_m7354_MethodInfo,
	&UnityEvent_2_GetDelegate_m7355_MethodInfo,
};
static bool UnityEvent_2_t1369_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair UnityEvent_2_t1369_InterfacesOffsets[] = 
{
	{ &ISerializationCallbackReceiver_t1013_0_0_0, 4},
};
extern const Il2CppType UnityEvent_2_t1369_gp_0_0_0_0;
extern const Il2CppType UnityEvent_2_t1369_gp_1_0_0_0;
extern const Il2CppType InvokableCall_2_t1461_0_0_0;
extern const Il2CppGenericMethod InvokableCall_2__ctor_m7452_GenericMethod;
static Il2CppRGCTXDefinition UnityEvent_2_t1369_RGCTXData[5] = 
{
	{ IL2CPP_RGCTX_DATA_TYPE, (void*)&UnityEvent_2_t1369_gp_0_0_0_0 }/* Type */,
	{ IL2CPP_RGCTX_DATA_TYPE, (void*)&UnityEvent_2_t1369_gp_1_0_0_0 }/* Type */,
	{ IL2CPP_RGCTX_DATA_CLASS, (void*)&InvokableCall_2_t1461_0_0_0 }/* Class */,
	{ IL2CPP_RGCTX_DATA_METHOD, &InvokableCall_2__ctor_m7452_GenericMethod }/* Method */,
	{IL2CPP_RGCTX_DATA_INVALID, NULL},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType UnityEvent_2_t1369_0_0_0;
extern const Il2CppType UnityEvent_2_t1369_1_0_0;
struct UnityEvent_2_t1369;
const Il2CppTypeDefinitionMetadata UnityEvent_2_t1369_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, UnityEvent_2_t1369_InterfacesOffsets/* interfaceOffsets */
	, &UnityEventBase_t1267_0_0_0/* parent */
	, UnityEvent_2_t1369_VTable/* vtableMethods */
	, UnityEvent_2_t1369_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, UnityEvent_2_t1369_RGCTXData/* rgctxDefinition */
	, 1352/* fieldStart */

};
TypeInfo UnityEvent_2_t1369_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "UnityEvent`2"/* name */
	, "UnityEngine.Events"/* namespaze */
	, UnityEvent_2_t1369_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &UnityEvent_2_t1369_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &UnityEvent_2_t1369_0_0_0/* byval_arg */
	, &UnityEvent_2_t1369_1_0_0/* this_arg */
	, &UnityEvent_2_t1369_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, &UnityEvent_2_t1369_Il2CppGenericContainer/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* actualSize */
	, 0/* element_size */
	, 0/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1056897/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 3/* method_count */
	, 0/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 8/* vtable_count */
	, 0/* interfaces_count */
	, 1/* interface_offsets_count */

};
// Metadata Definition UnityEngine.Events.UnityEvent`3
extern TypeInfo UnityEvent_3_t1370_il2cpp_TypeInfo;
extern const Il2CppGenericContainer UnityEvent_3_t1370_Il2CppGenericContainer;
extern TypeInfo UnityEvent_3_t1370_gp_T0_0_il2cpp_TypeInfo;
extern const Il2CppGenericParameter UnityEvent_3_t1370_gp_T0_0_il2cpp_TypeInfo_GenericParamFull = { &UnityEvent_3_t1370_Il2CppGenericContainer, NULL, "T0", 0, 0 };
extern TypeInfo UnityEvent_3_t1370_gp_T1_1_il2cpp_TypeInfo;
extern const Il2CppGenericParameter UnityEvent_3_t1370_gp_T1_1_il2cpp_TypeInfo_GenericParamFull = { &UnityEvent_3_t1370_Il2CppGenericContainer, NULL, "T1", 1, 0 };
extern TypeInfo UnityEvent_3_t1370_gp_T2_2_il2cpp_TypeInfo;
extern const Il2CppGenericParameter UnityEvent_3_t1370_gp_T2_2_il2cpp_TypeInfo_GenericParamFull = { &UnityEvent_3_t1370_Il2CppGenericContainer, NULL, "T2", 2, 0 };
static const Il2CppGenericParameter* UnityEvent_3_t1370_Il2CppGenericParametersArray[3] = 
{
	&UnityEvent_3_t1370_gp_T0_0_il2cpp_TypeInfo_GenericParamFull,
	&UnityEvent_3_t1370_gp_T1_1_il2cpp_TypeInfo_GenericParamFull,
	&UnityEvent_3_t1370_gp_T2_2_il2cpp_TypeInfo_GenericParamFull,
};
extern const Il2CppGenericContainer UnityEvent_3_t1370_Il2CppGenericContainer = { { NULL, NULL }, NULL, (void*)&UnityEvent_3_t1370_il2cpp_TypeInfo, 3, 0, UnityEvent_3_t1370_Il2CppGenericParametersArray };
// System.Void UnityEngine.Events.UnityEvent`3::.ctor()
extern const MethodInfo UnityEvent_3__ctor_m7356_MethodInfo = 
{
	".ctor"/* name */
	, NULL/* method */
	, &UnityEvent_3_t1370_il2cpp_TypeInfo/* declaring_type */
	, &Void_t57_0_0_0/* return_type */
	, NULL/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 6276/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1962/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo UnityEvent_3_t1370_UnityEvent_3_FindMethod_Impl_m7357_ParameterInfos[] = 
{
	{"name", 0, 134219912, 0, &String_t_0_0_0},
	{"targetObj", 1, 134219913, 0, &Object_t_0_0_0},
};
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`3::FindMethod_Impl(System.String,System.Object)
extern const MethodInfo UnityEvent_3_FindMethod_Impl_m7357_MethodInfo = 
{
	"FindMethod_Impl"/* name */
	, NULL/* method */
	, &UnityEvent_3_t1370_il2cpp_TypeInfo/* declaring_type */
	, &MethodInfo_t_0_0_0/* return_type */
	, NULL/* invoker_method */
	, UnityEvent_3_t1370_UnityEvent_3_FindMethod_Impl_m7357_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 196/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1963/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType MethodInfo_t_0_0_0;
static const ParameterInfo UnityEvent_3_t1370_UnityEvent_3_GetDelegate_m7358_ParameterInfos[] = 
{
	{"target", 0, 134219914, 0, &Object_t_0_0_0},
	{"theFunction", 1, 134219915, 0, &MethodInfo_t_0_0_0},
};
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`3::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern const MethodInfo UnityEvent_3_GetDelegate_m7358_MethodInfo = 
{
	"GetDelegate"/* name */
	, NULL/* method */
	, &UnityEvent_3_t1370_il2cpp_TypeInfo/* declaring_type */
	, &BaseInvokableCall_t1259_0_0_0/* return_type */
	, NULL/* invoker_method */
	, UnityEvent_3_t1370_UnityEvent_3_GetDelegate_m7358_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 195/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1964/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* UnityEvent_3_t1370_MethodInfos[] =
{
	&UnityEvent_3__ctor_m7356_MethodInfo,
	&UnityEvent_3_FindMethod_Impl_m7357_MethodInfo,
	&UnityEvent_3_GetDelegate_m7358_MethodInfo,
	NULL
};
extern const MethodInfo UnityEvent_3_FindMethod_Impl_m7357_MethodInfo;
extern const MethodInfo UnityEvent_3_GetDelegate_m7358_MethodInfo;
static const Il2CppMethodReference UnityEvent_3_t1370_VTable[] =
{
	&Object_Equals_m252_MethodInfo,
	&Object_Finalize_m230_MethodInfo,
	&Object_GetHashCode_m172_MethodInfo,
	&UnityEventBase_ToString_m5691_MethodInfo,
	&UnityEventBase_UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize_m5692_MethodInfo,
	&UnityEventBase_UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize_m5693_MethodInfo,
	&UnityEvent_3_FindMethod_Impl_m7357_MethodInfo,
	&UnityEvent_3_GetDelegate_m7358_MethodInfo,
};
static bool UnityEvent_3_t1370_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair UnityEvent_3_t1370_InterfacesOffsets[] = 
{
	{ &ISerializationCallbackReceiver_t1013_0_0_0, 4},
};
extern const Il2CppType UnityEvent_3_t1370_gp_0_0_0_0;
extern const Il2CppType UnityEvent_3_t1370_gp_1_0_0_0;
extern const Il2CppType UnityEvent_3_t1370_gp_2_0_0_0;
extern const Il2CppType InvokableCall_3_t1465_0_0_0;
extern const Il2CppGenericMethod InvokableCall_3__ctor_m7453_GenericMethod;
static Il2CppRGCTXDefinition UnityEvent_3_t1370_RGCTXData[6] = 
{
	{ IL2CPP_RGCTX_DATA_TYPE, (void*)&UnityEvent_3_t1370_gp_0_0_0_0 }/* Type */,
	{ IL2CPP_RGCTX_DATA_TYPE, (void*)&UnityEvent_3_t1370_gp_1_0_0_0 }/* Type */,
	{ IL2CPP_RGCTX_DATA_TYPE, (void*)&UnityEvent_3_t1370_gp_2_0_0_0 }/* Type */,
	{ IL2CPP_RGCTX_DATA_CLASS, (void*)&InvokableCall_3_t1465_0_0_0 }/* Class */,
	{ IL2CPP_RGCTX_DATA_METHOD, &InvokableCall_3__ctor_m7453_GenericMethod }/* Method */,
	{IL2CPP_RGCTX_DATA_INVALID, NULL},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType UnityEvent_3_t1370_0_0_0;
extern const Il2CppType UnityEvent_3_t1370_1_0_0;
struct UnityEvent_3_t1370;
const Il2CppTypeDefinitionMetadata UnityEvent_3_t1370_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, UnityEvent_3_t1370_InterfacesOffsets/* interfaceOffsets */
	, &UnityEventBase_t1267_0_0_0/* parent */
	, UnityEvent_3_t1370_VTable/* vtableMethods */
	, UnityEvent_3_t1370_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, UnityEvent_3_t1370_RGCTXData/* rgctxDefinition */
	, 1353/* fieldStart */

};
TypeInfo UnityEvent_3_t1370_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "UnityEvent`3"/* name */
	, "UnityEngine.Events"/* namespaze */
	, UnityEvent_3_t1370_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &UnityEvent_3_t1370_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &UnityEvent_3_t1370_0_0_0/* byval_arg */
	, &UnityEvent_3_t1370_1_0_0/* this_arg */
	, &UnityEvent_3_t1370_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, &UnityEvent_3_t1370_Il2CppGenericContainer/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* actualSize */
	, 0/* element_size */
	, 0/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1056897/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 3/* method_count */
	, 0/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 8/* vtable_count */
	, 0/* interfaces_count */
	, 1/* interface_offsets_count */

};
// Metadata Definition UnityEngine.Events.UnityEvent`4
extern TypeInfo UnityEvent_4_t1371_il2cpp_TypeInfo;
extern const Il2CppGenericContainer UnityEvent_4_t1371_Il2CppGenericContainer;
extern TypeInfo UnityEvent_4_t1371_gp_T0_0_il2cpp_TypeInfo;
extern const Il2CppGenericParameter UnityEvent_4_t1371_gp_T0_0_il2cpp_TypeInfo_GenericParamFull = { &UnityEvent_4_t1371_Il2CppGenericContainer, NULL, "T0", 0, 0 };
extern TypeInfo UnityEvent_4_t1371_gp_T1_1_il2cpp_TypeInfo;
extern const Il2CppGenericParameter UnityEvent_4_t1371_gp_T1_1_il2cpp_TypeInfo_GenericParamFull = { &UnityEvent_4_t1371_Il2CppGenericContainer, NULL, "T1", 1, 0 };
extern TypeInfo UnityEvent_4_t1371_gp_T2_2_il2cpp_TypeInfo;
extern const Il2CppGenericParameter UnityEvent_4_t1371_gp_T2_2_il2cpp_TypeInfo_GenericParamFull = { &UnityEvent_4_t1371_Il2CppGenericContainer, NULL, "T2", 2, 0 };
extern TypeInfo UnityEvent_4_t1371_gp_T3_3_il2cpp_TypeInfo;
extern const Il2CppGenericParameter UnityEvent_4_t1371_gp_T3_3_il2cpp_TypeInfo_GenericParamFull = { &UnityEvent_4_t1371_Il2CppGenericContainer, NULL, "T3", 3, 0 };
static const Il2CppGenericParameter* UnityEvent_4_t1371_Il2CppGenericParametersArray[4] = 
{
	&UnityEvent_4_t1371_gp_T0_0_il2cpp_TypeInfo_GenericParamFull,
	&UnityEvent_4_t1371_gp_T1_1_il2cpp_TypeInfo_GenericParamFull,
	&UnityEvent_4_t1371_gp_T2_2_il2cpp_TypeInfo_GenericParamFull,
	&UnityEvent_4_t1371_gp_T3_3_il2cpp_TypeInfo_GenericParamFull,
};
extern const Il2CppGenericContainer UnityEvent_4_t1371_Il2CppGenericContainer = { { NULL, NULL }, NULL, (void*)&UnityEvent_4_t1371_il2cpp_TypeInfo, 4, 0, UnityEvent_4_t1371_Il2CppGenericParametersArray };
// System.Void UnityEngine.Events.UnityEvent`4::.ctor()
extern const MethodInfo UnityEvent_4__ctor_m7359_MethodInfo = 
{
	".ctor"/* name */
	, NULL/* method */
	, &UnityEvent_4_t1371_il2cpp_TypeInfo/* declaring_type */
	, &Void_t57_0_0_0/* return_type */
	, NULL/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 6276/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1965/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo UnityEvent_4_t1371_UnityEvent_4_FindMethod_Impl_m7360_ParameterInfos[] = 
{
	{"name", 0, 134219916, 0, &String_t_0_0_0},
	{"targetObj", 1, 134219917, 0, &Object_t_0_0_0},
};
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`4::FindMethod_Impl(System.String,System.Object)
extern const MethodInfo UnityEvent_4_FindMethod_Impl_m7360_MethodInfo = 
{
	"FindMethod_Impl"/* name */
	, NULL/* method */
	, &UnityEvent_4_t1371_il2cpp_TypeInfo/* declaring_type */
	, &MethodInfo_t_0_0_0/* return_type */
	, NULL/* invoker_method */
	, UnityEvent_4_t1371_UnityEvent_4_FindMethod_Impl_m7360_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 196/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1966/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType MethodInfo_t_0_0_0;
static const ParameterInfo UnityEvent_4_t1371_UnityEvent_4_GetDelegate_m7361_ParameterInfos[] = 
{
	{"target", 0, 134219918, 0, &Object_t_0_0_0},
	{"theFunction", 1, 134219919, 0, &MethodInfo_t_0_0_0},
};
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`4::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern const MethodInfo UnityEvent_4_GetDelegate_m7361_MethodInfo = 
{
	"GetDelegate"/* name */
	, NULL/* method */
	, &UnityEvent_4_t1371_il2cpp_TypeInfo/* declaring_type */
	, &BaseInvokableCall_t1259_0_0_0/* return_type */
	, NULL/* invoker_method */
	, UnityEvent_4_t1371_UnityEvent_4_GetDelegate_m7361_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 195/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1967/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* UnityEvent_4_t1371_MethodInfos[] =
{
	&UnityEvent_4__ctor_m7359_MethodInfo,
	&UnityEvent_4_FindMethod_Impl_m7360_MethodInfo,
	&UnityEvent_4_GetDelegate_m7361_MethodInfo,
	NULL
};
extern const MethodInfo UnityEvent_4_FindMethod_Impl_m7360_MethodInfo;
extern const MethodInfo UnityEvent_4_GetDelegate_m7361_MethodInfo;
static const Il2CppMethodReference UnityEvent_4_t1371_VTable[] =
{
	&Object_Equals_m252_MethodInfo,
	&Object_Finalize_m230_MethodInfo,
	&Object_GetHashCode_m172_MethodInfo,
	&UnityEventBase_ToString_m5691_MethodInfo,
	&UnityEventBase_UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize_m5692_MethodInfo,
	&UnityEventBase_UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize_m5693_MethodInfo,
	&UnityEvent_4_FindMethod_Impl_m7360_MethodInfo,
	&UnityEvent_4_GetDelegate_m7361_MethodInfo,
};
static bool UnityEvent_4_t1371_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair UnityEvent_4_t1371_InterfacesOffsets[] = 
{
	{ &ISerializationCallbackReceiver_t1013_0_0_0, 4},
};
extern const Il2CppType UnityEvent_4_t1371_gp_0_0_0_0;
extern const Il2CppType UnityEvent_4_t1371_gp_1_0_0_0;
extern const Il2CppType UnityEvent_4_t1371_gp_2_0_0_0;
extern const Il2CppType UnityEvent_4_t1371_gp_3_0_0_0;
extern const Il2CppType InvokableCall_4_t1470_0_0_0;
extern const Il2CppGenericMethod InvokableCall_4__ctor_m7454_GenericMethod;
static Il2CppRGCTXDefinition UnityEvent_4_t1371_RGCTXData[7] = 
{
	{ IL2CPP_RGCTX_DATA_TYPE, (void*)&UnityEvent_4_t1371_gp_0_0_0_0 }/* Type */,
	{ IL2CPP_RGCTX_DATA_TYPE, (void*)&UnityEvent_4_t1371_gp_1_0_0_0 }/* Type */,
	{ IL2CPP_RGCTX_DATA_TYPE, (void*)&UnityEvent_4_t1371_gp_2_0_0_0 }/* Type */,
	{ IL2CPP_RGCTX_DATA_TYPE, (void*)&UnityEvent_4_t1371_gp_3_0_0_0 }/* Type */,
	{ IL2CPP_RGCTX_DATA_CLASS, (void*)&InvokableCall_4_t1470_0_0_0 }/* Class */,
	{ IL2CPP_RGCTX_DATA_METHOD, &InvokableCall_4__ctor_m7454_GenericMethod }/* Method */,
	{IL2CPP_RGCTX_DATA_INVALID, NULL},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType UnityEvent_4_t1371_0_0_0;
extern const Il2CppType UnityEvent_4_t1371_1_0_0;
struct UnityEvent_4_t1371;
const Il2CppTypeDefinitionMetadata UnityEvent_4_t1371_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, UnityEvent_4_t1371_InterfacesOffsets/* interfaceOffsets */
	, &UnityEventBase_t1267_0_0_0/* parent */
	, UnityEvent_4_t1371_VTable/* vtableMethods */
	, UnityEvent_4_t1371_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, UnityEvent_4_t1371_RGCTXData/* rgctxDefinition */
	, 1354/* fieldStart */

};
TypeInfo UnityEvent_4_t1371_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "UnityEvent`4"/* name */
	, "UnityEngine.Events"/* namespaze */
	, UnityEvent_4_t1371_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &UnityEvent_4_t1371_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &UnityEvent_4_t1371_0_0_0/* byval_arg */
	, &UnityEvent_4_t1371_1_0_0/* this_arg */
	, &UnityEvent_4_t1371_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, &UnityEvent_4_t1371_Il2CppGenericContainer/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* actualSize */
	, 0/* element_size */
	, 0/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1056897/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 3/* method_count */
	, 0/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 8/* vtable_count */
	, 0/* interfaces_count */
	, 1/* interface_offsets_count */

};
// UnityEngine.UserAuthorizationDialog
#include "UnityEngine_UnityEngine_UserAuthorizationDialog.h"
// Metadata Definition UnityEngine.UserAuthorizationDialog
extern TypeInfo UserAuthorizationDialog_t1268_il2cpp_TypeInfo;
// UnityEngine.UserAuthorizationDialog
#include "UnityEngine_UnityEngine_UserAuthorizationDialogMethodDeclarations.h"
extern void* RuntimeInvoker_Void_t57 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.UserAuthorizationDialog::.ctor()
extern const MethodInfo UserAuthorizationDialog__ctor_m7103_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&UserAuthorizationDialog__ctor_m7103/* method */
	, &UserAuthorizationDialog_t1268_il2cpp_TypeInfo/* declaring_type */
	, &Void_t57_0_0_0/* return_type */
	, RuntimeInvoker_Void_t57/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1968/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Void_t57 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.UserAuthorizationDialog::Start()
extern const MethodInfo UserAuthorizationDialog_Start_m7104_MethodInfo = 
{
	"Start"/* name */
	, (methodPointerType)&UserAuthorizationDialog_Start_m7104/* method */
	, &UserAuthorizationDialog_t1268_il2cpp_TypeInfo/* declaring_type */
	, &Void_t57_0_0_0/* return_type */
	, RuntimeInvoker_Void_t57/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1969/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Void_t57 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.UserAuthorizationDialog::OnGUI()
extern const MethodInfo UserAuthorizationDialog_OnGUI_m7105_MethodInfo = 
{
	"OnGUI"/* name */
	, (methodPointerType)&UserAuthorizationDialog_OnGUI_m7105/* method */
	, &UserAuthorizationDialog_t1268_il2cpp_TypeInfo/* declaring_type */
	, &Void_t57_0_0_0/* return_type */
	, RuntimeInvoker_Void_t57/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1970/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t50_0_0_0;
static const ParameterInfo UserAuthorizationDialog_t1268_UserAuthorizationDialog_DoUserAuthorizationDialog_m7106_ParameterInfos[] = 
{
	{"windowID", 0, 134219920, 0, &Int32_t50_0_0_0},
};
extern void* RuntimeInvoker_Void_t57_Int32_t50 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.UserAuthorizationDialog::DoUserAuthorizationDialog(System.Int32)
extern const MethodInfo UserAuthorizationDialog_DoUserAuthorizationDialog_m7106_MethodInfo = 
{
	"DoUserAuthorizationDialog"/* name */
	, (methodPointerType)&UserAuthorizationDialog_DoUserAuthorizationDialog_m7106/* method */
	, &UserAuthorizationDialog_t1268_il2cpp_TypeInfo/* declaring_type */
	, &Void_t57_0_0_0/* return_type */
	, RuntimeInvoker_Void_t57_Int32_t50/* invoker_method */
	, UserAuthorizationDialog_t1268_UserAuthorizationDialog_DoUserAuthorizationDialog_m7106_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1971/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* UserAuthorizationDialog_t1268_MethodInfos[] =
{
	&UserAuthorizationDialog__ctor_m7103_MethodInfo,
	&UserAuthorizationDialog_Start_m7104_MethodInfo,
	&UserAuthorizationDialog_OnGUI_m7105_MethodInfo,
	&UserAuthorizationDialog_DoUserAuthorizationDialog_m7106_MethodInfo,
	NULL
};
static const Il2CppMethodReference UserAuthorizationDialog_t1268_VTable[] =
{
	&Object_Equals_m3868_MethodInfo,
	&Object_Finalize_m230_MethodInfo,
	&Object_GetHashCode_m3869_MethodInfo,
	&Object_ToString_m3870_MethodInfo,
};
static bool UserAuthorizationDialog_t1268_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType UserAuthorizationDialog_t1268_0_0_0;
extern const Il2CppType UserAuthorizationDialog_t1268_1_0_0;
extern const Il2CppType MonoBehaviour_t67_0_0_0;
struct UserAuthorizationDialog_t1268;
const Il2CppTypeDefinitionMetadata UserAuthorizationDialog_t1268_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &MonoBehaviour_t67_0_0_0/* parent */
	, UserAuthorizationDialog_t1268_VTable/* vtableMethods */
	, UserAuthorizationDialog_t1268_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 1355/* fieldStart */

};
TypeInfo UserAuthorizationDialog_t1268_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "UserAuthorizationDialog"/* name */
	, "UnityEngine"/* namespaze */
	, UserAuthorizationDialog_t1268_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &UserAuthorizationDialog_t1268_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 785/* custom_attributes_cache */
	, &UserAuthorizationDialog_t1268_0_0_0/* byval_arg */
	, &UserAuthorizationDialog_t1268_1_0_0/* this_arg */
	, &UserAuthorizationDialog_t1268_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (UserAuthorizationDialog_t1268)/* instance_size */
	, sizeof (UserAuthorizationDialog_t1268)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 4/* method_count */
	, 0/* property_count */
	, 4/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// UnityEngine.Internal.DefaultValueAttribute
#include "UnityEngine_UnityEngine_Internal_DefaultValueAttribute.h"
// Metadata Definition UnityEngine.Internal.DefaultValueAttribute
extern TypeInfo DefaultValueAttribute_t1269_il2cpp_TypeInfo;
// UnityEngine.Internal.DefaultValueAttribute
#include "UnityEngine_UnityEngine_Internal_DefaultValueAttributeMethodDeclarations.h"
extern const Il2CppType String_t_0_0_0;
static const ParameterInfo DefaultValueAttribute_t1269_DefaultValueAttribute__ctor_m7107_ParameterInfos[] = 
{
	{"value", 0, 134219921, 0, &String_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t57_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Internal.DefaultValueAttribute::.ctor(System.String)
extern const MethodInfo DefaultValueAttribute__ctor_m7107_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&DefaultValueAttribute__ctor_m7107/* method */
	, &DefaultValueAttribute_t1269_il2cpp_TypeInfo/* declaring_type */
	, &Void_t57_0_0_0/* return_type */
	, RuntimeInvoker_Void_t57_Object_t/* invoker_method */
	, DefaultValueAttribute_t1269_DefaultValueAttribute__ctor_m7107_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1972/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Object UnityEngine.Internal.DefaultValueAttribute::get_Value()
extern const MethodInfo DefaultValueAttribute_get_Value_m7108_MethodInfo = 
{
	"get_Value"/* name */
	, (methodPointerType)&DefaultValueAttribute_get_Value_m7108/* method */
	, &DefaultValueAttribute_t1269_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1973/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo DefaultValueAttribute_t1269_DefaultValueAttribute_Equals_m7109_ParameterInfos[] = 
{
	{"obj", 0, 134219922, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Boolean_t29_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Boolean UnityEngine.Internal.DefaultValueAttribute::Equals(System.Object)
extern const MethodInfo DefaultValueAttribute_Equals_m7109_MethodInfo = 
{
	"Equals"/* name */
	, (methodPointerType)&DefaultValueAttribute_Equals_m7109/* method */
	, &DefaultValueAttribute_t1269_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t29_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t29_Object_t/* invoker_method */
	, DefaultValueAttribute_t1269_DefaultValueAttribute_Equals_m7109_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1974/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Int32_t50 (const MethodInfo* method, void* obj, void** args);
// System.Int32 UnityEngine.Internal.DefaultValueAttribute::GetHashCode()
extern const MethodInfo DefaultValueAttribute_GetHashCode_m7110_MethodInfo = 
{
	"GetHashCode"/* name */
	, (methodPointerType)&DefaultValueAttribute_GetHashCode_m7110/* method */
	, &DefaultValueAttribute_t1269_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t50_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t50/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1975/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* DefaultValueAttribute_t1269_MethodInfos[] =
{
	&DefaultValueAttribute__ctor_m7107_MethodInfo,
	&DefaultValueAttribute_get_Value_m7108_MethodInfo,
	&DefaultValueAttribute_Equals_m7109_MethodInfo,
	&DefaultValueAttribute_GetHashCode_m7110_MethodInfo,
	NULL
};
extern const MethodInfo DefaultValueAttribute_get_Value_m7108_MethodInfo;
static const PropertyInfo DefaultValueAttribute_t1269____Value_PropertyInfo = 
{
	&DefaultValueAttribute_t1269_il2cpp_TypeInfo/* parent */
	, "Value"/* name */
	, &DefaultValueAttribute_get_Value_m7108_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
static const PropertyInfo* DefaultValueAttribute_t1269_PropertyInfos[] =
{
	&DefaultValueAttribute_t1269____Value_PropertyInfo,
	NULL
};
extern const MethodInfo DefaultValueAttribute_Equals_m7109_MethodInfo;
extern const MethodInfo DefaultValueAttribute_GetHashCode_m7110_MethodInfo;
static const Il2CppMethodReference DefaultValueAttribute_t1269_VTable[] =
{
	&DefaultValueAttribute_Equals_m7109_MethodInfo,
	&Object_Finalize_m230_MethodInfo,
	&DefaultValueAttribute_GetHashCode_m7110_MethodInfo,
	&Object_ToString_m253_MethodInfo,
};
static bool DefaultValueAttribute_t1269_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair DefaultValueAttribute_t1269_InterfacesOffsets[] = 
{
	{ &_Attribute_t716_0_0_0, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType DefaultValueAttribute_t1269_0_0_0;
extern const Il2CppType DefaultValueAttribute_t1269_1_0_0;
struct DefaultValueAttribute_t1269;
const Il2CppTypeDefinitionMetadata DefaultValueAttribute_t1269_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, DefaultValueAttribute_t1269_InterfacesOffsets/* interfaceOffsets */
	, &Attribute_t384_0_0_0/* parent */
	, DefaultValueAttribute_t1269_VTable/* vtableMethods */
	, DefaultValueAttribute_t1269_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 1359/* fieldStart */

};
TypeInfo DefaultValueAttribute_t1269_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "DefaultValueAttribute"/* name */
	, "UnityEngine.Internal"/* namespaze */
	, DefaultValueAttribute_t1269_MethodInfos/* methods */
	, DefaultValueAttribute_t1269_PropertyInfos/* properties */
	, NULL/* events */
	, &DefaultValueAttribute_t1269_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 786/* custom_attributes_cache */
	, &DefaultValueAttribute_t1269_0_0_0/* byval_arg */
	, &DefaultValueAttribute_t1269_1_0_0/* this_arg */
	, &DefaultValueAttribute_t1269_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (DefaultValueAttribute_t1269)/* instance_size */
	, sizeof (DefaultValueAttribute_t1269)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1056769/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 4/* method_count */
	, 1/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 1/* interface_offsets_count */

};
// UnityEngine.Internal.ExcludeFromDocsAttribute
#include "UnityEngine_UnityEngine_Internal_ExcludeFromDocsAttribute.h"
// Metadata Definition UnityEngine.Internal.ExcludeFromDocsAttribute
extern TypeInfo ExcludeFromDocsAttribute_t1270_il2cpp_TypeInfo;
// UnityEngine.Internal.ExcludeFromDocsAttribute
#include "UnityEngine_UnityEngine_Internal_ExcludeFromDocsAttributeMethodDeclarations.h"
extern void* RuntimeInvoker_Void_t57 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Internal.ExcludeFromDocsAttribute::.ctor()
extern const MethodInfo ExcludeFromDocsAttribute__ctor_m7111_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&ExcludeFromDocsAttribute__ctor_m7111/* method */
	, &ExcludeFromDocsAttribute_t1270_il2cpp_TypeInfo/* declaring_type */
	, &Void_t57_0_0_0/* return_type */
	, RuntimeInvoker_Void_t57/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1976/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* ExcludeFromDocsAttribute_t1270_MethodInfos[] =
{
	&ExcludeFromDocsAttribute__ctor_m7111_MethodInfo,
	NULL
};
static const Il2CppMethodReference ExcludeFromDocsAttribute_t1270_VTable[] =
{
	&Attribute_Equals_m3933_MethodInfo,
	&Object_Finalize_m230_MethodInfo,
	&Attribute_GetHashCode_m3934_MethodInfo,
	&Object_ToString_m253_MethodInfo,
};
static bool ExcludeFromDocsAttribute_t1270_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair ExcludeFromDocsAttribute_t1270_InterfacesOffsets[] = 
{
	{ &_Attribute_t716_0_0_0, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType ExcludeFromDocsAttribute_t1270_0_0_0;
extern const Il2CppType ExcludeFromDocsAttribute_t1270_1_0_0;
struct ExcludeFromDocsAttribute_t1270;
const Il2CppTypeDefinitionMetadata ExcludeFromDocsAttribute_t1270_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, ExcludeFromDocsAttribute_t1270_InterfacesOffsets/* interfaceOffsets */
	, &Attribute_t384_0_0_0/* parent */
	, ExcludeFromDocsAttribute_t1270_VTable/* vtableMethods */
	, ExcludeFromDocsAttribute_t1270_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo ExcludeFromDocsAttribute_t1270_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "ExcludeFromDocsAttribute"/* name */
	, "UnityEngine.Internal"/* namespaze */
	, ExcludeFromDocsAttribute_t1270_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &ExcludeFromDocsAttribute_t1270_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 787/* custom_attributes_cache */
	, &ExcludeFromDocsAttribute_t1270_0_0_0/* byval_arg */
	, &ExcludeFromDocsAttribute_t1270_1_0_0/* this_arg */
	, &ExcludeFromDocsAttribute_t1270_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (ExcludeFromDocsAttribute_t1270)/* instance_size */
	, sizeof (ExcludeFromDocsAttribute_t1270)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1056769/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 1/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 1/* interface_offsets_count */

};
// UnityEngine.Serialization.FormerlySerializedAsAttribute
#include "UnityEngine_UnityEngine_Serialization_FormerlySerializedAsAt.h"
// Metadata Definition UnityEngine.Serialization.FormerlySerializedAsAttribute
extern TypeInfo FormerlySerializedAsAttribute_t998_il2cpp_TypeInfo;
// UnityEngine.Serialization.FormerlySerializedAsAttribute
#include "UnityEngine_UnityEngine_Serialization_FormerlySerializedAsAtMethodDeclarations.h"
extern const Il2CppType String_t_0_0_0;
static const ParameterInfo FormerlySerializedAsAttribute_t998_FormerlySerializedAsAttribute__ctor_m5601_ParameterInfos[] = 
{
	{"oldName", 0, 134219923, 0, &String_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t57_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Serialization.FormerlySerializedAsAttribute::.ctor(System.String)
extern const MethodInfo FormerlySerializedAsAttribute__ctor_m5601_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&FormerlySerializedAsAttribute__ctor_m5601/* method */
	, &FormerlySerializedAsAttribute_t998_il2cpp_TypeInfo/* declaring_type */
	, &Void_t57_0_0_0/* return_type */
	, RuntimeInvoker_Void_t57_Object_t/* invoker_method */
	, FormerlySerializedAsAttribute_t998_FormerlySerializedAsAttribute__ctor_m5601_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1977/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* FormerlySerializedAsAttribute_t998_MethodInfos[] =
{
	&FormerlySerializedAsAttribute__ctor_m5601_MethodInfo,
	NULL
};
static const Il2CppMethodReference FormerlySerializedAsAttribute_t998_VTable[] =
{
	&Attribute_Equals_m3933_MethodInfo,
	&Object_Finalize_m230_MethodInfo,
	&Attribute_GetHashCode_m3934_MethodInfo,
	&Object_ToString_m253_MethodInfo,
};
static bool FormerlySerializedAsAttribute_t998_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair FormerlySerializedAsAttribute_t998_InterfacesOffsets[] = 
{
	{ &_Attribute_t716_0_0_0, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType FormerlySerializedAsAttribute_t998_0_0_0;
extern const Il2CppType FormerlySerializedAsAttribute_t998_1_0_0;
struct FormerlySerializedAsAttribute_t998;
const Il2CppTypeDefinitionMetadata FormerlySerializedAsAttribute_t998_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, FormerlySerializedAsAttribute_t998_InterfacesOffsets/* interfaceOffsets */
	, &Attribute_t384_0_0_0/* parent */
	, FormerlySerializedAsAttribute_t998_VTable/* vtableMethods */
	, FormerlySerializedAsAttribute_t998_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 1360/* fieldStart */

};
TypeInfo FormerlySerializedAsAttribute_t998_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "FormerlySerializedAsAttribute"/* name */
	, "UnityEngine.Serialization"/* namespaze */
	, FormerlySerializedAsAttribute_t998_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &FormerlySerializedAsAttribute_t998_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 788/* custom_attributes_cache */
	, &FormerlySerializedAsAttribute_t998_0_0_0/* byval_arg */
	, &FormerlySerializedAsAttribute_t998_1_0_0/* this_arg */
	, &FormerlySerializedAsAttribute_t998_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (FormerlySerializedAsAttribute_t998)/* instance_size */
	, sizeof (FormerlySerializedAsAttribute_t998)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048577/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 1/* method_count */
	, 0/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 1/* interface_offsets_count */

};
// UnityEngineInternal.TypeInferenceRules
#include "UnityEngine_UnityEngineInternal_TypeInferenceRules.h"
// Metadata Definition UnityEngineInternal.TypeInferenceRules
extern TypeInfo TypeInferenceRules_t1271_il2cpp_TypeInfo;
// UnityEngineInternal.TypeInferenceRules
#include "UnityEngine_UnityEngineInternal_TypeInferenceRulesMethodDeclarations.h"
static const MethodInfo* TypeInferenceRules_t1271_MethodInfos[] =
{
	NULL
};
static const Il2CppMethodReference TypeInferenceRules_t1271_VTable[] =
{
	&Enum_Equals_m229_MethodInfo,
	&Object_Finalize_m230_MethodInfo,
	&Enum_GetHashCode_m231_MethodInfo,
	&Enum_ToString_m232_MethodInfo,
	&Enum_ToString_m233_MethodInfo,
	&Enum_System_IConvertible_ToBoolean_m234_MethodInfo,
	&Enum_System_IConvertible_ToByte_m235_MethodInfo,
	&Enum_System_IConvertible_ToChar_m236_MethodInfo,
	&Enum_System_IConvertible_ToDateTime_m237_MethodInfo,
	&Enum_System_IConvertible_ToDecimal_m238_MethodInfo,
	&Enum_System_IConvertible_ToDouble_m239_MethodInfo,
	&Enum_System_IConvertible_ToInt16_m240_MethodInfo,
	&Enum_System_IConvertible_ToInt32_m241_MethodInfo,
	&Enum_System_IConvertible_ToInt64_m242_MethodInfo,
	&Enum_System_IConvertible_ToSByte_m243_MethodInfo,
	&Enum_System_IConvertible_ToSingle_m244_MethodInfo,
	&Enum_ToString_m245_MethodInfo,
	&Enum_System_IConvertible_ToType_m246_MethodInfo,
	&Enum_System_IConvertible_ToUInt16_m247_MethodInfo,
	&Enum_System_IConvertible_ToUInt32_m248_MethodInfo,
	&Enum_System_IConvertible_ToUInt64_m249_MethodInfo,
	&Enum_CompareTo_m250_MethodInfo,
	&Enum_GetTypeCode_m251_MethodInfo,
};
static bool TypeInferenceRules_t1271_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair TypeInferenceRules_t1271_InterfacesOffsets[] = 
{
	{ &IFormattable_t53_0_0_0, 4},
	{ &IConvertible_t54_0_0_0, 5},
	{ &IComparable_t55_0_0_0, 21},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType TypeInferenceRules_t1271_0_0_0;
extern const Il2CppType TypeInferenceRules_t1271_1_0_0;
const Il2CppTypeDefinitionMetadata TypeInferenceRules_t1271_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, TypeInferenceRules_t1271_InterfacesOffsets/* interfaceOffsets */
	, &Enum_t56_0_0_0/* parent */
	, TypeInferenceRules_t1271_VTable/* vtableMethods */
	, TypeInferenceRules_t1271_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 1361/* fieldStart */

};
TypeInfo TypeInferenceRules_t1271_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "TypeInferenceRules"/* name */
	, "UnityEngineInternal"/* namespaze */
	, TypeInferenceRules_t1271_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &Int32_t50_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &TypeInferenceRules_t1271_0_0_0/* byval_arg */
	, &TypeInferenceRules_t1271_1_0_0/* this_arg */
	, &TypeInferenceRules_t1271_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (TypeInferenceRules_t1271)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (TypeInferenceRules_t1271)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(int32_t)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 257/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, true/* valuetype */
	, false/* initialized */
	, true/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 0/* method_count */
	, 0/* property_count */
	, 5/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 23/* vtable_count */
	, 0/* interfaces_count */
	, 3/* interface_offsets_count */

};
// UnityEngineInternal.TypeInferenceRuleAttribute
#include "UnityEngine_UnityEngineInternal_TypeInferenceRuleAttribute.h"
// Metadata Definition UnityEngineInternal.TypeInferenceRuleAttribute
extern TypeInfo TypeInferenceRuleAttribute_t1272_il2cpp_TypeInfo;
// UnityEngineInternal.TypeInferenceRuleAttribute
#include "UnityEngine_UnityEngineInternal_TypeInferenceRuleAttributeMethodDeclarations.h"
extern const Il2CppType TypeInferenceRules_t1271_0_0_0;
static const ParameterInfo TypeInferenceRuleAttribute_t1272_TypeInferenceRuleAttribute__ctor_m7112_ParameterInfos[] = 
{
	{"rule", 0, 134219924, 0, &TypeInferenceRules_t1271_0_0_0},
};
extern void* RuntimeInvoker_Void_t57_Int32_t50 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngineInternal.TypeInferenceRuleAttribute::.ctor(UnityEngineInternal.TypeInferenceRules)
extern const MethodInfo TypeInferenceRuleAttribute__ctor_m7112_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&TypeInferenceRuleAttribute__ctor_m7112/* method */
	, &TypeInferenceRuleAttribute_t1272_il2cpp_TypeInfo/* declaring_type */
	, &Void_t57_0_0_0/* return_type */
	, RuntimeInvoker_Void_t57_Int32_t50/* invoker_method */
	, TypeInferenceRuleAttribute_t1272_TypeInferenceRuleAttribute__ctor_m7112_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1978/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
static const ParameterInfo TypeInferenceRuleAttribute_t1272_TypeInferenceRuleAttribute__ctor_m7113_ParameterInfos[] = 
{
	{"rule", 0, 134219925, 0, &String_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t57_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngineInternal.TypeInferenceRuleAttribute::.ctor(System.String)
extern const MethodInfo TypeInferenceRuleAttribute__ctor_m7113_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&TypeInferenceRuleAttribute__ctor_m7113/* method */
	, &TypeInferenceRuleAttribute_t1272_il2cpp_TypeInfo/* declaring_type */
	, &Void_t57_0_0_0/* return_type */
	, RuntimeInvoker_Void_t57_Object_t/* invoker_method */
	, TypeInferenceRuleAttribute_t1272_TypeInferenceRuleAttribute__ctor_m7113_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1979/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String UnityEngineInternal.TypeInferenceRuleAttribute::ToString()
extern const MethodInfo TypeInferenceRuleAttribute_ToString_m7114_MethodInfo = 
{
	"ToString"/* name */
	, (methodPointerType)&TypeInferenceRuleAttribute_ToString_m7114/* method */
	, &TypeInferenceRuleAttribute_t1272_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1980/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* TypeInferenceRuleAttribute_t1272_MethodInfos[] =
{
	&TypeInferenceRuleAttribute__ctor_m7112_MethodInfo,
	&TypeInferenceRuleAttribute__ctor_m7113_MethodInfo,
	&TypeInferenceRuleAttribute_ToString_m7114_MethodInfo,
	NULL
};
extern const MethodInfo TypeInferenceRuleAttribute_ToString_m7114_MethodInfo;
static const Il2CppMethodReference TypeInferenceRuleAttribute_t1272_VTable[] =
{
	&Attribute_Equals_m3933_MethodInfo,
	&Object_Finalize_m230_MethodInfo,
	&Attribute_GetHashCode_m3934_MethodInfo,
	&TypeInferenceRuleAttribute_ToString_m7114_MethodInfo,
};
static bool TypeInferenceRuleAttribute_t1272_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair TypeInferenceRuleAttribute_t1272_InterfacesOffsets[] = 
{
	{ &_Attribute_t716_0_0_0, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType TypeInferenceRuleAttribute_t1272_0_0_0;
extern const Il2CppType TypeInferenceRuleAttribute_t1272_1_0_0;
struct TypeInferenceRuleAttribute_t1272;
const Il2CppTypeDefinitionMetadata TypeInferenceRuleAttribute_t1272_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, TypeInferenceRuleAttribute_t1272_InterfacesOffsets/* interfaceOffsets */
	, &Attribute_t384_0_0_0/* parent */
	, TypeInferenceRuleAttribute_t1272_VTable/* vtableMethods */
	, TypeInferenceRuleAttribute_t1272_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 1366/* fieldStart */

};
TypeInfo TypeInferenceRuleAttribute_t1272_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "TypeInferenceRuleAttribute"/* name */
	, "UnityEngineInternal"/* namespaze */
	, TypeInferenceRuleAttribute_t1272_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &TypeInferenceRuleAttribute_t1272_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 789/* custom_attributes_cache */
	, &TypeInferenceRuleAttribute_t1272_0_0_0/* byval_arg */
	, &TypeInferenceRuleAttribute_t1272_1_0_0/* this_arg */
	, &TypeInferenceRuleAttribute_t1272_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (TypeInferenceRuleAttribute_t1272)/* instance_size */
	, sizeof (TypeInferenceRuleAttribute_t1272)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1056769/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 3/* method_count */
	, 0/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 1/* interface_offsets_count */

};
