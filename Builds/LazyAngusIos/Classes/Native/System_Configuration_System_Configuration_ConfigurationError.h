#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Configuration.ConfigurationException
#include "System_System_Configuration_ConfigurationException.h"
// System.Configuration.ConfigurationErrorsException
struct  ConfigurationErrorsException_t3319  : public ConfigurationException_t3320
{
	// System.String System.Configuration.ConfigurationErrorsException::filename
	String_t* ___filename_13;
	// System.Int32 System.Configuration.ConfigurationErrorsException::line
	int32_t ___line_14;
};
