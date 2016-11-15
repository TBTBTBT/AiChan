using UnityEngine;
using System.Collections;

public class TouchPosMarker : MonoBehaviour {
	Renderer r;
	Camera cam;
	// Use this for initialization
	void Start () {
		r = GetComponent<Renderer> ();
		r.enabled = false;
		EventManager.OnTouchBegin.AddListener (BeginDraw);
		EventManager.OnTouchEnd.AddListener (EndDraw);
		cam = GameObject.Find ("Main Camera").GetComponent<Camera> ();
	}
	void BeginDraw(){
		//Debug.Log (TouchInput.GetTouchPosition ());
		transform.localPosition = TouchInput.GetTouchWorldPosition (cam)-cam.transform.position + new Vector3(0,0,10);
		//Debug.Log (TouchInput.GetTouchWorldPosition (cam)-cam.transform.position);
		r.enabled = true;
	}
	// Update is called once per frame
	void EndDraw () {
		r.enabled = false;
	}
}
