#include <iostream>
#include <string>
#include <vector>

using namespace std;


void displayAttractions() {
    cout << "\n========== Tourist Attractions in Kolhapur ==========\n";
    cout << "1. Mahalaxmi Temple\n";
    cout << "2. Panhala Fort\n";
    cout << "3. Rankala Lake\n";
    cout << "4. New Palace\n";
    cout << "5. Jyotiba Temple\n";
     
    cout << "\n Would you like to know more about any of these places? (yes/no): ";
    string response;
    cin >> response;
    
    if (response == "yes") {
        cout << "\nMahalaxmi Temple:\n Located in Kolhapur.A famous Hindu temple dedicated to Goddess Mahalaxmi and is considered one of the Shakti Peethas.\n It features stunning architecture and is a major pilgrimage site.\n\n";

        cout << "Panhala Fort:\n A historic fort perched atop the Sahyadri Hills, known for its strategic importance in Maratha history. \n It played a key role in Chhatrapati Shivaji Maharaj’s military campaigns.\n\n";

        cout << "Rankala Lake:\n A serene lake ideal for evening walks and boating.\n A scenic lake in Kolhapur, popular for its serene surroundings and boating facilities.\n It’s a great spot to unwind and enjoy picturesque sunset views.\n\n";

        cout <<"New Palace: \n A royal structure showcasing Indo-Saracenic architecture.\n A grand palace in Kolhapur that showcases the opulence of the erstwhile rulers. \n It houses a museum displaying artifacts from the Maratha Empire.\n\n";

        cout <<"Jyotiba Temple:\n A colorful temple atop a hill, popular during Chaitra festivals.\n Situated near Kolhapur, this temple is dedicated to Lord Jyotiba and is known for its vibrant annual fairs and spiritual significance\n\n";
    
    }
}

void displayHotels() {
    cout << "\n========== Popular Hotels in Kolhapur ==========:\n";
    cout << "1. Hotel Opal\n";
    cout << "2. The Orchid Hotel\n";
    cout << "3. Sayaji Hotel\n";
    cout << "4. Hotel Rajendra\n";
    cout << "\nWould you like to know more about any hotel? (yes/no): ";
    string response;
    cin >> response;
    if (response == "yes") {
        cout << "Hotel Opal: A budget hotel with basic amenities.\n";
        cout << "The Orchid Hotel: Orchid Avenue Luxurious Homestay Features Views Of The Mountain 7.1 Km From Rankala Lake.\n";
        cout << "Sayaji Hotel: A luxury hotel with a swimming pool.\n";
        cout << "Hotel Ravikiran Kolhapur: Hotel Rates, Specials, Offers. Book suite rooms & more.\n";
    }
}


void displayCuisine() {
    cout << "\n========== Popular Local Cuisine ==========\n";
    cout << "1. Kolhapuri Misal\n";
    cout << "2. Pandhi Curry (Mutton Curry)\n";
    cout << "3. Bhakri and chutney\n";
    cout << "4. Tambda Rassa\n";
    cout << "\nWould you like to know more about any dish? (yes/no): ";
    string response;
    cin >> response;
    if (response == "yes") {
        cout << "\n Kolhapuri Misal: A fiery mix of sprouts, gravy, farsan, and bread..\n 1.Fhadatare misal\n 2.Kalamba misal\n\n";
        cout<<"\n pandhi curry: Pandi curry iss one of the most loved dish in Coorg. \n The magical blend of spices leads to an unique pork dish which leaves an everlasting impression on your palate!\n ";
        cout<<"\n Bhakri and Chuteny: A fiery chutney made with red chilies, garlic, and peanuts, adding an extra kick to any meal.\n A traditional Maharashtrian flatbread made from jowar or bajra flour, often paired with spicy curries.\n\n";
       cout << "\n Tambda Rassa : Pandhra & Tambda Rassa: Famous white and red mutton curries of Kolhapur.\n\n";
    }
}

void displayTransportation() {
  cout << "\n========== Transportation Options ==========\n";
    cout << "1. Buses\n";
    cout << "2. Taxis\n";
    cout << "3. Trains\n";
    cout << "4. Auto Rickshaws\n";
    
    cout << "\nWould you like to know more about transportation? (yes/no): ";
    string response;
    cin >> response;
    if (response == "yes") {
    cout << "\n1. Buses: MSRTC buses connect city and nearby areas.\n\n";
    cout << "2. Auto Rickshaws: Easily available for local transport.\n\n";
    cout << "3. Trains: Kolhapur station connects to major cities.\n\n";
    cout << "4. Taxis: Available via booking or local stand.\n\n";
    }
}

void displayShoppingPlaces() {
    cout << "\n========== Popular Shopping Places in Kolhapur ==========\n";
    cout << "1. Mahadwar Road\n";
    cout << "2. Shivaji Market\n";
    cout << "3. Rajarampuri\n";
    cout << "4. DYP City Mall\n";
    cout << "\nWould you like to know more about these places? (yes/no): ";
    string response;
    cin >> response;
    if (response == "yes") {
        cout << "\n Mahadwar Road: Known for Kolhapuri chappals and traditional jewelry.\n\n";
        cout << "Shivaji Market: Famous for groceries, clothes, and local snacks.\n\n";
        cout << "Rajarampuri: Ideal for street shopping and fashion stores.\n\n";
        cout << "DYP City Mall: A modern shopping destination with branded stores.\n\n";
        
    }

}

int main() {
    int choice;
    
    do {
        cout << "---------------------------------";
        cout << "\n Welcome to Explore Kolhapur!\n";
        cout << "---------------------------------\n";
        cout << "Please choose an option:\n";
        cout << "1. Tourist Attractions\n";
        cout << "2. Hotels and Accommodations\n";
        cout << "3. Local Cuisine and Restaurants\n";
        cout << "4. Transportation\n";
        cout << "5. ShoppingPlaces\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                displayAttractions();
                break;
            case 2:
                displayHotels();
                break;
            case 3:
                displayCuisine();
                break;
            case 4:
                displayTransportation();
                break;
            case 5:
                 displayShoppingPlaces();
                break;
            case 6:
                cout << "Thank you for using Explore Kolhapur. Have a pleasant journey! ??\n";
                break;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != 6);

    return 0;
}