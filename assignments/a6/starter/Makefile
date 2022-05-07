CC = gcc
CFLAGS = -Wall
BUILD_DIR = build
TEST_DIR = test
SRC_DIR = src
TEST_DATA = test_data

all_targets = multiply square

all: library $(all_targets)

$(all_targets): 
	mkdir -p $(BUILD_DIR)
	$(CC) $(CFLAGS) -o ./$(BUILD_DIR)/$(@) $(SRC_DIR)/$(@).c ./$(BUILD_DIR)/library.o

library:
	mkdir -p $(BUILD_DIR)
	$(CC) $(CFLAGS) -c -o ./$(BUILD_DIR)/$(@).o $(SRC_DIR)/$(@).c

clean:
	rm -f -r $(BUILD_DIR)
	rm -f -r ${TEST_DIR}

test:
	mkdir -p $(TEST_DIR)
	./$(BUILD_DIR)/square inches < $(TEST_DATA)/square_input.txt > $(TEST_DIR)/square_output.txt
	diff ./$(TEST_DATA)/square_expected.txt ./$(TEST_DIR)/square_output.txt
	./$(BUILD_DIR)/multiply 2 < $(TEST_DATA)/multiply_input.txt > $(TEST_DIR)/multiply_output.txt
	diff ./$(TEST_DATA)/multiply_expected.txt ./$(TEST_DIR)/multiply_output.txt
	rm -f -r ${TEST_DIR}


