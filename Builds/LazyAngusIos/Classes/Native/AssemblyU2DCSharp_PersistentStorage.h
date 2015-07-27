#pragma once
#include <stdint.h>
// PersistentStorage
struct PersistentStorage_t526;
// System.String
struct String_t;
// SimpleJSON.JSONNode
struct JSONNode_t2;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// PersistentStorage
struct  PersistentStorage_t526  : public MonoBehaviour_t66
{
	// SimpleJSON.JSONNode PersistentStorage::storedValues
	JSONNode_t2 * ___storedValues_4;
};
struct PersistentStorage_t526_StaticFields{
	// PersistentStorage PersistentStorage::instance
	PersistentStorage_t526 * ___instance_2;
	// System.String PersistentStorage::valueStoreFilePath
	String_t* ___valueStoreFilePath_3;
};
