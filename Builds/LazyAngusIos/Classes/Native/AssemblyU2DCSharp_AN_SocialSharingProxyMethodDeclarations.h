#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// AN_SocialSharingProxy
struct AN_SocialSharingProxy_t176;
// System.String
struct String_t;
// System.Object[]
struct ObjectU5BU5D_t634;

// System.Void AN_SocialSharingProxy::.ctor()
extern "C" void AN_SocialSharingProxy__ctor_m1199 (AN_SocialSharingProxy_t176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_SocialSharingProxy::CallActivityFunction(System.String,System.Object[])
extern "C" void AN_SocialSharingProxy_CallActivityFunction_m1200 (Object_t * __this /* static, unused */, String_t* ___methodName, ObjectU5BU5D_t634* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_SocialSharingProxy::StartGooglePlusShareIntent(System.String,System.String)
extern "C" void AN_SocialSharingProxy_StartGooglePlusShareIntent_m1201 (Object_t * __this /* static, unused */, String_t* ___text, String_t* ___media, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_SocialSharingProxy::StartShareIntent(System.String,System.String,System.String,System.String)
extern "C" void AN_SocialSharingProxy_StartShareIntent_m1202 (Object_t * __this /* static, unused */, String_t* ___caption, String_t* ___message, String_t* ___subject, String_t* ___filters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_SocialSharingProxy::StartShareIntent(System.String,System.String,System.String,System.String,System.String)
extern "C" void AN_SocialSharingProxy_StartShareIntent_m1203 (Object_t * __this /* static, unused */, String_t* ___caption, String_t* ___message, String_t* ___subject, String_t* ___media, String_t* ___filters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_SocialSharingProxy::SendMailWithImage(System.String,System.String,System.String,System.String,System.String)
extern "C" void AN_SocialSharingProxy_SendMailWithImage_m1204 (Object_t * __this /* static, unused */, String_t* ___caption, String_t* ___message, String_t* ___subject, String_t* ___email, String_t* ___media, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_SocialSharingProxy::SendMail(System.String,System.String,System.String,System.String)
extern "C" void AN_SocialSharingProxy_SendMail_m1205 (Object_t * __this /* static, unused */, String_t* ___caption, String_t* ___message, String_t* ___subject, String_t* ___email, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_SocialSharingProxy::InstagramPostImage(System.String,System.String)
extern "C" void AN_SocialSharingProxy_InstagramPostImage_m1206 (Object_t * __this /* static, unused */, String_t* ___data, String_t* ___cpation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
