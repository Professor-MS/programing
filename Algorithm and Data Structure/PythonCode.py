from PIL import Image

# ASCII characters used to build the output text
ASCII_CHARS = "@%#*+=-:. "

def resize_image(image, new_width=100):
    # Calculate the aspect ratio
    width, height = image.size
    aspect_ratio = height / width
    new_height = int(aspect_ratio * new_width * 0.55)  # Adjust for characters' height
    return image.resize((new_width, new_height))

def grayscale_image(image):
    # Convert the image to grayscale
    return image.convert("L")

def map_pixels_to_ascii(image):
    pixels = image.getdata()
    ascii_str = ""
    for pixel in pixels:
        ascii_str += ASCII_CHARS[pixel // 25]  # Map pixel value to ASCII character
    return ascii_str

def convert_image_to_ascii(image_path, new_width=100):
    try:
        # Open the image file
        image = Image.open(image_path)
    except Exception as e:
        print(f"Unable to open image file: {e}")
        return

    # Resize and convert the image
    image = resize_image(image, new_width)
    image = grayscale_image(image)

    # Map pixels to ASCII characters
    ascii_str = map_pixels_to_ascii(image)

    # Format the ASCII string into lines
    img_width = image.width
    ascii_art = "\n".join(ascii_str[i:i + img_width] for i in range(0, len(ascii_str), img_width))

    return ascii_art

def save_ascii_art(ascii_art, output_file):
    with open(output_file, "w") as f:
        f.write(ascii_art)

if __name__ == "__main__":
    # Input and output file names
    image_path = input("Enter the path to the image file: ")
    output_file = input("Enter the output text file name (e.g., output.txt): ")

    # Convert the image to ASCII art
    ascii_art = convert_image_to_ascii(image_path)

    if ascii_art:
        # Print ASCII art to the console
        print(ascii_art)

        # Save to a text file
        save_ascii_art(ascii_art, output_file)
        print(f"ASCII art saved to {output_file}.")
