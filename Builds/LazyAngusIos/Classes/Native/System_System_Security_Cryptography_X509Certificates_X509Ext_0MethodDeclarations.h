#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.X509Certificates.X509ExtensionCollection
struct X509ExtensionCollection_t4091;
// System.Object
struct Object_t;
// System.Security.Cryptography.X509Certificates.X509Extension
struct X509Extension_t4090;
// System.String
struct String_t;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t3814;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Security.Cryptography.X509Certificates.X509ExtensionEnumerator
struct X509ExtensionEnumerator_t4104;

// System.Void System.Security.Cryptography.X509Certificates.X509ExtensionCollection::.ctor(Mono.Security.X509.X509Certificate)
extern "C" void X509ExtensionCollection__ctor_m14521 (X509ExtensionCollection_t4091 * __this, X509Certificate_t3814 * ___cert, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509ExtensionCollection::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void X509ExtensionCollection_System_Collections_ICollection_CopyTo_m14522 (X509ExtensionCollection_t4091 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Security.Cryptography.X509Certificates.X509ExtensionCollection::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * X509ExtensionCollection_System_Collections_IEnumerable_GetEnumerator_m14523 (X509ExtensionCollection_t4091 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.X509Certificates.X509ExtensionCollection::get_Count()
extern "C" int32_t X509ExtensionCollection_get_Count_m14524 (X509ExtensionCollection_t4091 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509ExtensionCollection::get_IsSynchronized()
extern "C" bool X509ExtensionCollection_get_IsSynchronized_m14525 (X509ExtensionCollection_t4091 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Security.Cryptography.X509Certificates.X509ExtensionCollection::get_SyncRoot()
extern "C" Object_t * X509ExtensionCollection_get_SyncRoot_m14526 (X509ExtensionCollection_t4091 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Extension System.Security.Cryptography.X509Certificates.X509ExtensionCollection::get_Item(System.String)
extern "C" X509Extension_t4090 * X509ExtensionCollection_get_Item_m14527 (X509ExtensionCollection_t4091 * __this, String_t* ___oid, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509ExtensionEnumerator System.Security.Cryptography.X509Certificates.X509ExtensionCollection::GetEnumerator()
extern "C" X509ExtensionEnumerator_t4104 * X509ExtensionCollection_GetEnumerator_m14528 (X509ExtensionCollection_t4091 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
