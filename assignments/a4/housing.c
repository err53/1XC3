#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char city[256];
    long long unsigned int price;
} city_housing_price;

/**
 * Print a dynamically sized list of cities
 * @param cities A pointer to the list of cities
 * @param cities_size The size of the dynamically sized array
 */
void print_cities(city_housing_price* cities, int cities_size)
{
    // print out the city names and average house prices
    for (int i = 0; i<cities_size; i++) {
        printf("City: %s Price: %llu\n", cities[i].city, cities[i].price);
    }
}

int main()
{
    // dynamically allocate an array of city_housing_price structs
    city_housing_price* cities = malloc(sizeof(city_housing_price));
    int cities_size = 0;

    for (int i = 0; 1; i++) {
        cities_size++;
        // get city name
        printf("Enter the name of the city: ");
        // read up to 255 characters, ending if a newline is seen
        // use %*c to drop the trailing newline
        scanf("%[^\n]s%*c", cities[i].city);

        // get average house price
        printf("Enter the average house price: ");
        scanf("%llu%*c", &cities[i].price); // NOLINT(cert-err34-c)

        // ask user if they want to enter another city
        printf("Enter another city? (y/n): ");
        char answer;
        scanf("%c%*c", &answer);
        if (answer=='n') {
            break;
        }
        else {
            // dynamically allocate an array of city_housing_price structs
            // allocate one more than the current index as the index is incremented
            // after the loop
            cities = realloc(cities, (i+2)*sizeof(city_housing_price));
        }
    }

    // print out the city names and average house prices
    printf("\nList of city and prices:\n\n");
    print_cities(cities, cities_size);

    // perform selection sort on the cities based on price, sorted from smallest
    // to largest
    for (int i = 0; i<cities_size; i++) {
        int min = i;
        for (int j = i+1; j<cities_size; j++) {
            if (cities[j].price<cities[min].price) {
                min = j;
            }
        }
        // swap the two cities
        city_housing_price temp = cities[i];
        cities[i] = cities[min];
        cities[min] = temp;
    }

    // print out the sorted list of cities
    printf("\nSorted:\n\n");
    print_cities(cities, cities_size);

    // print out the city with the highest house price:
    printf("\nThe city with the highest house price: %s\n",
            cities[cities_size-1].city);

    // free the dynamically allocated array
    free(cities);
    return 0;
}
