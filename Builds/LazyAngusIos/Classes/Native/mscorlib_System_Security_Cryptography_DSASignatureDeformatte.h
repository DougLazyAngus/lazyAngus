#pragma once
#include <stdint.h>
// System.Security.Cryptography.DSA
struct DSA_t3761;
// System.Security.Cryptography.AsymmetricSignatureDeformatter
#include "mscorlib_System_Security_Cryptography_AsymmetricSignatureDef.h"
// System.Security.Cryptography.DSASignatureDeformatter
struct  DSASignatureDeformatter_t3875  : public AsymmetricSignatureDeformatter_t3817
{
	// System.Security.Cryptography.DSA System.Security.Cryptography.DSASignatureDeformatter::dsa
	DSA_t3761 * ___dsa_0;
};
