﻿#pragma once
#include <stdint.h>
// System.String
struct String_t;
// GPScoreCollection
struct GPScoreCollection_t153;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t154;
// System.Object
#include "mscorlib_System_Object.h"
// GPLeaderBoard
struct  GPLeaderBoard_t155  : public Object_t
{
	// System.String GPLeaderBoard::_id
	String_t* ____id_0;
	// System.String GPLeaderBoard::_name
	String_t* ____name_1;
	// GPScoreCollection GPLeaderBoard::SocsialCollection
	GPScoreCollection_t153 * ___SocsialCollection_2;
	// GPScoreCollection GPLeaderBoard::GlobalCollection
	GPScoreCollection_t153 * ___GlobalCollection_3;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> GPLeaderBoard::currentPlayerRank
	Dictionary_2_t154 * ___currentPlayerRank_4;
};
