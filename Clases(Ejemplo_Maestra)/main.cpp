#include <iostream>

using namespace std;

class Cuenta_Bancaria
{
    private:
        int num_cta;
        string nombre;
        float saldo;
    public:
        Cuenta_Bancaria();
        void deposito(float);
        void retiro(float);
        void consulta_saldo();
};

Cuenta_Bancaria::Cuenta_Bancaria()
{
    cout<<"Numero de cuenta: ";
    cin>>num_cta;
    cout<<"Nombre :";
    cin>>nombre;
    saldo=0;
}

void Cuenta_Bancaria::deposito(float cant)
{
    saldo+=cant;
    cout<<"Deposito de: "<<cant<<endl;
}

void Cuenta_Bancaria::retiro(float cant)
{
    if ( cant>0 || cant<=saldo)
    {
        saldo-=cant;
        cout<<"Retiro de: "<<cant<<endl;
    }
    else
        cout<<"SALDO INSUFICIENTE"<<endl;
}

void Cuenta_Bancaria::consulta_saldo()
{
    cout<<"Nombre: "<<nombre<<endl;
    cout<<"Numero de cuenta: "<<num_cta<<endl;
    cout<<"Saldo disponible: "<<saldo<<endl;
}
int main()
{
    Cuenta_Bancaria x;
    cout<<endl<<endl;
    x.deposito(200);
    cout<<endl;
    x.consulta_saldo();
    cout<<endl;
    x.retiro(100);
    cout<<endl;
    x.retiro(33);
    cout<<endl;
    x.consulta_saldo();

    Cuenta_Bancaria y[4];
}
