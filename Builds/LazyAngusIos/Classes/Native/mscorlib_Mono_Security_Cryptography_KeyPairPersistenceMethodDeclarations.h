﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Cryptography.KeyPairPersistence
struct KeyPairPersistence_t4399;
// System.String
struct String_t;
// System.Security.Cryptography.CspParameters
struct CspParameters_t3918;

// System.Void Mono.Security.Cryptography.KeyPairPersistence::.ctor(System.Security.Cryptography.CspParameters)
extern "C" void KeyPairPersistence__ctor_m16555 (KeyPairPersistence_t4399 * __this, CspParameters_t3918 * ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.KeyPairPersistence::.ctor(System.Security.Cryptography.CspParameters,System.String)
extern "C" void KeyPairPersistence__ctor_m16556 (KeyPairPersistence_t4399 * __this, CspParameters_t3918 * ___parameters, String_t* ___keyPair, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.KeyPairPersistence::.cctor()
extern "C" void KeyPairPersistence__cctor_m16557 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Cryptography.KeyPairPersistence::get_Filename()
extern "C" String_t* KeyPairPersistence_get_Filename_m16558 (KeyPairPersistence_t4399 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Cryptography.KeyPairPersistence::get_KeyValue()
extern "C" String_t* KeyPairPersistence_get_KeyValue_m16559 (KeyPairPersistence_t4399 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.KeyPairPersistence::set_KeyValue(System.String)
extern "C" void KeyPairPersistence_set_KeyValue_m16560 (KeyPairPersistence_t4399 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::Load()
extern "C" bool KeyPairPersistence_Load_m16561 (KeyPairPersistence_t4399 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.KeyPairPersistence::Save()
extern "C" void KeyPairPersistence_Save_m16562 (KeyPairPersistence_t4399 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.KeyPairPersistence::Remove()
extern "C" void KeyPairPersistence_Remove_m16563 (KeyPairPersistence_t4399 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Cryptography.KeyPairPersistence::get_UserPath()
extern "C" String_t* KeyPairPersistence_get_UserPath_m16564 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Cryptography.KeyPairPersistence::get_MachinePath()
extern "C" String_t* KeyPairPersistence_get_MachinePath_m16565 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::_CanSecure(System.String)
extern "C" bool KeyPairPersistence__CanSecure_m16566 (Object_t * __this /* static, unused */, String_t* ___root, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::_ProtectUser(System.String)
extern "C" bool KeyPairPersistence__ProtectUser_m16567 (Object_t * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::_ProtectMachine(System.String)
extern "C" bool KeyPairPersistence__ProtectMachine_m16568 (Object_t * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::_IsUserProtected(System.String)
extern "C" bool KeyPairPersistence__IsUserProtected_m16569 (Object_t * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::_IsMachineProtected(System.String)
extern "C" bool KeyPairPersistence__IsMachineProtected_m16570 (Object_t * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::CanSecure(System.String)
extern "C" bool KeyPairPersistence_CanSecure_m16571 (Object_t * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::ProtectUser(System.String)
extern "C" bool KeyPairPersistence_ProtectUser_m16572 (Object_t * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::ProtectMachine(System.String)
extern "C" bool KeyPairPersistence_ProtectMachine_m16573 (Object_t * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::IsUserProtected(System.String)
extern "C" bool KeyPairPersistence_IsUserProtected_m16574 (Object_t * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::IsMachineProtected(System.String)
extern "C" bool KeyPairPersistence_IsMachineProtected_m16575 (Object_t * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::get_CanChange()
extern "C" bool KeyPairPersistence_get_CanChange_m16576 (KeyPairPersistence_t4399 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::get_UseDefaultKeyContainer()
extern "C" bool KeyPairPersistence_get_UseDefaultKeyContainer_m16577 (KeyPairPersistence_t4399 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::get_UseMachineKeyStore()
extern "C" bool KeyPairPersistence_get_UseMachineKeyStore_m16578 (KeyPairPersistence_t4399 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Cryptography.KeyPairPersistence::get_ContainerName()
extern "C" String_t* KeyPairPersistence_get_ContainerName_m16579 (KeyPairPersistence_t4399 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.CspParameters Mono.Security.Cryptography.KeyPairPersistence::Copy(System.Security.Cryptography.CspParameters)
extern "C" CspParameters_t3918 * KeyPairPersistence_Copy_m16580 (KeyPairPersistence_t4399 * __this, CspParameters_t3918 * ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.KeyPairPersistence::FromXml(System.String)
extern "C" void KeyPairPersistence_FromXml_m16581 (KeyPairPersistence_t4399 * __this, String_t* ___xml, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Cryptography.KeyPairPersistence::ToXml()
extern "C" String_t* KeyPairPersistence_ToXml_m16582 (KeyPairPersistence_t4399 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
