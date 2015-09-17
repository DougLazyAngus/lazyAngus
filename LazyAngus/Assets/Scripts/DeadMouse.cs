using UnityEngine;
using System.Collections;

public class DeadMouse : MonoBehaviour {
	public float zIndex;
	public MouseConfig.MouseType mouseType { get; private set; }
	public float extraScale = 1.2f;


	// Use this for initialization
	void Start () {
	}
	
	public void Configure(MouseMove parentMouse) {
		mouseType = parentMouse.mouseType;
		MouseTypeDesc md = MouseConfig.instance.GetMouseTypeDesc (parentMouse.mouseType);

		SpriteRenderer sr = GetComponent<SpriteRenderer> ();
		sr.sprite = md.deadMouseSprite;
		Vector3 tmpP = parentMouse.gameObject.transform.position;
		// + = farther from camera.
		// This should be under mice.
		tmpP.z = zIndex;

		transform.position = tmpP;
		transform.rotation = parentMouse.gameObject.transform.rotation;
		transform.localScale = new Vector3 (md.scale * extraScale, 
		                                    md.scale * extraScale,
		                                    1);
	}
}
