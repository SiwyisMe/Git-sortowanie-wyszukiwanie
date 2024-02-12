#include <iostream>
#include "algorytmy.hpp"

int main() {
    int t[SIZE];
    wypelnij_tablice(t, SIZE);
    wydrukuj_tablice();
    sortowanie_babelkowe(t, SIZE);
    wydrukuj_tablice();

    wypelnij_tablice();
    wydrukuj_tablice();
    sortowanie_przez_scalanie(t, SIZE);
    wydrukuj_tablice();

    wypelnij_tablice();
    wydrukuj_tablice();
    sortowanie_szybkie(t, SIZE);
    wydrukuj_tablice();

    wypelnij_tablice();
    wydrukuj_tablice();
    sortowanie_przez_wstrzasanie(t, SIZE);
    wydrukuj_tablice();

    wypelnij_tablice();
    wydrukuj_tablice();
    sortowanie_przez_wstawianie(t, SIZE, t_out);
    wydrukuj_tablice();


    int tt[SIZE] = {};
    int k_exist_in_tt = x;
    int k_not_exist_in_tt = y;

    std::cout << wyszukiwanie_binarne(tt, SIZE, k_exist_in_tt);
    std::cout << wyszukiwanie_binarne(tt, SIZE, k_not_exist_in_tt);

    std::cout << wyszukiwanie_liniowe(tt, SIZE, k_exist_in_tt);
    std::cout << wyszukiwanie_liniowe(tt, SIZE, k_not_exist_in_tt);

    std::cout << wyszukiwanie_liniowe_z_wart(tt, SIZE, k_exist_in_tt);
    std::cout << wyszukiwanie_liniowe_z_wart(tt, SIZE, k_not_exist_in_tt);

    std::cout << wyszukiwanie_interpolacyjne(tt, SIZE, k_exist_in_tt);
    std::cout << wyszukiwanie_interpolacyjne(tt, SIZE, k_not_exist_in_tt);

    std::cout << wyszukiwanie_skokowe(tt, SIZE, k_exist_in_tt);
    std::cout << wyszukiwanie_skokowe(tt, SIZE, k_not_exist_in_tt);

    return 0;
}