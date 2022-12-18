#include <iostream>
using namespace std;

void garis()
{ // method berada pada scope global
  cout << "===========================================================================================" << endl;
}

int main()
{

  int    total, jumlah_beli_1, jumlah_beli_2, jumlah_beli_3, harga_barang_1, harga_barang_2, harga_barang_3,
         total_harga_barang_1, total_harga_barang_2, total_harga_barang_3, diskon, harga_diskon, cash, cashback, 
         harga_ongkir, harga_akhir;
  char   ulang_menu, menu, ulang2, ulang3, pil_menu, pil_desc_barang, barang_1, barang_2, barang_3, pil_ulang, ongkir;
  
  cout << "\t TUGAS AKHIR PROGRAM C++"        << endl;
  cout << "NAMA KELOMPOK"                     << endl;
  cout << "MUHAMAD HAFIZI        (065122214)" << endl;
  cout << "BAMBANG SUGIHARTO     (065122240)" << endl;
  cout << "CHRISTOFER RICO P.M.  (065122212)" << endl;
  cout << endl;

  cout << "\t SELAMAT DATANG DI TRAVELIEUR STORE" << endl;
  cout << "Kami menjual berbagai produk outdoor" << endl;
  cout << "Dengan kualitas terbaik dari berbagai brand ternama" << endl;
  cout << "Promo Akhir Tahun !!" << endl;
  cout << "Beli Sekarang sebelum kehabisan !!" << endl;
  
  garis();
  do
  {
    cout << "Ingin lihat Menu? (Y/T) : ";
    cin  >> menu;
    cout << endl;
  } while (menu != 'Y');

  garis();

  ulang_menu :
  cout << "MENU TRAVELIEUR STORE"    << endl;
  cout << "1. Lihat Produk"          << endl;
  cout << "2. Promo Akhir Tahun"     << endl;
  cout << "3. Ongkos Kirim"          << endl;
  cout << "4. Beli Produk"           << endl;
  cout << "5. Layanan Pelanggan"     << endl; 
  cout << "Pilih Menu : " ;      cin >> pil_menu; //Pengguna Memasukkan Kode Menu
  cout << endl;
  garis();

  switch (pil_menu)
  {
  case '1':
      cout << "\t PRODUK TRAVELIEUR STORE" << endl;
      cout << "__________________________________________________________________________________________ " << endl;
      cout << "|No|     Jenis Barang   |              Nama Barang               |  Kode |       Harga   | " << endl;
      cout << "------------------------------------------------------------------------------------------ " << endl;
      cout << "|1 | Tas Carier         | Eiger Streamline 35L Carrier Backpack  |   1   | Rp   700.000  | " << endl;
      cout << "|  |                    | Consina Overland 40L Carrier Backpack  |   2   | Rp   400.000  | " << endl;
      cout << "|2 | Jaket Waterproof   | Jaket Eiger Corner Inc                 |   3   | Rp   375.000  | " << endl;
      cout << "|  |                    | UNIQLO Men Jaket                       |   4   | Rp   650.000  | " << endl;
      cout << "|3 | Celana Outdoor     | Celana Eiger Tracker 1 Longpants       |   5   | Rp   455.000  | " << endl;
      cout << "|  |                    | Eiger Terra Venture pants              |   6   | Rp   500.000  | " << endl;
      cout << "|4 | Sepatu Gunung      | Eiger Eagle Plum 2.0 Shoes             |   7   | RP 1.600.000  | " << endl;
      cout << "|  |                    | Arkansas Arei Outdoorgear              |   8   | RP   300.000  | " << endl;
      cout << "|5 | Tenda Camp         | Rei M29 Tent 4-6 Person Q091           |   9   | Rp   900.000  | " << endl;
      cout << "------------------------------------------------------------------------------------------ " << endl;
   break;
   
   case '2':
      cout << "\t PROMO AKHIR TAHUN" << endl;
      cout << " Diskon 10% untuk Pembelian minimal Rp   500.000" << endl;
      cout << " Diskon 25% untuk Pembelian minimal RP 1.000.000" << endl;
   break;

   case '3':
      cout << "\t ONGKOS KIRIM" << endl;
      cout << " Pulau Jawa       (Kode : A) = Rp 10.000" << endl;
      cout << " Luar Pulau Jawa  (Kode : B) = Rp 20.000" << endl;
   break;
   

   case '4':
      cout << "\t KERANJANG BELANJA"    << endl;
      cout << "\t (input kode barang)"  << endl;
      cout << endl;

      //INPUT BARANG DAN KUANTITASNYA
      cout << "Barang Ke 1 : ";
      cin  >> barang_1; // Pengguna memasukan kode barang
      cout << "Jumlah      : ";
      cin  >> jumlah_beli_1; // Pengguna jumlah barang
      cout << endl;

      
      cout << "Barang Ke 2 : ";
      cin  >> barang_2; // Pengguna memasukan kode barang
      cout << "Jumlah      : ";
      cin  >> jumlah_beli_2; // Pengguna jumlah barang
      cout << endl;

      cout << "Barang Ke 3 : ";
      cin  >> barang_3; // Pengguna memasukan kode barang
      cout << "Jumlah      : ";
      cin  >> jumlah_beli_3; // Pengguna jumlah barang
      cout << endl;


      //BARANG 1
      if (barang_1 == '1')
      {
         harga_barang_1 = 700000;
      }
      else if (barang_1 == '2')
      {
         harga_barang_1 = 400000;
      }
      else if (barang_1 == '3')
      {
         harga_barang_1 = 375000;
      }
      else if (barang_1 == '4')
      {
         harga_barang_1 = 650000;
      }
      else if (barang_1 == '5')
      {
         harga_barang_1 = 455000;
      }
      else if (barang_1 == '6')
      {
         harga_barang_1 = 500000;
      }
      else if (barang_1 == '7')
      {
         harga_barang_1 = 1600000;
      }
      else if (barang_1 == '8')
      {
         harga_barang_1 = 300000;
      }
      else if (barang_1 == '9')
      {
         harga_barang_1 = 900000;
      }
      else
      {
         harga_barang_1 = 0;
      }
      
      
      //BARANG 2
      if (barang_2 == '1')
      {
         harga_barang_2 = 700000;
      }
      else if (barang_2 == '2')
      {
         harga_barang_2 = 400000;
      }
      else if (barang_2 == '3')
      {
         harga_barang_2 = 375000;
      }
      else if (barang_2 == '4')
      {
         harga_barang_2 = 650000;
      }
      else if (barang_2 == '5')
      {
         harga_barang_2 = 455000;
      }
      else if (barang_2 == '6')
      {
         harga_barang_2 = 500000;
      }
      else if (barang_2 == '7')
      {
         harga_barang_2 = 1600000;
      }
      else if (barang_2 == '8')
      {
         harga_barang_2 = 300000;
      }
      else if (barang_2 == '9')
      {
         harga_barang_2 = 900000;
      }
         else
      {
         harga_barang_2 = 0;
      }
      
      
      //BARANG 3
      if (barang_3 == '1')
      {
         harga_barang_3 = 700000;
      }
      else if (barang_3 == '2')
      {
         harga_barang_3 = 400000;
      }
      else if (barang_3 == '3')
      {
         harga_barang_3 = 375000;
      }
      else if (barang_3 == '4')
      {
         harga_barang_3 = 650000;
      }
      else if (barang_3 == '5')
      {
         harga_barang_3 = 455000;
      }
      else if (barang_3 == '6')
      {
         harga_barang_3 = 500000;
      }
      else if (barang_3 == '7')
      {
         harga_barang_3 = 1600000;
      }
      else if (barang_3 == '8')
      {
         harga_barang_3 = 300000;
      }
      else if (barang_3 == '9')
      {
         harga_barang_3 = 900000;
      }
         else
      {
         harga_barang_3 = 0;
      }

      //PERHITUNGAN JUMLAH KUANTITAS BARANG DAN HARGANYA
      total_harga_barang_1 = harga_barang_1*jumlah_beli_1;
      total_harga_barang_2 = harga_barang_2*jumlah_beli_2;
      total_harga_barang_3 = harga_barang_3*jumlah_beli_3;

      //STRUK
      garis();
      cout << "\t STRUK PEMBAYARAN"     << endl;
      cout << endl;
      total = total_harga_barang_1 + total_harga_barang_2 + total_harga_barang_3;
      cout << "Total Harga                = Rp " << total << endl;

      //DISKON
      if (total >= 1000000)
      {
         diskon = total*0.25;
         cout << "KAMU DAPAT DISKON 25%" << endl;
      }
      else if(total >= 500000)
      {
         diskon = total*0.10;
         cout << "KAMU DAPAT DISKON 10%" << endl;
      }
      else
      {
         diskon = 0;
         cout << "MAAF KAMU NGGA DAPAT DISKON" << endl;
      }

      harga_diskon = total - diskon;
      cout << "Diskon                     = Rp " << diskon << endl;

      //ONGKIR
      ulang3:
      cout << "Mau Dikirim Kemana? (A/B)  = "; cin >> ongkir;

      if (ongkir == 'A')
      {
         harga_ongkir = 10000;
      }
      else if (ongkir == 'B')
      {
         harga_ongkir = 20000;
      }
      else
      {
         cout << "Pilih Tujuan Dikirimnya Dong" << endl;
         goto ulang3;
      }

      harga_akhir  = harga_diskon + harga_ongkir;
      cout << "Ongkir                     = Rp " << harga_ongkir << endl;

      //TOTAL
      cout << "Total Bayar                = Rp " << harga_akhir << endl;
      cout << endl;

      //PEMBAYARAN DAN CHASBACK
      ulang2 :
      cout << "Uang Kamu Berapa nih?      = Rp " ; cin >> cash;
      cashback = cash - harga_akhir;
      if (cashback < 0)
      {
         cout << "Yahh Maaf Uang Kamu Kurang "<< endl;
         goto ulang2;
      }

      cout << "Uang Kembalian Kamu        = Rp " << cashback << endl;
      cout << endl;
      cout << "Terimakasih Sudah Berbelanja di Travelieur Store" << endl;
      garis();

   break;

   case '5':
      cout << "\t LAYANAN PELANGGAN" << endl;
      cout << "Customer Sevice  Telp  : 123 911 (09.00 - 17.00)" << endl;
      cout << "Customer Sevice  Email : cs@travelieurstore.com" << endl;
   break;

  default:
   break;
  }
   
   //ULANG MENU
   garis();
   cout << "Balik Ke Menu? (Y/T) :";
   cin  >> pil_ulang;
   garis();
   if (pil_ulang == 'Y')
   {
      goto ulang_menu;
   }
   else
   {
   cout << "Terimakasih Sudah Berkunjung di Travelieur Store" << endl;
   }

}