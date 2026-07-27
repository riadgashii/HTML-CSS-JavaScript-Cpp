# Python Writing Files (.txt, .json, .csv)

txt_data = "I like pizza"
file_path = "output.txt"

try:
    with open(file_path, "a") as file:
        file.write(txt_data)
        print(f"txt file '{file_path}' was created")
except FileExistsError:
    print("that file already exists")
