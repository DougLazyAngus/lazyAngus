#pragma once
#include <stdint.h>
// System.Net.IPAddress
struct IPAddress_t2049;
// System.Net.EndPoint
#include "System_System_Net_EndPoint.h"
// System.Net.IPEndPoint
struct  IPEndPoint_t2035  : public EndPoint_t1979
{
	// System.Net.IPAddress System.Net.IPEndPoint::address
	IPAddress_t2049 * ___address_0;
	// System.Int32 System.Net.IPEndPoint::port
	int32_t ___port_1;
};
