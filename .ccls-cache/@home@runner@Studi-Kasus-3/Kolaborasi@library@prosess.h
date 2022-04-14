using namespace std;

class Prosess{
  public :
    void cetak(){
      cout<<"Lets go\n";
  }

    void getData(){
      ambil_Data.open("../dummy/out_input.txt");
      bool bulanan=true,kuliah=true,makan=true,jajan=true,tabungann=true; 
     while (!ambil_Data.eof()){
       if(bulanan){
         ambil_Data>>uang_blnan
       ;
         bulanan=false;
         }
       else if (kuliah){
         ambil_Data>>uang_kuliah;
       kuliah=false;
         }
       else if(makan){
         ambil_Data>>uang_mkn;
         makan=false;
         }
       else if(jajan){
         ambil_Data>>uang_jajan;
          jajan=false;
         }
       else if(tabungann){
         ambil_Data>>tabungan;
          tabungann=false;
         }
            ambil_Data.close();
       };
      cout<<"Uang bulanan :"<< uang_blnan<<endl;
      cout<<"Uang kuliah :"<<uang_kuliah<<endl;
      cout<<"Uang makan :"<<uang_mkn<<endl;
      cout<<"Uang jajan :"<<uang_jajan<<endl;
      cout<<"Tabungan "<<tabungan<<endl;
  
      
  private :
    ifstream ambil_Data;
    int uang_blnan;
    int uang_kuliah;
    int uang_makan;
    int uang_jajan;
    int tabungan;

}
