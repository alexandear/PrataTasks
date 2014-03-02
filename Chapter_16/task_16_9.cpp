#include <algorithm>
#include <ctime>
#include <iostream>
#include <list>
#include <vector>

int main() {

    using std::vector;
    using std::list;
    using std::cout;
    using std::endl;
    using std::sort;
    using std::copy;

    std::srand(static_cast<unsigned>(std::time(0)));

    int vectorSizes[3] = {100000, 1000000, 10000000};

    for (size_t i = 0; i < 3; ++i) {
        cout << "For vector size: " << vectorSizes[i] << endl;

        vector<int> vi0(vectorSizes[i]);
        std::generate(vi0.begin(), vi0.end(), std::rand);
        vector<int> vi(vi0);
        list<int> li(vi0.begin(), vi0.end());


        clock_t start = clock();

        sort(vi.begin(), vi.end());

        clock_t end = clock();
        cout << "sort vi using STL sort() algorithm: "
             << static_cast<double>(end - start)/CLOCKS_PER_SEC << " seconds\n";


        start = clock();

        li.sort();

        end = clock();
        cout << "sort li using the list sort: "
             << static_cast<double>(end - start)/CLOCKS_PER_SEC << " seconds\n";


        copy(vi0.begin(), vi0.end(), li.begin());
        start = clock();

        copy(li.begin(), li.end(), vi.begin());
        sort(vi.begin(), vi.end());
        copy(vi.begin(), vi.end(), li.begin());

        end = clock();
        cout << "combined operation: "
             << static_cast<double>(end - start)/CLOCKS_PER_SEC << " seconds\n";

        cout << endl;
    }

    return 0;
}
