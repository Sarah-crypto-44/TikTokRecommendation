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
                cout << "\nRecommended Music Videos:" << endl;
                cout << "1. Trending Pop Songs" << endl;
                cout << "2. New Music Releases" << endl;
                cout << "3. Dance Challenge Music" << endl;
                break;

            case '2':
                cout << "\nRecommended Comedy Videos:" << endl;
                cout << "1. Funny Short Clips" << endl;
                cout << "2. Comedy Sketches" << endl;
                cout << "3. Funny TikTok Challenges" << endl;
                break;

            case '3':
                cout << "\nRecommended Gaming Videos:" << endl;
                cout << "1. Gaming Tips and Tricks" << endl;
                cout << "2. New Game Reviews" << endl;
                cout << "3. Best Gaming Moments" << endl;
                break;

            case '4':
                cout << "\nRecommended Educational Videos:" << endl;
                cout << "1. Programming Tutorials" << endl;
                cout << "2. Science Facts" << endl;
                cout << "3. Study Tips and Techniques" << endl;
                break;

            case '5':
                cout << "\nRecommended Food Videos:" << endl;
                cout << "1. Easy Cooking Recipes" << endl;
                cout << "2. Street Food Videos" << endl;
                cout << "3. Dessert Recipes" << endl;
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

