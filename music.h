#include <Audio.h>
#include <Wire.h>
#include <SPI.h>
#include <SD.h>
#include <SerialFlash.h>

// GUItool: begin automatically generated code
AudioPlaySdWav           playSdWav1;     //xy=568,295
AudioPlaySdWav           playSdWav2;     //xy=570,422
AudioPlaySdWav           playSdWav3;     //xy=578,556
AudioPlaySdWav           playSdWav4;     //xy=579,663
AudioAmplifier           amp1;           //xy=778,188
AudioAmplifier           amp3;           //xy=788,235
AudioAmplifier           amp5;           //xy=790,285
AudioAmplifier           amp2;           //xy=800,564
AudioAmplifier           amp4;           //xy=803,619
AudioAmplifier           amp7;           //xy=808,341
AudioAmplifier           amp6;           //xy=812,666
AudioAmplifier           amp8;           //xy=821,714
AudioMixer4              mixer2;         //xy=1021,584
AudioMixer4              mixer1;         //xy=1026,200
AudioOutputI2S           i2s1;           //xy=1179,405
AudioConnection          patchCord1(playSdWav1, 0, amp1, 0);
AudioConnection          patchCord2(playSdWav1, 1, amp2, 0);
AudioConnection          patchCord3(playSdWav2, 0, amp3, 0);
AudioConnection          patchCord4(playSdWav2, 1, amp4, 0);
AudioConnection          patchCord5(playSdWav3, 0, amp5, 0);
AudioConnection          patchCord6(playSdWav3, 1, amp6, 0);
AudioConnection          patchCord7(playSdWav4, 0, amp7, 0);
AudioConnection          patchCord8(playSdWav4, 1, amp8, 0);
AudioConnection          patchCord9(amp1, 0, mixer1, 0);
AudioConnection          patchCord10(amp3, 0, mixer1, 1);
AudioConnection          patchCord11(amp5, 0, mixer1, 2);
AudioConnection          patchCord12(amp2, 0, mixer2, 0);
AudioConnection          patchCord13(amp4, 0, mixer2, 1);
AudioConnection          patchCord14(amp7, 0, mixer1, 3);
AudioConnection          patchCord15(amp6, 0, mixer2, 2);
AudioConnection          patchCord16(amp8, 0, mixer2, 3);
AudioConnection          patchCord17(mixer2, 0, i2s1, 1);
AudioConnection          patchCord18(mixer1, 0, i2s1, 0);
AudioControlSGTL5000     sgtl5000_1;     //xy=355,483
// GUItool: end automatically generated code
