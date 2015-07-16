#pragma once
#include <stdint.h>
// System.Security.Cryptography.RSA
struct RSA_t1717;
// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t1519;
// System.Security.Cryptography.AsymmetricSignatureFormatter
#include "mscorlib_System_Security_Cryptography_AsymmetricSignatureFor.h"
// System.Security.Cryptography.RSAPKCS1SignatureFormatter
struct  RSAPKCS1SignatureFormatter_t2618  : public AsymmetricSignatureFormatter_t2203
{
	// System.Security.Cryptography.RSA System.Security.Cryptography.RSAPKCS1SignatureFormatter::rsa
	RSA_t1717 * ___rsa_0;
	// System.Security.Cryptography.HashAlgorithm System.Security.Cryptography.RSAPKCS1SignatureFormatter::hash
	HashAlgorithm_t1519 * ___hash_1;
};
