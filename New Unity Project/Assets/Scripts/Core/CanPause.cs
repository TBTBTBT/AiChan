using UnityEngine;
using System.Collections;

public class CanPause : MonoBehaviour {

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
		if (GlobalVariable.isPause == false) {
			NoPause();
		}
	}
	void FixedUpdate () {
		if (GlobalVariable.isPause == false) {
			NoPauseFixed();
		}
	}
	virtual protected void NoPause(){

	}
	virtual protected void NoPauseFixed(){
		
	}
}
