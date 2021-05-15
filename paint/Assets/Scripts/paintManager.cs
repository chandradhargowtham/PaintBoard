﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
#if UNITY_IOS
using NativeGalleryNamespace;
#endif
public class paintManager : MonoBehaviour
{
    public Material currentPen;
    public List<Material> penList;
    bool paintMode;
    bool textMode;
    LineRenderer pen;
    int drawPoints;
    int noOfStrokes;
    public Button MenuSaveOption;
    public Text saveConfirmText;

    // TextBox related vars
    string textBoxText;
    Vector3 textboxPosition;
    public Texture2D textCursorTexture;
    public Texture2D penCursorTexture;
    Vector2 cursorHotspot = new Vector2(0, 31);

    // UI Items
    public GameObject MenuPanel;
    public GameObject SavePanel;
    public GameObject TextBoxPanel;

    // Start is called before the first frame update
    void Start()
    {
        Camera.main.orthographic = transform;
        colorChange("Red");
        generateLine();        
    // If the platform is IOS, a new listener is added - else the existing save listener which is attached in the scene inspector will be used
#if UNITY_IOS
        MenuSaveOption.onClick.AddListener(saveFile);
#endif
    }

    // Update is called once per frame
    void Update()
    {
        if(Input.GetKey(KeyCode.T))
        {
            textMode = true;
        }

        if(textMode)
        {
            Cursor.SetCursor(textCursorTexture,cursorHotspot, CursorMode.Auto);
            if (Input.GetMouseButton(0))
            {
                Debug.Log("Text");
                
                GameObject temp = new GameObject();
                temp.gameObject.transform.parent= GameObject.Find("DrawContent").transform;
                temp.gameObject.name = "TextBox";
                temp.AddComponent<Canvas>();
                temp.AddComponent<CanvasScaler>();
                temp.AddComponent<GraphicRaycaster>();
                Canvas c = temp.GetComponent<Canvas>(); 
                c.renderMode = RenderMode.WorldSpace;
                c.worldCamera=Camera.main;
                
                GameObject text = new GameObject();
                text.name = "text";
                text.transform.parent = c.transform;
                //Debug.Log(Camera.main.ScreenPointToRay(Input.mousePosition).GetPoint(1));
                text.transform.localPosition = Vector3.zero;
                text.AddComponent<Text>();
                text.GetComponent<RectTransform>().sizeDelta = new Vector2(600, 200);
                text.GetComponent<Text>().text = textBoxText;
                text.GetComponent<Text>().color = Color.black;
                text.GetComponent<Text>().font = Font.CreateDynamicFontFromOSFont("Arial",40);
                text.GetComponent<Text>().fontSize = 40;
                text.GetComponent<RectTransform>().rect.Set(0,0,100 ,50);
                c.GetComponent<RectTransform>().localScale = new Vector3(.01f, .01f, .01f);
                temp.transform.position = Camera.main.ScreenPointToRay(Input.mousePosition).GetPoint(1);
                text.GetComponent<Text>().alignment = TextAnchor.MiddleCenter;
                textMode = false;
                Cursor.SetCursor(penCursorTexture, cursorHotspot, CursorMode.Auto);
            }
        }

        if (Input.GetMouseButton(0))
        {                                           
            paintMode = true;
            pen.positionCount = ++drawPoints;
            pen.SetPosition(drawPoints - 1, Camera.main.ScreenPointToRay(Input.mousePosition).GetPoint(1));            
        }
        
        if (Input.GetMouseButtonUp(0))
        {
            drawPoints = 0;
            paintMode = false;
            generateLine();
        }
    }

