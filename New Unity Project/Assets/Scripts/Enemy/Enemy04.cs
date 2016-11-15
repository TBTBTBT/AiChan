using UnityEngine;
using System.Collections;

public class Enemy04 : EnemyBase {
	float speed = 0;

	protected override void OverrideStart(){
		speed = transform.position.z;

		transform.position = new Vector3 (transform.position.x,transform.position.y,0); 
		if (pr.transform.position.x < transform.position.x && speed > 0)speed = -speed;
		if (speed > 0)
			transform.localScale = new Vector3 (transform.localScale.x * -1, transform.localScale.y, transform.localScale.z);
		else
			speed = speed / 2;
		rg.velocity = new Vector2 (speed, 3f);
		Debug.Log (rg.velocity.x);
	}
	protected override void OverrideUpdate(){
		//if (pr.transform.position.x < transform.position.x)rg.velocity -= new Vector2 (0.1f,0);
		//else rg.velocity += new Vector2 (0.1f,0);
		//if(pr.transform.position.y<transform.position.y)rg.velocity -= new Vector2 (0,0.1f);
		//else rg.velocity += new Vector2 (0,0.1f);
		//if(speed > 0 && rg.velocity.x > 0)rg.velocity += new Vector2 (-0.05f, 0);
		//if(speed < 0&& rg.velocity.x < 0 )rg.velocity += new Vector2 (0.05f, 0);
		//ModifyVelocity ();
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
		if (rg.velocity.x >= 0.2f) {
			rg.velocity = new Vector2(0.2f,rg.velocity.y);
		}
		if (rg.velocity.x <= -0.1f) {
			rg.velocity = new Vector2(-0.1f,rg.velocity.y);
		}
	}

}
