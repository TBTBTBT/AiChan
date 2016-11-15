using UnityEngine;
using System.Collections;

public class HeartManager : MonoBehaviour {
	public GameObject heart;
	// Use this for initialization
	void Start () {
		for (int i = 0; i<3; i++) {
			GameObject obj = (GameObject)Instantiate (heart, new Vector3 (-1.5f - i * 0.5f, -1.3f, 0), Quaternion.identity);
			obj.transform.parent = transform;
		}
		EventManager.OnDamaged.AddListener (Damage);
	}
	
	// Update is called once per frame
	void Damage(){
		if (transform.childCount > 0) {
			Destroy(transform.GetChild(0).gameObject);
		}
	}
}
