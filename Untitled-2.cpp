#include <iostream>
#include <vector>
using namespace std;
main(){


int findUnique(std::vector<int> num) ;{
    int uniqueElement = 0;
    for (int num :num) {
        uniqueElement ^= num;
    }
    return uniqueElement;
}

int main() {
    std::vector<int> num = {5, 5, 4, 4, 8};
    int result = findUnique(num);
    std::cout << "This element is" << result << std::endl;
    return 0;
	}
}
