using UnityEngine;
using System.Collections;

public class ArmStopper : MonoBehaviour {
	public Arm arm;
	// Update is called once per frame
	void OnTriggerEnter2D(Collider2D c){
		
		if (c.transform.tag == "Grab") {
			arm.StopPunching();
		}
	}
}
