using UnityEngine;
using System.Collections;

public class BackGroundLooperInTitle : MonoBehaviour {
	public float speed = 0;
	public float loopWidth;
	// Use this for initialization
	void Start () {
		
	}
	void ChangePos(){
		transform.position = new Vector3(transform.position.x + speed,transform.position.y,transform.position.z);
		if(Mathf.Abs(transform.position.x) > Mathf.Abs(loopWidth))transform.position = new Vector3(transform.position.x - loopWidth,transform.position.y,transform.position.z);
	}
	// Update is called once per frame
	void Update () {
			ChangePos();
	}
}
