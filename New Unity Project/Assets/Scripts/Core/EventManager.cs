using UnityEngine;
using UnityEngine.Events;
using System.Collections;

public class UnityEventIntArg : UnityEvent <int>{}
public class UnityEventVecIntArg : UnityEvent <Vector2,int>{}
public class EventManager : MonoBehaviour {
	static public UnityEvent OnTouchBegin;
	static public UnityEvent OnTouchMove;
	static public UnityEvent OnTouchEnd;
	static public UnityEvent OnPunchBegin;
	static public UnityEvent OnPunchEnemy;
	static public UnityEvent OnJump;
	static public UnityEvent OnGrab;
	static public UnityEvent OnDamaged;
	static public UnityEvent OnPlayerPosChange;
	static public UnityEventVecIntArg OnCombo;
	static public UnityEvent OnGetProtein;
	// Use this for initialization
	void Awake() {
		SetEvent (ref OnTouchBegin);
		SetEvent (ref OnTouchMove);
		SetEvent (ref OnTouchEnd);
		SetEvent (ref OnPunchBegin);
		SetEvent (ref OnPunchEnemy);
		SetEvent (ref OnJump);
		SetEvent (ref OnGrab);
		SetEvent (ref OnDamaged);
		SetEvent (ref OnPlayerPosChange);
		SetEventVecIntArg (ref OnCombo);
		SetEvent (ref OnGetProtein);
		//SetEvent (ref OnTouchEnd);
		//SetEvent (ref OnTouchEnd);
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
	void SetEventVecIntArg(ref UnityEventVecIntArg u ){
		if (u == null) {
			u = new UnityEventVecIntArg ();
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
	static public void InvokeVecIntArg(ref UnityEventVecIntArg u ,Vector2 a,int b){
		if (u != null) {
			u.Invoke(a,b);
		}
	}
	// Update is called once per frame
}
