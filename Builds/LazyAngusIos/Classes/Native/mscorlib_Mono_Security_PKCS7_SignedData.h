#pragma once
#include <stdint.h>
// System.String
struct String_t;
// Mono.Security.PKCS7/ContentInfo
struct ContentInfo_t4783;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t4785;
// System.Collections.ArrayList
struct ArrayList_t713;
// Mono.Security.PKCS7/SignerInfo
struct SignerInfo_t4786;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t223;
// System.Object
#include "mscorlib_System_Object.h"
// Mono.Security.PKCS7/SignedData
struct  SignedData_t4787  : public Object_t
{
	// System.Byte Mono.Security.PKCS7/SignedData::version
	uint8_t ___version_0;
	// System.String Mono.Security.PKCS7/SignedData::hashAlgorithm
	String_t* ___hashAlgorithm_1;
	// Mono.Security.PKCS7/ContentInfo Mono.Security.PKCS7/SignedData::contentInfo
	ContentInfo_t4783 * ___contentInfo_2;
	// Mono.Security.X509.X509CertificateCollection Mono.Security.PKCS7/SignedData::certs
	X509CertificateCollection_t4785 * ___certs_3;
	// System.Collections.ArrayList Mono.Security.PKCS7/SignedData::crls
	ArrayList_t713 * ___crls_4;
	// Mono.Security.PKCS7/SignerInfo Mono.Security.PKCS7/SignedData::signerInfo
	SignerInfo_t4786 * ___signerInfo_5;
	// System.Boolean Mono.Security.PKCS7/SignedData::mda
	bool ___mda_6;
};
struct SignedData_t4787_StaticFields{
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.PKCS7/SignedData::<>f__switch$map5
	Dictionary_2_t223 * ___U3CU3Ef__switchU24map5_7;
};
