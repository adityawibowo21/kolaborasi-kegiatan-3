using namespace std;

class Proses{
	public :
		void cetak(){
			cout<<"Anda sebagai proses \n";
		}
    void getData(){
      ambil_data.open("../dummy/out_input.txt");
      bool ayam_goreng = true; 
      while(!ambil_data.eof()){
        if (ayam_goreng){
          ambil_data >> bnyk_aymGr;
          ayam_goreng = false;
        }
        else{
          ambil_data >> bnyk_aymBk;
        }
      }
      ambil_data.close()
      cout<<"banyak ayam goreng : "<<bnyk_aymGr<<endl;
      cout<<"banyak ayam bakar : "<<bnyk_aymBk<<endl;
    }

    void tofile(){
      int total = (hrg_ayamGr * bnyk_aymGr) + (hrg_aymBk * bnyk_aymBk);
      float batas = 50000;
      float t2 = float(total);
      float diskon = t2 * 0.1;

      if(total >= batas)
        t2 = t2 - diskon;
    }
  private :
    ifstream ambil_data;
    ofstream tulis_data;
    int bnyk_aymGr;
    int bnyk_aymBk;
    int hrg_ayamGr = 17000;
    int hrg_aymBk = 21000;
};