#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.RBTree/NodeEnumerator
struct NodeEnumerator_t3952;
// System.Object
struct Object_t;
// System.Collections.Generic.RBTree/Node
struct Node_t3949;
// System.Collections.Generic.RBTree
struct RBTree_t3950;

// System.Void System.Collections.Generic.RBTree/NodeEnumerator::.ctor(System.Collections.Generic.RBTree)
extern "C" void NodeEnumerator__ctor_m13283 (NodeEnumerator_t3952 * __this, RBTree_t3950 * ___tree, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Generic.RBTree/NodeEnumerator::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * NodeEnumerator_System_Collections_IEnumerator_get_Current_m13284 (NodeEnumerator_t3952 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.RBTree/NodeEnumerator::Reset()
extern "C" void NodeEnumerator_Reset_m13285 (NodeEnumerator_t3952 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.RBTree/Node System.Collections.Generic.RBTree/NodeEnumerator::get_Current()
extern "C" Node_t3949 * NodeEnumerator_get_Current_m13286 (NodeEnumerator_t3952 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.RBTree/NodeEnumerator::MoveNext()
extern "C" bool NodeEnumerator_MoveNext_m13287 (NodeEnumerator_t3952 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.RBTree/NodeEnumerator::Dispose()
extern "C" void NodeEnumerator_Dispose_m13288 (NodeEnumerator_t3952 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.RBTree/NodeEnumerator::check_version()
extern "C" void NodeEnumerator_check_version_m13289 (NodeEnumerator_t3952 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.RBTree/NodeEnumerator::check_current()
extern "C" void NodeEnumerator_check_current_m13290 (NodeEnumerator_t3952 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
