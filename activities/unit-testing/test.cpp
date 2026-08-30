// Uncomment the next line to use precompiled headers
#include "pch.h"
#include <stdexcept>
// uncomment the next line if you do not use precompiled headers
//#include "gtest/gtest.h"
//
// the global test environment setup and tear down
// you should not need to change anything here
class Environment : public ::testing::Environment
{
public:
    ~Environment() override {}

    // Override this to define how to set up the environment.
    void SetUp() override
    {
        //  initialize random seed
        srand(time(nullptr));
    }

    // Override this to define how to tear down the environment.
    void TearDown() override {}
};

// create our test class to house shared data between tests
// you should not need to change anything here
class CollectionTest : public ::testing::Test
{
protected:
    // create a smart point to hold our collection
    std::unique_ptr<std::vector<int>> collection;

    void SetUp() override
    { // create a new collection to be used in the test
        collection.reset(new std::vector<int>);
    }

    void TearDown() override
    { //  erase all elements in the collection, if any remain
        collection->clear();
        // free the pointer
        collection.reset(nullptr);
    }

    // helper function to add random values from 0 to 99 count times to the collection
    void add_entries(int count)
    {
        assert(count > 0);
        for (auto i = 0; i < count; ++i)
            collection->push_back(rand() % 100);
    }
};

// When should you use the EXPECT_xxx or ASSERT_xxx macros?
// Use ASSERT when failure should terminate processing, such as the reason for the test case.
// Use EXPECT when failure should notify, but processing should continue

// Test that a collection is empty when created.
// Prior to calling this (and all other TEST_F defined methods),
//  CollectionTest::StartUp is called.
// Following this method (and all other TEST_F defined methods),
//  CollectionTest::TearDown is called
TEST_F(CollectionTest, CollectionSmartPointerIsNotNull)
{
    // is the collection created
    ASSERT_TRUE(collection);

    // if empty, the size must be 0
    ASSERT_NE(collection.get(), nullptr);
}

// Test that a collection is empty when created.
TEST_F(CollectionTest, IsEmptyOnCreate)
{
    // is the collection empty?
    ASSERT_TRUE(collection->empty());

    // if empty, the size must be 0
    ASSERT_EQ(collection->size(), 0);
}

/* Comment this test out to prevent the test from running
 * Uncomment this test to see a failure in the test explorer */
/*
TEST_F(CollectionTest, AlwaysFail)
{
    FAIL();
}
*/

// Create a test to verify adding a single value to an empty collection
TEST_F(CollectionTest, CanAddToEmptyVector)
{
    // Confirm that the collection starts empty.
    ASSERT_TRUE(collection->empty());
    ASSERT_EQ(collection->size(), 0);

    // Add one value to the collection.
    add_entries(1);

    // Confirm that the collection is no longer empty
    // and now contains one value.
    ASSERT_FALSE(collection->empty());
    ASSERT_EQ(collection->size(), 1);
}

// Create a test to verify adding five values to collection
TEST_F(CollectionTest, CanAddFiveValuesToVector)
{
    // Confirm that the collection starts empty.
    ASSERT_TRUE(collection->empty());

    // Add five values to the collection.
    add_entries(5);

    // Confirm that five values were added.
    EXPECT_FALSE(collection->empty());
    EXPECT_EQ(collection->size(), 5);
}

// Create a test to verify that max size is greater than or equal to size for 0, 1, 5, 10 entries
TEST_F(CollectionTest, MaxSizeIsGreaterThanOrEqualToSize)
{
    // Check the empty collection.
    EXPECT_GE(collection->max_size(), collection->size());

    // Check after adding one value.
    add_entries(1);
    EXPECT_GE(collection->max_size(), collection->size());

    // Check after adding four more values, for a total of five.
    add_entries(4);
    EXPECT_GE(collection->max_size(), collection->size());

    // Check after adding five more values, for a total of ten.
    add_entries(5);
    EXPECT_GE(collection->max_size(), collection->size());
}

// Create a test to verify that capacity is greater than or equal to size for 0, 1, 5, 10 entries
TEST_F(CollectionTest, CapacityIsGreaterThanOrEqualToSize)
{
    // Check the empty collection.
    EXPECT_GE(collection->capacity(), collection->size());

    // Check after adding one value.
    add_entries(1);
    EXPECT_GE(collection->capacity(), collection->size());

    // Check after adding four more values, for a total of five.
    add_entries(4);
    EXPECT_GE(collection->capacity(), collection->size());

    // Check after adding five more values, for a total of ten.
    add_entries(5);
    EXPECT_GE(collection->capacity(), collection->size());
}

// Create a test to verify resizing increases the collection
TEST_F(CollectionTest, ResizeIncreasesCollectionSize)
{
    // Add five values to the collection.
    add_entries(5);
    ASSERT_EQ(collection->size(), 5);

    // Resize the collection so it holds ten values.
    collection->resize(10);

    // Confirm that the size increased to ten.
    EXPECT_EQ(collection->size(), 10);
}

// Create a test to verify resizing decreases the collection
TEST_F(CollectionTest, ResizeDecreasesCollectionSize)
{
    // Add ten values to the collection.
    add_entries(10);
    ASSERT_EQ(collection->size(), 10);

    // Resize the collection down to five values.
    collection->resize(5);

    // Confirm that the size decreased to five.
    EXPECT_EQ(collection->size(), 5);
}

