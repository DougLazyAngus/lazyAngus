#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t66;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t4795;
// Mono.Security.ASN1
struct ASN1_t4790;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t4805;
// Mono.Security.X509.X509Chain
struct X509Chain_t4806;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t223;
// Mono.Security.Authenticode.AuthenticodeBase
#include "mscorlib_Mono_Security_Authenticode_AuthenticodeBase.h"
// System.DateTime
#include "mscorlib_System_DateTime.h"
// Mono.Security.Authenticode.AuthenticodeDeformatter
struct  AuthenticodeDeformatter_t4807  : public AuthenticodeBase_t4804
{
	// System.String Mono.Security.Authenticode.AuthenticodeDeformatter::filename
	String_t* ___filename_8;
	// System.Byte[] Mono.Security.Authenticode.AuthenticodeDeformatter::hash
	ByteU5BU5D_t66* ___hash_9;
	// Mono.Security.X509.X509CertificateCollection Mono.Security.Authenticode.AuthenticodeDeformatter::coll
	X509CertificateCollection_t4795 * ___coll_10;
	// Mono.Security.ASN1 Mono.Security.Authenticode.AuthenticodeDeformatter::signedHash
	ASN1_t4790 * ___signedHash_11;
	// System.DateTime Mono.Security.Authenticode.AuthenticodeDeformatter::timestamp
	DateTime_t287  ___timestamp_12;
	// Mono.Security.X509.X509Certificate Mono.Security.Authenticode.AuthenticodeDeformatter::signingCertificate
	X509Certificate_t4805 * ___signingCertificate_13;
	// System.Int32 Mono.Security.Authenticode.AuthenticodeDeformatter::reason
	int32_t ___reason_14;
	// System.Boolean Mono.Security.Authenticode.AuthenticodeDeformatter::trustedRoot
	bool ___trustedRoot_15;
	// System.Boolean Mono.Security.Authenticode.AuthenticodeDeformatter::trustedTimestampRoot
	bool ___trustedTimestampRoot_16;
	// System.Byte[] Mono.Security.Authenticode.AuthenticodeDeformatter::entry
	ByteU5BU5D_t66* ___entry_17;
	// Mono.Security.X509.X509Chain Mono.Security.Authenticode.AuthenticodeDeformatter::signerChain
	X509Chain_t4806 * ___signerChain_18;
	// Mono.Security.X509.X509Chain Mono.Security.Authenticode.AuthenticodeDeformatter::timestampChain
	X509Chain_t4806 * ___timestampChain_19;
};
struct AuthenticodeDeformatter_t4807_StaticFields{
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.Authenticode.AuthenticodeDeformatter::<>f__switch$map7
	Dictionary_2_t223 * ___U3CU3Ef__switchU24map7_20;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.Authenticode.AuthenticodeDeformatter::<>f__switch$map8
	Dictionary_2_t223 * ___U3CU3Ef__switchU24map8_21;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.Authenticode.AuthenticodeDeformatter::<>f__switch$map9
	Dictionary_2_t223 * ___U3CU3Ef__switchU24map9_22;
};
