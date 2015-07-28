#pragma once
#include <stdint.h>
// System.String
struct String_t;
// UnityEngine.Texture2D
struct Texture2D_t108;
// TwitterManagerInterface
struct TwitterManagerInterface_t341;
// AsyncTask
#include "AssemblyU2DCSharp_AsyncTask.h"
// TwitterPostingTask
struct  TwitterPostingTask_t342  : public AsyncTask_t218
{
	// System.String TwitterPostingTask::_status
	String_t* ____status_4;
	// UnityEngine.Texture2D TwitterPostingTask::_texture
	Texture2D_t108 * ____texture_5;
	// TwitterManagerInterface TwitterPostingTask::_controller
	Object_t * ____controller_6;
};
