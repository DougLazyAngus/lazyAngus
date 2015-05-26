using UnityEngine;
using System.Collections;

public class FlashGUI : MonoBehaviour {
	public bool flashing = false;
	public float speed = 2.0f;

	private Color baseColor;
	private Color clearColor;
	private GUIText guiTextComponent;

	void Start() {
		guiTextComponent = GetComponent<GUIText>();
		baseColor = guiTextComponent.material.color;
		clearColor = new Color(0, 0, 0, 0);
	}

	void Update() {
		if (flashing) {
			float lerp = (Mathf.Sin(Time.time * speed) + 1.0f)/2.0f;
			guiTextComponent.material.color = Color.Lerp (baseColor, clearColor, lerp);
		}
	}	
}
