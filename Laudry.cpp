#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <string.h>

void gotoxy(),header(),login(),menu(),kategorijenis(),selesai1(),selesai2(),salah();
int pemesanan(),welcome(),opsi;

using namespace std;

void gotoxy(int x, int y)
{
    HANDLE hConsoleOutput;
    COORD dwCursorPosition;
    dwCursorPosition.X = x;
    dwCursorPosition.Y = y;
    hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(hConsoleOutput,dwCursorPosition);
}

main()
{
    MessageBox(NULL,"SELAMAT DATANG DI PROGRAM KAMI","Two'L Laundry",MB_ICONINFORMATION | MB_OK);

    system("color b");
    welcome();
    login();
    while(3)
    {
        menu();
        switch(opsi)
        {
            case 1:
                kategorijenis();
                break;

            case 2:
                pemesanan();
                break;

            case 3:
                selesai1();
                exit (0);
                break;

            default:
                salah();
                break;
        }
    }
}

void login()
{
    system("cls");
    header();
    string user, pass ;
    cout<<"Jika belum memiliki username dan password \nsilahkan isi username dan password dengan `admin`"<<endl<<endl;
    cout<<"\t\t|-------------------------------------------------|"<<endl;
	cout<<"\t\t|                  SILAHKAN LOGIN                 |"<<endl;
	cout<<"\t\t|-------------------------------------------------|"<<endl;
    cout<<"\t\tUsername       : ";cin>>user;
    cout<<"\t\tPassword       : ";cin>>pass;
    cout<<endl<<endl;
    if(user=="admin" && pass=="12345")
    {
        cout<<"---------------------------LOGIN BERHASIL, SELAMAT DATANG--------------------------";Sleep(2000);
        system("cls");
    }
    else
    {
        cout<<"-----------LOGIN GAGAL, SILAHKAN MASUKKAN USERNAME DAN PASS YANG SESUAI------------";
        getch();
        system("cls");
        login();
    }
}
int welcome()
{
    int n,j;
    for(n=0;n<67;n++)
    {
        cout<<"PLEASE WAIT...";
		gotoxy(50,12);cout<<"LOADING "<< n+33<<" %";
        gotoxy(25,13);cout<<"------------------------------------------------------------------";
        gotoxy(25,14);cout<<"";
        for(j=0;j<n;j++)
        {
            cout<<"=";
        }
        gotoxy(25,15);cout<<"------------------------------------------------------------------";
        system("cls");
    }
    gotoxy(30,10);cout<<"\t\t WELCOME TO LAUNDRY CASHIER PROGRAM";Sleep(555);
	gotoxy(30,14);cout<<"-----------------------------------------------------";Sleep(555);
	gotoxy(30,15);cout<<"    LALA APRIANTI PUTRI          1810631170051       ";Sleep(555);
	gotoxy(30,16);cout<<"    LUVI NUR RUPAIDAH            1810631170050       ";Sleep(555);
	gotoxy(30,17);cout<<"-----------------------------------------------------";Sleep(555);
	gotoxy(30,18);cout<<"Tekan Enter Untuk Lanjut..";
	cin.get();
	return 0;
}
void header()
{
    gotoxy(0,0);cout<<"-----------------------------------------------------------------------------------";
    gotoxy(0,2);cout<<"                        SELAMAT DATANG DI PROGRAM TWO'L LAUNDRY                    ";
    gotoxy(0,5);cout<<"-----------------------------------------------------------------------------------"<<endl<<endl;
}

