using namespace std;

class Input{
  public :
void cetak(){
  cout<<"=============================="<<endl;
cout<<"Aplikasi Menghitung Uang Bulanan\n";
cout<<"=============================="<<endl;
cout<<"Masukkan jumlah uang bulanan : "<<endl;
cin>>uang_blnan;
cout<<"Masukkan jumlah keperluan kuliah : "<<endl;
cin>>uang_kuliah;
cout<<"Masukkan jumlah uang makan dalam satu bulan : "<<endl;
cin>>uang_mkn;
cout<<"Masukkan jumlah uang jajan dalam satu bulan"<<endl;
cin>>uang_jajan;
cout<<"Masukkan jumlah uang yang ingin di tabung : "<<endl;
cin>>tabungan;
}
  void toFile(){
    tulis_Data.open("api_data.txt");
tulis_Data<<uang_blnan<<endl;
tulis_Data<<uang_kuliah<<endl;
tulis_Data<<uang_mkn<<endl;
tulis_Data<<uang_jajan<<endl;
tulis_Data<<tabungan<<endl;
  }

  private :
    ofstream tulis_Data;
    int uang_blnan;
    int uang_kuliah;
    int uang_mkn;
    int uang_jajan;
    int tabungan;
};