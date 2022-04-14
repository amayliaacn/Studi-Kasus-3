using namespace std;

class Output {
  public :
    void cetak() {
      cout <<"\n\n==== Menghitung Uang Bulanan ==== \n" <<endl;
      cout <<"Uang bulanan -> Rp. " <<data_file [2] <<endl;
      cout <<"Keperluan kuliah -> Rp. " <<data_file [3] <<endl;
      cout <<"Uang makan dalam satu bulan -> Rp. "         <<data_file [4] <<endl;
      cout <<"Uang jajan dalam satu bulan -> Rp. " <<data_file [5] <<endl;
      cout <<"Uang yang ingin ditabung -> Rp. " <<data_file [6] <<endl;
      cout <<"Total pengeluaran Rp. " <<data_file[0] <<endl;
    }
    void getData() {
      ambil_data.open("api_data.txt");
      while (!ambil_data.eof()){
        ambil_data >> data_file [index];
        index += 1;
        }
      ambil_data.close();
    } 
  private :
		ifstream ambil_data;
    string data_file [30];
    int index = 0;
};