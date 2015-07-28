﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.WWWForm
struct WWWForm_t112;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t122;
// System.Byte[]
struct ByteU5BU5D_t66;
// System.String
struct String_t;
// System.Text.Encoding
struct Encoding_t682;

// System.Void UnityEngine.WWWForm::.ctor()
extern "C" void WWWForm__ctor_m3409 (WWWForm_t112 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWWForm::AddField(System.String,System.String)
extern "C" void WWWForm_AddField_m3411 (WWWForm_t112 * __this, String_t* ___fieldName, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWWForm::AddField(System.String,System.String,System.Text.Encoding)
extern "C" void WWWForm_AddField_m8974 (WWWForm_t112 * __this, String_t* ___fieldName, String_t* ___value, Encoding_t682 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWWForm::AddField(System.String,System.Int32)
extern "C" void WWWForm_AddField_m8975 (WWWForm_t112 * __this, String_t* ___fieldName, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWWForm::AddBinaryData(System.String,System.Byte[],System.String)
extern "C" void WWWForm_AddBinaryData_m3410 (WWWForm_t112 * __this, String_t* ___fieldName, ByteU5BU5D_t66* ___contents, String_t* ___fileName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWWForm::AddBinaryData(System.String,System.Byte[],System.String,System.String)
extern "C" void WWWForm_AddBinaryData_m8976 (WWWForm_t112 * __this, String_t* ___fieldName, ByteU5BU5D_t66* ___contents, String_t* ___fileName, String_t* ___mimeType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.String> UnityEngine.WWWForm::get_headers()
extern "C" Dictionary_2_t122 * WWWForm_get_headers_m8977 (WWWForm_t112 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] UnityEngine.WWWForm::get_data()
extern "C" ByteU5BU5D_t66* WWWForm_get_data_m3609 (WWWForm_t112 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
