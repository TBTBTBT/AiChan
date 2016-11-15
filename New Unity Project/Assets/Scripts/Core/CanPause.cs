using UnityEngine;
using System.Collections;

public class CanPause : MonoBehaviour {
	
	Vector2 velocity;
	bool isPause =false;
	// Update is called once per frame
	void Update () {
		if (GlobalVariable.isPause == false) {

			NoPause ();
		} 
	}
	void FixedUpdate () {
		if (GlobalVariable.isPause == false) {
			if(isPause == true){
				
				GetComponent<Rigidbody2D>().velocity = velocity;
				isPause = false;
			}
			NoPauseFixed();
		}
		else {
			if(isPause == false){
				velocity = GetComponent<Rigidbody2D>().velocity;
				isPause = true;
			}
			GetComponent<Rigidbody2D>().velocity = Vector2.zero;
		}
	}
	virtual protected void NoPause(){

	}
	virtual protected void NoPauseFixed(){
		
	}

}
