using UnityEngine;
using System.Collections;

public class AutoJump : CanPause {
	private bool isHitLand;
	private bool isHitLandPrev;
	private bool doJump = false;
	// Use this for initialization
	void Start () {
		isHitLand = true;
		isHitLandPrev = false;;
		doJump = false;
	}
	
	// Update is called once per frame
	override protected void NoPause(){
		isHitLandPrev = isHitLand;
		isHitLand = false;
		if (isHitLandPrev == false)
			doJump = true;
		else
			doJump = false;
	}
	public bool DoJump{
		get {
			return doJump;
		}
	}
	void OnTriggerStay2D(Collider2D c){
		if (c.transform.tag == "Land") {
			Debug.Log("aaa");
			isHitLand = true;
		}
	}
}
