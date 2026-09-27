#include <iostream>
#include <memory>

#include "Car.h"
#include "Motorbike.h"
#include "RentalSystem.h"
#include "Truck.h"

int main()
{
    RentalSystem rental;

    std::cout << "=================================================================\n";
    std::cout << "             VEHICLE RENTAL SYSTEM - Lab 14 Demo\n";
    std::cout << "=================================================================\n";

    std::cout << "\n[STEP 1] Adding vehicles to the fleet\n";

    rental.addVehicle(std::make_unique<Car>(101, "Toyota Corolla", 45.0, 5));
    rental.addVehicle(std::make_unique<Car>(102, "Suzuki Alto", 30.0, 4));
    rental.addVehicle(std::make_unique<Motorbike>(201, "Yamaha YBR", 12.0, 125));
    rental.addVehicle(std::make_unique<Truck>(301, "Hino 500", 150.0, 8.0));

    std::cout << "\n[STEP 2] Registering customers\n";

    rental.registerCustomer(1, "Absar Ali");
    rental.registerCustomer(2, "Bilal Khan");
    rental.registerCustomer(3, "Hamza Sheikh");
    rental.registerCustomer(4, "Sana Malik");

    std::cout << "\n[STEP 3] Processing rentals\n";

    rental.rentVehicle(1, 101, 3);
    rental.rentVehicle(2, 201, 10);
    rental.rentVehicle(3, 301, 4);

    std::cout << "\n[STEP 4] Checking that invalid requests are rejected\n";

    std::cout << " a) Renting a vehicle that is already rented out:\n";
    rental.rentVehicle(4, 101, 2);

    std::cout << " b) A customer who already has an active rental:\n";
    rental.rentVehicle(1, 102, 5);

    std::cout << " c) An invalid rental duration:\n";
    rental.rentVehicle(4, 102, 0);
    rental.rentVehicle(4, 102, -4);

    std::cout << " d) A customer who is not registered:\n";
    rental.rentVehicle(99, 102, 3);

    std::cout << " e) A vehicle that is not in the fleet:\n";
    rental.rentVehicle(4, 999, 3);

    std::cout << " f) A duplicate customer id:\n";
    rental.registerCustomer(1, "Someone Else");

    std::cout << "\n[STEP 5] Returning a vehicle\n";

    rental.returnVehicle(101);

    std::cout << " Returning the same vehicle again (already returned):\n";
    rental.returnVehicle(101);

    std::cout << " The same customer renting again, now that the rental is closed:\n";
    rental.rentVehicle(1, 102, 5);

    std::cout << "\n[STEP 6] Printing the summary\n";
    rental.printSummary();

    std::cout << "\nNotice in the summary that rental #1 is CLOSED but still on record,\n";
    std::cout << "that the Corolla is available again, and that Absar Ali was able to start\n";
    std::cout << "rental #4 only after the first rental was closed.\n";

    return 0;
}
