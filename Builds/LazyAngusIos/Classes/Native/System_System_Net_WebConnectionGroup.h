#pragma once
#include <stdint.h>
// System.Net.ServicePoint
struct ServicePoint_t3888;
// System.String
struct String_t;
// System.Collections.ArrayList
struct ArrayList_t3113;
// System.Random
struct Random_t2766;
// System.Collections.Queue
struct Queue_t3956;
// System.Object
#include "mscorlib_System_Object.h"
// System.Net.WebConnectionGroup
struct  WebConnectionGroup_t4027  : public Object_t
{
	// System.Net.ServicePoint System.Net.WebConnectionGroup::sPoint
	ServicePoint_t3888 * ___sPoint_0;
	// System.String System.Net.WebConnectionGroup::name
	String_t* ___name_1;
	// System.Collections.ArrayList System.Net.WebConnectionGroup::connections
	ArrayList_t3113 * ___connections_2;
	// System.Random System.Net.WebConnectionGroup::rnd
	Random_t2766 * ___rnd_3;
	// System.Collections.Queue System.Net.WebConnectionGroup::queue
	Queue_t3956 * ___queue_4;
};
