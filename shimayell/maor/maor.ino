#include <AquesTalkTTS.h>
//#include <M5Stack.h>
 #include <M5Core2.h> // M5Stack Core2の場合はこちらを使う
#include <Avatar.h>
#include <tasks/LipSync.h>

using namespace m5avatar;

// AquesTalk のライセンスキー
// NULLや誤った値を指定すると単に無視されます
const char* AQUESTALK_KEY = "XXXX-XXXX-XXXX-XXXX";
Avatar avatar;

void setup() {
  int iret;
  M5.begin();
  // 漢字かな混じり文から音声出力する場合(辞書ファイルが必要)
  // iret = TTS.createK(AQUESTALK_KEY);
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
  if (M5.BtnB.wasPressed()) {
    // 漢字かな混じり文から音声出力する場合
    // TTS.play("こんにちは。", 80);
    TTS.play("gennkidesuka", 80);
  }
  if (M5.BtnC.wasPressed()) {
    // 漢字かな混じり文から音声出力する場合
    // TTS.play("こんにちは。", 80);
    TTS.play("kanasiidesu", 80);
  }
}
