#pragma once
#include <stdint.h>
// System.Collections.Generic.RBTree/Node
struct Node_t3952;
// System.Object
struct Object_t;
// System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>
struct List_1_t3956;
// System.Object
#include "mscorlib_System_Object.h"
// System.Collections.Generic.RBTree
struct  RBTree_t3953  : public Object_t
{
	// System.Collections.Generic.RBTree/Node System.Collections.Generic.RBTree::root
	Node_t3952 * ___root_0;
	// System.Object System.Collections.Generic.RBTree::hlp
	Object_t * ___hlp_1;
	// System.UInt32 System.Collections.Generic.RBTree::version
	uint32_t ___version_2;
};
struct RBTree_t3953_ThreadStaticFields{
	// System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node> System.Collections.Generic.RBTree::cached_path
	List_1_t3956 * ___cached_path_3;
};
