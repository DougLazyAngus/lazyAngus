﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.WWWForm
struct WWWForm_t70;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t80;
// System.Byte[]
struct ByteU5BU5D_t36;
// System.String
struct String_t;
// System.Text.Encoding
struct Encoding_t555;

// System.Void UnityEngine.WWWForm::.ctor()
extern "C" void WWWForm__ctor_m2471 (WWWForm_t70 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWWForm::AddField(System.String,System.String)
extern "C" void WWWForm_AddField_m2473 (WWWForm_t70 * __this, String_t* ___fieldName, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWWForm::AddField(System.String,System.String,System.Text.Encoding)
extern "C" void WWWForm_AddField_m5614 (WWWForm_t70 * __this, String_t* ___fieldName, String_t* ___value, Encoding_t555 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWWForm::AddField(System.String,System.Int32)
extern "C" void WWWForm_AddField_m5615 (WWWForm_t70 * __this, String_t* ___fieldName, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWWForm::AddBinaryData(System.String,System.Byte[],System.String)
extern "C" void WWWForm_AddBinaryData_m2472 (WWWForm_t70 * __this, String_t* ___fieldName, ByteU5BU5D_t36* ___contents, String_t* ___fileName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWWForm::AddBinaryData(System.String,System.Byte[],System.String,System.String)
extern "C" void WWWForm_AddBinaryData_m5616 (WWWForm_t70 * __this, String_t* ___fieldName, ByteU5BU5D_t36* ___contents, String_t* ___fileName, String_t* ___mimeType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.String> UnityEngine.WWWForm::get_headers()
extern "C" Dictionary_2_t80 * WWWForm_get_headers_m5617 (WWWForm_t70 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] UnityEngine.WWWForm::get_data()
extern "C" ByteU5BU5D_t36* WWWForm_get_data_m2618 (WWWForm_t70 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;