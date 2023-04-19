Click Green code button > Download ZIP
Copy to local PC where QMK is setup > replace all files
Navigate to keyboard folder in terminal (Ex. 'cd qmk_firmware/keyboards/zmk2')
Make changes to the keymap.c file in the keymaps folder using some text editor (Ex. zmk2/keymaps/vial
type 'qmk compile -kb YOURKEYBOARD -km KEYMAP' (Example: 'qmk compile -kb zmk2 -km vial')
