using UnityEngine;
using System.Collections;

public class BackGroundLooper : MonoBehaviour {
	public AiChan ai;
	Camera cam;
	public float loopWidth;
	public float slowRatio = 2;
	// Use this for initialization
	void Start () {
		cam = GameObject.Find ("Main Camera").GetComponent<Camera>();
		EventManager.OnPlayerPosChange.AddListener (ChangePos);
	}
	void ChangePos(){
		transform.position = new Vector3(ai.transform.position.x-(ai.transform.position.x/slowRatio) % loopWidth,transform.position.y,transform.position.z);
	}
	// Update is called once per frame
	void Update () {
		if (ai && loopWidth!=0) {
			ChangePos();
		}
	}
}
