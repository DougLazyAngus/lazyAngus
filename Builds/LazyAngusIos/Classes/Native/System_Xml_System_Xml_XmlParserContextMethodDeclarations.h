#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.XmlParserContext
struct XmlParserContext_t3205;
// System.String
struct String_t;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t3127;
// System.Text.Encoding
struct Encoding_t691;
// System.Xml.XmlNamespaceManager
struct XmlNamespaceManager_t3194;
// System.Xml.XmlNameTable
struct XmlNameTable_t3135;
// System.Xml.XmlSpace
#include "System_Xml_System_Xml_XmlSpace.h"

// System.Void System.Xml.XmlParserContext::.ctor(System.Xml.XmlNameTable,System.Xml.XmlNamespaceManager,System.String,System.Xml.XmlSpace)
extern "C" void XmlParserContext__ctor_m10847 (XmlParserContext_t3205 * __this, XmlNameTable_t3135 * ___nt, XmlNamespaceManager_t3194 * ___nsMgr, String_t* ___xmlLang, int32_t ___xmlSpace, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlParserContext::.ctor(System.Xml.XmlNameTable,System.Xml.XmlNamespaceManager,System.String,System.String,System.String,System.String,System.String,System.String,System.Xml.XmlSpace,System.Text.Encoding)
extern "C" void XmlParserContext__ctor_m10848 (XmlParserContext_t3205 * __this, XmlNameTable_t3135 * ___nt, XmlNamespaceManager_t3194 * ___nsMgr, String_t* ___docTypeName, String_t* ___pubId, String_t* ___sysId, String_t* ___internalSubset, String_t* ___baseURI, String_t* ___xmlLang, int32_t ___xmlSpace, Encoding_t691 * ___enc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlParserContext::.ctor(System.Xml.XmlNameTable,System.Xml.XmlNamespaceManager,Mono.Xml.DTDObjectModel,System.String,System.String,System.Xml.XmlSpace,System.Text.Encoding)
extern "C" void XmlParserContext__ctor_m10849 (XmlParserContext_t3205 * __this, XmlNameTable_t3135 * ___nt, XmlNamespaceManager_t3194 * ___nsMgr, DTDObjectModel_t3127 * ___dtd, String_t* ___baseURI, String_t* ___xmlLang, int32_t ___xmlSpace, Encoding_t691 * ___enc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlParserContext::get_BaseURI()
extern "C" String_t* XmlParserContext_get_BaseURI_m10850 (XmlParserContext_t3205 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlParserContext::set_BaseURI(System.String)
extern "C" void XmlParserContext_set_BaseURI_m10851 (XmlParserContext_t3205 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlParserContext::set_DocTypeName(System.String)
extern "C" void XmlParserContext_set_DocTypeName_m10852 (XmlParserContext_t3205 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDObjectModel System.Xml.XmlParserContext::get_Dtd()
extern "C" DTDObjectModel_t3127 * XmlParserContext_get_Dtd_m10853 (XmlParserContext_t3205 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlParserContext::set_Dtd(Mono.Xml.DTDObjectModel)
extern "C" void XmlParserContext_set_Dtd_m10854 (XmlParserContext_t3205 * __this, DTDObjectModel_t3127 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlParserContext::set_Encoding(System.Text.Encoding)
extern "C" void XmlParserContext_set_Encoding_m10855 (XmlParserContext_t3205 * __this, Encoding_t691 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlParserContext::get_InternalSubset()
extern "C" String_t* XmlParserContext_get_InternalSubset_m10856 (XmlParserContext_t3205 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlParserContext::set_InternalSubset(System.String)
extern "C" void XmlParserContext_set_InternalSubset_m10857 (XmlParserContext_t3205 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNamespaceManager System.Xml.XmlParserContext::get_NamespaceManager()
extern "C" XmlNamespaceManager_t3194 * XmlParserContext_get_NamespaceManager_m10858 (XmlParserContext_t3205 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNameTable System.Xml.XmlParserContext::get_NameTable()
extern "C" XmlNameTable_t3135 * XmlParserContext_get_NameTable_m10859 (XmlParserContext_t3205 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlParserContext::set_PublicId(System.String)
extern "C" void XmlParserContext_set_PublicId_m10860 (XmlParserContext_t3205 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlParserContext::set_SystemId(System.String)
extern "C" void XmlParserContext_set_SystemId_m10861 (XmlParserContext_t3205 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlParserContext::get_XmlLang()
extern "C" String_t* XmlParserContext_get_XmlLang_m10862 (XmlParserContext_t3205 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlParserContext::set_XmlLang(System.String)
extern "C" void XmlParserContext_set_XmlLang_m10863 (XmlParserContext_t3205 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlSpace System.Xml.XmlParserContext::get_XmlSpace()
extern "C" int32_t XmlParserContext_get_XmlSpace_m10864 (XmlParserContext_t3205 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlParserContext::set_XmlSpace(System.Xml.XmlSpace)
extern "C" void XmlParserContext_set_XmlSpace_m10865 (XmlParserContext_t3205 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlParserContext::PushScope()
extern "C" void XmlParserContext_PushScope_m10866 (XmlParserContext_t3205 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlParserContext::PopScope()
extern "C" void XmlParserContext_PopScope_m10867 (XmlParserContext_t3205 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
