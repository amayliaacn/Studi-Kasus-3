using namespace std;

class Proses{
  public :
    void cetak(){
      cout<<"Anda Sebagai Proses \n";
    }
    void getData(){
      ambil_Data.open("../dummy/out_input.txt");
      while(!ambil_Data.eof()){
        for(int a=0;a<=1;a++){
          total=uang_kuliah+uang_mkn+uang_jajan+tabungan;
          cout<<"Total : "<<total<<endl;
          break;
        }
        for(int b=0;b<=1;b++){
          simpanan=uang_blnan-total;
          cout<<"Dana Sisa/Simpanan : "<<simpanan<<endl;
          break;
        }
        for(int c=0;c<=1;c++){
          cout<<"Uang Bulanan : "<<uang_blnan<<endl;
          break;
        }
        for(int d=0;d<=1;d++){
          cout<<"Uang Kuliah : "<<uang_kuliah<<endl;
          break;
        }
        for(int e=0;e<=1;e++){
          cout<<"Uang Makan : "<<uang_mkn<<endl;
          break;
        }
        for(int f=0;f<=1;f++){
        cout<<"Uang Jajan : "<<uang_jajan<<endl;
          break;
        }
        for(int g=0;g<=1;g++){
          cout<<"Tabungan : "<<tabungan<<endl;
          return;
        }
      }
      
      ambil_Data.close();
      cout<<"Total : "<<total<<endl;
      cout<<"Dana Simpanan : "<<simpanan<<endl;
      cout<<"Uang Bulanan : "<<uang_blnan<<endl;
      cout<<"Kuliah : "<<uang_kuliah<<endl;
      cout<<"Makan : "<<uang_mkn<<endl;
      cout<<"Jajan : "<<uang_jajan<<endl;
      cout<<"Tabungan :"<<tabungan;
    };
  void toFile(){
    int uang_blnan=5000000;
    int uang_kuliah=2500000;
    int uang_mkn=800000;
    int uang_jajan=400000;
    int tabungan=300000;
    int total;
    total= uang_jajan+uang_kuliah+uang_mkn+tabungan;
    int simpanan;
    simpanan= uang_blnan-total;
    
     tulis_Data.open("api_data.txt");
    tulis_Data<<total<<endl;
    tulis_Data<<simpanan<<endl;
    tulis_Data<<uang_blnan<<endl;
  tulis_Data<<uang_kuliah<<endl;
    tulis_Data<<uang_mkn<<endl;
    tulis_Data<<uang_jajan<<endl;
    tulis_Data<<tabungan;
    tulis_Data.close();
    
  }
  private :
    ifstream ambil_Data;
    ofstream tulis_Data;
    int total;
    int simpanan;
    int uang_blnan=5000000;
    int uang_kuliah=2500000;
    int uang_mkn=800000;
    int uang_jajan=400000;
    int tabungan=300000;
};