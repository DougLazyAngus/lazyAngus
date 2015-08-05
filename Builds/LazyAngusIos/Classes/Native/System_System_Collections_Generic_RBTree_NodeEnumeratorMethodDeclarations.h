#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.RBTree/NodeEnumerator
struct NodeEnumerator_t3908;
// System.Object
struct Object_t;
// System.Collections.Generic.RBTree/Node
struct Node_t3905;
// System.Collections.Generic.RBTree
struct RBTree_t3906;

// System.Void System.Collections.Generic.RBTree/NodeEnumerator::.ctor(System.Collections.Generic.RBTree)
extern "C" void NodeEnumerator__ctor_m13051 (NodeEnumerator_t3908 * __this, RBTree_t3906 * ___tree, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Generic.RBTree/NodeEnumerator::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * NodeEnumerator_System_Collections_IEnumerator_get_Current_m13052 (NodeEnumerator_t3908 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.RBTree/NodeEnumerator::Reset()
extern "C" void NodeEnumerator_Reset_m13053 (NodeEnumerator_t3908 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.RBTree/Node System.Collections.Generic.RBTree/NodeEnumerator::get_Current()
extern "C" Node_t3905 * NodeEnumerator_get_Current_m13054 (NodeEnumerator_t3908 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.RBTree/NodeEnumerator::MoveNext()
extern "C" bool NodeEnumerator_MoveNext_m13055 (NodeEnumerator_t3908 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.RBTree/NodeEnumerator::Dispose()
extern "C" void NodeEnumerator_Dispose_m13056 (NodeEnumerator_t3908 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.RBTree/NodeEnumerator::check_version()
extern "C" void NodeEnumerator_check_version_m13057 (NodeEnumerator_t3908 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.RBTree/NodeEnumerator::check_current()
extern "C" void NodeEnumerator_check_current_m13058 (NodeEnumerator_t3908 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
