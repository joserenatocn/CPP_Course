// Section 6
// Constants

#include <iostream>

int main()
{
    std::cout << "Hello, welome to Jose's carpet cleaning service" << std::endl;
    std::cout << "==============================================\n" << std::endl;
    
    const int price_per_L_room{35};
    const int price_per_S_room{25};
    const float tax{1.06}; // 6% tax rate
    int n_of_L_rooms{0};
    int n_of_S_rooms{0};
    std::cout << "How many large rooms to be cleaned: " << std::endl;
    std::cin >> n_of_L_rooms;
    std::cout << "How many small rooms to be cleaned: " << std::endl;
    std::cin >> n_of_S_rooms;
    
    float total = ((price_per_L_room*n_of_L_rooms) + (price_per_S_room*n_of_S_rooms))*tax;
    
    std::cout << "Total estimate: " << total << std::endl;
    
    return 0;
}
