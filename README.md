# Desktop Noroshi (DTN)
DTNとはオープンソースのIoT狼煙デバイスです。親機と子機で構成されています。
親機はintel Edisonとtwe-liteで構成されています。(確認はしてませんが、Node.jsが動けば動作すると思うのでRaspberry Piでも動作すると思います)
子機はArduino Pro Miniとtwe-liteとSolid State Relayで構成されています。(その内、チップを全部SMDにして基盤をまとめます)。mraaライブラリを使っているので、intel Edisonの代わりにRaspberry piなども使えます。

## dependency
+ node v4.4.3
+ npm   4.0.2
+ Arduino  1.6.9~

## device
Use a lasor cutter and CNC miling machine to make this device.

### material
+ 3mm acrylic
+ 4mm MDF

### parts list
+ [Arduino Pro Mini 3.3V 8Mhz](https://www.sparkfun.com/products/11114)
+ [TWE-Lite DIP](http://akizukidenshi.com/catalog/g/gM-06760/)
+ [SSR kit](http://akizukidenshi.com/catalog/g/gK-00203/)
+ [MINI USB cable](https://www.amazon.co.jp/gp/product/B00068KUX8/ref=oh_aui_detailpage_o08_s00?ie=UTF8&psc=1)
+ [15mm small FAN](http://store.shopping.yahoo.co.jp/vshopu/2168-1301.html?sc_e=slga_pla)
+ [パナソニック トリプルタップ1500 B/P WH2013BP](https://www.amazon.co.jp/gp/product/B007CW3010/ref=oh_aui_detailpage_o05_s00?ie=UTF8&psc=1)
+ [サンワサプライ 超小型USB充電器(1A出力・ホワイト) ACA-IP32WN](https://www.amazon.co.jp/gp/product/B01A89GJ70/ref=oh_aui_detailpage_o09_s00?ie=UTF8&psc=1)
+ [Mini USBコネクタ](http://akizukidenshi.com/catalog/g/gC-05843/)
+ [メスピンヘッダ](http://akizukidenshi.com/catalog/g/gC-10073/) x 2
+ 4mm ボルト x 6
+ 霧化ユニット USH-400 (ECO)
+ 抵抗 5kΩ 1/4w
+ [電源トランス](http://toei-trans.jp/?pid=91217150)

## program
`cd program/server/noroc_server/`

`npm install`

`node bin/www`
