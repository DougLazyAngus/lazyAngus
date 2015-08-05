#pragma once
#include <stdint.h>
// System.Net.IPAddress
struct IPAddress_t4015;
// System.Net.EndPoint
#include "System_System_Net_EndPoint.h"
// System.Net.IPEndPoint
struct  IPEndPoint_t4002  : public EndPoint_t3949
{
	// System.Net.IPAddress System.Net.IPEndPoint::address
	IPAddress_t4015 * ___address_0;
	// System.Int32 System.Net.IPEndPoint::port
	int32_t ___port_1;
};
