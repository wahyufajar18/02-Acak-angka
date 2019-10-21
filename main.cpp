#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main()
{
    int angka;
    int input;
    int random;
    int tebakan;
    char jawaban='y';
    int nyawa = 4;
    int i;
    int n=100;
    awal:
    while (jawaban=='y'){
        cout << "Masukkan maksimal nilai (10-100) : "; cin >>angka;
        if(angka <10){
            cout << "Maaf angka yang anda masukan terlalu kecil, tidak masuk batasan" <<endl;
            cout << " " <<endl;
            goto awal;
        }
        else if(angka >100){
            cout << "Maaf angka yang anda masukan terlalu besar, tidak masuk batasan" <<endl;
            cout << " " <<endl;
            goto awal;
        }
        cout << "Silahkan tebak nilai antara 0 sampai "<< angka << "!!"<<endl;
        srand((unsigned)time(NULL));
        random = rand()%angka;
        cout << "(CHEAT : ini adalah angka yang ditebak ) : " <<random <<endl;
        cout << " " <<endl;

            while(nyawa>0){
        cout << "Masukkan tebakan anda : "; cin >>tebakan;
                if(tebakan==random){
                    cout << "Tebakan anda benar" <<endl;
                    break;
                }
                else {
                    if(tebakan <random){
                            cout << " " <<endl;
                        cout << "Tebakan anda terlalu kecil." <<endl;
                        cout << "Tebakan anda salah , nyawa " <<nyawa-1<<endl;
                        nyawa--;
                    }
                    if(tebakan > random) {
                        cout << " " <<endl;
                        cout << "Tebakan anda terlalu besar." <<endl;
                        cout << "Tebakan anda salah , nyawa " <<nyawa-1<<endl;
                        nyawa--;
                    }

                }
        }
            if(nyawa==0){
                cout << "-----------GAME OVER!!----------" <<endl;
            }
                cout << " "<<endl;
                cout<<" Ingin memainkan game lagi? (y/n)" ; cin >>jawaban;
                nyawa=4;
                cout << " "<<endl;
    }


            cout << " "<<endl;
    cout << "----------Terimakasih telah memainkan game ini !!-----------" <<endl;
    return 0;
}
