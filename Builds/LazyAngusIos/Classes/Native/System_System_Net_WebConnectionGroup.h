#pragma once
#include <stdint.h>
// System.Net.ServicePoint
struct ServicePoint_t3935;
// System.String
struct String_t;
// System.Collections.ArrayList
struct ArrayList_t699;
// System.Random
struct Random_t2815;
// System.Collections.Queue
struct Queue_t4002;
// System.Object
#include "mscorlib_System_Object.h"
// System.Net.WebConnectionGroup
struct  WebConnectionGroup_t4073  : public Object_t
{
	// System.Net.ServicePoint System.Net.WebConnectionGroup::sPoint
	ServicePoint_t3935 * ___sPoint_0;
	// System.String System.Net.WebConnectionGroup::name
	String_t* ___name_1;
	// System.Collections.ArrayList System.Net.WebConnectionGroup::connections
	ArrayList_t699 * ___connections_2;
	// System.Random System.Net.WebConnectionGroup::rnd
	Random_t2815 * ___rnd_3;
	// System.Collections.Queue System.Net.WebConnectionGroup::queue
	Queue_t4002 * ___queue_4;
};
