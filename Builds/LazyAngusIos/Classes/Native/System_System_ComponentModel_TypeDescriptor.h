#pragma once
#include <stdint.h>
// System.Object
struct Object_t;
// System.Collections.ArrayList
struct ArrayList_t716;
// System.Collections.Hashtable
struct Hashtable_t714;
// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.LinkedList`1<System.ComponentModel.TypeDescriptionProvider>>
struct Dictionary_2_t4262;
// System.Collections.Generic.Dictionary`2<System.ComponentModel.WeakObjectWrapper,System.Collections.Generic.LinkedList`1<System.ComponentModel.TypeDescriptionProvider>>
struct Dictionary_2_t4263;
// System.EventHandler
struct EventHandler_t4264;
// System.Object
#include "mscorlib_System_Object.h"
// System.ComponentModel.TypeDescriptor
struct  TypeDescriptor_t3382  : public Object_t
{
};
struct TypeDescriptor_t3382_StaticFields{
	// System.Object System.ComponentModel.TypeDescriptor::creatingDefaultConverters
	Object_t * ___creatingDefaultConverters_0;
	// System.Collections.ArrayList System.ComponentModel.TypeDescriptor::defaultConverters
	ArrayList_t716 * ___defaultConverters_1;
	// System.Collections.Hashtable System.ComponentModel.TypeDescriptor::componentTable
	Hashtable_t714 * ___componentTable_2;
	// System.Collections.Hashtable System.ComponentModel.TypeDescriptor::typeTable
	Hashtable_t714 * ___typeTable_3;
	// System.Object System.ComponentModel.TypeDescriptor::typeDescriptionProvidersLock
	Object_t * ___typeDescriptionProvidersLock_4;
	// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.LinkedList`1<System.ComponentModel.TypeDescriptionProvider>> System.ComponentModel.TypeDescriptor::typeDescriptionProviders
	Dictionary_2_t4262 * ___typeDescriptionProviders_5;
	// System.Object System.ComponentModel.TypeDescriptor::componentDescriptionProvidersLock
	Object_t * ___componentDescriptionProvidersLock_6;
	// System.Collections.Generic.Dictionary`2<System.ComponentModel.WeakObjectWrapper,System.Collections.Generic.LinkedList`1<System.ComponentModel.TypeDescriptionProvider>> System.ComponentModel.TypeDescriptor::componentDescriptionProviders
	Dictionary_2_t4263 * ___componentDescriptionProviders_7;
	// System.EventHandler System.ComponentModel.TypeDescriptor::onDispose
	EventHandler_t4264 * ___onDispose_8;
};
