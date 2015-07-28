#pragma once
#include <stdint.h>
// System.Security.Cryptography.RSA
struct RSA_t3748;
// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t3738;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t223;
// System.Security.Cryptography.AsymmetricSignatureFormatter
#include "mscorlib_System_Security_Cryptography_AsymmetricSignatureFor.h"
// Mono.Security.Protocol.Tls.RSASslSignatureFormatter
struct  RSASslSignatureFormatter_t3811  : public AsymmetricSignatureFormatter_t3812
{
	// System.Security.Cryptography.RSA Mono.Security.Protocol.Tls.RSASslSignatureFormatter::key
	RSA_t3748 * ___key_0;
	// System.Security.Cryptography.HashAlgorithm Mono.Security.Protocol.Tls.RSASslSignatureFormatter::hash
	HashAlgorithm_t3738 * ___hash_1;
};
struct RSASslSignatureFormatter_t3811_StaticFields{
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.Protocol.Tls.RSASslSignatureFormatter::<>f__switch$map16
	Dictionary_2_t223 * ___U3CU3Ef__switchU24map16_2;
};
