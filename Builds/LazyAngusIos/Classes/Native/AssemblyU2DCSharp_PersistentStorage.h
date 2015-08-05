#pragma once
#include <stdint.h>
// PersistentStorage
struct PersistentStorage_t579;
// System.String
struct String_t;
// SimpleJSON.JSONNode
struct JSONNode_t29;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// PersistentStorage
struct  PersistentStorage_t579  : public MonoBehaviour_t13
{
	// SimpleJSON.JSONNode PersistentStorage::storedValues
	JSONNode_t29 * ___storedValues_4;
};
struct PersistentStorage_t579_StaticFields{
	// PersistentStorage PersistentStorage::instance
	PersistentStorage_t579 * ___instance_2;
	// System.String PersistentStorage::valueStoreFilePath
	String_t* ___valueStoreFilePath_3;
};
