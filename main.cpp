#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    // HIBA: NELEMENTS nincs definiálva (hiányzik az aláhúzás: N_ELEMENTS)
    int *b = new int[NELEMENTS]; 
    
    // HIBA: C++-ban a szöveget " " közé tesszük, a ' ' csak egyetlen karakternek való
    // HIBA: Hiányzik a pontosvessző a sor végéről
    std::cout << '1-100 ertekek duplazasa'
    
    // HIBA: A for ciklusból hiányzik a feltétel és a léptetés (pl. i < N_ELEMENTS; i++)
    for (int i = 0;)
    {
        b[i] = i * 2;
    }
    
    // HIBA: A feltétel csak "i", ami 0-nál (hamis) rögtön megáll, így a ciklus le sem fut
    for (int i = 0; i; i++)
    {
        // HIBA: Nincs megadva, mit írjon ki az "Ertek:" után, és hiányzik a pontosvessző
        std::cout << "Ertek:"
    }    
    
    std::cout << "Atlag szamitasa: " << std::endl;
    
    // HIBA: Az 'atlag' nincs inicializálva (nincs értéke), így memóriaszeméthez fogsz adogatni
    int atlag;
    
    // HIBA: A feltétel után pontosvessző kellene, nem vessző (i < N_ELEMENTS; i++)
    for (int i = 0; i < N_ELEMENTS, i++)
    {
        // HIBA: Hiányzik a pontosvessző a sor végéről
        atlag += b[i]
    }
    
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    
    // HIBA: A 'new' kulcsszóval lefoglalt memóriát illene felszabadítani: delete[] b;
    
    return 0;
}
