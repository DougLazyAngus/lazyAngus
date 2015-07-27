#pragma once
#include <stdint.h>
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t1725;
// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t1741;
// System.Net.DigestHeaderParser
struct DigestHeaderParser_t2011;
// System.String
struct String_t;
// System.Object
#include "mscorlib_System_Object.h"
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.Net.DigestSession
struct  DigestSession_t2012  : public Object_t
{
	// System.DateTime System.Net.DigestSession::lastUse
	DateTime_t245  ___lastUse_1;
	// System.Int32 System.Net.DigestSession::_nc
	int32_t ____nc_2;
	// System.Security.Cryptography.HashAlgorithm System.Net.DigestSession::hash
	HashAlgorithm_t1741 * ___hash_3;
	// System.Net.DigestHeaderParser System.Net.DigestSession::parser
	DigestHeaderParser_t2011 * ___parser_4;
	// System.String System.Net.DigestSession::_cnonce
	String_t* ____cnonce_5;
};
struct DigestSession_t2012_StaticFields{
	// System.Security.Cryptography.RandomNumberGenerator System.Net.DigestSession::rng
	RandomNumberGenerator_t1725 * ___rng_0;
};
