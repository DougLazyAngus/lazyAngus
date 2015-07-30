#pragma once
#include <stdint.h>
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t3729;
// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t3745;
// System.Net.DigestHeaderParser
struct DigestHeaderParser_t3977;
// System.String
struct String_t;
// System.Object
#include "mscorlib_System_Object.h"
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.Net.DigestSession
struct  DigestSession_t3978  : public Object_t
{
	// System.DateTime System.Net.DigestSession::lastUse
	DateTime_t287  ___lastUse_1;
	// System.Int32 System.Net.DigestSession::_nc
	int32_t ____nc_2;
	// System.Security.Cryptography.HashAlgorithm System.Net.DigestSession::hash
	HashAlgorithm_t3745 * ___hash_3;
	// System.Net.DigestHeaderParser System.Net.DigestSession::parser
	DigestHeaderParser_t3977 * ___parser_4;
	// System.String System.Net.DigestSession::_cnonce
	String_t* ____cnonce_5;
};
struct DigestSession_t3978_StaticFields{
	// System.Security.Cryptography.RandomNumberGenerator System.Net.DigestSession::rng
	RandomNumberGenerator_t3729 * ___rng_0;
};
