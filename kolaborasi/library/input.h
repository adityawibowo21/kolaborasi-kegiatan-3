using namespace std;

class Input {
	public :
		void cetak(){
      cout<<"================================="<<endl;
      cout<<"\tMenu yang tersedia "<< endl;
      cout<<"================================="<<endl;
	    cout<<"1. Ayam Geprek : 21.000"<<endl;
	    cout<<"2. Ayam Goreng : 17.000"<<endl;
	    cout<<"3. Udang Goreng: 19.000"<<endl;
	    cout<<"4. Cumi Goreng : 20.000"<<endl;
	    cout<<"5. Ayam Bakar  : 25.000"<<endl;
	    cout<<"================================="<<endl;
      cout <<"Pesan Ayam Geprek  : "; cin >> bnyk_aymGp;
			cout <<"Pesan Ayam Goreng  : "; cin >> bnyk_aymGr;
      cout <<"Pesan Udang Goreng : "; cin >> bnyk_udngGr;
      cout <<"Pesan Cumi Goreng  : "; cin >> bnyk_cumiGr;
      cout <<"Pesan Ayam Bakar   : "; cin >> bnyk_ayamBk;
      cout<<"================================="<<endl;
		}

		void toFile(){
			tulis_Data.open("api_data.txt");
      tulis_Data << bnyk_aymGp << endl;
			tulis_Data << bnyk_aymGr << endl;
      tulis_Data << bnyk_udngGr << endl;
      tulis_Data << bnyk_cumiGr << endl;
      tulis_Data << bnyk_ayamBk;
			tulis_Data.close();
		}

	private :
		ofstream tulis_Data;
    int bnyk_aymGp;
    int bnyk_aymGr;
    int bnyk_udngGr;
    int bnyk_cumiGr;
    int bnyk_ayamBk;
};