#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.X509.X509Crl/X509CrlEntry
struct X509CrlEntry_t3818;
// System.Byte[]
struct ByteU5BU5D_t66;
// Mono.Security.X509.X509ExtensionCollection
struct X509ExtensionCollection_t3812;
// Mono.Security.ASN1
struct ASN1_t3784;
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void Mono.Security.X509.X509Crl/X509CrlEntry::.ctor(Mono.Security.ASN1)
extern "C" void X509CrlEntry__ctor_m12538 (X509CrlEntry_t3818 * __this, ASN1_t3784 * ___entry, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Crl/X509CrlEntry::get_SerialNumber()
extern "C" ByteU5BU5D_t66* X509CrlEntry_get_SerialNumber_m12539 (X509CrlEntry_t3818 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Mono.Security.X509.X509Crl/X509CrlEntry::get_RevocationDate()
extern "C" DateTime_t287  X509CrlEntry_get_RevocationDate_m12540 (X509CrlEntry_t3818 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509ExtensionCollection Mono.Security.X509.X509Crl/X509CrlEntry::get_Extensions()
extern "C" X509ExtensionCollection_t3812 * X509CrlEntry_get_Extensions_m12541 (X509CrlEntry_t3818 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
