#pragma once
#include <stdint.h>
// System.Collections.Generic.RBTree
struct RBTree_t4209;
// System.Collections.Generic.Stack`1<System.Collections.Generic.RBTree/Node>
struct Stack_1_t4210;
// System.ValueType
#include "mscorlib_System_ValueType.h"
// System.Collections.Generic.RBTree/NodeEnumerator
struct  NodeEnumerator_t4211 
{
	// System.Collections.Generic.RBTree System.Collections.Generic.RBTree/NodeEnumerator::tree
	RBTree_t4209 * ___tree_0;
	// System.UInt32 System.Collections.Generic.RBTree/NodeEnumerator::version
	uint32_t ___version_1;
	// System.Collections.Generic.Stack`1<System.Collections.Generic.RBTree/Node> System.Collections.Generic.RBTree/NodeEnumerator::pennants
	Stack_1_t4210 * ___pennants_2;
};