void menu()
{
    system("cls");
    header();
    cout<<endl<<endl;
    cout<<"\t\t|-------------------------------------------------|"<<endl;
	cout<<"\t\t|                    MENU UTAMA                   |"<<endl;
	cout<<"\t\t|-------------------------------------------------|"<<endl;
    cout<<"\t\t|                                                 |"<<endl;
	cout<<"\t\t| 1. KATEGORI DAN HARGA                           |"<<endl;
	cout<<"\t\t|-------------------------------------------------|"<<endl;
    cout<<"\t\t|                                                 |"<<endl;
	cout<<"\t\t| 2. PEMESANAN                                    |"<<endl;
    cout<<"\t\t|-------------------------------------------------|"<<endl;
    cout<<"\t\t|                                                 |"<<endl;
	cout<<"\t\t| 3. KELUAR                                       |"<<endl;
	cout<<"\t\t|-------------------------------------------------|"<<endl;
	cout<<"\t\tMasukan Pilihan Anda [1/2/3] : ";cin>>opsi;
	fflush(stdin);
	cout<<endl;
}
void kategorijenis()
{
    system("cls");
    header();
    cout<<"\t\t|-----------------------------------------------------|"<<endl;
    cout<<"\t\t|                   KATEGORI DAN HARGA                |"<<endl;
    cout<<"\t\t|-----------------------------------------------------|"<<endl;
    cout<<"\t\t|   KATEGORI   |       PENGERJAAN        |  HARGA/KG  |"<<endl;
    cout<<"\t\t|-----------------------------------------------------|"<<endl;
    cout<<"\t\t|              |   REGULER     12 JAM    |   Rp4000   |"<<endl;
    cout<<"\t\t| 1. CUCI      |   EKSPRES      6 JAM    |   Rp6000   |"<<endl;
    cout<<"\t\t|              |   KILAT        3 JAM    |   Rp8000   |"<<endl;
    cout<<"\t\t|-----------------------------------------------------|"<<endl;
    cout<<"\t\t|              |   REGULER      8 JAM    |   Rp5000   |"<<endl;
    cout<<"\t\t| 2. SETRIKA   |   EKSPRESS     4 JAM    |   Rp7000   |"<<endl;
    cout<<"\t\t|              |   KILAT        2 JAM    |   Rp9000   |"<<endl;
    cout<<"\t\t|-----------------------------------------------------|"<<endl;
    cout<<"\t\t|    CUCI      |   REGULER     24 JAM    |   Rp8000   |"<<endl;
    cout<<"\t\t| 3. DAN       |   EKSPRESS    12 JAM    |   Rp12000  |"<<endl;
    cout<<"\t\t|    SETRIKA   |   KILAT        6 JAM    |   Rp16000  |"<<endl;
    cout<<"\t\t|-----------------------------------------------------|"<<endl;
    cout<<"\t\tTekan Enter Untuk Kembali ke Menu..";
	cin.get();
}
int pemesanan()
{
    long kt,kp;
    char nama[50],notlp[50],alamat[50],*uk,*jns;
    float hrg,jml,ttl,ukemb,ubyr,pjk,ttlbyr;

    {

        data:
        system("cls");
        header();
        cout<<"Masukkan Nama Anda       : ";cin.getline(nama,50);
        cout<<"Masukkan Nomor Telepon   : ";cin.getline(notlp,50);
        cout<<"Masukkan Alamat Rumah    : ";cin.getline(alamat,50);
        system("cls");

        ulang:
        kt:
        system("cls");
        header();
        cout<<endl;
        cout<<"\t\t|-------------------------------------------------|"<<endl;
        cout<<"\t\t|                     KATEGORI                    |"<<endl;
        cout<<"\t\t|-------------------------------------------------|"<<endl;
        cout<<"\t\t|                                                 |"<<endl;
        cout<<"\t\t|                1. CUCI                          |"<<endl;
        cout<<"\t\t|-------------------------------------------------|"<<endl;
        cout<<"\t\t|                                                 |"<<endl;
        cout<<"\t\t|                2. SETRIKA                       |"<<endl;
        cout<<"\t\t|-------------------------------------------------|"<<endl;
        cout<<"\t\t|                                                 |"<<endl;
        cout<<"\t\t|                3. CUCI DAN SETRIKA              |"<<endl;
        cout<<"\t\t|-------------------------------------------------|"<<endl;
        cout<<"\t\t|                                                 |"<<endl;
        cout<<"\t\t|                4. KEMBALI                       |"<<endl;
        cout<<"\t\t|-------------------------------------------------|"<<endl;
        cout<<"\t\tMasukan Pilihan Anda [1/2/3/4] : ";cin>>kt;
        cout<<endl;
         if (kt<=3)
        {
            goto kp;
        }
        else if (kt==4)
        {
            goto data;
        }
        else
        {
            salah();
            getch();
            system("cls");
            goto kt;
        }

        kp:
        system("cls");
        header();
        cout<<endl<<endl;
        cout<<"\t\t|-------------------------------------------------|"<<endl;
        cout<<"\t\t|                 KATEGORI PENGERJAAN             |"<<endl;
        cout<<"\t\t|-------------------------------------------------|"<<endl;
        cout<<"\t\t|                                                 |"<<endl;
        cout<<"\t\t|                   1. REGULER                    |"<<endl;
        cout<<"\t\t|-------------------------------------------------|"<<endl;
        cout<<"\t\t|                                                 |"<<endl;
        cout<<"\t\t|                   2. EKSPRESS                   |"<<endl;
        cout<<"\t\t|-------------------------------------------------|"<<endl;
        cout<<"\t\t|                                                 |"<<endl;
        cout<<"\t\t|                   3. KILAT                      |"<<endl;
        cout<<"\t\t|-------------------------------------------------|"<<endl;
        cout<<"\t\t|                                                 |"<<endl;
        cout<<"\t\t|                   4. KEMBALI                    |"<<endl;
        cout<<"\t\t|-------------------------------------------------|"<<endl;
        cout<<"\t\tMasukan Pilihan Anda [1/2/3/4] : ";cin>>kp;
        cout<<endl;
        if (kp<=3)
        {
            goto byr;
        }
        else if (kp==4)
        {
            goto kt;
        }
        else
        {
            salah();
            getch();
            system("cls");
            goto kp;
        }

        byr:
        switch (kt)

        {
        case 1:

            jns="CUCI";
            if (kp=='1')
            {
                uk="REGULER";
                hrg=4000;
            }
            else if(kp=='2')
            {
                uk="EKSPRESS";
                hrg=6000;
            }
            else
            {
                uk="KILAT";
                hrg=8000;
            }
            break;

        case 2:

            jns="SETRIKA";
            if (kp=='1')
             {
                uk="REGULER";
                hrg=5000;
            }
            else if(kp=='2')
            {
                uk="EKSPRESS";
                hrg=7000;
            }
            else
            {
                uk="KILAT";
                hrg=9000;
            }
            break;

       case 3:

            jns="CUCI DAN SETRIKA";
            if (kp=='1')
             {
                uk="REGULER";
                hrg=8000;
            }
            else if(kp=='2')
            {
                uk="EKSPRESS";
                hrg=12000;
            }
            else
            {
                uk="KILAT";
                hrg=16000;
            }
            break;
        }
        system("cls");
        header();
        cout<<"Pesanan atas nama       : "<<nama<<endl;
        cout<<"No Telepon              : "<<notlp<<endl;
        cout<<"Alamat Rumah            : "<<alamat<<endl;
        cout<<"jenis kategori          : "<<jns<<endl;
        cout<<"kategori pengerjaan     : "<<uk<<endl;
        cout<<"Harga                   : Rp."<<hrg<<endl;
        cout<<"masukan Jumlah cucian   : ";cin>>jml;

        ttl=hrg*jml;

        cout<<"-----------------------------------------------------------------------------------"<<endl;
        cout<<"Total Bayar              : Rp."<<ttl<<endl;

        pjk=(ttl*10)/100;

        cout<<"Pajak 10%                : Rp."<<pjk<<endl;

        ttlbyr=ttl+pjk;

        cout<<"Total Bayar (ppn 10%)    : Rp."<<ttlbyr<<endl;
        cout<<"-----------------------------------------------------------------------------------"<<endl;
        cout<<"Uang Bayar               : Rp.";cin>>ubyr;

        ukemb=ubyr-ttlbyr;

        cout<<"uang kembali             : Rp."<<ukemb<<endl;
        cout<<"-----------------------------------TERIMA KASIH------------------------------------"<<endl;

        char lagi;
        menulagi :
        cout<<"Y = Ulangi Pemesanan \nT = Keluar Program \nX = Kembali ke Menu Utama"<<endl;
        cout<<"ingin masuk ke menu lagi (Y/T/X) ? ";cin>>lagi;
        if(lagi=='y' || lagi=='Y'){goto ulang;}
        else if(lagi=='X' || lagi=='x'){goto selesai2;}
        else if(lagi=='T' || lagi=='t'){goto selesai1;}
        else{cout<<"Silahkan inputkan Y/T/X\n";goto menulagi;}

        selesai1 :
        selesai1();
        exit (0);

        selesai2 :
        selesai2();
    }
}
void selesai1()
{
	header();
	char x[]={"---------------------TERIMA KASIH SUDAH MENCUCI DI TWO'L LAUNDRY------------------"};
		int a,b,i,n;
		n=strlen(x);
		for(i=0;i<n;i++)
		{	for(a=0;a<=99999;a++){
				for(b=0;b<=120;b++){
				}
			}
			gotoxy(0+i,26);cout<<x[i];
		}
	Sleep(1000);
	MessageBox(NULL,"TERIMA KASIH TELAH MENGGUNAKAN LAYANAN KAMI","Two'L Laundry",MB_ICONINFORMATION | MB_OK);
    cout<<"\n\n------------------------------Tekan Enter Untuk Keluar-----------------------------";
getch();
}

void selesai2()
{
	header();
	char x[]={"---------------------TERIMA KASIH SUDAH MENCUCI DI TWO'L LAUNDRY------------------"};
		int a,b,i,n;
		n=strlen(x);
		for(i=0;i<n;i++)
		{	for(a=0;a<=99999;a++){
				for(b=0;b<=120;b++){
				}
			}
			gotoxy(0+i,26);cout<<x[i];
		}
	Sleep(1000);
    cout<<"\n\n------------------------------Tekan Enter Untuk Keluar-----------------------------";
getch();
}

void salah()
{
    cout<<"---------------------------KODE YANG ANDA MASUKKAN SALAH---------------------------"<<endl<<endl;
    cout<<"-------------------------Klik Enter untuk Memasukkan Ulang-------------------------";
getch();
}
