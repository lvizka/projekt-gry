#include <iostream>
using namespace std;
int main()
{
    cout<<"Witaj w grze - ZBIERANIE SKARBOW "<<endl;
    cout<<"autor: Luiza Kunicka"<<endl;
    int start;
    cout<<"1. Rozpocznij"<<endl;
    cout<<"2. Wyjdz"<<endl;
    cout<<"wpisz: ";
    cin>>start;

    if(start==2){
        return 0;
    }
    else if(start==1){
        cout<<"LADOWANIE GRY..."<<endl;
    }

    else{
        cout<<"Blad! Wpisz jeszcze raz: ";
        cin>>start;
        if(start==1){
        cout<<"LADOWANIE GRY..."<<endl;
        }
        else if(start==2){
        return 0;
        }
    }

    const int rozmiar=10;
    char plansza[rozmiar][rozmiar];

    for(int i=0;i<rozmiar;i++)
    {
        for(int j=0;j<rozmiar;j++)
        {
            plansza[i][j]='.';
        }
    }
    int x=0;
    int y=0;

    plansza[2][3] = 'S';
    plansza[5][5] = 'S';
    plansza[7][1] = 'S';
    plansza[8][8] = 'S';
    plansza[4][7] = 'S';

    int punkty=0;
    const int liczba_skarbow=5;

    while(punkty<liczba_skarbow)
    {
        for(int i=0;i<rozmiar;i++)
            {
                for(int j=0;j<rozmiar;j++)
                    {
                        if(plansza[i][j]!='S') 
                            plansza[i][j]='.';
                    }
            }
            plansza[y][x]='G';
        cout<<"\n\n"
        for(int i=0;i<rozmiar;i++)
            {
                for(int j=0; j<rozmiar;j++)
            {
                cout<<plansza[i][j]<<" ";
            }
                cout<<endl;
            }
        cout<<"\nPunkty: "<<punkty<<"/"<<liczba_skarbow<<endl;
        cout<<"Sterowanie: w/ gora, s/ dol, a/ lewo, d/ prawo, q/wyjdz"<<endl;
        cout<<"wpisz ruch: ";

        char ruch;
        cin>>ruch;

        char co_bylo = plansza[y][x];
        plansza[y][x] = (co_bylo=='S') ? 'S' : '.';

               if(ruch=='w'){
                   if(y>0) y--;
               }
        else if(ruch=='s'){
            if(y<rozmiar-1) y++;
        }
        else if(ruch=='a'){
            if(x>0) x--;
        }
        else if(ruch=='d'){
            if(x<rozmiar-1) x++;
        }
        else if(ruch=='q'){
            cout<<"Koniec gry. Zebrane skarby: "<<punkty<<"/"<<liczba_skarbow<<endl;
            return 0;
        }

        if(plansza[y][x]=='S'){
            punkty++;
            plansza[y][x]='.';
        }
}

cout<<"\n\n"; 
for(int i=0;i<rozmiar;i++)
{
    for(int j=0;j<rozmiar;j++)
        {
            cout<<plansza[i][j]<<" ";
        }
    cout<<endl;
}

cout<<"\n\nGRATULACJE! Zebrales wszystkie skarby! ("<<punkty<<"/"<<liczba_skarbow<<")"<<endl;

return 0;
}

    
    

    

    


