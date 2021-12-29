
#include <M5Stack.h>
// #include <M5Core2.h> // M5Stack Core2の場合はこちらを使う
#include <Avatar.h>

using namespace m5avatar;

Avatar avatar;

void setup()
{
  M5.begin();
  avatar.init(); // 描画を開始します。
}

void loop()
{
  // アバターの描画は別のスレッドで行われるので、
  // loopループの中で毎回描画をする必要はありません。
}
