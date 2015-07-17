#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Collections.Generic.List`1<Facebook.FacebookDelegate>
struct List_1_t370;
// System.Collections.Generic.Dictionary`2<System.String,Facebook.FacebookDelegate>
struct Dictionary_2_t371;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// System.DateTime
#include "mscorlib_System_DateTime.h"
// Facebook.AbstractFacebook
struct  AbstractFacebook_t372  : public MonoBehaviour_t67
{
	// System.Boolean Facebook.AbstractFacebook::isInitialized
	bool ___isInitialized_4;
	// System.Boolean Facebook.AbstractFacebook::isLoggedIn
	bool ___isLoggedIn_5;
	// System.String Facebook.AbstractFacebook::userId
	String_t* ___userId_6;
	// System.String Facebook.AbstractFacebook::accessToken
	String_t* ___accessToken_7;
	// System.DateTime Facebook.AbstractFacebook::accessTokenExpiresAt
	DateTime_t245  ___accessTokenExpiresAt_8;
	// System.Boolean Facebook.AbstractFacebook::limitEventUsage
	bool ___limitEventUsage_9;
	// System.Collections.Generic.List`1<Facebook.FacebookDelegate> Facebook.AbstractFacebook::authDelegates
	List_1_t370 * ___authDelegates_10;
	// System.Int32 Facebook.AbstractFacebook::nextAsyncId
	int32_t ___nextAsyncId_11;
	// System.Collections.Generic.Dictionary`2<System.String,Facebook.FacebookDelegate> Facebook.AbstractFacebook::facebookDelegates
	Dictionary_2_t371 * ___facebookDelegates_12;
};
