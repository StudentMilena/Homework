#include <iostream>
int main()
{
    int month_number = 0;

    std::cout << "Podaj liczbe od 1 do 12";
    std::cin >> month_number;

    switch (month_number)
    {
    case 1:
        std::cout << "Styczen," << " " << "Pochmurno";
        break;
    case 2:
        std::cout << "Luty," << " " << "28 dni w roku nieprzystepnym," << " " << "Pochmurno";
        break;
    case 3:
        std::cout << "Marzec," << " " << "Pochmurno";
        break;
    case 4:
        std::cout << "Kwiecien," << " " << "Slonecznie";
        break;
    case 5:
        std::cout << "Maj," << " " << "Slonecznie";
        break;
    case 6:
        std::cout << "Czerwiec," << " " << "Slonecznie";
        break;
    case 7:
        std::cout << "Lipiec," << " " << "Slonecznie";
        break;
    case 8:
        std::cout << "Sierpien," << " " << "Slonecznie";
        break;
    case 9:
        std::cout << "Wrzesien," << " " << "Slonecznie";
        break;
    case 10:
        std::cout << "Pazdziernik," << " " << "Pochmurno";
        break;
    case 11:
        std::cout << "Listopad," << " " << "Pochmurno";
        break;
    case 12:
        std::cout << "Grudzien," << " " << "Pochmurno";
        break;

    default:
        std::cout << "Zla liczba z zakresu. Sprobuj jeszcze raz";
    }
}
