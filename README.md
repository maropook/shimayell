# shimayell


token b4e62df9efc919fa91774dd456d815bf

## Arduino IDE M5stack 初期設定
https://yotamatsumaru.jp/blog/arduino_setting/

 __javaのerrorが出た時__
/Users/${username}/Library/Arduino15/packages/esp32/hardware/esp32/1.0.6/にあるjsonファイルを削除し，再起動する

avatar-talkするには以下の設定が必要．顔を出すだけなら不要
https://kenaka.xsrv.jp/kotapon/2021/02/04/m5stack-avatardeiroiro/
http://blog-yama.a-quest.com/?eid=970188

1.上のようにplatform.local.txt作る(esp32のversionによって異なる.macなら/Users/${username}/Library/Arduino15/packages/esp32/hardware/esp32/1.0.6/ を見ればバージョンわかる platform.txtはそこにある．それをいじる，

2.アクエストをダウンロードして上の記事に示す場所に置く

3.m5stack-avatarをインクルードした時に、libフォルダー→AquesTalkTTSフォルダーの中に入っているAquesTalkTTS.hとAquesTalkTTS.cppの二つのファイルをｓｒｃフォルダーに移動させておく
