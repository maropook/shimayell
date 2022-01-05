//#include <AquesTalkTTS.h>
//#include <M5Stack.h>
 #include <M5Core2.h> // M5Stack Core2の場合はこちらを使う
#include <Avatar.h>
#include <tasks/LipSync.h>
//#include <driver/i2s.h>


#include "AquesTalkTTS.h"
#include "driver/dac.h"

using namespace m5avatar;

// AquesTalk のライセンスキー
// NULLや誤った値を指定すると単に無視されます
const char* AQUESTALK_KEY = "XXXX-XXXX-XXXX-XXXX";
Avatar avatar;




void setup() {
 
  int iret;
  M5.begin(true,true,true,true);


  iret = TTS.create(AQUESTALK_KEY);
  avatar.init();
  avatar.addTask(lipSync, "lipSync");
}

void loop() {
  M5.update();
  if (M5.BtnA.wasPressed()) {
    // 漢字かな混じり文から音声出力する場合
    // TTS.play("こんにちは。", 80);
    TTS.play("konnichiwa", 80);
  }
}
