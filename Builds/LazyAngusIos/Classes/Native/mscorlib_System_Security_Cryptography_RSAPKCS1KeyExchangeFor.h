#pragma once
#include <stdint.h>
// System.Security.Cryptography.RSA
struct RSA_t3757;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t3731;
// System.Security.Cryptography.AsymmetricKeyExchangeFormatter
#include "mscorlib_System_Security_Cryptography_AsymmetricKeyExchangeF.h"
// System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter
struct  RSAPKCS1KeyExchangeFormatter_t3894  : public AsymmetricKeyExchangeFormatter_t4635
{
	// System.Security.Cryptography.RSA System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter::rsa
	RSA_t3757 * ___rsa_0;
	// System.Security.Cryptography.RandomNumberGenerator System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter::random
	RandomNumberGenerator_t3731 * ___random_1;
};
