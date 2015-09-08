#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.RBTree
struct RBTree_t4209;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.RBTree/Node>
struct IEnumerator_1_t4551;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>
struct List_1_t4212;
// System.Collections.Generic.RBTree/Node
struct Node_t4208;
// System.Collections.Generic.RBTree/NodeEnumerator
#include "System_System_Collections_Generic_RBTree_NodeEnumerator.h"

// System.Void System.Collections.Generic.RBTree::.ctor(System.Object)
extern "C" void RBTree__ctor_m15609 (RBTree_t4209 * __this, Object_t * ___hlp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.RBTree/Node> System.Collections.Generic.RBTree::System.Collections.Generic.IEnumerable<System.Collections.Generic.RBTree.Node>.GetEnumerator()
extern "C" Object_t* RBTree_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_RBTree_NodeU3E_GetEnumerator_m15610 (RBTree_t4209 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.Generic.RBTree::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * RBTree_System_Collections_IEnumerable_GetEnumerator_m15611 (RBTree_t4209 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node> System.Collections.Generic.RBTree::alloc_path()
extern "C" List_1_t4212 * RBTree_alloc_path_m15612 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.RBTree::release_path(System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>)
extern "C" void RBTree_release_path_m15613 (Object_t * __this /* static, unused */, List_1_t4212 * ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.RBTree::Clear()
extern "C" void RBTree_Clear_m15614 (RBTree_t4209 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.RBTree::get_Count()
extern "C" int32_t RBTree_get_Count_m15615 (RBTree_t4209 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.RBTree/NodeEnumerator System.Collections.Generic.RBTree::GetEnumerator()
extern "C" NodeEnumerator_t4211  RBTree_GetEnumerator_m15616 (RBTree_t4209 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.RBTree/Node System.Collections.Generic.RBTree::do_insert(System.Int32,System.Collections.Generic.RBTree/Node,System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>)
extern "C" Node_t4208 * RBTree_do_insert_m15617 (RBTree_t4209 * __this, int32_t ___in_tree_cmp, Node_t4208 * ___current, List_1_t4212 * ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.RBTree/Node System.Collections.Generic.RBTree::do_remove(System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>)
extern "C" Node_t4208 * RBTree_do_remove_m15618 (RBTree_t4209 * __this, List_1_t4212 * ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.RBTree::rebalance_insert(System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>)
extern "C" void RBTree_rebalance_insert_m15619 (RBTree_t4209 * __this, List_1_t4212 * ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.RBTree::rebalance_delete(System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>)
extern "C" void RBTree_rebalance_delete_m15620 (RBTree_t4209 * __this, List_1_t4212 * ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.RBTree::rebalance_insert__rotate_final(System.Int32,System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>)
extern "C" void RBTree_rebalance_insert__rotate_final_m15621 (RBTree_t4209 * __this, int32_t ___curpos, List_1_t4212 * ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.RBTree::rebalance_delete__rotate_final(System.Int32,System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>)
extern "C" void RBTree_rebalance_delete__rotate_final_m15622 (RBTree_t4209 * __this, int32_t ___curpos, List_1_t4212 * ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.RBTree::ensure_sibling_black(System.Int32,System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>)
extern "C" int32_t RBTree_ensure_sibling_black_m15623 (RBTree_t4209 * __this, int32_t ___curpos, List_1_t4212 * ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.RBTree::node_reparent(System.Collections.Generic.RBTree/Node,System.Collections.Generic.RBTree/Node,System.UInt32,System.Collections.Generic.RBTree/Node)
extern "C" void RBTree_node_reparent_m15624 (RBTree_t4209 * __this, Node_t4208 * ___orig_parent, Node_t4208 * ___orig, uint32_t ___orig_size, Node_t4208 * ___updated, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.RBTree/Node System.Collections.Generic.RBTree::right_most(System.Collections.Generic.RBTree/Node,System.Collections.Generic.RBTree/Node,System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>)
extern "C" Node_t4208 * RBTree_right_most_m15625 (Object_t * __this /* static, unused */, Node_t4208 * ___current, Node_t4208 * ___sibling, List_1_t4212 * ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
