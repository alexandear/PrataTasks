#include <algorithm>
#include <cstring>
#include <iostream>
#include <memory>
#include <string>
#include <vector>

struct Review {
    std::string title;
    int rating;
    double price;
};

bool operator<(const std::shared_ptr<Review> & r1, const std::shared_ptr<Review> & r2);
bool worseThan(const Review & r1, const Review & r2);
bool FillReview(Review & rr);
void ShowReview(const std::shared_ptr<Review> & rr);

int main() {

    using namespace std;

    vector<shared_ptr<Review>> books;
    Review temp;
    while (FillReview(temp))
        books.push_back(shared_ptr<Review>(new Review(temp)));


    if (books.size() > 0) {

        vector<shared_ptr<Review>> booksAlpha(books);
        vector<shared_ptr<Review>> booksRating(books);
        vector<shared_ptr<Review>> booksPrice(books);
        sort(booksAlpha.begin(), booksAlpha.end());
        sort(booksRating.begin(), booksRating.end(),
            [](const shared_ptr<Review> & r1, const shared_ptr<Review> & r2){
                return r1->rating < r2->rating;
        });
        sort(booksPrice.begin(), booksPrice.end(),
            [](const shared_ptr<Review> & r1, const shared_ptr<Review> & r2){
                return r1->price < r2->price;
        });

        while(true) {
            cout << "Enter how to display books: \nin original order(o), \nin alphabetical order(a), \nin order of "
                    "increasing ratings(r), \nin order of decreasing ratings(1), \nin order of increasing price(p), "
                    "\nin order of decreasing price(2), \nfor exit type (q): ";
            char choice;
            cin >> choice;
            while (strchr("oar1p2q", choice) == nullptr) {
                cout << "Please enter o, a, r, 1, p, 2, or q: ";
                cin >> choice;
            }
            if (choice == 'q')
                break;

            switch (choice) {
            case 'o':
                cout << "Books in original order:\nRating\tPrice\tBook\n";
                for_each(books.begin(), books.end(), ShowReview);
                break;
            case 'a':
                cout << "S  orted by title:\nRating\tPrice\tBook\n";
                for_each(booksAlpha.begin(), booksAlpha.end(), ShowReview);
                break;
            case 'r':
                cout << "Sorted in order of increasing rating:\nRating\tPrice\tBook\n";
                for_each(booksRating.begin(), booksRating.end(), ShowReview);
                break;
            case '1':
                cout << "Sorted in order of decreasing rating:\nRating\tPrice\tBook\n";
                for_each(booksRating.rbegin(), booksRating.rend(), ShowReview);
                break;
            case 'p':
                cout << "Sorted in order of increasing price:\nRating\tPrice\tBook\n";
                for_each(booksPrice.begin(), booksPrice.end(), ShowReview);
                break;
            case '2':
                cout << "Sorted in order of decreasing price:\nRating\tPrice\tBook\n";
                for_each(booksPrice.rbegin(), booksPrice.rend(), ShowReview);
                break;
            }
            cout << endl;
        }
    } else
        cout << "No entries. ";

    cout << "Bye.\n";

    return 0;
}

bool operator<(const std::shared_ptr<Review> & r1, const std::shared_ptr<Review> & r2) {
    if (r1->title < r2->title)
        return true;
    else if (r1->title == r2->title && r1->rating < r2->rating)
        return true;
    else
        return false;
}

bool FillReview(Review & rr) {

    std::cout << "Enter book title (quit to quit): ";
    std::getline(std::cin,rr.title);
    if (rr.title == "quit")
        return false;

    std::cout << "Enter book rating: ";
    std::cin >> rr.rating;
    if (!std::cin)
        return false;
    while (std::cin.get() != '\n')
        continue;

    std::cout << "Enter book price: ";
    std::cin >> rr.price;
    if (!std::cin)
        return false;
    while (std::cin.get() != '\n')
        continue;

    return true;
}

void ShowReview(const std::shared_ptr<Review> & rr) {
    std::cout << rr->rating << "\t" << rr->price << "\t" << rr->title << std::endl;
}
