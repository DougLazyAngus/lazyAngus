#pragma once
#include <stdint.h>
// System.Net.ServicePoint
struct ServicePoint_t3886;
// System.String
struct String_t;
// System.Collections.ArrayList
struct ArrayList_t3111;
// System.Random
struct Random_t2764;
// System.Collections.Queue
struct Queue_t3954;
// System.Object
#include "mscorlib_System_Object.h"
// System.Net.WebConnectionGroup
struct  WebConnectionGroup_t4025  : public Object_t
{
	// System.Net.ServicePoint System.Net.WebConnectionGroup::sPoint
	ServicePoint_t3886 * ___sPoint_0;
	// System.String System.Net.WebConnectionGroup::name
	String_t* ___name_1;
	// System.Collections.ArrayList System.Net.WebConnectionGroup::connections
	ArrayList_t3111 * ___connections_2;
	// System.Random System.Net.WebConnectionGroup::rnd
	Random_t2764 * ___rnd_3;
	// System.Collections.Queue System.Net.WebConnectionGroup::queue
	Queue_t3954 * ___queue_4;
};
