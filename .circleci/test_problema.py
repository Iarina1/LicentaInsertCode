def check_problema1(problema1, string):
    try:
        with open(problema1, 'r') as file:
            for line in file:
                line_without_spaces = line.replace(" ", "")
                if string in line_without_spaces:
                    return True
        return False
    except IOError:
        print(f"Error: Could not open file '{file_path}'")


file_path = 'path/to/your/file.txt'
string1 = 'led_pin=5'
string2 = 'digitalWrite(HIGH,led_pin)'

if check_problema1(problema1, string1):
    print("Test 1 passed")
    if check_problema1(problema1, string2):
      print("Test 2 passed")
      print("Punctaj total: 10")
    else:
      print("Test 2 failed")
      print("Punctaj total: 5")
else:
    print("Test 1 failed")
    print("Punctaj total: 0")
