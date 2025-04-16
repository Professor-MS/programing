import speech_recognition as sr
import pyttsx3
import webbrowser
import os
import time
from datetime import datetime
import psutil  # For battery status
import pyautogui  # For window controls and screenshots
import subprocess  # For camera operations
import platform  # For system operations

# Initialize text-to-speech engine
engine = pyttsx3.init()

# Get all available voices
voices = engine.getProperty('voices')

# Set the voice to a male voice (you can select based on your available voices)
engine.setProperty('voice', voices[0].id)  # 0 is typically male, 1 is female (depends on the system)

# Speak function
def speak(text):
    engine.say(text)
    engine.runAndWait()

# Listen function
def listen():
    recognizer = sr.Recognizer()
    with sr.Microphone() as source:
        print("Listening...")
        try:
            audio = recognizer.listen(source, timeout=5, phrase_time_limit=5)
            command = recognizer.recognize_google(audio).lower()
            print(f"You said: {command}")
            return command
        except sr.UnknownValueError:
            speak("Sorry, I didn't catch that. Could you repeat?")
            return ""
        except sr.WaitTimeoutError:
            speak("I didn't hear anything. Please try again.")
            return ""

# Command Functions
def open_website(url, site_name):
    speak(f"Opening {site_name}")
    webbrowser.open(url)

def play_music():
    speak("Playing music from your folder.")
    music_folder = "C:\\Users\\msalm\\Music"
    os.startfile(music_folder)

def open_camera():
    speak("Opening camera.")
    subprocess.run("start microsoft.windows.camera:", shell=True)

def take_picture():
    speak("Taking a picture.")
    pyautogui.screenshot("picture.png")
    speak("Picture saved as picture.png")

def capture_video():
    speak("Video capture isn't implemented yet, but I'm learning!")

def search_youtube(query):
    speak(f"Searching YouTube for {query}.")
    webbrowser.open(f"https://www.youtube.com/results?search_query={query}")

def battery_status():
    battery = psutil.sensors_battery()
    percentage = battery.percent
    speak(f"Professor, your battery charge is {percentage} percent.")

def tell_time():
    current_time = time.strftime("%I:%M %p")
    speak(f"The time is {current_time}.")

def tell_weather():
    speak("Weather functionality isn't set up yet. Please let me know if you'd like me to integrate a weather API!")

def tell_joke():
    speak("Why do programmers prefer dark mode? Because light attracts bugs!")

def shutdown():
    speak("Shutting down the system.")
    os.system("shutdown /s /t 1")

def lock_system():
    speak("Locking the system.")
    os.system("rundll32.exe user32.dll,LockWorkStation")

def open_file_explorer():
    speak("Opening File Explorer.")
    os.startfile("explorer.exe")

def open_music_folder():
    speak("Opening your music folder.")
    os.startfile("C:\\Users\\msalm\\Music")

def play_specific_song(song_name):
    music_folder = "C:\\Users\\msalm\\Music"
    song_path = os.path.join(music_folder, song_name + ".mp3")
    if os.path.exists(song_path):
        speak(f"Playing {song_name}.")
        os.startfile(song_path)
    else:
        speak(f"Sorry, I couldn't find {song_name} in your music folder.")

# Command Dictionary
commands = {
    "Hello jarvis": lambda: speak("Hello, Professor! What can I do for you?"),
    "open youtube": lambda: open_website("https://www.youtube.com", "YouTube"),
    "open google": lambda: open_website("https://www.google.com", "Google"),
    "play music": play_music,
    "open camera": open_camera,
    "take picture": take_picture,
    "capture video": capture_video,
    "search karan khan song": lambda: search_youtube("Karan Khan Song"),
    "search professor channel": lambda: search_youtube("msprofessor56"),
    "battery charge condition": battery_status,
    "what time is it": tell_time,
    "what's the weather": tell_weather,
    "tell me a joke": tell_joke,
    "shut down the system": shutdown,
    "lock my computer": lock_system,
    "open facebook": lambda: open_website("https://www.facebook.com", "Facebook"),
    "open twitter": lambda: open_website("https://www.twitter.com", "Twitter"),
    "open gmail": lambda: open_website("https://mail.google.com", "Gmail"),
    "open a file": open_file_explorer,
    "maximize the window": lambda: pyautogui.hotkey("win", "up"),
    "minimize the window": lambda: pyautogui.hotkey("win", "down"),
    "increase the volume": lambda: pyautogui.press("volumeup"),
    "mute the audio": lambda: pyautogui.press("volumemute"),
    "open file explorer": open_file_explorer,
    "open music folder": open_music_folder,
    "play song": lambda: play_specific_song("Song"),
}

# Process Command
def process_command(command):
    for key in commands:
        if key in command:
            commands[key]()
            return
    speak("Sorry, I don't know that command yet.")

# Main Loop
def main():
    speak("Hello Professor! Assistant is ready.")
    while True:
        command = listen()
        if command:
            process_command(command)

# Run the Assistant
if __name__ == "__main__":
    main()
