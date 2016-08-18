using UnityEngine;
using System.Collections;

public class TouchInvoke : MonoBehaviour {
	
	void Update () {
		if (TouchInput.GetTouch() == TouchInfo.Began)EventManager.Invoke (ref EventManager.OnTouchBegin);
		if (TouchInput.GetTouch() == TouchInfo.Moved)EventManager.Invoke (ref EventManager.OnTouchMove);
		if (TouchInput.GetTouch() == TouchInfo.Ended)EventManager.Invoke (ref EventManager.OnTouchEnd);
	}
}
