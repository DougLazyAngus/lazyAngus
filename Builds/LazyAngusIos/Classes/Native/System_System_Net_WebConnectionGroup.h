#pragma once
#include <stdint.h>
// System.Net.ServicePoint
struct ServicePoint_t1542;
// System.String
struct String_t;
// System.Collections.ArrayList
struct ArrayList_t1449;
// System.Random
struct Random_t1131;
// System.Collections.Queue
struct Queue_t1489;
// System.Object
#include "mscorlib_System_Object.h"
// System.Net.WebConnectionGroup
struct  WebConnectionGroup_t1577  : public Object_t
{
	// System.Net.ServicePoint System.Net.WebConnectionGroup::sPoint
	ServicePoint_t1542 * ___sPoint_0;
	// System.String System.Net.WebConnectionGroup::name
	String_t* ___name_1;
	// System.Collections.ArrayList System.Net.WebConnectionGroup::connections
	ArrayList_t1449 * ___connections_2;
	// System.Random System.Net.WebConnectionGroup::rnd
	Random_t1131 * ___rnd_3;
	// System.Collections.Queue System.Net.WebConnectionGroup::queue
	Queue_t1489 * ___queue_4;
};
