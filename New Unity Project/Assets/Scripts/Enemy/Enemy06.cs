using UnityEngine;
using System.Collections;

public class Enemy06 : EnemyBase {
	[SerializeField] GameObject bullet;
	protected override void OverrideStart(){

	}
	protected override void OverrideUpdate(){
		if (pr.transform.position.y > this.transform.position.y && pr.transform.position.y < this.transform.position.y + 0.3f) {
			Instantiate(bullet,transform.position,Quaternion.identity);
			Destroy (this.gameObject);
		}
		//rg.velocity = new Vector2 (speed,0);
		//ModifyVelocity ();
		//rg.velocity += new Vector2 (speed, rg.velocity.y);
	}
}
