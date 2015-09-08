#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Serialization.Formatters.Binary.MessageFormatter
struct MessageFormatter_t5226;
// System.IO.BinaryWriter
struct BinaryWriter_t50;
// System.Object
struct Object_t;
// System.Runtime.Remoting.Messaging.Header[]
struct HeaderU5BU5D_t5389;
// System.Runtime.Serialization.ISurrogateSelector
struct ISurrogateSelector_t5173;
// System.IO.BinaryReader
struct BinaryReader_t52;
// System.Runtime.Remoting.Messaging.HeaderHandler
struct HeaderHandler_t5390;
// System.Runtime.Serialization.Formatters.Binary.BinaryFormatter
struct BinaryFormatter_t5121;
// System.Runtime.Remoting.Messaging.IMethodCallMessage
struct IMethodCallMessage_t5429;
// System.Object[]
struct ObjectU5BU5D_t697;
// System.Type
struct Type_t;
// System.Collections.IDictionary
struct IDictionary_t700;
// System.String[]
struct StringU5BU5D_t75;
// System.String
struct String_t;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Runtime.Serialization.Formatters.FormatterAssemblyStyle
#include "mscorlib_System_Runtime_Serialization_Formatters_FormatterAs.h"
// System.Runtime.Serialization.Formatters.FormatterTypeStyle
#include "mscorlib_System_Runtime_Serialization_Formatters_FormatterTy.h"
// System.Runtime.Serialization.Formatters.Binary.BinaryElement
#include "mscorlib_System_Runtime_Serialization_Formatters_Binary_Bina_1.h"

// System.Void System.Runtime.Serialization.Formatters.Binary.MessageFormatter::WriteMethodCall(System.IO.BinaryWriter,System.Object,System.Runtime.Remoting.Messaging.Header[],System.Runtime.Serialization.ISurrogateSelector,System.Runtime.Serialization.StreamingContext,System.Runtime.Serialization.Formatters.FormatterAssemblyStyle,System.Runtime.Serialization.Formatters.FormatterTypeStyle)
extern "C" void MessageFormatter_WriteMethodCall_m23133 (Object_t * __this /* static, unused */, BinaryWriter_t50 * ___writer, Object_t * ___obj, HeaderU5BU5D_t5389* ___headers, Object_t * ___surrogateSelector, StreamingContext_t2938  ___context, int32_t ___assemblyFormat, int32_t ___typeFormat, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.MessageFormatter::WriteMethodResponse(System.IO.BinaryWriter,System.Object,System.Runtime.Remoting.Messaging.Header[],System.Runtime.Serialization.ISurrogateSelector,System.Runtime.Serialization.StreamingContext,System.Runtime.Serialization.Formatters.FormatterAssemblyStyle,System.Runtime.Serialization.Formatters.FormatterTypeStyle)
extern "C" void MessageFormatter_WriteMethodResponse_m23134 (Object_t * __this /* static, unused */, BinaryWriter_t50 * ___writer, Object_t * ___obj, HeaderU5BU5D_t5389* ___headers, Object_t * ___surrogateSelector, StreamingContext_t2938  ___context, int32_t ___assemblyFormat, int32_t ___typeFormat, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Serialization.Formatters.Binary.MessageFormatter::ReadMethodCall(System.Runtime.Serialization.Formatters.Binary.BinaryElement,System.IO.BinaryReader,System.Boolean,System.Runtime.Remoting.Messaging.HeaderHandler,System.Runtime.Serialization.Formatters.Binary.BinaryFormatter)
extern "C" Object_t * MessageFormatter_ReadMethodCall_m23135 (Object_t * __this /* static, unused */, uint8_t ___elem, BinaryReader_t52 * ___reader, bool ___hasHeaders, HeaderHandler_t5390 * ___headerHandler, BinaryFormatter_t5121 * ___formatter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Serialization.Formatters.Binary.MessageFormatter::ReadMethodResponse(System.Runtime.Serialization.Formatters.Binary.BinaryElement,System.IO.BinaryReader,System.Boolean,System.Runtime.Remoting.Messaging.HeaderHandler,System.Runtime.Remoting.Messaging.IMethodCallMessage,System.Runtime.Serialization.Formatters.Binary.BinaryFormatter)
extern "C" Object_t * MessageFormatter_ReadMethodResponse_m23136 (Object_t * __this /* static, unused */, uint8_t ___elem, BinaryReader_t52 * ___reader, bool ___hasHeaders, HeaderHandler_t5390 * ___headerHandler, Object_t * ___methodCallMessage, BinaryFormatter_t5121 * ___formatter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Serialization.Formatters.Binary.MessageFormatter::AllTypesArePrimitive(System.Object[])
extern "C" bool MessageFormatter_AllTypesArePrimitive_m23137 (Object_t * __this /* static, unused */, ObjectU5BU5D_t697* ___objects, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Serialization.Formatters.Binary.MessageFormatter::IsMethodPrimitive(System.Type)
extern "C" bool MessageFormatter_IsMethodPrimitive_m23138 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Runtime.Serialization.Formatters.Binary.MessageFormatter::GetExtraProperties(System.Collections.IDictionary,System.String[])
extern "C" ObjectU5BU5D_t697* MessageFormatter_GetExtraProperties_m23139 (Object_t * __this /* static, unused */, Object_t * ___properties, StringU5BU5D_t75* ___internalKeys, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Serialization.Formatters.Binary.MessageFormatter::IsInternalKey(System.String,System.String[])
extern "C" bool MessageFormatter_IsInternalKey_m23140 (Object_t * __this /* static, unused */, String_t* ___key, StringU5BU5D_t75* ___internalKeys, const MethodInfo* method) IL2CPP_METHOD_ATTR;
