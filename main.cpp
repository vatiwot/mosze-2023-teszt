#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    // nincs alulvonás
    int *b = new int[N_ELEMENTS];
    // pontosvessző
    std::cout << '1-100 ertekek duplazasa'>> std ::endl;
    // hiányzik a léptetés
    for (int i = 0; i < N_ELEMENTS; i++)
    {
        //rossz a duplázás
        b[i] = (i +1) * 2;
    }
    // ciklus vezérlő hibás
    for (int i = 0; i < N_ELEMENTS; i++)
    {
        // pontosvessző
        std::cout << "Ertek:" << b[i] << std::endl;
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    // kezdőérték
    int atlag= 0;
    for (int i = 0; i < N_ELEMENTS; i++)
    {
        //pontosvessző
        atlag += b[i];
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
