using UnityEngine;
using System.Collections;

public class Enemy01 : EnemyBase {
	[SerializeField] float speed = 0;

	protected override void OverrideStart(){

		if (pr.transform.position.x < transform.position.x && speed > 0)speed = -speed;
		if (speed > 0)
			transform.localScale = new Vector3 (transform.localScale.x * -1, transform.localScale.y, transform.localScale.z);
		else
			speed = speed / 2;
	}
	protected override void OverrideUpdate(){
		rg.velocity = new Vector2 (speed, rg.velocity.y);
	}
}
