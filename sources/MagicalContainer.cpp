#include "MagicalContainer.hpp"

using namespace std;
using namespace ariel;

/* MagicalContainer Functions */
void MagicalContainer::addElement(int element) {
    cout << "Adding element: " << element << endl;
}

int MagicalContainer::size() {
    return this->originalContainer.size();
}

bool MagicalContainer::isPrime(int element) {
    if (element <= 1) {
        return false;
    }
    for (int i = 2; i < element / 2; i++) {
        if (element % i == 0) {
            return false;
        }
    }
    return true;
}

void MagicalContainer::removeElement(int element) {
    cout << "Removing element: " << element << endl;
}

/* -------------------------- */


/*/////////////////////////////*/
/* Iterators Classes Functions */
/*\\\\\\\\\\\\\\\\\\\\\\\\\\\\\*/


/* AscendingIterator Functions */
MagicalContainer::AscendingIterator::AscendingIterator(MagicalContainer& container) {
    cout << "AscendingIterator constructor" << endl;
}

MagicalContainer::AscendingIterator::AscendingIterator(const AscendingIterator& other) {
    cout << "AscendingIterator copy constructor" << endl;
}

bool MagicalContainer::AscendingIterator::operator!=(const AscendingIterator& other) const {
    cout << "AscendingIterator operator!=" << endl;
    return false;
}

bool MagicalContainer::AscendingIterator::operator==(const AscendingIterator& other) const {
    cout << "AscendingIterator operator==" << endl;
    return false;
}

bool MagicalContainer::AscendingIterator::operator<(const AscendingIterator& other) const {
    cout << "AscendingIterator operator<" << endl;
    return false;
}

bool MagicalContainer::AscendingIterator::operator>(const AscendingIterator& other) const {
    cout << "AscendingIterator operator>" << endl;
    return false;
}

MagicalContainer::AscendingIterator& MagicalContainer::AscendingIterator::operator=(const AscendingIterator& other) {
    cout << "AscendingIterator operator=" << endl;
    return *this;
}

MagicalContainer::AscendingIterator& MagicalContainer::AscendingIterator::operator++() {
    cout << "AscendingIterator operator++" << endl;
    return *this;
}

int MagicalContainer::AscendingIterator::operator*() const {
    cout << "AscendingIterator operator*" << endl;
    return 0;
}

MagicalContainer::AscendingIterator& MagicalContainer::AscendingIterator::begin() {
    cout << "AscendingIterator begin" << endl;
    return *this;
}

MagicalContainer::AscendingIterator& MagicalContainer::AscendingIterator::end() {
    cout << "AscendingIterator end" << endl;
    return *this;
}

/* -------------------------- */


/* SideCrossIterator Functions */
MagicalContainer::SideCrossIterator::SideCrossIterator(MagicalContainer& container) {
    cout << "SideCrossIterator constructor" << endl;
}

MagicalContainer::SideCrossIterator::SideCrossIterator(const SideCrossIterator& other) {
    cout << "SideCrossIterator copy constructor" << endl;
}

bool MagicalContainer::SideCrossIterator::operator!=(const SideCrossIterator& other) const {
    cout << "SideCrossIterator operator!=" << endl;
    return false;
}

bool MagicalContainer::SideCrossIterator::operator==(const SideCrossIterator& other) const {
    cout << "SideCrossIterator operator==" << endl;
    return false;
}

bool MagicalContainer::SideCrossIterator::operator<(const SideCrossIterator& other) const {
    cout << "SideCrossIterator operator<" << endl;
    return false;
}

bool MagicalContainer::SideCrossIterator::operator>(const SideCrossIterator& other) const {
    cout << "SideCrossIterator operator>" << endl;
    return false;
}

MagicalContainer::SideCrossIterator& MagicalContainer::SideCrossIterator::operator=(const SideCrossIterator& other) {
    cout << "SideCrossIterator operator=" << endl;
    return *this;
}

MagicalContainer::SideCrossIterator& MagicalContainer::SideCrossIterator::operator++() {
    cout << "SideCrossIterator operator++" << endl;
    return *this;
}

int MagicalContainer::SideCrossIterator::operator*() const {
    cout << "SideCrossIterator operator*" << endl;
    return 0;
}

MagicalContainer::SideCrossIterator& MagicalContainer::SideCrossIterator::begin() {
    cout << "SideCrossIterator begin" << endl;
    return *this;
}

MagicalContainer::SideCrossIterator& MagicalContainer::SideCrossIterator::end() {
    cout << "SideCrossIterator end" << endl;
    return *this;
}

/* -------------------------- */


/* PrimeIterator Functions */
MagicalContainer::PrimeIterator::PrimeIterator(MagicalContainer& container) {
    cout << "PrimeIterator constructor" << endl;
}

MagicalContainer::PrimeIterator::PrimeIterator(const PrimeIterator& other) {
    cout << "PrimeIterator copy constructor" << endl;
}

bool MagicalContainer::PrimeIterator::operator!=(const PrimeIterator& other) const {
    cout << "PrimeIterator operator!=" << endl;
    return false;
}

bool MagicalContainer::PrimeIterator::operator==(const PrimeIterator& other) const {
    cout << "PrimeIterator operator==" << endl;
    return false;
}

bool MagicalContainer::PrimeIterator::operator<(const PrimeIterator& other) const {
    cout << "PrimeIterator operator<" << endl;
    return false;
}

bool MagicalContainer::PrimeIterator::operator>(const PrimeIterator& other) const {
    cout << "PrimeIterator operator>" << endl;
    return false;
}

MagicalContainer::PrimeIterator& MagicalContainer::PrimeIterator::operator=(const PrimeIterator& other) {
    cout << "PrimeIterator operator=" << endl;
    return *this;
}

MagicalContainer::PrimeIterator& MagicalContainer::PrimeIterator::operator++() {
    cout << "PrimeIterator operator++" << endl;
    return *this;
}

int MagicalContainer::PrimeIterator::operator*() const {
    cout << "PrimeIterator operator*" << endl;
    return 0;
}

MagicalContainer::PrimeIterator& MagicalContainer::PrimeIterator::begin() {
    cout << "PrimeIterator begin" << endl;
    return *this;
}

MagicalContainer::PrimeIterator& MagicalContainer::PrimeIterator::end() {
    cout << "PrimeIterator end" << endl;
    return *this;
}

/* -------------------------- */