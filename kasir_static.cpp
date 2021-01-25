#include <iostream>
#include <stdio.h>
#include <cstring>

using namespace std;

void garis(){
cout<<"\n---------------------------------------------------------"<<endl;
}
int main (){
//Deklasrasi Variabel
    int jumlahBarang,diskon,subTotal,JumBayar,harga=350000;
    double PotonganHarga;
    string bonus, selectConuter;
//Mulai
awal:
    cout<<"Jumlah Pembeian barang:";cin>>jumlahBarang;
    //Pembuatan rules
    if (jumlahBarang<50){
        diskon= 0,PotonganHarga=0*harga;//strpcy(bonus," ");
        bonus= " ";//bisa di ganti strcpy(dest,src)
    }else if (jumlahBarang>=50&&jumlahBarang<100){
        diskon=10,PotonganHarga=0.1*harga;
        bonus= "Piring cantik"; //bisa di ganti strcpy(dest,src)
    }else if (jumlahBarang>=100&&jumlahBarang<200){
        diskon=15,PotonganHarga=0.15*harga;
        bonus="Sound Simbadda"; //bisa di ganti strcpy(dest,src)
    }else{
        diskon=25,PotonganHarga=0.25*harga;
        bonus="laptop"; //bisa di ganti strcpy(dest,src)
    }
    //yuk matematikanya== penjumlahan
    subTotal=harga*jumlahBarang;
    JumBayar=subTotal-PotonganHarga;
    //cetak
    cout<<"Jumlah : "<<"Rp. "<<subTotal;
    garis();
    cout<<"Anda Mendapatkan Potngan, "<<diskon<<"%";
    garis();
    cout<<"Dengan Nominal : "<<"Rp. "<<PotonganHarga;
    garis();
    cout<<"Total Pembayaran\t:"<<"Rp. "<<JumBayar;
    garis();
    cout<<"SELAMAT,Anda Mendapatkan Bonus "<<bonus;
    garis();
    cout<<"Ulangi Belanja ?";garis();cout<<"(Y/N)\t:";cin>>selectConuter;
     if (selectConuter=="Y"||selectConuter=="y"){
        goto awal;
    }else if (selectConuter=="N"||selectConuter=="n"){
    cout<<"Terimakasih telah Berbelanja";
    garis();
    goto akhir;
    }else{
    cout<<"kode yang anda Masukan salah!";
    goto akhir;
    }
akhir:
return 0;
//selesai
}
