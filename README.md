# COYOTE

Coyote ürünü C programlama dilinde yazılmış bir terminal aplikasyonudur. Programın amacı RoadRunner'ı yakalamaktır.


Coyote aplikasyonunda iki adet thread bulunur. İlk thread Coyote, ikincisi RoadRunner'dır.  
Coyote’nin 100 can puanı bulunmaktadır. (100 HP)  
Programda RoadRunner 0-100 arasında bir defa rastgele değer seçmektedir.  
Coyote, RoadRunner’ın seçtiği değeri tahmin eder, tutulan değeri bilirse RoadRunner’ı yakalamış demektir.  
Eğer Coyote ‘nin tahmini başarısız ise 1 ile 5 arasında (rastgele) can puanı düşmektedir.  


### Nasıl Çalışır ?

- "Make Package" ve "gcc" yüklenir
- Programın içinde olduğu klasör açılır
- ```make``` komutu ile program derlenir
- ```make install``` komutu ile program objesi direkt çağırılabilir hale gelir
- ```Coyote.o``` ile program çalıştırılır
  
![image](https://user-images.githubusercontent.com/94308363/175788340-2f9aa003-f061-4b41-904b-5c9027a435a3.png)

- ```make clean``` komutu ile obje dosyası temizlenir
  
![image](https://user-images.githubusercontent.com/94308363/175788377-a24a7a6e-cd41-457e-bfb2-d41795318605.png)
