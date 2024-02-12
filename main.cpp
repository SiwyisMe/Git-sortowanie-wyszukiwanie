#include <iostream>
#include "algorytmy.hpp"

const int SIZE = 10;  // rozmiar tablicy

int main() {
    int t[SIZE];
    wypelnij_tablice(t, SIZE);
    wydrukuj_tablice(t, SIZE);
    sortowanie_babelkowe(t, SIZE);
    wydrukuj_tablice(t, SIZE);

    wypelnij_tablice(t, SIZE);
    wydrukuj_tablice(t, SIZE);
    sortowanie_przez_scalanie(t, SIZE);
    wydrukuj_tablice(t, SIZE);

    wypelnij_tablice(t, SIZE);
    wydrukuj_tablice(t, SIZE);
    sortowanie_szybkie(t, SIZE);
    wydrukuj_tablice(t, SIZE);

    wypelnij_tablice(t, SIZE);
    wydrukuj_tablice(t, SIZE);
    sortowanie_przez_wstrzasanie(t, SIZE);
    wydrukuj_tablice(t, SIZE);

    wypelnij_tablice(t, SIZE);
    wydrukuj_tablice(t, SIZE);
    sortowanie_przez_wstawianie(t, SIZE);
    wydrukuj_tablice(t, SIZE);

    int tt[SIZE] = {};
    int k_exist_in_tt = 42;  // liczba jaka chce
    int k_not_exist_in_tt = 99;  // liczba jaka chce

    std::cout << wyszukiwanie_binarne(tt, SIZE, k_exist_in_tt) << std::endl;
    std::cout << wyszukiwanie_binarne(tt, SIZE, k_not_exist_in_tt) << std::endl;

    std::cout << wyszukiwanie_liniowe(tt, SIZE, k_exist_in_tt) << std::endl;
    std::cout << wyszukiwanie_liniowe(tt, SIZE, k_not_exist_in_tt) << std::endl;

    std::cout << wyszukiwanie_liniowe_z_wart(tt, SIZE, k_exist_in_tt) << std::endl;
    std::cout << wyszukiwanie_liniowe_z_wart(tt, SIZE, k_not_exist_in_tt) << std::endl;

    std::cout << wyszukiwanie_interpolacyjne(tt, SIZE, k_exist_in_tt) << std::endl;
    std::cout << wyszukiwanie_interpolacyjne(tt, SIZE, k_not_exist_in_tt) << std::endl;

    std::cout << wyszukiwanie_skokowe(tt, SIZE, k_exist_in_tt) << std::endl;
    std::cout << wyszukiwanie_skokowe(tt, SIZE, k_not_exist_in_tt) << std::endl;

    return 0;
}
