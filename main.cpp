#include <iostream>
#include "algorytmy.hpp"
#include <ctime>

const int zmiana = 10; // rozmiar tablicy

int main() {
    std::srand(std::time(0));
    int t[zmiana];
    wypelnij_tablice(t, zmiana);
    wydrukuj_tablice(t, zmiana);
    sortowanie_babelkowe(t, zmiana);
    wydrukuj_tablice(t, zmiana);

    wypelnij_tablice(t, zmiana);
    wydrukuj_tablice(t, zmiana);
    sortowanie_przez_scalanie(t, zmiana);
    wydrukuj_tablice(t, zmiana);

    wypelnij_tablice(t, zmiana);
    wydrukuj_tablice(t, zmiana);
    sortowanie_szybkie(t, zmiana);
    wydrukuj_tablice(t, zmiana);

    wypelnij_tablice(t, zmiana);
    wydrukuj_tablice(t, zmiana);
    sortowanie_przez_wstrzasanie(t, zmiana);
    wydrukuj_tablice(t, zmiana);

    wypelnij_tablice(t, zmiana);
    wydrukuj_tablice(t, zmiana);
    sortowanie_przez_wstawianie(t, zmiana);
    wydrukuj_tablice(t, zmiana);

    int tt[zmiana] = {};
    int k_istnieje_w_tt = 1;  // liczba jaka chce
    int k_nie_istnieje_w_tt = 1; // liczba jaka chce

    std::cout << wyszukiwanie_binarne(tt, zmiana, k_istnieje_w_tt) << std::endl;
    std::cout << wyszukiwanie_binarne(tt, zmiana, k_nie_istnieje_w_tt) << std::endl;

    std::cout << wyszukiwanie_liniowe(tt, zmiana, k_istnieje_w_tt) << std::endl;
    std::cout << wyszukiwanie_liniowe(tt, zmiana, k_nie_istnieje_w_tt) << std::endl;

    std::cout << wyszukiwanie_liniowe_z_wart(tt, zmiana, k_istnieje_w_tt) << std::endl;
    std::cout << wyszukiwanie_liniowe_z_wart(tt, zmiana, k_nie_istnieje_w_tt) << std::endl;

    std::cout << wyszukiwanie_interpolacyjne(tt, zmiana, k_istnieje_w_tt) << std::endl;
    std::cout << wyszukiwanie_interpolacyjne(tt, zmiana, k_nie_istnieje_w_tt) << std::endl;

    std::cout << wyszukiwanie_skokowe(tt, zmiana, k_istnieje_w_tt) << std::endl;
    std::cout << wyszukiwanie_skokowe(tt, zmiana, k_nie_istnieje_w_tt) << std::endl;

    return 0;
}
