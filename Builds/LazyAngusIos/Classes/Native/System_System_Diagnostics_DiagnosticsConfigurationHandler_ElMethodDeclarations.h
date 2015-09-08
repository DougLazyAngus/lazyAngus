#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Diagnostics.DiagnosticsConfigurationHandler/ElementHandler
struct ElementHandler_t4286;
// System.Object
struct Object_t;
// System.Collections.IDictionary
struct IDictionary_t703;
// System.Xml.XmlNode
struct XmlNode_t735;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Diagnostics.DiagnosticsConfigurationHandler/ElementHandler::.ctor(System.Object,System.IntPtr)
extern "C" void ElementHandler__ctor_m16047 (ElementHandler_t4286 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.DiagnosticsConfigurationHandler/ElementHandler::Invoke(System.Collections.IDictionary,System.Xml.XmlNode)
extern "C" void ElementHandler_Invoke_m16048 (ElementHandler_t4286 * __this, Object_t * ___d, XmlNode_t735 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_ElementHandler_t4286(Il2CppObject* delegate, Object_t * ___d, XmlNode_t735 * ___node);
// System.IAsyncResult System.Diagnostics.DiagnosticsConfigurationHandler/ElementHandler::BeginInvoke(System.Collections.IDictionary,System.Xml.XmlNode,System.AsyncCallback,System.Object)
extern "C" Object_t * ElementHandler_BeginInvoke_m16049 (ElementHandler_t4286 * __this, Object_t * ___d, XmlNode_t735 * ___node, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.DiagnosticsConfigurationHandler/ElementHandler::EndInvoke(System.IAsyncResult)
extern "C" void ElementHandler_EndInvoke_m16050 (ElementHandler_t4286 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
