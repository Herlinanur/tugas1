#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;


void RawatInap()

{

    char name[50], JnsKel[10], Ibukdg[20], Diagnosa[20];

    string ruangan, an, NamaDr;

    char alamat[50];

    int dokter, kamar, lama, tgllhr, usia, rm;
    

    long int HrgKamar, JasaDr, TotalObat, Perawatan, tindakan;
    
    while(1){
    	system("cls");
    char pilih;
    cout<<"------------------------------------------"<<endl;
    cout<<"Rawat Inap"<<endl;
    cout<<"------------------------------------------"<<endl;
    cout<<"1. Isi Data Pasien"<<endl;
    cout<<"2. Kamar"<<endl;
    cout<<"3. Dokter"<<endl;
    cout<<"4. Transaksi"<<endl;
    cout<<"5. kembali"<<endl<<endl;
    cout<<"Pilih : ";
    cin>>pilih;

    switch(pilih){
    	case '1' : {
    		system("cls");
			
			cout<<"-----------------------------------------"<<endl;
	    	cout<<" Isi Data Pasien"<<endl;
	   		cout<<"-----------------------------------------"<<endl;
	
	
	    	cout<<"Nama				= ";
	    	cin>>name;
		
	
			cout<<"Tanggal lahir			= ";
		    cin>>tgllhr;
		   
	
		    cout<<"Alamat				= ";
		    cin>>alamat;
		   
	
		    cout<<"Jenis Kelamin			= ";
		    cin>>JnsKel;
		    
	    
	    	cout<<"Usia				=";
	        cin>>usia;
	        
	    
	    	cout<<"Ibu kandung			=";
	        cin>>Ibukdg;
	        
	
		    break;
			}
	
		    
	    case '2' :{
			system("cls");
	    	cout<<"--------------------------------------"<<endl;
	    	cout<<"			Kamar"<<endl;
	    	cout<<"--------------------------------------"<<endl;
	    	cout<<"Pilih Jenis Kamar:\n";

    		cout<<"1. Kelas I\n";
    		cout<<"2. Kelas II\n";
    		cout<<"3. Kelas III\n";
    		cout<<"4. VIP\n";
    		cout<<"5. VVIP\n";
    		cout<<"Pilihan Anda [ 1/2/3/4/5 ]= ";
    		cin>>kamar;


   			switch (kamar)
		    {
	
    		case 1:

       		 	ruangan="Kelas I";
			    cout<<"--- "<<ruangan<<" ---";
			    cout<<"HrgKamar=850000";
			    break;


    		case 2:

		        ruangan="Kelas II";
		
		        cout<<"--- "<<ruangan<<" ---";
		
		        cout<<"HrgKamar=1000000";
		
		        break;


   			 case 3:

		        ruangan="Kelas III";
		
		        cout<<"--- "<<ruangan<<" ---";
		
		        cout<<"HrgKamar=1300000";
		
		        break;


   			 case 4:

		        ruangan="VIP";
		
		        cout<<"--- "<<ruangan<<" ---";
		
		        cout<<"HrgKamar=1800000";
		
		        break;


    		case 5:

		        ruangan="VVIP";
		
		        cout<<"--- "<<ruangan<<" ---";
		
		        cout<<"HrgKamar=2450000";
		
		        break;


   			 default:

		        cout<<"Tidak Tersedia";
		
		        break;

    }
	}
	continue;

	
		
		case '3' :{
			

		    system("cls");
		
		
		    cout<<endl;
		
		    cout<<"Pilih Dokter:\n";
		
		    cout<<"1. Dokter Anak\n";
		
		    cout<<"2. Dokter Penyakit Dalam\n";
		
		    cout<<"3. Dokter Mata\n";
		
		    cout<<"4. Dokter Umum\n";
		
		    cout<<"5. Dokter Bedah Umum\n";
		
		    cout<<"Pilihan Anda [ 1/2/3/4/5 ]= ";
		
		    cin>>dokter;
		
			
		    switch (dokter)
		
		    {
		
		    case 1:
		
		        NamaDr="Dokter Anak";
		
		        cout<<"--- "<<NamaDr<<" ---";
		
		        cout<<"JasaDr=145000";
		
		        break;
		
		
		    case 2:
		
		        NamaDr="Dokter Penyakit Dalam";
		
		        cout<<"--- "<<NamaDr<<" ---";
		
		        cout<<"JasaDr=200000";
		
		        break;
		
		
		    case 3:
		
		        NamaDr="Dokter Mata";
		
		        cout<<"--- "<<NamaDr<<" ---";
		
		        cout<<"JasaDr=170000";
		
		        break;
		
		
		    case 4:
		
		        NamaDr="Dokter Umum";
		
		        cout<<"--- "<<NamaDr<<" ---";
		
		        cout<<"JasaDr=150000";
		
		        break;
		
		
		    case 5:
		
		        NamaDr="Dokter Bedah Umum";
		
		        cout<<"--- "<<NamaDr<<" ---";
		
		        cout<<"JasaDr=150000";
		
		        break;
		
		
		
		    }
		
		
		    cout<<endl;
		
		    cout<<"Nama             = "<<name<<endl;
		
		    cout<<"Tanggal lahir    = "<<tgllhr<<endl;
		
		    cout<<"Jenis Kelamin    = "<<JnsKel<<endl;
		    
		    cout<<"Usia	            ="<<usia<<endl;
		    
		    cout<<"Ibu kandung      ="<<Ibukdg<<endl;
		
		    cout<<"Jenis Kamar      = "<<ruangan<<endl;
		
		    cout<<"Dokter Tujuan    = "<<NamaDr<<endl;
		
		
		    cout<<"========================================="<<endl;
		
					break;
		}
	
		
		
		case '4' :{
			system("cls");
			cout<<"-----------------------------------------"<<endl;
	    	cout<<" Isi Data Pasien"<<endl;
	   		cout<<"-----------------------------------------"<<endl;
			 	 cout<<"Nama	= ";

			    cin>>name;
			    
			    cout<<"Tanggal lahir	= ";
		    	cin>>tgllhr;
		   


			    cout<<"No. Rekam Medis	= ";
			
			    cin>>rm;
			
			    

			    cout<<"Alamat	= ";
			
			    cin>>alamat;
			
			    

			    cout<<"Jenis Kelamin	= ";
			
			    cin>>JnsKel;
			

			    cout<<"Diagnosa	= ";
			
			    cin>>Diagnosa;
			    cout<<"Lama Menginap	= ";

    cin>>lama;

    cout<<endl;
			    
			    system("cls");

			cout<<"Pilih Jenis Kamar:\n";

    cout<<"1. Kelas I\n";

    cout<<"2. Kelas II\n";

    cout<<"3. Kelas III\n";

    cout<<"4. VIP\n";

    cout<<"5. VVIP\n";

    cout<<"Pilihan Anda [ 1/2/3/4/5 ]= ";

    cin>>kamar;


    switch (kamar)

    {

    case 1:

        ruangan="Kelas I";

        cout<<"--- "<<ruangan<<" ---";

        HrgKamar=850000;

        break;


    case 2:

        ruangan="Kelas II";

        cout<<"--- "<<ruangan<<" ---";

        HrgKamar=1000000;

        break;


    case 3:

        ruangan="Kelas III";

        cout<<"--- "<<ruangan<<" ---";

        HrgKamar=1300000;

        break;


    case 4:

        ruangan="VIP";

        cout<<"--- "<<ruangan<<" ---";

        HrgKamar=1800000;

        break;


    case 5:

        ruangan="VVIP";

        cout<<"--- "<<ruangan<<" ---";

        HrgKamar=2450000;

        break;


    default:

        cout<<"Tidak Tersedia";

        break;

    }

    system("cls");


    cout<<endl;

    cout<<"Pilih Dokter:\n";

    cout<<"1. Dokter Anak\n";

    cout<<"2. Dokter Penyakit Dalam\n";

    cout<<"3. Dokter Mata\n";

    cout<<"4. Dokter Umum\n";

    cout<<"5. Dokter Bedah Umum\n";

    cout<<"Pilihan Anda [ 1/2/3/4/5 ]= ";

    cin>>dokter;


    switch (dokter)

    {

    case 1:

        NamaDr="Dokter Anak";

        cout<<"--- "<<NamaDr<<" ---";

        JasaDr=145000;

        break;


    case 2:

        NamaDr="Dokter Penyakit Dalam";

        cout<<"--- "<<NamaDr<<" ---";

        JasaDr=200000;

        break;


    case 3:

        NamaDr="Dokter Mata";

        cout<<"--- "<<NamaDr<<" ---";

        JasaDr=170000;

        break;


    case 4:

        NamaDr="Dokter Umum";

        cout<<"--- "<<NamaDr<<" ---";

        JasaDr=150000;

        break;


    case 5:

        NamaDr="Dokter Bedah Umum";

        cout<<"--- "<<NamaDr<<" ---";

        JasaDr=150000;

        break;



    }



	system("cls");
    cout<<"========================================="<<endl;


    cout<<"     TOTAL YANG HARUS DIBAYAR        \n"<<endl;
    cout<<"========================================="<<endl;

    cout<<"Nama Pasien      = "<<name<<endl;

    cout<<"Tanggal lahir    = "<<tgllhr<<endl;

    cout<<"Atas Nama        = ";

    cin>>an;


    cout<<"Dokter           = "<<NamaDr<<endl;

    cout<<"Jasa Dokter      = Rp. "<<JasaDr<<endl;

    cout<<"Kamar Inap       = "<<ruangan<<"   Rp. "<<HrgKamar<<endl;

    cout<<"Lama Menginap    = "<<lama<<" hari"<<endl;

    cout<<"Total            = Rp. "<<HrgKamar * lama<<endl;

    cout<<"Total Obat       = Rp. ";

    cin>>TotalObat;


    cout<<"Perawatan        = Rp. ";

    cin>>Perawatan;


    long int TotalBiaya;


    TotalBiaya = JasaDr + HrgKamar + TotalObat + Perawatan;

    cout<<"Total Biaya      = Rp. "<<TotalBiaya<<endl;

	break;		
		
			}
			
			case '5':{
				getch();
    	
		}
		
		}
    

	}
    
}


