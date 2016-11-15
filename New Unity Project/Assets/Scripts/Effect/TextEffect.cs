using UnityEngine;
using System.Collections;

public class TextEffect : MonoBehaviour {
	int time=0;
	float velY;
	Rigidbody2D rg;
	int c = 0;
	// Use this for initialization
	void Start () {
		velY = 2;
		rg = GetComponent<Rigidbody2D> ();
		c = (int)transform.position.z;
		transform.position = new Vector3 (transform.position.x,transform.position.y,-6);
		GetComponent<TextMesh> ().text = "×"+ c;
	}
	
	// Update is called once per frame
	void Update () {
		if (velY > 0)
			velY -= 0.2f;
		rg.velocity = new Vector2 (rg.velocity.x,velY);
		time++;
		if (time > 30)
			Destroy (this.gameObject);
	}
}
