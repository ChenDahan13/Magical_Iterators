#include "doctest.h"
#include "sources/MagicalContainer.hpp"

using namespace std;

    TEST_CASE("Checks isPrime() function") {

        bool isPrime = MagicalContainer::isPrime(1);
        CHECK(isPrime == false);
        isPrime = MagicalContainer::isPrime(2);
        CHECK(isPrime == true);
        isPrime = MagicalContainer::isPrime(3);
        CHECK(isPrime == true);
        isPrime = MagicalContainer::isPrime(50);
        CHECK(isPrime == false);
        isPrime = MagicalContainer::isPrime(-1);
        CHECK(isPrime == false);
        isPrime = MagicalContainer::isPrime(-22);
        CHECK(isPrime == false);
        isPrime = MagicalContainer::isPrime(12);
        CHECK(isPrime == false);
        isPrime = MagicalContainer::isPrime(13);
        CHECK(isPrime == true);
    }
    
    TEST_CASE("Add elements Test") {
        
        MagicalContainer container;
        container.addElement(1);
        container.addElement(2);
        container.addElement(3);

        CHECK(container.size() == 3);

        container.addElement(22);
        container.addElement(33);
        container.addElement(40);
        container.addElement(13);

        CHECK(container.size() == 7);

        container.addElement(-1);

        CHECK(container.size() == 8);

        // Checks right arguments adding
        CHECK_THROWS_AS(container.addElement('a'), std::invalid_argument);
        CHECK_THROWS_AS(container.addElement(false), std::invalid_argument);

    }

    TEST_CASE("Remove elements tests") {
                
            MagicalContainer container;
            container.addElement(1);
            container.addElement(2);
            container.addElement(3);
            container.addElement(22);
            container.addElement(33);
            container.addElement(40);
            container.addElement(13);
            container.addElement(-1);

            CHECK(container.size() == 8);
    
            container.removeElement(1);

            CHECK(container.size() == 7);

            container.removeElement(2);
            container.removeElement(3);

            CHECK(container.size() == 5);

            // Checks nothing happens when removing non-existing element
            container.removeElement(100);
            CHECK(container.size() == 5);

            container.removeElement(200);
            CHECK(container.size() == 5);

            // Checks right arguments removing
            CHECK_THROWS_AS(container.removeElement('a'), std::invalid_argument);
            CHECK_THROWS_AS(container.removeElement(true), std::invalid_argument);

    }

    TEST_CASE("AscendingIterator class tests") {

            MagicalContainer container;
            container.addElement(1);
            container.addElement(2);
            container.addElement(3);
            container.addElement(22);
            container.addElement(33);
            container.addElement(40);
            container.addElement(13);
            container.addElement(-1);
    
            MagicalContainer::AscendingIterator iterator(container);

            // Checks start different from end
            bool b = iterator.begin() != iterator.end();
            CHECK(b == true);
            b = iterator.begin() == iterator.end();
            CHECK(b == false);

            // Checks start less than end
            b = iterator.begin() < iterator.end();
            CHECK(b == true);
            b = iterator.end() < iterator.begin();
            CHECK(b == false);

            b = iterator.begin() > iterator.end();
            CHECK(b == false);
            b = iterator.end() > iterator.begin();
            CHECK(b == true);

            // Checks dereference operator
            CHECK(*iterator.begin() == -1);
            CHECK(*iterator.end() == 40);

            // Checks the order of elements using iterator
            int order[] = {-1, 1, 2, 3, 13, 22, 33, 40};
            int i = 0;
            for (auto it = iterator.begin(); it != iterator.end(); ++it) {
                CHECK(*it == order[i]);
                i++;
            }
    }

    TEST_CASE("SideCrossIterator class tests") {

            MagicalContainer container;
            container.addElement(1);
            container.addElement(2);
            container.addElement(3);
            container.addElement(22);
            container.addElement(33);
            container.addElement(40);
            container.addElement(13);
            container.addElement(-1);
    
            MagicalContainer::SideCrossIterator iterator(container);

            // Checks start different from end
            bool b = iterator.begin() != iterator.end();
            CHECK(b == true);
            b = iterator.begin() == iterator.end();
            CHECK(b == false);

            // Checks start less than end
            b = iterator.begin() < iterator.end();
            CHECK(b == true);
            b = iterator.end() < iterator.begin();
            CHECK(b == false);

            b = iterator.begin() > iterator.end();
            CHECK(b == false);
            b = iterator.end() > iterator.begin();
            CHECK(b == true);

            // Checks dereference operator
            CHECK(*iterator.begin() == 1);
            CHECK(*iterator.end() == 33);

            // Checks the order of elements using iterator
            int order[] = {1, -1, 2, 13, 3, 40, 22, 33};
            int i = 0;
            for (auto it = iterator.begin(); it != iterator.end(); ++it) {
                CHECK(*it == order[i]);
                i++;
            }
    }

    TEST_CASE("PrimeIterator class tests") {
        
            MagicalContainer container;
            container.addElement(1);
            container.addElement(2);
            container.addElement(3);
            container.addElement(22);
            container.addElement(33);
            container.addElement(40);
            container.addElement(13);
            container.addElement(-1);
        
            MagicalContainer::PrimeIterator iterator(container);
    
            // Checks start different from end
            bool b = iterator.begin() != iterator.end();
            CHECK(b == true);
            b = iterator.begin() == iterator.end();
            CHECK(b == false);
    
            // Checks start less than end
            b = iterator.begin() < iterator.end();
            CHECK(b == true);
            b = iterator.end() < iterator.begin();
            CHECK(b == false);
    
            b = iterator.begin() > iterator.end();
            CHECK(b == false);
            b = iterator.end() > iterator.begin();
            CHECK(b == true);
    
            // Checks dereference operator
            CHECK(*iterator.begin() == 2);
            CHECK(*iterator.end() == 13);
    
            // Checks the order of elements using iterator
            int order[] = {2, 3, 13};
            int i = 0;
            for (auto it = iterator.begin(); it != iterator.end(); ++it) {
                CHECK(*it == order[i]);
                i++;
            }
    }
