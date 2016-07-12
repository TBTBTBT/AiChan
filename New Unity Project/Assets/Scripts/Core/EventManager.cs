using UnityEngine;
using UnityEngine.Events;
using System.Collections;

public class UnityEventIntArg : UnityEvent <int>{}
public class EventManager : MonoBehaviour {
	static public UnityEvent OnDestroyEnemy;
	static public UnityEvent OnDestroyPlayer;
	static public UnityEvent OnDestroyJoint;
	static public UnityEvent OnHitSword;
	// Use this for initialization
	void Awake() {
		Debug.Log ("Awake Event");
		SetEvent (ref OnDestroyEnemy);
		SetEvent (ref OnDestroyPlayer);
		SetEvent (ref OnDestroyJoint);
		SetEvent (ref OnHitSword);
	}
	void SetEvent(ref UnityEvent u ){
		if (u == null) {
			u = new UnityEvent ();
		}
	}
	void SetEventIntArg(ref UnityEventIntArg u ){
		if (u == null) {
			u = new UnityEventIntArg ();
		}
	}
	static public void Invoke(ref UnityEvent u ){
		if (u != null) {
			u.Invoke();
		}
	}
	static public void InvokeIntArg(ref UnityEventIntArg u ,int a){
		if (u != null) {
			u.Invoke(a);
		}
	}
	// Update is called once per frame
}
