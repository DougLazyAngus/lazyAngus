#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.RBTree
struct RBTree_t4216;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.RBTree/Node>
struct IEnumerator_1_t4558;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>
struct List_1_t4219;
// System.Collections.Generic.RBTree/Node
struct Node_t4215;
// System.Collections.Generic.RBTree/NodeEnumerator
#include "System_System_Collections_Generic_RBTree_NodeEnumerator.h"

// System.Void System.Collections.Generic.RBTree::.ctor(System.Object)
extern "C" void RBTree__ctor_m15666 (RBTree_t4216 * __this, Object_t * ___hlp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.RBTree/Node> System.Collections.Generic.RBTree::System.Collections.Generic.IEnumerable<System.Collections.Generic.RBTree.Node>.GetEnumerator()
extern "C" Object_t* RBTree_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_RBTree_NodeU3E_GetEnumerator_m15667 (RBTree_t4216 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.Generic.RBTree::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * RBTree_System_Collections_IEnumerable_GetEnumerator_m15668 (RBTree_t4216 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node> System.Collections.Generic.RBTree::alloc_path()
extern "C" List_1_t4219 * RBTree_alloc_path_m15669 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.RBTree::release_path(System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>)
extern "C" void RBTree_release_path_m15670 (Object_t * __this /* static, unused */, List_1_t4219 * ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.RBTree::Clear()
extern "C" void RBTree_Clear_m15671 (RBTree_t4216 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.RBTree::get_Count()
extern "C" int32_t RBTree_get_Count_m15672 (RBTree_t4216 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.RBTree/NodeEnumerator System.Collections.Generic.RBTree::GetEnumerator()
extern "C" NodeEnumerator_t4218  RBTree_GetEnumerator_m15673 (RBTree_t4216 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.RBTree/Node System.Collections.Generic.RBTree::do_insert(System.Int32,System.Collections.Generic.RBTree/Node,System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>)
extern "C" Node_t4215 * RBTree_do_insert_m15674 (RBTree_t4216 * __this, int32_t ___in_tree_cmp, Node_t4215 * ___current, List_1_t4219 * ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.RBTree/Node System.Collections.Generic.RBTree::do_remove(System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>)
extern "C" Node_t4215 * RBTree_do_remove_m15675 (RBTree_t4216 * __this, List_1_t4219 * ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.RBTree::rebalance_insert(System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>)
extern "C" void RBTree_rebalance_insert_m15676 (RBTree_t4216 * __this, List_1_t4219 * ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.RBTree::rebalance_delete(System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>)
extern "C" void RBTree_rebalance_delete_m15677 (RBTree_t4216 * __this, List_1_t4219 * ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.RBTree::rebalance_insert__rotate_final(System.Int32,System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>)
extern "C" void RBTree_rebalance_insert__rotate_final_m15678 (RBTree_t4216 * __this, int32_t ___curpos, List_1_t4219 * ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.RBTree::rebalance_delete__rotate_final(System.Int32,System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>)
extern "C" void RBTree_rebalance_delete__rotate_final_m15679 (RBTree_t4216 * __this, int32_t ___curpos, List_1_t4219 * ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.RBTree::ensure_sibling_black(System.Int32,System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>)
extern "C" int32_t RBTree_ensure_sibling_black_m15680 (RBTree_t4216 * __this, int32_t ___curpos, List_1_t4219 * ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.RBTree::node_reparent(System.Collections.Generic.RBTree/Node,System.Collections.Generic.RBTree/Node,System.UInt32,System.Collections.Generic.RBTree/Node)
extern "C" void RBTree_node_reparent_m15681 (RBTree_t4216 * __this, Node_t4215 * ___orig_parent, Node_t4215 * ___orig, uint32_t ___orig_size, Node_t4215 * ___updated, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.RBTree/Node System.Collections.Generic.RBTree::right_most(System.Collections.Generic.RBTree/Node,System.Collections.Generic.RBTree/Node,System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>)
extern "C" Node_t4215 * RBTree_right_most_m15682 (Object_t * __this /* static, unused */, Node_t4215 * ___current, Node_t4215 * ___sibling, List_1_t4219 * ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
