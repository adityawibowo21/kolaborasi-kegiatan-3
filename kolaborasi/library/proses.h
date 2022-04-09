using namespace std;

class Proses{
	public :
		void cetak(){
			cout<<"Anda sebagai proses \n";
		}
    void getData(){
      ambil_data.open("api_data.txt");
      bool ayam_gprk=true,ayam_gr=true,udang_gr=true,cumi_gr=true,ayam_bk=true;
      while(!ambil_data.eof()){
          if(ayam_gprk){
            ambil_data>>bnyk_aymGp;
            ayam_gprk=false;
          }
          else if (ayam_gr){
            ambil_data>>bnyk_aymGr;
            ayam_gr=false;
          }
          else if(udang_gr){
            ambil_data>>bnyk_udngGr;
            udang_gr=false;
          }
          else if (cumi_gr){
            ambil_data>>bnyk_cumiGr;
            cumi_gr=false;
          }
          else{
            ambil_data>>bnyk_aymBk;
          }
      }
      ambil_data.close();
      cout<<"banyak ayam geprek  : "<<bnyk_aymGp<<endl;
      cout<<"banyak ayam goreng  : "<<bnyk_aymGr<<endl;
      cout<<"banyak udang goreng : "<<bnyk_udngGr<<endl;
      cout<<"banyak cumi goreng  : "<<bnyk_cumiGr<<endl;
      cout<<"banyak ayam bakar   : "<<bnyk_aymBk;
    }

    void toFile(){
      int total = (hrg_aymGp * bnyk_aymGp) + (hrg_aymGr * bnyk_aymGr) + (hrg_udngGr * bnyk_udngGr) + (hrg_cumiGr * bnyk_cumiGr) + (hrg_aymBk * bnyk_aymBk);
      float batas = 16000;
      float biaya_ongkir=15000;
      float t2 = float(total);
      float diskon_ong = 8000;
      float diskon= t2 * 0.35;
      float ttldiskon = diskon_ong + diskon;

      if(total >= batas)
        t2 = t2+biaya_ongkir-ttldiskon ;

      tulis_data.open("api_data.txt");
			tulis_data << total << endl;
			tulis_data << diskon << endl;
      tulis_data << diskon_ong << endl;
      tulis_data << biaya_ongkir << endl;
			tulis_data << t2 << endl;
			tulis_data << bnyk_aymGp << endl;
			tulis_data << bnyk_aymGr << endl;
      tulis_data << bnyk_udngGr << endl;
      tulis_data << bnyk_cumiGr << endl;
      tulis_data << bnyk_aymBk;
			tulis_data.close();
    }
  private :
    ifstream ambil_data;
    ofstream tulis_data;
    int bnyk_aymGp;
    int bnyk_aymGr;
    int bnyk_udngGr;
    int bnyk_cumiGr;
    int bnyk_aymBk;
    int hrg_aymGp = 21000;
    int hrg_aymGr = 17000;
    int hrg_udngGr = 19000;
    int hrg_cumiGr = 20000;
    int hrg_aymBk = 25000;
    float diskon;
    float diskon_ong;
    float biaya_ongkir;
};