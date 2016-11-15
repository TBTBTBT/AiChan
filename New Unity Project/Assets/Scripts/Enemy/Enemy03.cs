using UnityEngine;
using System.Collections;

public class Enemy03 : EnemyBase {
	[SerializeField] float speed = 0;

	protected override void OverrideStart(){

		if (pr.transform.position.x < transform.position.x && speed > 0)speed = -speed;
		if (speed > 0)
			transform.localScale = new Vector3 (transform.localScale.x * -1, transform.localScale.y, transform.localScale.z);
		else
			speed = speed / 2;
	}
	protected override void OverrideUpdate(){
		rg.velocity = new Vector2 (speed,0);
		//ModifyVelocity ();
		//rg.velocity += new Vector2 (speed, rg.velocity.y);
	}
	void ModifyVelocity(){
		//if (rg.velocity.y > maxVelocity.y) {
		//		rg.velocity = new Vector2(rg.velocity.x,maxVelocity.y);
		//	}
		if (rg.velocity.y <= -1) {
			rg.velocity = new Vector2(rg.velocity.x,-1);
		}
		if (rg.velocity.y >= 1) {
			rg.velocity = new Vector2(rg.velocity.x,1);
		}
		if (rg.velocity.x >= 2) {
			rg.velocity = new Vector2(2,rg.velocity.y);
		}
		if (rg.velocity.x <= -1) {
			rg.velocity = new Vector2(-1,rg.velocity.y);
		}
	}

}
