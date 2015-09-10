#pragma once
#include <stdint.h>
// System.Security.Cryptography.DSA
struct DSA_t3160;
// System.Security.Cryptography.AsymmetricSignatureDeformatter
#include "mscorlib_System_Security_Cryptography_AsymmetricSignatureDef.h"
// System.Security.Cryptography.DSASignatureDeformatter
struct  DSASignatureDeformatter_t3277  : public AsymmetricSignatureDeformatter_t3217
{
	// System.Security.Cryptography.DSA System.Security.Cryptography.DSASignatureDeformatter::dsa
	DSA_t3160 * ___dsa_0;
};
