#include <iostream>
using namespace std;

int main()
{
    char choice;

    cout << "============================================" << endl;
    cout << "   TikTok Video Recommendation Assistant" << endl;
    cout << "============================================" << endl;

    do
    {
        cout << "\nChoose your favorite content:" << endl;
        cout << "1. Music" << endl;
        cout << "2. Comedy" << endl;
        cout << "3. Gaming" << endl;
        cout << "4. Education" << endl;
        cout << "5. Food" << endl;

        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case '1':
                cout << "\nRecommended for you: Trending Music Videos!" << endl;
                break;

            case '2':
                cout << "\nRecommended for you: Funny Comedy Videos!" << endl;
                break;

            case '3':
                cout << "\nRecommended for you: Gaming Tips & Tricks!" << endl;
                break;

            case '4':
                cout << "\nRecommended for you: Educational & Learning Videos!" << endl;
                break;

            case '5':
                cout << "\nRecommended for you: Easy Cooking & Food Videos!" << endl;
                break;

            default:
                cout << "\nInvalid choice. Please choose a number from 1 to 5." << endl;
        }

    } while (choice != '1' &&
             choice != '2' &&
             choice != '3' &&
             choice != '4' &&
             choice != '5');

    cout << "\nThank you for using the TikTok Recommendation Assistant!" << endl;

    return 0;
}
