// ------------------------------------------------------------------------------
//  <autogenerated>
//      This code was generated by a tool.
//      Mono Runtime Version: 4.0.30319.1
// 
//      Changes to this file may cause incorrect behavior and will be lost if 
//      the code is regenerated.
//  </autogenerated>
// ------------------------------------------------------------------------------
using UnityEngine;
using System.Collections;

public class ExplicitMouseDesc
{
	// Type of mouse.
	public MouseConfig.MouseType mouseType;
	// Entry point.
	public MouseSinkController.MouseHoleLocation mouseHoleLocation;
	// orientation.
	public bool isClockwise;
	// what track it runs on.
	public int track;

	int debugMouseType;
	int debugHoleLocation;
	int debugWiggleType;

	// time until next mouse.
	public float delayToNextMouse;

	// Wiggle type
	public MouseConfig.MouseWiggleType wiggleType { get; private set; }
	public float wiggleMagnitude { get; private set; }
	public int wiggleCycles { get; private set; }
	public bool wiggleClockwise { get; private set; }

	public ExplicitMouseDesc(float delayToNextMouse,
	                         bool isClockwise, 
	                         MouseSinkController.MouseHoleLocation location, 
	                         MouseConfig.MouseType mType, 
	                         int track,
	                         MouseConfig.MouseWiggleType wType = MouseConfig.MouseWiggleType.NONE)
	{
		this.delayToNextMouse = delayToNextMouse;
		this.isClockwise = isClockwise;
		this.mouseHoleLocation = location;
		this.mouseType = mType;
		this.track = track;
		this.AddWiggle (wType);

		debugMouseType = (int)mouseType;
		debugHoleLocation = (int)mouseHoleLocation;
		debugWiggleType = (int)wType;
	}

	public void AddWiggle(MouseConfig.MouseWiggleType wt) {
		wiggleType = wt;

		MouseWiggleDesc mwc = MouseConfig.instance.GetWiggleDesc (wt);
		if (mwc != null) {
			wiggleMagnitude = Random.Range (mwc.minMagnitude, 
			                                mwc.maxMagnitude);
			wiggleCycles = Random.Range (mwc.minCycles, 
			                             mwc.maxCycles);
			
			wiggleClockwise = (Random.Range (0, 2) != 0);
		}
	}
}



