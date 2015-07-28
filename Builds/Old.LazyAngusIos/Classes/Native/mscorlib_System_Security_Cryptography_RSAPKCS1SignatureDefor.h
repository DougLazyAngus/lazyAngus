﻿#pragma once
#include <stdint.h>
// System.Security.Cryptography.RSA
struct RSA_t1717;
// System.String
struct String_t;
// System.Security.Cryptography.AsymmetricSignatureDeformatter
#include "mscorlib_System_Security_Cryptography_AsymmetricSignatureDef.h"
// System.Security.Cryptography.RSAPKCS1SignatureDeformatter
struct  RSAPKCS1SignatureDeformatter_t2244  : public AsymmetricSignatureDeformatter_t2201
{
	// System.Security.Cryptography.RSA System.Security.Cryptography.RSAPKCS1SignatureDeformatter::rsa
	RSA_t1717 * ___rsa_0;
	// System.String System.Security.Cryptography.RSAPKCS1SignatureDeformatter::hashName
	String_t* ___hashName_1;
};