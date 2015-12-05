using UnityEngine;
using System.Collections;
using System.Runtime.InteropServices;


#if UNITY_IPHONE
namespace Prime31
{
	public static class ReplayKit
	{
		[DllImport("__Internal")]
		private static extern bool _replayKitIsReplayKitAvailable();

		// Checks to see if ReplayKit is available
		public static bool isReplayKitAvailable()
		{
			if( Application.platform == RuntimePlatform.IPhonePlayer )
				return _replayKitIsReplayKitAvailable();

			return false;
		}


		[DllImport("__Internal")]
		private static extern bool _replayKitIsMicrophoneEnabled();

		// Checks to see if the microphone is enabled
		public static bool isMicrophoneEnabled()
		{
			if( Application.platform == RuntimePlatform.IPhonePlayer )
				return _replayKitIsMicrophoneEnabled();

			return false;
		}


		[DllImport("__Internal")]
		private static extern bool _replayKitIsRecording();

		// Checks to see if ReplayKit is currently recording
		public static bool isCurrentlyRecording()
		{
			if( Application.platform == RuntimePlatform.IPhonePlayer )
				return _replayKitIsRecording();

			return false;
		}


		[DllImport("__Internal")]
		private static extern void _replayKitStartRecording( bool enableMic );

		// Starts a recording optionally enabling the microphone. Results in the recordingStartedEvent or recordingFailedToStartEvent firing.
		public static void startRecording( bool enableMic )
		{
			if( Application.platform == RuntimePlatform.IPhonePlayer )
				_replayKitStartRecording( enableMic );
		}


		[DllImport("__Internal")]
		private static extern void _replayKitStopRecording( bool showPreviewViewController );

		// Stops a recording optionally showing the preview view controller. Results in the recordingStoppedEvent or the recordingFailedToStopEvent firing.
		// If showPreviewViewController is false then you can later call showPreviewViewController to show the preview view controller or discardRecording
		// to discard the recording.
		public static void stopRecording( bool showPreviewViewController )
		{
			if( Application.platform == RuntimePlatform.IPhonePlayer )
				_replayKitStopRecording( showPreviewViewController );
		}


		[DllImport("__Internal")]
		private static extern void _replayKitDiscardRecording();

		// Discards the current recording and clears out the saved preview view controller if it is present
		public static void discardRecording()
		{
			if( Application.platform == RuntimePlatform.IPhonePlayer )
				_replayKitDiscardRecording();
		}


		[DllImport("__Internal")]
		private static extern void _replayKitShowPreviewViewController();

		// Shows the preview view controller if it was stored by passing false to stopRecording
		public static void showPreviewViewController()
		{
			if( Application.platform == RuntimePlatform.IPhonePlayer )
				_replayKitShowPreviewViewController();
		}
	}
}
#endif