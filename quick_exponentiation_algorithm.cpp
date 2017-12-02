#include<iostream>
using namespace std;

long long pot_szybkie(long long a, unsigned int n)
{
    long long wynik = 1;
    
    while(n>0) // powtarzamy do wyczerpania bitów w liczbie
    {
        if (n%2 == 1)         //jeśli kolejny bit jest równy 0 (licząc od prawej), podstawę nadpisujemy jej kwadratem
                             //jeśli kolejny bit jest równy 1, wynik przemnażamy przez aktualną wartość podstawy, a podstawę nadpisujemy jej kwadratem
            {
                wynik *= a;
            }
            
            a*= a;
            n/=2; //skrócenie o jeden bit
    }
    return wynik;
}

int main()
{
    unsigned int n;
    long long a;
    
    cout<<"Podaj podstawę: ";
    cin>>a;
    cout<<"Podaj wykładnik: ";
    cin>>n;
    
    cout<<a<<" do potęgi "<<n<<" wynosi "<<pot_szybkie(a, n)<<endl;
    
    cin.get();
    return 0;
}