    void generateLine()
    {
        GameObject line = new GameObject();
        line.name = "Line"+(noOfStrokes++);
        line.AddComponent<LineRenderer>();
        line.transform.parent = GameObject.Find("DrawContent").transform;
        pen = line.GetComponent<LineRenderer>();
        pen.material = currentPen;
        pen.startWidth = 0.1f;
        pen.endWidth = 0.1f;
        pen.startColor = currentPen.color;
        pen.endColor = currentPen.color;
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

    public void TextBoxButton(UnityEngine.UI.InputField fileNames)
    {
        string fileName = fileNames.text;
        textBoxText = fileName;        
        TextBoxPanel.SetActive(false);
        textMode = true;
    }

    void EnableMenu()
    {
        MenuPanel.SetActive(true);
    }
    void wait()
    {
        MenuPanel.SetActive(false);
    }
    void saveConfirm()
    {
        saveConfirmText.gameObject.SetActive(false);
    }
    #endregion
    #region Save and Other Admin Functions
    public void saveFile()
    {
        saveFile("placeholder");
    }
    public void saveFile(string fileName)
    {


#if UNITY_STANDALONE_WIN
        GameObject.Find("MenuBarPanel").SetActive(false);
        string path = System.Environment.GetFolderPath(System.Environment.SpecialFolder.MyDocuments);
        ScreenCapture.CaptureScreenshot(System.IO.Path.Combine(System.Environment.GetFolderPath(System.Environment.SpecialFolder.MyPictures),
        fileName+".png"));
#elif UNITY_STANDALONE_OSX
        MenuPanel.SetActive(false);
        if (fileName.Length < 1) fileName = "PaintBoardPicture";

        if(System.IO.Directory.Exists(System.IO.Path.Combine(System.Environment.GetFolderPath(System.Environment.SpecialFolder.MyPictures),"PaintBoard")))
        {
            Debug.Log("Exitst"+ System.IO.Path.Combine(System.Environment.GetFolderPath(System.Environment.SpecialFolder.MyPictures), "PaintBoard"));
        }else
        {
            Debug.Log("Not Exitst");
            System.IO.Directory.CreateDirectory(System.IO.Path.Combine(System.Environment.GetFolderPath(System.Environment.SpecialFolder.MyPictures), "PaintBoard"));
        }
        ScreenCapture.CaptureScreenshot(System.IO.Path.Combine(System.Environment.GetFolderPath(System.Environment.SpecialFolder.MyPictures),
        "PaintBoard/"+fileName + ".png"));
        
        Invoke("EnableMenu", 2);
        //saveConfirmText.gameObject.SetActive(true);
        //Invoke("saveConfirmS", 2);



#elif UNITY_IOS

        SavePanel.SetActive(false);
        
        Texture2D ss = new Texture2D(Screen.width, Screen.height, TextureFormat.RGB24, false);

        Rect r = new Rect(0, 0, Screen.width, Screen.height / 1.2f);
        
        ss.ReadPixels(r, 0, 0);
        ss.SetPixel(0, 0, Color.white);
        ss.wrapMode=TextureWrapMode.Repeat;
        ss.Apply();
        
        // Save the screenshot to Gallery/Photos
        NativeGallery.Permission permission = NativeGallery.SaveImageToGallery(ss, "Gallery", "PaintBoardImage.jpg", (success, path) => Debug.Log("Media save result: " + success + " " + path));
        Debug.Log("Permission result: " + permission);
        // To avoid memory leaks
        Destroy(ss);
        //saveConfirmText.gameObject.SetActive(true);
        //Invoke("saveConfirm",2);
#elif UNITY_EDITOR
        Texture2D ss = ScreenCapture.CaptureScreenshotAsTexture();
            
#else
        ScreenCapture.CaptureScreenshot(fileName + ".png");
#endif
        SavePanel.SetActive(false);        
    }
    public void cancelSave()
    {
        //Done Via Button UI
    }
    public void Quit()
    {
        Application.Quit();
    }

    public void Eraser()
    {
        GameObject lines = GameObject.Find("DrawContent");
        foreach(Transform x in lines.transform)
        {
            Destroy(x.gameObject);
        }
    }
    #endregion
#region Color Functionality
    public void colorChange(string colorName)
    {
        switch(colorName)
        {
            case "Red": currentPen = penList[0];  break;
            case "Blue": currentPen = penList[1]; break;
            case "Black": currentPen = penList[2]; break;
            case "Yellow": currentPen = penList[3]; break;
            case "White": currentPen = penList[4]; break;
            case "Orange": currentPen = penList[5]; break;
            case "LightGreen": currentPen = penList[6]; break;
            case "DarkGreen": currentPen = penList[7]; break;

        }
        
    }
#endregion
}
