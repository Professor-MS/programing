from pytube import YouTube
import tkinter as tk
from tkinter import filedialog, messagebox, ttk
from tqdm import tqdm
import threading
import os
import re
# Function to update progress bar
def progress_callback(stream, chunk, bytes_remaining):
    total_size = stream.filesize
    bytes_downloaded = total_size - bytes_remaining
    percentage_of_completion = (bytes_downloaded / total_size) * 100
    progress_bar['value'] = percentage_of_completion
    root.update_idletasks()

# Function to handle downloading video
def download_video(url, save_path):
    try:
        yt = YouTube(url, on_progress_callback=progress_callback)
        streams = yt.streams.filter(progressive=True, file_extension="mp4")
        highest_res_stream = streams.get_highest_resolution()
        
        download_label.config(text="Downloading...")
        highest_res_stream.download(output_path=save_path)
        download_label.config(text="Download Completed!")
    except Exception as e:
        messagebox.showerror("Error", f"Error: {e}")

# Function to open file dialog and select download folder
def open_file_dialog():
    folder = filedialog.askdirectory()
    if folder:
        save_dir_label.config(text=f"Save Folder: {folder}")
    return folder

# Function to start the download in a separate thread
import re

def start_download():
    video_url = url_entry.get()
    
    # Check if the URL is a valid YouTube video URL
    youtube_regex = r'(https?://)?(www\.)?(youtube|youtu|youtube-nocookie)\.(com|be)/(watch\?v=|embed/|v/|.+\?v=)?([^&=%\?]{11})'
    youtube_match = re.match(youtube_regex, video_url)
    
    if not youtube_match:
        messagebox.showerror("Error", "Please enter a valid YouTube URL")
        return

    save_dir = open_file_dialog()
    if save_dir:
        # Run download in separate thread to avoid freezing the GUI
        threading.Thread(target=download_video, args=(video_url, save_dir)).start()
    else:
        messagebox.showerror("Error", "Please select a save location.")
# GUI setup
root = tk.Tk()
root.title("YouTube Video Downloader")

# URL input label and entry
url_label = tk.Label(root, text="Enter YouTube Video URL:")
url_label.pack(pady=5)
url_entry = tk.Entry(root, width=50)
url_entry.pack(pady=5)

# Save folder label
save_dir_label = tk.Label(root, text="Save Folder: Not Selected")
save_dir_label.pack(pady=5)

# Progress bar (fixed import of ttk)
progress_bar = ttk.Progressbar(root, orient="horizontal", length=400, mode="determinate")
progress_bar.pack(pady=5)

# Download button
download_button = tk.Button(root, text="Download", command=start_download)
download_button.pack(pady=20)

# Label to show download status
download_label = tk.Label(root, text="")
download_label.pack(pady=5)

# Start the GUI event loop
root.mainloop()
