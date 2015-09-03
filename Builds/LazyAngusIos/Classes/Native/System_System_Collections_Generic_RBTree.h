#pragma once
#include <stdint.h>
// System.Collections.Generic.RBTree/Node
struct Node_t4204;
// System.Object
struct Object_t;
// System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>
struct List_1_t4208;
// System.Object
#include "mscorlib_System_Object.h"
// System.Collections.Generic.RBTree
struct  RBTree_t4205  : public Object_t
{
	// System.Collections.Generic.RBTree/Node System.Collections.Generic.RBTree::root
	Node_t4204 * ___root_0;
	// System.Object System.Collections.Generic.RBTree::hlp
	Object_t * ___hlp_1;
	// System.UInt32 System.Collections.Generic.RBTree::version
	uint32_t ___version_2;
};
struct RBTree_t4205_ThreadStaticFields{
	// System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node> System.Collections.Generic.RBTree::cached_path
	List_1_t4208 * ___cached_path_3;
};
