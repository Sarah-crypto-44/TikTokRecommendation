#include <iostream>
using namespace std;


// Display the main content categories
void displayMainMenu()
{
    cout << "\nChoose your favorite content:" << endl;
    cout << "1. Music" << endl;
    cout << "2. Comedy" << endl;
    cout << "3. Gaming" << endl;
    cout << "4. Education" << endl;
    cout << "5. Food" << endl;
    cout << "6. Exit" << endl;
}


// Display Music recommendations
void showMusicRecommendations()
{
    char subChoice;

    cout << "\nChoose your Music preference:" << endl;
    cout << "1. Pop Music" << endl;
    cout << "2. New Music Releases" << endl;
    cout << "3. Dance Music" << endl;

    do
    {
        cout << "\nEnter your choice: ";
        cin >> subChoice;

        // Validate the subcategory choice
        if (subChoice < '1' || subChoice > '3')
        {
            cout << "\nInvalid choice. Please choose a number from 1 to 3." << endl;
        }

    } while (subChoice < '1' || subChoice > '3');


    // Display recommendations based on the selected Music preference
    switch (subChoice)
    {
        case '1':
            cout << "\nRecommended Pop Music Videos:" << endl;
            cout << "1. Trending Pop Songs" << endl;
            cout << "2. Popular Pop Artists" << endl;
            cout << "3. Viral Pop Songs" << endl;
            break;

        case '2':
            cout << "\nRecommended New Music Videos:" << endl;
            cout << "1. Latest Music Releases" << endl;
            cout << "2. New Artists to Discover" << endl;
            cout << "3. New Songs This Week" << endl;
            break;

        case '3':
            cout << "\nRecommended Dance Music Videos:" << endl;
            cout << "1. TikTok Dance Challenges" << endl;
            cout << "2. Trending Dance Songs" << endl;
            cout << "3. Dance Tutorial Videos" << endl;
            break;

        default:
            cout << "\nInvalid Music choice." << endl;
    }
}


// Display Comedy recommendations
void showComedyRecommendations()
{
    char subChoice;

    cout << "\nChoose your Comedy preference:" << endl;
    cout << "1. Funny Short Clips" << endl;
    cout << "2. Comedy Sketches" << endl;
    cout << "3. Funny Challenges" << endl;

    do
    {
        cout << "\nEnter your choice: ";
        cin >> subChoice;

        // Validate the subcategory choice
        if (subChoice < '1' || subChoice > '3')
        {
            cout << "\nInvalid choice. Please choose a number from 1 to 3." << endl;
        }

    } while (subChoice < '1' || subChoice > '3');

    // Display recommendations based on the selected Comedy preference
    switch (subChoice)
    {
        case '1':
            cout << "\nRecommended Funny Short Clips:" << endl;
            cout << "1. Funny Daily Moments" << endl;
            cout << "2. Funny Reactions" << endl;
            cout << "3. Unexpected Funny Moments" << endl;
            break;

        case '2':
            cout << "\nRecommended Comedy Sketches:" << endl;
            cout << "1. Short Comedy Stories" << endl;
            cout << "2. Family Comedy Sketches" << endl;
            cout << "3. Workplace Comedy" << endl;
            break;

        case '3':
            cout << "\nRecommended Funny Challenges:" << endl;
            cout << "1. Funny TikTok Challenges" << endl;
            cout << "2. Try Not to Laugh Challenges" << endl;
            cout << "3. Funny Friend Challenges" << endl;
            break;

        default:
            cout << "\nInvalid Comedy choice." << endl;
    }
}


// Display Gaming recommendations
void showGamingRecommendations()
{
    char subChoice;

    cout << "\nChoose your Gaming preference:" << endl;
    cout << "1. Gaming Tips" << endl;
    cout << "2. Game Reviews" << endl;
    cout << "3. Gaming Moments" << endl;

    do
    {
        cout << "\nEnter your choice: ";
        cin >> subChoice;

        // Validate the subcategory choice
        if (subChoice < '1' || subChoice > '3')
        {
            cout << "\nInvalid choice. Please choose a number from 1 to 3." << endl;
        }

    } while (subChoice < '1' || subChoice > '3');

    // Display recommendations based on the selected Gaming preference
    switch (subChoice)
    {
        case '1':
            cout << "\nRecommended Gaming Tips Videos:" << endl;
            cout << "1. Gaming Tips and Tricks" << endl;
            cout << "2. Beginner Gaming Guides" << endl;
            cout << "3. Advanced Gaming Strategies" << endl;
            break;

        case '2':
            cout << "\nRecommended Game Review Videos:" << endl;
            cout << "1. New Game Reviews" << endl;
            cout << "2. Game Comparison Videos" << endl;
            cout << "3. Best Games of the Year" << endl;
            break;

        case '3':
            cout << "\nRecommended Gaming Moments:" << endl;
            cout << "1. Best Gaming Moments" << endl;
            cout << "2. Funny Gaming Moments" << endl;
            cout << "3. Amazing Gameplays" << endl;
            break;

        default:
            cout << "\nInvalid Gaming choice." << endl;
    }
}


