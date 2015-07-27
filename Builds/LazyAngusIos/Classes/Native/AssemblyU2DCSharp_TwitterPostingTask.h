#pragma once
#include <stdint.h>
// System.String
struct String_t;
// UnityEngine.Texture2D
struct Texture2D_t68;
// TwitterManagerInterface
struct TwitterManagerInterface_t301;
// AsyncTask
#include "AssemblyU2DCSharp_AsyncTask.h"
// TwitterPostingTask
struct  TwitterPostingTask_t302  : public AsyncTask_t178
{
	// System.String TwitterPostingTask::_status
	String_t* ____status_4;
	// UnityEngine.Texture2D TwitterPostingTask::_texture
	Texture2D_t68 * ____texture_5;
	// TwitterManagerInterface TwitterPostingTask::_controller
	Object_t * ____controller_6;
};
