#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    // JAVÍTVA: Helyes változónév (N_ELEMENTS)
    int *b = new int[N_ELEMENTS]; 

    // JAVÍTVA: Kettős idézőjel és pontosvessző pótolva
    std::cout << "1-100 ertekek duplazasa" << std::endl;

    // JAVÍTVA: Hiányzó feltétel és léptetés pótolva
    for (int i = 0; i < N_ELEMENTS; i++)
    {
        b[i] = (i + 1) * 2;
    }

    // JAVÍTVA: A feltétel javítva (i < N_ELEMENTS), hogy a ciklus lefusson és kiírjon
    for (int i = 0; i < N_ELEMENTS; i++)
    {
        std::cout << "Ertek: " << b[i] << std::endl;
    }    

    std::cout << "Atlag szamitasa: " << std::endl;

    // JAVÍTVA: Inicializálás (0), és double típus a pontosabb osztáshoz
    double atlag = 0; 

    // JAVÍTVA: Vessző helyett pontosvessző a fejlécben
    for (int i = 0; i < N_ELEMENTS; i++)
    {
        atlag += b[i]; // JAVÍTVA: Pontosvessző pótolva
    }

    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;

    // JAVÍTVA: Memória felszabadítása a szivárgás elkerülése érdekében
    delete[] b;
    std::cout << "Minden mukodik!" << std::endl;

    return 0;
}
