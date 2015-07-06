#pragma once
#include <stdint.h>
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t1973;
// System.Collections.Hashtable
struct Hashtable_t1413;
// System.Object
#include "mscorlib_System_Object.h"
// Mono.Xml.DTDAutomataFactory
struct  DTDAutomataFactory_t1974  : public Object_t
{
	// Mono.Xml.DTDObjectModel Mono.Xml.DTDAutomataFactory::root
	DTDObjectModel_t1973 * ___root_0;
	// System.Collections.Hashtable Mono.Xml.DTDAutomataFactory::choiceTable
	Hashtable_t1413 * ___choiceTable_1;
	// System.Collections.Hashtable Mono.Xml.DTDAutomataFactory::sequenceTable
	Hashtable_t1413 * ___sequenceTable_2;
};
