#pragma once
#include <stdint.h>
// System.Security.Cryptography.RSA
struct RSA_t3748;
// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t3738;
// System.Security.Cryptography.AsymmetricSignatureFormatter
#include "mscorlib_System_Security_Cryptography_AsymmetricSignatureFor.h"
// System.Security.Cryptography.RSAPKCS1SignatureFormatter
struct  RSAPKCS1SignatureFormatter_t4646  : public AsymmetricSignatureFormatter_t3812
{
	// System.Security.Cryptography.RSA System.Security.Cryptography.RSAPKCS1SignatureFormatter::rsa
	RSA_t3748 * ___rsa_0;
	// System.Security.Cryptography.HashAlgorithm System.Security.Cryptography.RSAPKCS1SignatureFormatter::hash
	HashAlgorithm_t3738 * ___hash_1;
};
