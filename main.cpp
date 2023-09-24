#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    // nincs alulvonás
    int *b = new int[NELEMENTS];
    // pontosvessző
    std::cout << '1-100 ertekek duplazasa'
    // hiányzik a léptetés
    for (int i = 0;)
    {
        //rossz a duplázás
        b[i] = i * 2;
    }
    // ciklus vezérlő hibás
    for (int i = 0; i; i++)
    {
        // pontosvessző
        std::cout << "Ertek:"
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    // kezdőérték
    int atlag;
    for (int i = 0; i < N_ELEMENTS, i++)
    {
        //pontosvessző
        atlag += b[i]
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
