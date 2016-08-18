using UnityEngine;
using System.Collections;

public class EnemyBase : CanPause {

	// Use this for initialization
	void Start () {
	
	}
	virtual protected void OverUpdate(){
	}
	// Update is called once per frame
	override protected void NoPauseFixed() {
	
	}
	void OnTriggerStay2D(Collider2D c){
		if (c.transform.tag == "Arm") {
			EventManager.Invoke(ref EventManager.OnPunchEnemy);
			Destroy(this.gameObject);
		}
	}
}
