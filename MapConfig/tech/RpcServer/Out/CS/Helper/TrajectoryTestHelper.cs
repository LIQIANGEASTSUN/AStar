﻿#if UNITY_EDITOR
using UnityEngine;
using UnityEditor;
using GenPB;
using System;
using System.IO;
using System.Collections;
using System.Collections.Generic;





public class TrajectoryTestHelper : MonoBehaviour
{




}

[CustomEditor(typeof(TrajectoryTestHelper))]
public class TrajectoryTester : Editor
{

    public override void OnInspectorGUI()
    {
        base.OnInspectorGUI();
        


    }

}
#endif