﻿#pragma once
#include <stdint.h>
// System.EventArgs
#include "mscorlib_System_EventArgs.h"
// System.ConsoleSpecialKey
#include "mscorlib_System_ConsoleSpecialKey.h"
// System.ConsoleCancelEventArgs
struct  ConsoleCancelEventArgs_t4854  : public EventArgs_t1314
{
	// System.Boolean System.ConsoleCancelEventArgs::cancel
	bool ___cancel_1;
	// System.ConsoleSpecialKey System.ConsoleCancelEventArgs::specialKey
	int32_t ___specialKey_2;
};