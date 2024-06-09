# runtuh

## kesalahan

### lihat dulu bentuk inputnya

aku kira inputannya itu bisa langsung diproses, ternayata dia itu satu string/integer panjang, jadi harus dipecah dulu.

### perhatikan sifat unik variabel integer

aku kira inputtan dengan integer cukup, ternyata harus menggunakan string karena kalo 00000 akan disimpan sebagai 0

### perhatikan bagaimana interaksi antarvariabel

disini aku mencoba mengubah variabel string menjadi variabel boolean supaya menghemat waktu dan memori, hal itu mungkin sebenarnya, tapi pendekatan awalku adalah untuk meng-assign variabel secara langsung. hal ini tidak mungkin dilakukan karena jika string berisi maka dia otomatis mengembalikan 1, dan jika kosong dia akan mengembalikan 0.

kalo kita ubah ke integer maka hasilnya akan menjadi representasi ascii dari char tersebut. maka kalo kita mau ubah langsung pake cara mengubah nilai (=) cara yang mungkin hanyalah dengan menggunakan variabel char.

lalu setelah kupikir sejenak, ternyata pengubahan dari string menjadi bool itu mungkin jika kita menggunakan percabangan, misal

```cpp
if (input[i][j] == '1') {tetris[i][j] = true;}
else {tetris[i][j] = false;}
```

sedikit catatan, kalo char pakenya petik satu ('), kalo string pake petik dua (")

jangan sampek salah variabel loop sama variabel limiter loop

### perhatikan variabel jika berususan dengan nested loop