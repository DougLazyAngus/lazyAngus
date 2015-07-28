#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.XmlParserContext
struct XmlParserContext_t3194;
// System.String
struct String_t;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t3116;
// System.Text.Encoding
struct Encoding_t682;
// System.Xml.XmlNamespaceManager
struct XmlNamespaceManager_t3183;
// System.Xml.XmlNameTable
struct XmlNameTable_t3124;
// System.Xml.XmlSpace
#include "System_Xml_System_Xml_XmlSpace.h"

// System.Void System.Xml.XmlParserContext::.ctor(System.Xml.XmlNameTable,System.Xml.XmlNamespaceManager,System.String,System.Xml.XmlSpace)
extern "C" void XmlParserContext__ctor_m10772 (XmlParserContext_t3194 * __this, XmlNameTable_t3124 * ___nt, XmlNamespaceManager_t3183 * ___nsMgr, String_t* ___xmlLang, int32_t ___xmlSpace, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlParserContext::.ctor(System.Xml.XmlNameTable,System.Xml.XmlNamespaceManager,System.String,System.String,System.String,System.String,System.String,System.String,System.Xml.XmlSpace,System.Text.Encoding)
extern "C" void XmlParserContext__ctor_m10773 (XmlParserContext_t3194 * __this, XmlNameTable_t3124 * ___nt, XmlNamespaceManager_t3183 * ___nsMgr, String_t* ___docTypeName, String_t* ___pubId, String_t* ___sysId, String_t* ___internalSubset, String_t* ___baseURI, String_t* ___xmlLang, int32_t ___xmlSpace, Encoding_t682 * ___enc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlParserContext::.ctor(System.Xml.XmlNameTable,System.Xml.XmlNamespaceManager,Mono.Xml.DTDObjectModel,System.String,System.String,System.Xml.XmlSpace,System.Text.Encoding)
extern "C" void XmlParserContext__ctor_m10774 (XmlParserContext_t3194 * __this, XmlNameTable_t3124 * ___nt, XmlNamespaceManager_t3183 * ___nsMgr, DTDObjectModel_t3116 * ___dtd, String_t* ___baseURI, String_t* ___xmlLang, int32_t ___xmlSpace, Encoding_t682 * ___enc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlParserContext::get_BaseURI()
extern "C" String_t* XmlParserContext_get_BaseURI_m10775 (XmlParserContext_t3194 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlParserContext::set_BaseURI(System.String)
extern "C" void XmlParserContext_set_BaseURI_m10776 (XmlParserContext_t3194 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlParserContext::set_DocTypeName(System.String)
extern "C" void XmlParserContext_set_DocTypeName_m10777 (XmlParserContext_t3194 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDObjectModel System.Xml.XmlParserContext::get_Dtd()
extern "C" DTDObjectModel_t3116 * XmlParserContext_get_Dtd_m10778 (XmlParserContext_t3194 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlParserContext::set_Dtd(Mono.Xml.DTDObjectModel)
extern "C" void XmlParserContext_set_Dtd_m10779 (XmlParserContext_t3194 * __this, DTDObjectModel_t3116 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlParserContext::set_Encoding(System.Text.Encoding)
extern "C" void XmlParserContext_set_Encoding_m10780 (XmlParserContext_t3194 * __this, Encoding_t682 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlParserContext::get_InternalSubset()
extern "C" String_t* XmlParserContext_get_InternalSubset_m10781 (XmlParserContext_t3194 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlParserContext::set_InternalSubset(System.String)
extern "C" void XmlParserContext_set_InternalSubset_m10782 (XmlParserContext_t3194 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNamespaceManager System.Xml.XmlParserContext::get_NamespaceManager()
extern "C" XmlNamespaceManager_t3183 * XmlParserContext_get_NamespaceManager_m10783 (XmlParserContext_t3194 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNameTable System.Xml.XmlParserContext::get_NameTable()
extern "C" XmlNameTable_t3124 * XmlParserContext_get_NameTable_m10784 (XmlParserContext_t3194 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlParserContext::set_PublicId(System.String)
extern "C" void XmlParserContext_set_PublicId_m10785 (XmlParserContext_t3194 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlParserContext::set_SystemId(System.String)
extern "C" void XmlParserContext_set_SystemId_m10786 (XmlParserContext_t3194 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlParserContext::get_XmlLang()
extern "C" String_t* XmlParserContext_get_XmlLang_m10787 (XmlParserContext_t3194 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlParserContext::set_XmlLang(System.String)
extern "C" void XmlParserContext_set_XmlLang_m10788 (XmlParserContext_t3194 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlSpace System.Xml.XmlParserContext::get_XmlSpace()
extern "C" int32_t XmlParserContext_get_XmlSpace_m10789 (XmlParserContext_t3194 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlParserContext::set_XmlSpace(System.Xml.XmlSpace)
extern "C" void XmlParserContext_set_XmlSpace_m10790 (XmlParserContext_t3194 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlParserContext::PushScope()
extern "C" void XmlParserContext_PushScope_m10791 (XmlParserContext_t3194 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlParserContext::PopScope()
extern "C" void XmlParserContext_PopScope_m10792 (XmlParserContext_t3194 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