void RawatJalan()

{

    char name[50], JnsKel[10];

    string ruangan, an, NamaDr;

    char alamat[50], diagnosa[50];

    int dokter, kamar, lama, rm;

    long int HrgKamar, JasaDr, TotalObat, tindakan;

    int pil, PilihDr;


    cout<<"Nama            = ";

    cin>>name;

    cout<<endl;


    cout<<"No. Rekam Medis = ";

    cin>>rm;

    cout<<endl;


    cout<<"Alamat          = ";

    cin>>alamat;

    cout<<endl;


    cout<<"Jenis Kelamin   = ";

    cin>>JnsKel;

    cout<<endl;


    cout<<"Diagnosa         = ";

    cin>>diagnosa;


    system("cls");


    cout<<endl;

    cout<<"Pilih Poli :  "<<endl;

    cout<<"1.Poli Bedah Umum : Dr. Jamie Robert "<<endl;

    cout<<"2.Poli Anak : Dr. Anggi Venusia "<<endl;

    cout<<"3.Poli Mata : Dr. Reyna A Lily"<<endl;

    cout<<"4.Poli Penyakit Dalam : Dr. Ibnu Sina"<<endl;

    cout<<"5.Poli Umum : Dr. Giallyn Geneva C "<<endl;

    cout<<endl;


    cout<<"Pilih [ 1-8 ]= ";

    cin>>PilihDr;


            switch (PilihDr)

            {

            case 1:

                cout<<"--- Poli Bedah Umum ---\n";

                NamaDr="Dr. Jamie Robert";


                JasaDr=150000;

                break;


            case 2:

                cout<<"--- Poli Anak ---\n";

                NamaDr="Dr. Anggi Venusia";


                JasaDr=200000;

                break;


            case 3:

                cout<<"--- Poli Mata ---\n";

                NamaDr="Dr. Reyna A Lily";


                JasaDr=150000;

                break;


            case 4:

                cout<<"--- Poli Penyakit Dalam ---\n";

                NamaDr="Dr. Ibnu Sina";


                JasaDr=175000;

                break;


            case 5:

                cout<<"--- Poli Umum ---\n";

                NamaDr="Dr. Harvey R Horan";


                JasaDr=150000;

                break;


            default:

                cout<<"Tidak Tersedia";

                break;

            }


        system("cls");


        cout<<endl;

        cout<<"Nama             = "<<name<<endl;

        cout<<"No. Rekam Medis  = "<<rm<<endl;

        cout<<"Jenis Kelamin    = "<<JnsKel<<endl;

        cout<<"Jenis Kamar      = "<<kamar<<endl;

        cout<<"Dokter Tujuan    = "<<dokter<<endl;


        cout<<"========================================\n";


        cout<<"     TOTAL YANG HARUS DIBAYAR        \n";

        cout<<"Nama Pasien      = "<<name<<endl;

        cout<<"No. Rekam Medis  = "<<rm<<endl;

        cout<<"Atas Nama        = ";

        cin>>an;


        cout<<"Dokter           = "<<NamaDr<<endl;

        cout<<"Jasa Dokter      = Rp. "<<JasaDr<<endl;

        cout<<"Total Obat       = Rp. ";

        cin>>TotalObat;

        cout<<"Tindakan         = Rp. ";

        cin>>tindakan;


        long int TotalBiaya;


        TotalBiaya = JasaDr + TotalObat + tindakan;

        cout<<"Total Biaya      = Rp. "<<TotalBiaya;

}



main()

 {

    a:

  int pilih;

  char choice(2);
  while(1){
  
  system("cls");
  cout<<"---------------------------------------------"<<endl;
  cout<<" Rumah Sakit Herlina"<<endl;
  cout<<"---------------------------------------------"<<endl;


  cout<<"1. Rawat Inap"<<endl;

  cout<<"2. Rawat Jalan"<<endl;


  cout<<"Pilih [ 1 / 2]= ";

  cin>>pilih;
  cout<<endl;
  switch(pilih){
  	
  	case 1 : {
  		while(1){
  			system("cls");
  			RawatInap();
		break;
		  }
	  }
	
	case 2 :{
		while(1){
			system("cls");
				RawatJalan();
		break;
		}
	}
  }

   }

 } 
