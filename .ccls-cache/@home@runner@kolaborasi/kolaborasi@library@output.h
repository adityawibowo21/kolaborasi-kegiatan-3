using namespace std;

class Output {
	public :
		void cetak(){
      cout<<"===============================================\n";
	    cout<<"|\t\tSlip Pembayaran"; cout<<"                |\n";         cout<<"===============================================\n";
      cout<<"|Menu yang dipesan \n";
      cout<<"|* Ayam Geprek  : "<<data_file[5]<<endl;
      cout<<"|* Ayam Goreng  : "<<data_file[6]<<endl;;
      cout<<"|* Udang Goreng : "<<data_file[7]<<endl;;
      cout<<"|* Cumi Goreng  : "<<data_file[8]<<endl;;
      cout<<"|* Ayam Bakar   : "<<data_file[9]<<endl;;
       cout<<"===============================================\n";
	    cout<<"|Harga Jual     : Rp "<<data_file[0]<<endl;
	    cout<<"|Diskon         : Rp "<<data_file[1] <<endl;
      cout<<"|Diskon ongkir  : Rp "<<data_file[2] <<endl;
      cout<<"|Biaya ongkir   : Rp "<<data_file[3] <<endl;
	    cout<<"|Total Bayar    : Rp "<<data_file[4] <<endl;
	    cout<<"===============================================\n";
		}

		void getData(){
			ambil_Data.open("api_data.txt");
			while(!ambil_Data.eof()){
				ambil_Data >> data_file[index];
				index += 1;
			}
			ambil_Data.close();
		}

	private :
		ifstream ambil_data;
		string data_file[30];
		int index = 0;
};