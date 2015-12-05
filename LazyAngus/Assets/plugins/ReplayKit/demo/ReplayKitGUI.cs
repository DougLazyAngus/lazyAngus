using UnityEngine;
using System.Collections.Generic;
using Prime31;


namespace Prime31
{
	public class ReplayKitGUI : Prime31.MonoBehaviourGUI
	{
		public Transform _demoObjTransform;

#if UNITY_IOS
		void OnGUI()
		{
			beginColumn();

			if( GUILayout.Button( "Start Recording" ) )
			{
				ReplayKit.startRecording( true );
			}


			if( GUILayout.Button( "Stop Recording & Show Preview" ) )
			{
				ReplayKit.stopRecording( true );
			}


			if( GUILayout.Button( "Stop Recording Without Preview" ) )
			{
				ReplayKit.stopRecording( false );
			}


			if( GUILayout.Button( "Discard Recording" ) )
			{
				ReplayKit.discardRecording();
			}


			if( GUILayout.Button( "Show Recording Preview View Controller" ) )
			{
				ReplayKit.showPreviewViewController();
			}


			endColumn( true );


			if( GUILayout.Button( "Is ReplayKit Available?" ) )
			{
				Debug.Log( "is available: " + ReplayKit.isReplayKitAvailable() );
			}


			if( GUILayout.Button( "Is ReplayKit Recording?" ) )
			{
				Debug.Log( "is recording: " + ReplayKit.isCurrentlyRecording() );
			}


			if( GUILayout.Button( "Is the Mic Enabled" ) )
			{
				Debug.Log( "is microphone enabled: " + ReplayKit.isMicrophoneEnabled() );
			}

			endColumn( false );
		}


		void LateUpdate()
		{
			_demoObjTransform.rotation = Quaternion.Lerp( _demoObjTransform.rotation, Random.rotation, 0.03f );
		}
#endif
	}
}