// Display Education recommendations
void showEducationRecommendations()
{
    char subChoice;

    cout << "\nChoose your Education preference:" << endl;
    cout << "1. Programming" << endl;
    cout << "2. Science" << endl;
    cout << "3. Study Tips" << endl;

    do
    {
        cout << "\nEnter your choice: ";
        cin >> subChoice;

        // Validate the subcategory choice
        if (subChoice < '1' || subChoice > '3')
        {
            cout << "\nInvalid choice. Please choose a number from 1 to 3." << endl;
        }

    } while (subChoice < '1' || subChoice > '3');

    // Display recommendations based on the selected Education preference
    switch (subChoice)
    {
        case '1':
            cout << "\nRecommended Programming Videos:" << endl;
            cout << "1. C++ Programming Tutorials" << endl;
            cout << "2. Python Programming Tutorials" << endl;
            cout << "3. Beginner Coding Tips" << endl;
            break;

        case '2':
            cout << "\nRecommended Science Videos:" << endl;
            cout << "1. Interesting Science Facts" << endl;
            cout << "2. Space and Astronomy" << endl;
            cout << "3. Human Biology Facts" << endl;
            break;

        case '3':
            cout << "\nRecommended Study Tips:" << endl;
            cout << "1. Effective Study Techniques" << endl;
            cout << "2. Time Management Tips" << endl;
            cout << "3. Exam Preparation Tips" << endl;
            break;

        default:
            cout << "\nInvalid Education choice." << endl;
    }
}


// Display Food recommendations
void showFoodRecommendations()
{
    char subChoice;

    cout << "\nChoose your Food preference:" << endl;
    cout << "1. Easy Cooking Recipes" << endl;
    cout << "2. Street Food" << endl;
    cout << "3. Desserts" << endl;

    do
    {
        cout << "\nEnter your choice: ";
        cin >> subChoice;

        // Validate the subcategory choice
        if (subChoice < '1' || subChoice > '3')
        {
            cout << "\nInvalid choice. Please choose a number from 1 to 3." << endl;
        }

    } while (subChoice < '1' || subChoice > '3');

    // Display recommendations based on the selected Food preference
    switch (subChoice)
    {
        case '1':
            cout << "\nRecommended Easy Cooking Videos:" << endl;
            cout << "1. Quick 10-Minute Recipes" << endl;
            cout << "2. Easy Dinner Ideas" << endl;
            cout << "3. Simple Breakfast Recipes" << endl;
            break;

        case '2':
            cout << "\nRecommended Street Food Videos:" << endl;
            cout << "1. Malaysian Street Food" << endl;
            cout << "2. Korean Street Food" << endl;
            cout << "3. Famous Street Food Around the World" << endl;
            break;

        case '3':
            cout << "\nRecommended Dessert Videos:" << endl;
            cout << "1. Easy Chocolate Desserts" << endl;
            cout << "2. Cake and Baking Recipes" << endl;
            cout << "3. No-Bake Dessert Recipes" << endl;
            break;

        default:
            cout << "\nInvalid Food choice." << endl;
    }
}


// Ask the user to rate the recommendation
void getRating()
{
    char rating;

    // Keep asking until the user enters a valid rating
    do
    {
        cout << "\nHow would you rate this recommendation?" << endl;
        cout << "1. Poor" << endl;
        cout << "2. Fair" << endl;
        cout << "3. Good" << endl;
        cout << "4. Very Good" << endl;
        cout << "5. Excellent" << endl;

        cout << "\nEnter your rating: ";
        cin >> rating;

        // Validate the rating
        if (rating < '1' || rating > '5')
        {
            cout << "Invalid rating. Please choose a number from 1 to 5." << endl;
        }

    } while (rating < '1' || rating > '5');

    cout << "Thank you for your feedback!" << endl;
}


int main()
{
    // Store the user's main category choice
    char choice;

    // Display the program title
    cout << "============================================" << endl;
    cout << "   TikTok Video Recommendation Assistant" << endl;
    cout << "============================================" << endl;

    // Repeat the program until the user chooses Exit
    do
    {
        // Display the main menu
        displayMainMenu();

        cout << "\nEnter your choice: ";
        cin >> choice;

        // Select the category and call the appropriate function
        switch (choice)
        {
            // MUSIC
            case '1':
                showMusicRecommendations();
                break;

            // COMEDY
            case '2':
                showComedyRecommendations();
                break;

            // GAMING
            case '3':
                showGamingRecommendations();
                break;

            // EDUCATION
            case '4':
                showEducationRecommendations();
                break;

            // FOOD
            case '5':
                showFoodRecommendations();
                break;

            // EXIT
            case '6':
                // Exit the recommendation system
                cout << "\nThank you for using the TikTok Recommendation Assistant!" << endl;
                break;

            // Handle an invalid main category
            default:
                cout << "\nInvalid choice. Please choose a number from 1 to 6." << endl;
        }

        // Ask for a rating after showing the recommendations
        if (choice >= '1' && choice <= '5')
        {
            getRating();
        }

    // Continue showing recommendations until Exit is selected
    } while (choice != '6');

    return 0;
}
