using UnityEngine;
using System.Collections;
[RequireComponent (typeof (Rigidbody2D))]
public class EnemyBase : CanPause {
	public float grav = 0.01f;
	protected Rigidbody2D rg;
	protected Collider2D cd;
	public int missTime = 0;
	int missTimeMax = 0;
	protected GameObject pr;
	//protected GameObject arm;
	public GameObject effect;
	int score = 100;
	Vector2 missVec;
	//[HideInInspector]
	public int combo = 1;
	//Vector2 cr;
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
		if (missTime == 0) {
			Grav ();
			OverrideUpdate ();
			if (transform.position.y < -2) {
				Destroy (this.gameObject);
			}
		} else {
			//Grav ();
			MissBlank ();
			rg.velocity = new Vector2 (missVec.x, rg.velocity.y);
		}
		//Debug.Log (pr.transform.position.x);
	}

	void Grav(){
		rg.velocity -= new Vector2 (0,grav);
	}
	void OnTriggerStay2D(Collider2D c){
		if (missTime == 0) {
			if (c.transform.tag == "EBullet") {
				Miss (0, 3, 10,false);
				c.GetComponent<EnemyBase>().combo++;
				EventManager.Invoke (ref EventManager.OnPunchEnemy);
				EventManager.InvokeVecIntArg(ref EventManager.OnCombo,transform.position,c.GetComponent<EnemyBase>().combo);
				Score.score += score * (c.GetComponent<EnemyBase>().combo);



			}
			if (c.transform.tag == "Arm") {
				EventManager.Invoke (ref EventManager.OnPunchEnemy);
				//parent.rotation 
				Vector3 vec;
				float angle;
				c.transform.parent.rotation.ToAngleAxis (out angle, out vec);
				//Debug.Log(vec);
				//Debug.Log(Mathf.Cos((angle) * Mathf.PI / 180));
				//Debug.Log(Mathf.Sin((angle)  * Mathf.PI / 180));

				if (pr.transform.position.x > transform.position.x)
					Miss (-Mathf.Abs (8 * Mathf.Cos (((angle) + 90) * Mathf.PI / 180)), 8 * Mathf.Sin (((angle) + 90) * Mathf.PI / 180), 60,true);
				else
					Miss (Mathf.Abs (8 * Mathf.Cos (((angle) + 90) * Mathf.PI / 180)), 8 * Mathf.Sin (((angle) + 90) * Mathf.PI / 180), 60,true);


			}
		}
	}
	void OnCollisionStay2D(Collision2D c){

		if (c.transform.tag == "Land" && missTime>0) {

			if(c.contacts.Length>0){
				if(c.contacts[0].normal == new Vector2(0,1)){
					if(rg.velocity.y<=0){
						if(missVec.y<=0)missVec.y = - missVec.y;
						//Debug.Log(rg.velocity.y);
						rg.velocity = new Vector2(rg.velocity.x,missVec.y);
					}
				}
			}
			
		} 
		
	}
	void Miss(float knockBackX,float knockBackY,int t,bool changeTag){
		if (missTime == 0) {
			grav = 0.0f;
			missTime = 1;
			if(changeTag == true)cd.tag = "EBullet";
			missTimeMax = t;
			rg.velocity = new Vector2(knockBackX,knockBackY);
			missVec = new Vector2(knockBackX,knockBackY);
			Score.score += score;
			Instantiate(effect,transform.position,Quaternion.identity);
		}

	}
	void MissBlank(){
		if (missTime > 0) {
			missTime ++;
			if(missTime > missTimeMax){
				Instantiate(effect,transform.position,Quaternion.identity);
				Destroy (this.gameObject);
			}
		}
	}

}
/*
//subete Trigger ni suru
		if (c.transform.tag == "Land") {
			Debug.Log("1");
			if(c.contacts.Length>0){
				if(c.contacts[0].normal == new Vector2(0,1)){
					if (rg.velocity.y <=0) {
						rg.velocity = new Vector2(rg.velocity.x,0);
					}
					transform.position = new Vector3(transform.position.x,c.contacts[0].point.y + cr.y,transform.position.z);
					
					//isLand = true;
					//isJump = false;
				}
			}

	}
	void OnCollisionStay2D(Collision2D c){
		if (c.transform.tag == "Land") {
			Debug.Log("1");
			if(c.contacts.Length>0){
				if(c.contacts[0].normal == new Vector2(0,1)){
					if (rg.velocity.y <=0) {
						rg.velocity = new Vector2(rg.velocity.x,0);
						}
					transform.position = new Vector3(transform.position.x,c.contacts[0].point.y + cr.y,transform.position.z);

					//isLand = true;
					//isJump = false;
				}
			}
			
		} 
		
	}
*/