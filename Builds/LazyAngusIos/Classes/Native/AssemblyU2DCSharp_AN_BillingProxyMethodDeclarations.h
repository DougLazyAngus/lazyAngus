#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// AN_BillingProxy
struct AN_BillingProxy_t122;
// System.String
struct String_t;
// System.Object[]
struct ObjectU5BU5D_t581;

// System.Void AN_BillingProxy::.ctor()
extern "C" void AN_BillingProxy__ctor_m785 (AN_BillingProxy_t122 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_BillingProxy::CallActivityFunction(System.String,System.Object[])
extern "C" void AN_BillingProxy_CallActivityFunction_m786 (Object_t * __this /* static, unused */, String_t* ___methodName, ObjectU5BU5D_t581* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_BillingProxy::Connect(System.String,System.String)
extern "C" void AN_BillingProxy_Connect_m787 (Object_t * __this /* static, unused */, String_t* ___ids, String_t* ___base64EncodedPublicKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_BillingProxy::RetrieveProducDetails()
extern "C" void AN_BillingProxy_RetrieveProducDetails_m788 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_BillingProxy::Consume(System.String)
extern "C" void AN_BillingProxy_Consume_m789 (Object_t * __this /* static, unused */, String_t* ___SKU, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_BillingProxy::Purchase(System.String,System.String)
extern "C" void AN_BillingProxy_Purchase_m790 (Object_t * __this /* static, unused */, String_t* ___SKU, String_t* ___developerPayload, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_BillingProxy::Subscribe(System.String,System.String)
extern "C" void AN_BillingProxy_Subscribe_m791 (Object_t * __this /* static, unused */, String_t* ___SKU, String_t* ___developerPayload, const MethodInfo* method) IL2CPP_METHOD_ATTR;
