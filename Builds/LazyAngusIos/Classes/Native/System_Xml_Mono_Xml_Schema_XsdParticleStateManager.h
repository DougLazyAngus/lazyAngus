#pragma once
#include <stdint.h>
// System.Collections.Hashtable
struct Hashtable_t710;
// System.Xml.Schema.XmlSchemaElement
struct XmlSchemaElement_t3416;
// System.Collections.Stack
struct Stack_t2914;
// Mono.Xml.Schema.XsdValidationContext
struct XsdValidationContext_t3417;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t223;
// System.Object
#include "mscorlib_System_Object.h"
// System.Xml.Schema.XmlSchemaContentProcessing
#include "System_Xml_System_Xml_Schema_XmlSchemaContentProcessing.h"
// Mono.Xml.Schema.XsdParticleStateManager
struct  XsdParticleStateManager_t3418  : public Object_t
{
	// System.Collections.Hashtable Mono.Xml.Schema.XsdParticleStateManager::table
	Hashtable_t710 * ___table_0;
	// System.Xml.Schema.XmlSchemaContentProcessing Mono.Xml.Schema.XsdParticleStateManager::processContents
	int32_t ___processContents_1;
	// System.Xml.Schema.XmlSchemaElement Mono.Xml.Schema.XsdParticleStateManager::CurrentElement
	XmlSchemaElement_t3416 * ___CurrentElement_2;
	// System.Collections.Stack Mono.Xml.Schema.XsdParticleStateManager::ContextStack
	Stack_t2914 * ___ContextStack_3;
	// Mono.Xml.Schema.XsdValidationContext Mono.Xml.Schema.XsdParticleStateManager::Context
	XsdValidationContext_t3417 * ___Context_4;
};
struct XsdParticleStateManager_t3418_StaticFields{
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Xml.Schema.XsdParticleStateManager::<>f__switch$map2
	Dictionary_2_t223 * ___U3CU3Ef__switchU24map2_5;
};
