# PaintBoard v1.1
A paint application built on Unity and C#.

Features:
1. Works on Windows,Mac,iPhone,iPad and Android devices (Windows and Android save locations not updated - might need to change locations)
2. Saves files as .png and .jpg(for mobile devices)
3. Multiple color options for drawing
4. Textbox feature added (font-arial)
5. Works with stylus/apple pencil (Tested on IPad Mini 5)

Upcoming Features:
1. Advanced Color Palette
2. Different save locations for different platforms (currently files are saved in the gallery on iPhone and MyPictures directory on mac/windows).
3. Textbox fonts and sizes.
4. Undo/Redo options

Known Issues:
1. Saved image on iPhone and iPad will have a small discolored bezel on the top (having issues cropping out the menu from the captured image) - will be fixed as a priority.

Currently Working on:
1. Edit History - Lists all objects (lines/text) and then adjust the transforms,delete and duplicate - other specific attributes:
  a. Text boxes must have edit text,font style,size and resize options.
  b. Lines will have color change option.
 
2. Save code is a little ameteurish and unstructured. Also mobile save option has sync issues - will sort those out.
