﻿#pragma once
#include <stdint.h>
// System.Net.IPAddress
struct IPAddress_t1571;
// System.Net.EndPoint
#include "System_System_Net_EndPoint.h"
// System.Net.IPEndPoint
struct  IPEndPoint_t1556  : public EndPoint_t1493
{
	// System.Net.IPAddress System.Net.IPEndPoint::address
	IPAddress_t1571 * ___address_0;
	// System.Int32 System.Net.IPEndPoint::port
	int32_t ___port_1;
};
