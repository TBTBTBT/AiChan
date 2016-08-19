using UnityEngine;
using System.Collections;

public class FollowCamera : MonoBehaviour {
	[SerializeField]AiChan p ;
	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
		if (p != null) {
			if(p.IsMistake() == false){
			if (p.transform.position.y <= 0) {
				transform.position = new Vector3 (p.transform.position.x + 0.3f, 0, transform.position.z);
			} else {
				transform.position = new Vector3 (p.transform.position.x + 0.3f, p.transform.position.y, transform.position.z);
			}
			}
		}
	}
}
