from PIL import Image
import numpy as np

# Function to convert an image to ASCII
def image_to_ascii(image_path, output_width=100):
    # Open the image and convert it to grayscale
    img = Image.open(image_path).convert('L')
    
    # Resize the image maintaining the aspect ratio
    aspect_ratio = img.height / img.width
    output_height = int(aspect_ratio * output_width * 0.55)  # 0.55 is an adjustment factor
    img = img.resize((output_width, output_height))
    
    # Define the ASCII characters
    ascii_chars = '@%#*+=-:. '  # Characters from dark to light
    pixels = np.array(img)
    ascii_str = ''
    
    # Map the pixel values to ASCII characters
    for pixel_value in pixels:
        for value in pixel_value:
            ascii_str += ascii_chars[value // 25]  # Divide by 25 to fit the range of 0-255 to the length of ascii_chars
        ascii_str += '\n'
    
    return ascii_str

# Example usage
image_path = r'D:\profile.jpg'  # Use raw string
ascii_art = image_to_ascii(image_path)
print(ascii_art)

# Optionally, save the ASCII art to a text file
with open('ascii_art.txt', 'w') as f:
    f.write(ascii_art)

