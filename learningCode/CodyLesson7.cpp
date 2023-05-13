#include <iostream>
#include <vector>

int CodyLesson7() 
{
    std::vector<int> container;
    int num = 0;
    double sum = 0.0;

    std::cout << "Enter numbers (enter 0 to exit): \n";
    while (true) 
    {
        std::cout << "Enter a number: ";
        std::cin >> num;
        if (num == 0)
        {
            break;
        }
        container.push_back(num);
        sum += num;
    }

    std::cout << "Values in container: ";
    for (int value : container) 
    {
        std::cout << value << " ";
    }
    std::cout << "\n";

    int capacity = container.capacity();
    int size = container.size();

    std::cout << "Capacity of container: " << capacity << "\n";;
    std::cout << "Size of container: " << size << "\n";

    double average = 0.0;
    if (size != 0) 
    {
        average = sum / size;
    }
    std::cout << "Average of container: " << average << "\n";

    return 0;
}
