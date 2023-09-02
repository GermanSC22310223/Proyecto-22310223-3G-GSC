#include <iostream>
#include<Mascota.hpp>
int main(int argc, char const *argv[])
{
    std::cout<<"Juego de Mascotas"<<std::endl;
    
    Mascota m1,m2,m3;
    m1.Establecer_Nombre("Negro");
    m2.Establecer_Nombre("Pliar");
    m3.Establecer_Nombre("Tercero");
    m1.DecirNomnbre();
    m2.DecirNomnbre();
    m3.DecirNomnbre();
    return 0;
}

