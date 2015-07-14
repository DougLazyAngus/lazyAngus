#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// AN_BillingProxy
struct AN_BillingProxy_t95;
// System.String
struct String_t;
// System.Object[]
struct ObjectU5BU5D_t531;

// System.Void AN_BillingProxy::.ctor()
extern "C" void AN_BillingProxy__ctor_m429 (AN_BillingProxy_t95 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_BillingProxy::CallActivityFunction(System.String,System.Object[])
extern "C" void AN_BillingProxy_CallActivityFunction_m430 (Object_t * __this /* static, unused */, String_t* ___methodName, ObjectU5BU5D_t531* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_BillingProxy::Connect(System.String,System.String)
extern "C" void AN_BillingProxy_Connect_m431 (Object_t * __this /* static, unused */, String_t* ___ids, String_t* ___base64EncodedPublicKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_BillingProxy::RetrieveProducDetails()
extern "C" void AN_BillingProxy_RetrieveProducDetails_m432 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_BillingProxy::Consume(System.String)
extern "C" void AN_BillingProxy_Consume_m433 (Object_t * __this /* static, unused */, String_t* ___SKU, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_BillingProxy::Purchase(System.String,System.String)
extern "C" void AN_BillingProxy_Purchase_m434 (Object_t * __this /* static, unused */, String_t* ___SKU, String_t* ___developerPayload, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_BillingProxy::Subscribe(System.String,System.String)
extern "C" void AN_BillingProxy_Subscribe_m435 (Object_t * __this /* static, unused */, String_t* ___SKU, String_t* ___developerPayload, const MethodInfo* method) IL2CPP_METHOD_ATTR;
