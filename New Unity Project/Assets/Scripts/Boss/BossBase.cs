using UnityEngine;
using System.Collections;
[RequireComponent (typeof (Rigidbody2D))]
public class BossBase : CanPause {
	protected Rigidbody2D rg;
	protected Collider2D cd;
	public float grav = 0f;
	int hp = 5;
	public GameObject effect;
	int score = 1000;
	//public int missTime = 0;
	//int missTimeMax = 0;
	protected GameObject pr;
	// Use this for initialization
	void Start () {
		rg = GetComponent<Rigidbody2D> ();
		cd = GetComponent<Collider2D> ();
		pr = GameObject.FindGameObjectWithTag("Player");
		//arm = GameObject.FindGameObjectWithTag("Arm");
		//Debug.Log (pr.name);
		OverrideStart ();
		//cr = GetComponent<BoxCollider2D> ().size;
		//cr = new Vector2(cr.x * GetComponent<BoxCollider2D> ().size.x,cr.y * GetComponent<BoxCollider2D> ().size.y);
	}
	virtual protected void OverrideStart(){
	}
	virtual protected void OverrideUpdate(){
	}
	// Update is called once per frame
	override protected void NoPauseFixed() {
		Grav ();
		OverrideUpdate ();
	}
	void Grav(){
		rg.velocity -= new Vector2 (0,grav);
	}
	void OnTriggerStay2D(Collider2D c){
		if (c.transform.tag == "Arm") {
			EventManager.Invoke(ref EventManager.OnPunchEnemy);
			hp--;
			if(hp<=0)Destroy(this.gameObject);
		}
	}
}
