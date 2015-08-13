#pragma once
#include <stdint.h>
// System.Security.Cryptography.TripleDES
struct TripleDES_t3932;
// Mono.Security.Cryptography.MACAlgorithm
struct MACAlgorithm_t4399;
// System.Security.Cryptography.KeyedHashAlgorithm
#include "mscorlib_System_Security_Cryptography_KeyedHashAlgorithm.h"
// System.Security.Cryptography.MACTripleDES
struct  MACTripleDES_t4693  : public KeyedHashAlgorithm_t3834
{
	// System.Security.Cryptography.TripleDES System.Security.Cryptography.MACTripleDES::tdes
	TripleDES_t3932 * ___tdes_5;
	// Mono.Security.Cryptography.MACAlgorithm System.Security.Cryptography.MACTripleDES::mac
	MACAlgorithm_t4399 * ___mac_6;
	// System.Boolean System.Security.Cryptography.MACTripleDES::m_disposed
	bool ___m_disposed_7;
};