// Create a test to verify resizing decreases the collection to zero
TEST_F(CollectionTest, ResizeDecreasesCollectionToZero)
{
    // Add five values to the collection.
    add_entries(5);
    ASSERT_EQ(collection->size(), 5);

    // Resize the collection down to zero.
    collection->resize(0);

    // Confirm that the collection is now empty.
    EXPECT_TRUE(collection->empty());
    EXPECT_EQ(collection->size(), 0);
}

// Create a test to verify clear erases the collection
TEST_F(CollectionTest, ClearErasesCollection)
{
    // Add five values to the collection.
    add_entries(5);
    ASSERT_EQ(collection->size(), 5);

    // Remove every value from the collection.
    collection->clear();

    // Confirm that the collection is empty.
    EXPECT_TRUE(collection->empty());
    EXPECT_EQ(collection->size(), 0);
}

// Create a test to verify erase(begin,end) erases the collection
TEST_F(CollectionTest, EraseRangeRemovesCollectionValues)
{
    // Add ten values to the collection.
    add_entries(10);
    ASSERT_EQ(collection->size(), 10);

    // Erase every value using the beginning and ending positions.
    collection->erase(collection->begin(), collection->end());

    // Confirm that the collection is empty.
    EXPECT_TRUE(collection->empty());
    EXPECT_EQ(collection->size(), 0);
}

// Create a test to verify reserve increases the capacity but not the size of the collection
TEST_F(CollectionTest, ReserveIncreasesCapacityButNotSize)
{
    // Save the collection's starting size and capacity.
    const size_t originalSize = collection->size();
    const size_t originalCapacity = collection->capacity();

    // Reserve space for ten values.
    collection->reserve(10);

    // Confirm that capacity increased but size did not change.
    EXPECT_GT(collection->capacity(), originalCapacity);
    EXPECT_EQ(collection->size(), originalSize);
}

// Create a test to verify the std::out_of_range exception is thrown when calling at() with an index out of bounds
// NOTE: This is a negative test
TEST_F(CollectionTest, AtThrowsOutOfRangeForInvalidIndex)
{
    // Confirm that the collection begins empty.
    ASSERT_TRUE(collection->empty());

    // Trying to access index zero in an empty vector should throw an exception.
    EXPECT_THROW(collection->at(0), std::out_of_range);
}

// Create 2 unit tests of your own to test something on the collection - do 1 positive & 1 negative

// Positive test: verifies that insert() correctly adds a value
// at the beginning of the collection.
TEST_F(CollectionTest, InsertAddsValueAtBeginning)
{
    // Add two known values to the collection.
    collection->push_back(20);
    collection->push_back(30);

    // Insert the value 10 at the beginning.
    collection->insert(collection->begin(), 10);

    // Confirm that the collection now contains three values.
    ASSERT_EQ(collection->size(), 3);

    // Confirm that each value is stored in the correct order.
    EXPECT_EQ(collection->at(0), 10);
    EXPECT_EQ(collection->at(1), 20);
    EXPECT_EQ(collection->at(2), 30);
}
// Negative test: verifies that reserve() throws a length_error
// when the requested capacity is larger than the vector can hold.
TEST_F(CollectionTest, ReserveBeyondMaximumThrowsLengthError)
{
    // Create an invalid capacity that is larger than max_size().
    const size_t invalidCapacity = collection->max_size() + 1;

    // Confirm that requesting too much space throws the correct exception.
    EXPECT_THROW(
        collection->reserve(invalidCapacity),
        std::length_error);

    // Confirm that the failed request did not add any values.
    EXPECT_TRUE(collection->empty());
    EXPECT_EQ(collection->size(), 0);
}

// Checks whether the spray tank level is within a valid range.
// A tank level can be anywhere from 0% to 100%.
bool isValidTankLevel(int tankLevel)
{
    return tankLevel >= 0 && tankLevel <= 100;
}

// Positive test:
// Checks that a normal tank level of 50% is accepted.
TEST(TankLevelValidationTest, AcceptsFiftyPercent)
{
    EXPECT_TRUE(isValidTankLevel(50));
}

// Positive test:
// Checks that 0% is accepted as the minimum valid tank level.
TEST(TankLevelValidationTest, AcceptsZeroPercent)
{
    EXPECT_TRUE(isValidTankLevel(0));
}

// Positive test:
// Checks that 100% is accepted as the maximum valid tank level.
TEST(TankLevelValidationTest, AcceptsOneHundredPercent)
{
    EXPECT_TRUE(isValidTankLevel(100));
}

// Negative test:
// Checks that -1% is rejected because it is below the valid range.
TEST(TankLevelValidationTest, RejectsNegativeOnePercent)
{
    EXPECT_FALSE(isValidTankLevel(-1));
}

// Negative test:
// Checks that 101% is rejected because it is above the valid range.
TEST(TankLevelValidationTest, RejectsOneHundredOnePercent)
{
    EXPECT_FALSE(isValidTankLevel(101));
}

// Negative test:
// Checks that 150% is rejected because it is far above the valid range.
TEST(TankLevelValidationTest, RejectsOneHundredFiftyPercent)
{
    EXPECT_FALSE(isValidTankLevel(150));
}
