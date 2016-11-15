using UnityEngine;
using System.Collections;

public class CanPauseAnimation : MonoBehaviour {

	// Update is called once per frame
	void Update () {
	//	if (GlobalVariable.isPause == false) {
			NoPause ();
	//	}
	}
	void FixedUpdate () {
	//	if (GlobalVariable.isPause == false) {
			NoPauseFixed();
	//	}
	}
	virtual protected void NoPause(){

	}
	virtual protected void NoPauseFixed(){
		
	}

}
