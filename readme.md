Click Green code button > Download ZIP \n
Copy to local PC where QMK is setup > replace all files
Navigate to keyboard folder in terminal (Ex. 'cd qmk_firmware/keyboards/zmk2')
Make changes to the keymap.c file in the keymaps folder using some text editor (Ex. zmk2/keymaps/vial)
You may need to turn some stuff off in the rules.mk file, space is limited on ATmega32U4. turning stuff off may also break the compile, have to figure out what works
type 'qmk compile -kb YOURKEYBOARD -km KEYMAP' (Example: 'qmk compile -kb zmk2 -km vial')
.hex file is created somewhere in the qmk directory
Open QMK Toolbox, Auto-Flash checked, click open then find the .hex file
You'll need to short the pins for GND and Reset, while also plugging in the USB at the same time. Might have to try several times.
![Screenshot 2023-04-19 at 5 13 56 PM](https://user-images.githubusercontent.com/97918638/233219279-7a1651b0-1350-4d74-81f0-d5b7e91fff41.png)
![Screenshot 2023-04-19 at 5 14 27 PM](https://user-images.githubusercontent.com/97918638/233219307-b6aa9ada-31f1-4894-944b-bb38b54b0efd.png)
