using UnityEngine;
using System.Collections;

public class Item : MonoBehaviour {
	public GameObject effect;
	// 0 candy
	// 1 protein
	public int num = 0;
	void OnTriggerStay2D(Collider2D c){
		if (c.transform.tag == "Arm" || c.transform.tag == "Player") {
			Destroy(this.gameObject);
			Instantiate(effect,transform.position,Quaternion.identity);
			if (num == 1)EventManager.Invoke (ref EventManager.OnGetProtein);
		}
	}
}
