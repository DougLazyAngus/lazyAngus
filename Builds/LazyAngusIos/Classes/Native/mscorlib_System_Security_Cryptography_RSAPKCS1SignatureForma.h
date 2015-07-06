#pragma once
#include <stdint.h>
// System.Security.Cryptography.RSA
struct RSA_t1692;
// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t1494;
// System.Security.Cryptography.AsymmetricSignatureFormatter
#include "mscorlib_System_Security_Cryptography_AsymmetricSignatureFor.h"
// System.Security.Cryptography.RSAPKCS1SignatureFormatter
struct  RSAPKCS1SignatureFormatter_t2593  : public AsymmetricSignatureFormatter_t2178
{
	// System.Security.Cryptography.RSA System.Security.Cryptography.RSAPKCS1SignatureFormatter::rsa
	RSA_t1692 * ___rsa_0;
	// System.Security.Cryptography.HashAlgorithm System.Security.Cryptography.RSAPKCS1SignatureFormatter::hash
	HashAlgorithm_t1494 * ___hash_1;
};
