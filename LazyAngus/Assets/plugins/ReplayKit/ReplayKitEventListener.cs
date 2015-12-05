using UnityEngine;
using System;
using System.Collections;
using System.Collections.Generic;


namespace Prime31
{
	public class ReplayKitEventListener : MonoBehaviour
	{
	#if UNITY_IPHONE
		void OnEnable()
		{
			// Listen to all events for illustration purposes
			ReplayKitManager.recordingFailedToStartEvent += recordingFailedToStartEvent;
			ReplayKitManager.recordingStartedEvent += recordingStartedEvent;
			ReplayKitManager.recordingFailedToStopEvent += recordingFailedToStopEvent;
			ReplayKitManager.recordingStoppedEvent += recordingStoppedEvent;
			ReplayKitManager.previewControllerFinishedEvent += previewControllerFinishedEvent;
		}


		void OnDisable()
		{
			// Remove all event handlers
			ReplayKitManager.recordingFailedToStartEvent -= recordingFailedToStartEvent;
			ReplayKitManager.recordingStartedEvent -= recordingStartedEvent;
			ReplayKitManager.recordingFailedToStopEvent -= recordingFailedToStopEvent;
			ReplayKitManager.recordingStoppedEvent -= recordingStoppedEvent;
			ReplayKitManager.previewControllerFinishedEvent -= previewControllerFinishedEvent;
		}



		void recordingFailedToStartEvent( string error )
		{
			Debug.Log( "recordingFailedToStartEvent: " + error );
		}


		void recordingStartedEvent()
		{
			Debug.Log( "recordingStartedEvent" );
		}


		void recordingFailedToStopEvent( string error )
		{
			Debug.Log( "recordingFailedToStopEvent: " + error );
		}


		void recordingStoppedEvent()
		{
			Debug.Log( "recordingStoppedEvent" );
		}


		void previewControllerFinishedEvent( List<string> activityTypes )
		{
			Debug.Log( "previewControllerFinishedEvent" );
			Utils.logObject( activityTypes );
		}

	#endif
	}
}