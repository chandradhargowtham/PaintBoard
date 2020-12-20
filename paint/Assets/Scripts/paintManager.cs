using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class paintManager : MonoBehaviour
{
    public Material drawMat;
    bool paintMode;
    LineRenderer pen;
    int drawPoints;
    int noOfStrokes;
    // Start is called before the first frame update
    void Start()
    {
        drawMat.color = Color.white;
        Camera.main.orthographic = transform;
        initDraw();
        Debug.Log(Application.persistentDataPath);
    }

    // Update is called once per frame
    void Update()
    {
        
        if (Input.GetMouseButton(0))
        {
            paintMode = true;
            pen.positionCount = ++drawPoints;
            pen.SetPosition(drawPoints-1,Camera.main.ScreenPointToRay(Input.mousePosition).GetPoint(1));
        }
        
        if (Input.GetMouseButtonUp(0))
        {
            drawPoints = 0;
            paintMode = false;
            initDraw();
        }
    }

    void initDraw()
    {
        GameObject line = new GameObject();
        line.name = "Line"+(noOfStrokes++);
        line.AddComponent<LineRenderer>();
        line.transform.parent = GameObject.Find("DrawContent").transform;
        pen = line.GetComponent<LineRenderer>();
        pen.material = drawMat;
        pen.startWidth = 0.1f;
        pen.endWidth = 0.1f;
        pen.startColor = Color.white;
        pen.endColor = Color.white;
    }

    #region Canvas Button Methods
    public void openSaveDialog()
    {
        //Done Via Button UI
    }
    public void saveButton(UnityEngine.UI.InputField fileNames)
    {
        string fileName=fileNames.text;
        saveFile(fileName);
    }

    public void saveFile(string fileName)
    {
        
        
#if UNITY_STANDALONE_WIN
        string path = System.Environment.GetFolderPath(System.Environment.SpecialFolder.MyDocuments);
        ScreenCapture.CaptureScreenshot(System.IO.Path.Combine(System.Environment.GetFolderPath(System.Environment.SpecialFolder.MyPictures),
        fileName+".png"));
#else
ScreenCapture.CaptureScreenshot(fileName+".png");
#endif
        GameObject.Find("SaveDialogPanel").SetActive(false);
    }
    public void cancelSave()
    {
        //Done Via Button UI
    }
    public void Quit()
    {
        Application.Quit();
    }
#endregion
}
