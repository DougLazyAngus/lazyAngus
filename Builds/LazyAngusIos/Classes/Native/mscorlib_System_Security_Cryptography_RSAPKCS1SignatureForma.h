#pragma once
#include <stdint.h>
// System.Security.Cryptography.RSA
struct RSA_t3143;
// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t3133;
// System.Security.Cryptography.AsymmetricSignatureFormatter
#include "mscorlib_System_Security_Cryptography_AsymmetricSignatureFor.h"
// System.Security.Cryptography.RSAPKCS1SignatureFormatter
struct  RSAPKCS1SignatureFormatter_t5272  : public AsymmetricSignatureFormatter_t3208
{
	// System.Security.Cryptography.RSA System.Security.Cryptography.RSAPKCS1SignatureFormatter::rsa
	RSA_t3143 * ___rsa_0;
	// System.Security.Cryptography.HashAlgorithm System.Security.Cryptography.RSAPKCS1SignatureFormatter::hash
	HashAlgorithm_t3133 * ___hash_1;
};
