#pragma once
#include <stdint.h>
// System.Net.IPAddress
struct IPAddress_t1538;
// System.Net.EndPoint
#include "System_System_Net_EndPoint.h"
// System.Net.IPEndPoint
struct  IPEndPoint_t1523  : public EndPoint_t1460
{
	// System.Net.IPAddress System.Net.IPEndPoint::address
	IPAddress_t1538 * ___address_0;
	// System.Int32 System.Net.IPEndPoint::port
	int32_t ___port_1;
};
