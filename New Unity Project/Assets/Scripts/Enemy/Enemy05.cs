using UnityEngine;
using System.Collections;

public class Enemy05 : EnemyBase {
	[SerializeField] GameObject bullet;
	int time = 0;
	protected override void OverrideStart(){

	}
	protected override void OverrideUpdate(){
		time++;
		if (time > 60) {
			time = 0;
			Instantiate(bullet,new Vector3(transform.position.x,transform.position.y,1.5f),Quaternion.identity);
		}
		//rg.velocity = new Vector2 (speed,0);
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
