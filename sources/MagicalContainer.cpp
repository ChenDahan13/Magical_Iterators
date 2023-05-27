#include "MagicalContainer.hpp"

using namespace std;


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
AscendingIterator::AscendingIterator(MagicalContainer& container) {
    cout << "AscendingIterator constructor" << endl;
}

AscendingIterator::AscendingIterator(const AscendingIterator& other) {
    cout << "AscendingIterator copy constructor" << endl;
}

bool AscendingIterator::operator!=(const AscendingIterator& other) const {
    cout << "AscendingIterator operator!=" << endl;
    return false;
}

bool AscendingIterator::operator==(const AscendingIterator& other) const {
    cout << "AscendingIterator operator==" << endl;
    return false;
}

bool AscendingIterator::operator<(const AscendingIterator& other) const {
    cout << "AscendingIterator operator<" << endl;
    return false;
}

bool AscendingIterator::operator>(const AscendingIterator& other) const {
    cout << "AscendingIterator operator>" << endl;
    return false;
}

AscendingIterator& AscendingIterator::operator=(const AscendingIterator& other) {
    cout << "AscendingIterator operator=" << endl;
    return *this;
}

AscendingIterator& AscendingIterator::operator++() {
    cout << "AscendingIterator operator++" << endl;
    return *this;
}

int AscendingIterator::operator*() const {
    cout << "AscendingIterator operator*" << endl;
    return 0;
}

AscendingIterator& AscendingIterator::begin() {
    cout << "AscendingIterator begin" << endl;
    return *this;
}

AscendingIterator& AscendingIterator::end() {
    cout << "AscendingIterator end" << endl;
    return *this;
}

/* -------------------------- */


/* SideCrossIterator Functions */
SideCrossIterator::SideCrossIterator(MagicalContainer& container) {
    cout << "SideCrossIterator constructor" << endl;
}

SideCrossIterator::SideCrossIterator(const SideCrossIterator& other) {
    cout << "SideCrossIterator copy constructor" << endl;
}

bool SideCrossIterator::operator!=(const SideCrossIterator& other) const {
    cout << "SideCrossIterator operator!=" << endl;
    return false;
}

bool SideCrossIterator::operator==(const SideCrossIterator& other) const {
    cout << "SideCrossIterator operator==" << endl;
    return false;
}

bool SideCrossIterator::operator<(const SideCrossIterator& other) const {
    cout << "SideCrossIterator operator<" << endl;
    return false;
}

bool SideCrossIterator::operator>(const SideCrossIterator& other) const {
    cout << "SideCrossIterator operator>" << endl;
    return false;
}

SideCrossIterator& SideCrossIterator::operator=(const SideCrossIterator& other) {
    cout << "SideCrossIterator operator=" << endl;
    return *this;
}

SideCrossIterator& SideCrossIterator::operator++() {
    cout << "SideCrossIterator operator++" << endl;
    return *this;
}

int SideCrossIterator::operator*() const {
    cout << "SideCrossIterator operator*" << endl;
    return 0;
}

SideCrossIterator& SideCrossIterator::begin() {
    cout << "SideCrossIterator begin" << endl;
    return *this;
}

SideCrossIterator& SideCrossIterator::end() {
    cout << "SideCrossIterator end" << endl;
    return *this;
}

/* -------------------------- */


/* PrimeIterator Functions */
PrimeIterator::PrimeIterator(MagicalContainer& container) {
    cout << "PrimeIterator constructor" << endl;
}

PrimeIterator::PrimeIterator(const PrimeIterator& other) {
    cout << "PrimeIterator copy constructor" << endl;
}

bool PrimeIterator::operator!=(const PrimeIterator& other) const {
    cout << "PrimeIterator operator!=" << endl;
    return false;
}

bool PrimeIterator::operator==(const PrimeIterator& other) const {
    cout << "PrimeIterator operator==" << endl;
    return false;
}

bool PrimeIterator::operator<(const PrimeIterator& other) const {
    cout << "PrimeIterator operator<" << endl;
    return false;
}

bool PrimeIterator::operator>(const PrimeIterator& other) const {
    cout << "PrimeIterator operator>" << endl;
    return false;
}

PrimeIterator& PrimeIterator::operator=(const PrimeIterator& other) {
    cout << "PrimeIterator operator=" << endl;
    return *this;
}

PrimeIterator& PrimeIterator::operator++() {
    cout << "PrimeIterator operator++" << endl;
    return *this;
}

int PrimeIterator::operator*() const {
    cout << "PrimeIterator operator*" << endl;
    return 0;
}

PrimeIterator& PrimeIterator::begin() {
    cout << "PrimeIterator begin" << endl;
    return *this;
}

PrimeIterator& PrimeIterator::end() {
    cout << "PrimeIterator end" << endl;
    return *this;
}

/* -------------------------- */