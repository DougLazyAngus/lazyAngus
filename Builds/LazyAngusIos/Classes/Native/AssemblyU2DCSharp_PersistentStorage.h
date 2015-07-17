#pragma once
#include <stdint.h>
// PersistentStorage
struct PersistentStorage_t523;
// System.String
struct String_t;
// SimpleJSON.JSONNode
struct JSONNode_t2;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// PersistentStorage
struct  PersistentStorage_t523  : public MonoBehaviour_t67
{
	// SimpleJSON.JSONNode PersistentStorage::storedValues
	JSONNode_t2 * ___storedValues_4;
};
struct PersistentStorage_t523_StaticFields{
	// PersistentStorage PersistentStorage::instance
	PersistentStorage_t523 * ___instance_2;
	// System.String PersistentStorage::valueStoreFilePath
	String_t* ___valueStoreFilePath_3;
};
