using UnityEngine;
using System;
using System.Collections.Generic;


namespace Prime31
{
	#if UNITY_IPHONE
	public class ReplayKitManager : AbstractManager
	{
		// Fired when a recording is started successfully
		public static event Action recordingStartedEvent;

		// Fired when a recording fails to start
		public static event Action<string> recordingFailedToStartEvent;

		// Fired when a recording fails to stop. Includes the error message.
		public static event Action<string> recordingFailedToStopEvent;

		// Fired when a recording stops successfully
		public static event Action recordingStoppedEvent;

		// Fired after a the preview view controller complets and includes the fully qualified activity types the user used
		public static event Action<List<string>> previewControllerFinishedEvent;


		static ReplayKitManager()
		{
			AbstractManager.initialize( typeof( ReplayKitManager ) );
		}


		void recordingFailedToStart( string error )
		{
			recordingFailedToStartEvent.fire( error );
		}


		void recordingStarted( string empty )
		{
			recordingStartedEvent.fire();
		}


		void recordingFailedToStop( string error )
		{
			recordingFailedToStopEvent.fire( error );
		}


		void recordingStopped( string empty )
		{
			recordingStoppedEvent.fire();
		}


		void previewControllerFinished( string jsonOrNull )
		{
			if( previewControllerFinishedEvent != null )
				previewControllerFinishedEvent( jsonOrNull == string.Empty ? new List<string>() : Json.decode<List<string>>( jsonOrNull ) );
		}
	}
	#endif
}